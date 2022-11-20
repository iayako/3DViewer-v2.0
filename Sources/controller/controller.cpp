#include "controller.h"

namespace s21 {

QString Controller::ReadFile(QString file_name) {
  return QString::fromStdString(facade_->ReadFile(file_name.toStdString()));
}

std::vector<std::vector<float>> &Controller::GetVert() {
  return facade_->GetVert();
}

std::vector<std::vector<int>> &Controller::GetPoly() {
  return facade_->GetPoly();
}

void Controller::MoveXYZ(int XYZ, float value) { facade_->MoveXYZ(XYZ, value); }

void Controller::RotateXYZ(int XYZ, float value) {
  facade_->RotateXYZ(XYZ, value);
}

void Controller::ScaleXYZ(float value) { facade_->ScaleXYZ(value); }

}  // namespace s21
