#include <QApplication>

#include "view/mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  s21::MFacade facade_;
  s21::Controller controller_(&facade_);
  s21::MainWindow w(&controller_);
  w.show();
  return a.exec();
}
