#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>

#include "../model/model.h"

namespace s21 {

class Controller {
 public:
  Controller(MFacade *p) : facade_(p) {}
  QString ReadFile(QString file_name);
  std::vector<std::vector<int>> &GetPoly();
  std::vector<std::vector<float>> &GetVert();
  void MoveXYZ(int XYZ, float value);
  void RotateXYZ(int XYZ, float value);
  void ScaleXYZ(float value);

 private:
  MFacade *facade_;
};

}  // namespace s21

#endif  //  CONTROLLER_H
