#ifndef MODEL_H
#define MODEL_H

#include <cmath>
#include <fstream>
#include <vector>

namespace s21 {

class ObjectTransformation;
class ObjectFile;
class MFacade;

class Memento {
  friend ObjectTransformation;
  friend ObjectFile;
  friend MFacade;

 private:
  void ClearStorage();
  std::vector<std::vector<float>> vert_;
  std::vector<std::vector<int>> poly_;
  std::vector<std::vector<float>> tvert_;
  float delta_x_{}, delta_y_{}, delta_z_{}, angle_x_{}, angle_y_{}, angle_z_{};
  float scale_ = 1;
};

class ObjectFile {
 public:
  ObjectFile(Memento *p) : pMemento(p) {}
  std::string ReadFile(std::string file_name);

 private:
  Memento *pMemento;
  void ReadV(std::string line, size_t *pos);
  void ReadF(std::string line);
  float GetVertexCoordinate(std::string line, size_t *pos);
};

class ObjectTransformation {
 public:
  ObjectTransformation(Memento *p) : pMemento(p) {}
  void TransferObject();
  void MoveXYZ(int XYZ, float value);
  void RotateXYZ(int XYZ, float value);
  void ScaleXYZ(float value);

 private:
  Memento *pMemento;
};

class MFacade {
 public:
  MFacade() {
    pMemento = new Memento;
    pFile = new ObjectFile(pMemento);
    pTransObject = new ObjectTransformation(pMemento);
  }
  ~MFacade() {
    delete pMemento;
    delete pFile;
    delete pTransObject;
  }
  std::string ReadFile(std::string file_name) {
    return pFile->ReadFile(file_name);
  };
  void TransferObject() { pTransObject->TransferObject(); };
  void MoveXYZ(int XYZ, float value) { pTransObject->MoveXYZ(XYZ, value); };
  void RotateXYZ(int XYZ, float value) { pTransObject->RotateXYZ(XYZ, value); };
  void ScaleXYZ(float value) { pTransObject->ScaleXYZ(value); };
  std::vector<std::vector<float>> &GetVert() { return pMemento->tvert_; }
  std::vector<std::vector<int>> &GetPoly() { return pMemento->poly_; }

 private:
  Memento *pMemento;
  ObjectFile *pFile;
  ObjectTransformation *pTransObject;
};

}  // namespace s21

#endif  // MODEL_H
