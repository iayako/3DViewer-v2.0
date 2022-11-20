#ifndef GLWIDGET_H
#define GLWIDGET_H

#define GL_SILENCE_DEPRECATION
#include <QOpenGLWidget>
#include <QTimer>
#include <QtOpenGL>

#include "../controller/controller.h"
#include "settings.h"

namespace s21 {

class GLWidget : public QOpenGLWidget {
  Q_OBJECT

 public:
  explicit GLWidget(QWidget *parent = 0);
  Controller *gl_cont;
  float xRot = 0, yRot = 0;

 private:
  ViewSettings *settings_;
  QPoint mPos_;
  QTimer timer_;
  void mousePressEvent(QMouseEvent *);
  void mouseMoveEvent(QMouseEvent *);
  void initializeGL();
  void resizeGL(int w, int h);
  void paintGL();
  void Draw();
};

}  // namespace s21

#endif  // GLWIDGET_H
