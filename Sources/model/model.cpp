#include "model.h"

namespace s21 {

void Memento::ClearStorage() {
  vert_.clear();
  poly_.clear();
  tvert_.clear();
  delta_x_ = delta_y_ = delta_z_ = angle_x_ = angle_y_ = angle_z_ = 0,
  scale_ = 1;
}

std::string ObjectFile::ReadFile(std::string file_name) {
  std::string correct_file_name;
  std::ifstream in(file_name);
  pMemento->ClearStorage();
  if (!in) throw std::invalid_argument("You should choose file");
  if (file_name.substr(file_name.size() - 4, 4) != ".obj")
    throw std::invalid_argument("Invalid file extension");
  size_t n = file_name.find_last_of('/');
  correct_file_name = file_name.substr(n + 1, file_name.size() - n);
  while (in) {
    std::string line;
    size_t pos = 1;
    getline(in, line);
    std::string substr = line.substr(0, 2);
    if (line.substr(0, 2) == "v ") {
      ReadV(line, &pos);
    } else if (line.substr(0, 2) == "f ") {
      ReadF(line);
    }
  }
  pMemento->tvert_ = pMemento->vert_;
  in.close();
  return correct_file_name;
}

void ObjectFile::ReadV(std::string line, size_t *pos) {
  float x, y, z;
  x = GetVertexCoordinate(line, pos);
  if (line[*pos] != ' ') throw std::invalid_argument("Wrong File Format");
  y = GetVertexCoordinate(line, pos);
  if (line[*pos] != ' ') throw std::invalid_argument("Wrong File Format");
  z = GetVertexCoordinate(line, pos);
  std::vector<float> b;
  b.push_back(x);
  b.push_back(y);
  b.push_back(z);
  pMemento->vert_.push_back(b);
}

float ObjectFile::GetVertexCoordinate(std::string line, size_t *pos) {
  float value{};
  size_t end_pos{};
  value = std::stof(line.substr(*pos), &end_pos);
  *pos += end_pos;
  return value;
}

void ObjectFile::ReadF(std::string line) {
  std::vector<int> polygon_vertexes;
  size_t n = line.find(' ');
  while (n != std::string::npos) {
    if (n + 1 < line.size() && std::isdigit(line.at(n + 1))) {
      polygon_vertexes.push_back(std::stoi(line.substr(n + 1), nullptr) - 1);
    }
    n = line.find(' ', n + 1);
  }
  pMemento->poly_.push_back(std::move(polygon_vertexes));
}

void ObjectTransformation::TransferObject() {
  double rx = pMemento->angle_x_ * M_PI / 180;
  double ry = pMemento->angle_y_ * M_PI / 180;
  double rz = pMemento->angle_z_ * M_PI / 180;
  for (size_t j = 0; j < pMemento->vert_.size(); ++j) {
    pMemento->tvert_[j][1] =
        cos(rx) * pMemento->vert_[j][1] * pMemento->scale_ +
        sin(rx) * pMemento->vert_[j][2] * pMemento->scale_;
    pMemento->tvert_[j][2] =
        -sin(rx) * pMemento->vert_[j][1] * pMemento->scale_ +
        cos(rx) * pMemento->vert_[j][2] * pMemento->scale_;
    pMemento->tvert_[j][0] =
        cos(ry) * pMemento->vert_[j][0] * pMemento->scale_ +
        sin(ry) * pMemento->tvert_[j][2];
    pMemento->tvert_[j][2] =
        -sin(ry) * pMemento->vert_[j][0] * pMemento->scale_ +
        cos(ry) * pMemento->tvert_[j][2];
    double tmp = pMemento->tvert_[j][0];
    pMemento->tvert_[j][0] =
        cos(rz) * pMemento->tvert_[j][0] + sin(rz) * pMemento->tvert_[j][1];
    pMemento->tvert_[j][1] = -sin(rz) * tmp + cos(rz) * pMemento->tvert_[j][1];
    pMemento->tvert_[j][0] += pMemento->delta_x_;
    pMemento->tvert_[j][1] += pMemento->delta_y_;
    pMemento->tvert_[j][2] += pMemento->delta_z_;
  }
}

void ObjectTransformation::MoveXYZ(int XYZ, float value) {
  if (XYZ == 0)
    pMemento->delta_x_ = value;
  else if (XYZ == 1)
    pMemento->delta_y_ = value;
  else
    pMemento->delta_z_ = value;
  TransferObject();
}

void ObjectTransformation::RotateXYZ(int XYZ, float value) {
  if (XYZ == 0)
    pMemento->angle_x_ = value;
  else if (XYZ == 1)
    pMemento->angle_y_ = value;
  else
    pMemento->angle_z_ = value;
  TransferObject();
}

void ObjectTransformation::ScaleXYZ(float value) {
  if (value) {
    pMemento->scale_ = value;
    TransferObject();
  }
}

}  // namespace s21
