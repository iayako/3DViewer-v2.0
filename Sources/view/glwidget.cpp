#include "glwidget.h"

#include "mainwindow.h"

namespace s21 {

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent), settings_(&ViewSettings::GetInstance()) {
  connect(&timer_, SIGNAL(timeout()), this, SLOT(update()));
  timer_.start(100);
}

void GLWidget::initializeGL() {}

void GLWidget::resizeGL(int w, int h) {
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
}

void GLWidget::paintGL() {
  glEnable(GL_DEPTH_TEST);
  glClearColor(settings_->get_color_back().redF(),
               settings_->get_color_back().greenF(),
               settings_->get_color_back().blueF(), 1);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if (settings_->get_projection_type() == 0)
    glOrtho(-100, 100, -100, 100, -100, 1000);
  else
    glFrustum(-1.0, 1.0, -1.0, 1.0, 1.0, 500.0);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glRotatef(xRot, 1, 0, 0);
  glRotatef(yRot, 0, 1, 0);
  Draw();
}

void GLWidget::Draw() {
  glClear(GL_COLOR_BUFFER_BIT);
  glEnableClientState(GL_VERTEX_ARRAY);
  glColor3f(settings_->get_color_line().redF(),
            settings_->get_color_line().greenF(),
            settings_->get_color_line().blueF());
  glLineWidth(settings_->get_line_width());
  glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

  if (settings_->get_line_type() == 0) {
    for (unsigned int i = 0; i < gl_cont->GetPoly().size(); ++i) {
      glBegin(GL_LINE_LOOP);
      for (unsigned int j = 0; j < gl_cont->GetPoly()[i].size(); ++j) {
        glVertex3f(gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][0],
                   gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][1],
                   gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][2]);
      }
      glEnd();
    }
  } else {
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(1, 555);
    for (unsigned int i = 0; i < gl_cont->GetPoly().size(); ++i) {
      glBegin(GL_LINE_LOOP);
      for (unsigned int j = 0; j < gl_cont->GetPoly()[i].size(); ++j) {
        glVertex3f(gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][0],
                   gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][1],
                   gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][2]);
      }
      glEnd();
    }
    glDisable(GL_LINE_STIPPLE);
  }
  if (settings_->get_vertex_type() != 0) {
    glColor3f(settings_->get_color_vertex().redF(),
              settings_->get_color_vertex().greenF(),
              settings_->get_color_vertex().blueF());
    if (settings_->get_vertex_type() == 1) {
      glEnable(GL_POINT_SMOOTH);
      glPointSize(settings_->get_vertex_size());
      for (unsigned int i = 0; i < gl_cont->GetPoly().size(); ++i) {
        glBegin(GL_POINTS);
        for (unsigned int j = 0; j < gl_cont->GetPoly()[i].size(); ++j) {
          glVertex3f(gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][0],
                     gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][1],
                     gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][2]);
        }
        glEnd();
      }
      glDisable(GL_POINT_SMOOTH);
    } else {
      glPointSize(settings_->get_vertex_size());
      for (unsigned int i = 0; i < gl_cont->GetPoly().size(); ++i) {
        glBegin(GL_POINTS);
        for (unsigned int j = 0; j < gl_cont->GetPoly()[i].size(); ++j) {
          glVertex3f(gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][0],
                     gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][1],
                     gl_cont->GetVert()[gl_cont->GetPoly()[i][j]][2]);
        }
        glEnd();
      }
    }
  }
  glDisableClientState(GL_VERTEX_ARRAY);
}

void GLWidget::mousePressEvent(QMouseEvent *mo) { mPos_ = mo->pos(); }

void GLWidget::mouseMoveEvent(QMouseEvent *mo) {
  xRot = 1 / M_PI * (mo->pos().y() - mPos_.y());
  yRot = 1 / M_PI * (mo->pos().x() - mPos_.x());
  update();
}

}  // namespace s21
