/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

#include "view/glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QHBoxLayout *horizontalLayout_2;
  QVBoxLayout *verticalLayout_3;
  QPushButton *ButtonOpenFile;
  QHBoxLayout *horizontalLayout_8;
  QPushButton *save_image;
  QPushButton *screencast;
  QVBoxLayout *verticalLayout_2;
  QLabel *FileName;
  QLabel *VFCount;
  QCheckBox *default_2;
  QLabel *label_line_set;
  QGridLayout *gridLayout;
  QLabel *label_type;
  QComboBox *line_type;
  QLabel *label_thickness;
  QDoubleSpinBox *line_thickness;
  QLabel *label_vertex_set;
  QGridLayout *gridLayout_2;
  QLabel *label_type_2;
  QComboBox *vertex_type;
  QLabel *label_size;
  QDoubleSpinBox *vertex_size;
  QLabel *label_colors;
  QHBoxLayout *horizontalLayout_15;
  QPushButton *color_back;
  QPushButton *color_line;
  QPushButton *color_vertex;
  s21::GLWidget *GLwidget;
  QVBoxLayout *verticalLayout;
  QHBoxLayout *horizontalLayout_11;
  QLabel *label_proj_type;
  QComboBox *projection_type;
  QLabel *label_position;
  QHBoxLayout *horizontalLayout_3;
  QLabel *label_x;
  QSlider *SliderX;
  QDoubleSpinBox *x;
  QHBoxLayout *horizontalLayout_5;
  QLabel *label_y;
  QSlider *SliderY;
  QDoubleSpinBox *y;
  QHBoxLayout *horizontalLayout_7;
  QLabel *label_z;
  QSlider *SliderZ;
  QDoubleSpinBox *z;
  QLabel *label_rotation;
  QHBoxLayout *horizontalLayout_4;
  QLabel *label_ox;
  QSlider *SliderOX;
  QSpinBox *angle_x;
  QHBoxLayout *horizontalLayout_9;
  QLabel *label_oy;
  QSlider *SliderOY;
  QSpinBox *angle_y;
  QHBoxLayout *horizontalLayout_10;
  QLabel *label_oz;
  QSlider *SliderOZ;
  QSpinBox *angle_z;
  QHBoxLayout *horizontalLayout_6;
  QLabel *label;
  QSlider *SliderScale;
  QDoubleSpinBox *scale;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1180, 624);
    MainWindow->setMinimumSize(QSize(1180, 624));
    MainWindow->setMaximumSize(QSize(5000, 624));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setStyleSheet(
        QString::fromUtf8("QWidget\n"
                          "{\n"
                          "	background-color: #121212;\n"
                          "	color: #ffffff;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}"));
    horizontalLayout_2 = new QHBoxLayout(centralwidget);
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    verticalLayout_3 = new QVBoxLayout();
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    ButtonOpenFile = new QPushButton(centralwidget);
    ButtonOpenFile->setObjectName(QString::fromUtf8("ButtonOpenFile"));
    ButtonOpenFile->setStyleSheet(
        QString::fromUtf8("QPushButton\n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::hover\n"
                          "{\n"
                          "	background-color: #8399ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::pressed\n"
                          "{\n"
                          "	background-color: #4969ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}"));

    verticalLayout_3->addWidget(ButtonOpenFile);

    horizontalLayout_8 = new QHBoxLayout();
    horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
    save_image = new QPushButton(centralwidget);
    save_image->setObjectName(QString::fromUtf8("save_image"));
    save_image->setStyleSheet(
        QString::fromUtf8("QPushButton\n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::hover\n"
                          "{\n"
                          "	background-color: #8399ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::pressed\n"
                          "{\n"
                          "	background-color: #4969ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}"));

    horizontalLayout_8->addWidget(save_image);

    screencast = new QPushButton(centralwidget);
    screencast->setObjectName(QString::fromUtf8("screencast"));
    screencast->setStyleSheet(
        QString::fromUtf8("QPushButton\n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::hover\n"
                          "{\n"
                          "	background-color: #8399ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::pressed\n"
                          "{\n"
                          "	background-color: #4969ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}"));

    horizontalLayout_8->addWidget(screencast);

    verticalLayout_3->addLayout(horizontalLayout_8);

    verticalLayout_2 = new QVBoxLayout();
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    FileName = new QLabel(centralwidget);
    FileName->setObjectName(QString::fromUtf8("FileName"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(FileName->sizePolicy().hasHeightForWidth());
    FileName->setSizePolicy(sizePolicy);
    FileName->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));

    verticalLayout_2->addWidget(FileName);

    VFCount = new QLabel(centralwidget);
    VFCount->setObjectName(QString::fromUtf8("VFCount"));
    sizePolicy.setHeightForWidth(VFCount->sizePolicy().hasHeightForWidth());
    VFCount->setSizePolicy(sizePolicy);
    VFCount->setMaximumSize(QSize(248, 16777215));
    VFCount->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    VFCount->setWordWrap(true);

    verticalLayout_2->addWidget(VFCount);

    default_2 = new QCheckBox(centralwidget);
    default_2->setObjectName(QString::fromUtf8("default_2"));
    default_2->setMaximumSize(QSize(200, 20));
    default_2->setStyleSheet(
        QString::fromUtf8("QCheckBox::indicator\n"
                          "{\n"
                          "    color: #b1b1b1;\n"
                          "    background-color: #323232;\n"
                          "    border: 1px solid #b1b1b1;\n"
                          "    width: 12px;\n"
                          "    height: 12px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QCheckBox::indicator:checked\n"
                          "{\n"
                          "    image:url(://checkbox.png);\n"
                          "    border: 1px solid #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QCheckBox::indicator:unchecked:hover\n"
                          "{\n"
                          "    border: 1px solid #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QCheckBox::disabled\n"
                          "{\n"
                          "	color: #656565;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QCheckBox::indicator:disabled\n"
                          "{\n"
                          "	background-color: #656565;\n"
                          "	color: #656565;\n"
                          "    border: 1px solid #656565;\n"
                          "\n"
                          "}"));

    verticalLayout_2->addWidget(default_2);

    verticalLayout_3->addLayout(verticalLayout_2);

    label_line_set = new QLabel(centralwidget);
    label_line_set->setObjectName(QString::fromUtf8("label_line_set"));
    label_line_set->setMaximumSize(QSize(16777215, 20));
    QFont font;
    font.setBold(true);
    label_line_set->setFont(font);
    label_line_set->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_line_set->setAlignment(Qt::AlignCenter);

    verticalLayout_3->addWidget(label_line_set);

    gridLayout = new QGridLayout();
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    gridLayout->setHorizontalSpacing(-1);
    gridLayout->setContentsMargins(0, 0, -1, -1);
    label_type = new QLabel(centralwidget);
    label_type->setObjectName(QString::fromUtf8("label_type"));
    label_type->setMaximumSize(QSize(40, 20));
    label_type->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_type->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                             Qt::AlignVCenter);

    gridLayout->addWidget(label_type, 0, 0, 1, 1);

    line_type = new QComboBox(centralwidget);
    line_type->addItem(QString());
    line_type->addItem(QString());
    line_type->setObjectName(QString::fromUtf8("line_type"));
    line_type->setMinimumSize(QSize(100, 0));
    line_type->setMaximumSize(QSize(100, 16777215));
    line_type->setStyleSheet(
        QString::fromUtf8("QComboBox\n"
                          "{\n"
                          "    background-color: #607cff;\n"
                          "    border: 1px solid;\n"
                          "    border-radius: 3px;\n"
                          "    padding-left: 6px;\n"
                          "    color: #ffffff;\n"
                          "    height: 20px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox:hover\n"
                          "{\n"
                          "    background-color: #8399ff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox:on\n"
                          "{\n"
                          "    background-color: #4969ff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox QAbstractItemView\n"
                          "{\n"
                          "    background-color: #383838;\n"
                          "    color: #ffffff;\n"
                          "    border: 1px solid black;\n"
                          "    selection-background-color: #4969ff;\n"
                          "    selection-color: #ffffff;\n"
                          "    outline: 0;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::drop-down\n"
                          "{\n"
                          "    subcontrol-origin: padding;\n"
                          "    subcontrol-position: top right;\n"
                          "    width: 15px;\n"
                          "    border-left-width: 0px;\n"
                          "    border-left-color: darkgray;\n"
                          "    border-left-style: solid; \n"
                          "    border-top-right-radius: 3px; \n"
                          "    bor"
                          "der-bottom-right-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::down-arrow\n"
                          "{\n"
                          "    image: url(://arrow-down.png);\n"
                          "    width: 8px;\n"
                          "    height: 8px;\n"
                          "}\n"
                          ""));

    gridLayout->addWidget(line_type, 0, 1, 1, 1);

    label_thickness = new QLabel(centralwidget);
    label_thickness->setObjectName(QString::fromUtf8("label_thickness"));
    label_thickness->setMaximumSize(QSize(70, 20));
    label_thickness->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_thickness->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                                  Qt::AlignVCenter);

    gridLayout->addWidget(label_thickness, 1, 0, 1, 1);

    line_thickness = new QDoubleSpinBox(centralwidget);
    line_thickness->setObjectName(QString::fromUtf8("line_thickness"));
    line_thickness->setMinimumSize(QSize(60, 0));
    line_thickness->setMaximumSize(QSize(60, 20));
    line_thickness->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    line_thickness->setMaximum(30.000000000000000);
    line_thickness->setValue(1.000000000000000);

    gridLayout->addWidget(line_thickness, 1, 1, 1, 1);

    verticalLayout_3->addLayout(gridLayout);

    label_vertex_set = new QLabel(centralwidget);
    label_vertex_set->setObjectName(QString::fromUtf8("label_vertex_set"));
    label_vertex_set->setMaximumSize(QSize(16777215, 20));
    label_vertex_set->setFont(font);
    label_vertex_set->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_vertex_set->setAlignment(Qt::AlignCenter);

    verticalLayout_3->addWidget(label_vertex_set);

    gridLayout_2 = new QGridLayout();
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
    label_type_2 = new QLabel(centralwidget);
    label_type_2->setObjectName(QString::fromUtf8("label_type_2"));
    label_type_2->setMaximumSize(QSize(40, 20));
    label_type_2->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_type_2->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                               Qt::AlignVCenter);

    gridLayout_2->addWidget(label_type_2, 0, 0, 1, 1);

    vertex_type = new QComboBox(centralwidget);
    vertex_type->addItem(QString());
    vertex_type->addItem(QString());
    vertex_type->addItem(QString());
    vertex_type->setObjectName(QString::fromUtf8("vertex_type"));
    vertex_type->setMinimumSize(QSize(100, 0));
    vertex_type->setMaximumSize(QSize(100, 20));
    vertex_type->setStyleSheet(
        QString::fromUtf8("QComboBox\n"
                          "{\n"
                          "    background-color: #607cff;\n"
                          "    border: 1px solid;\n"
                          "    border-radius: 3px;\n"
                          "    padding-left: 6px;\n"
                          "    color: #ffffff;\n"
                          "    height: 20px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox:hover\n"
                          "{\n"
                          "    background-color: #8399ff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox:on\n"
                          "{\n"
                          "    background-color: #4969ff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox QAbstractItemView\n"
                          "{\n"
                          "    background-color: #383838;\n"
                          "    color: #ffffff;\n"
                          "    border: 1px solid black;\n"
                          "    selection-background-color: #4969ff;\n"
                          "    selection-color: #ffffff;\n"
                          "    outline: 0;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::drop-down\n"
                          "{\n"
                          "    subcontrol-origin: padding;\n"
                          "    subcontrol-position: top right;\n"
                          "    width: 15px;\n"
                          "    border-left-width: 0px;\n"
                          "    border-left-color: darkgray;\n"
                          "    border-left-style: solid; \n"
                          "    border-top-right-radius: 3px; \n"
                          "    bor"
                          "der-bottom-right-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::down-arrow\n"
                          "{\n"
                          "    image: url(://arrow-down.png);\n"
                          "    width: 8px;\n"
                          "    height: 8px;\n"
                          "}\n"
                          ""));

    gridLayout_2->addWidget(vertex_type, 0, 1, 1, 1);

    label_size = new QLabel(centralwidget);
    label_size->setObjectName(QString::fromUtf8("label_size"));
    label_size->setMaximumSize(QSize(40, 20));
    label_size->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_size->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                             Qt::AlignVCenter);

    gridLayout_2->addWidget(label_size, 1, 0, 1, 1);

    vertex_size = new QDoubleSpinBox(centralwidget);
    vertex_size->setObjectName(QString::fromUtf8("vertex_size"));
    vertex_size->setMinimumSize(QSize(60, 0));
    vertex_size->setMaximumSize(QSize(60, 20));
    vertex_size->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    vertex_size->setMaximum(30.000000000000000);
    vertex_size->setValue(1.000000000000000);

    gridLayout_2->addWidget(vertex_size, 1, 1, 1, 1);

    verticalLayout_3->addLayout(gridLayout_2);

    label_colors = new QLabel(centralwidget);
    label_colors->setObjectName(QString::fromUtf8("label_colors"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(
        label_colors->sizePolicy().hasHeightForWidth());
    label_colors->setSizePolicy(sizePolicy1);
    label_colors->setMaximumSize(QSize(16777215, 20));
    label_colors->setFont(font);
    label_colors->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_colors->setAlignment(Qt::AlignCenter);
    label_colors->setMargin(-1);

    verticalLayout_3->addWidget(label_colors);

    horizontalLayout_15 = new QHBoxLayout();
    horizontalLayout_15->setObjectName(
        QString::fromUtf8("horizontalLayout_15"));
    color_back = new QPushButton(centralwidget);
    color_back->setObjectName(QString::fromUtf8("color_back"));
    color_back->setStyleSheet(
        QString::fromUtf8("QPushButton\n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::hover\n"
                          "{\n"
                          "	background-color: #8399ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::pressed\n"
                          "{\n"
                          "	background-color: #4969ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}"));

    horizontalLayout_15->addWidget(color_back);

    color_line = new QPushButton(centralwidget);
    color_line->setObjectName(QString::fromUtf8("color_line"));
    color_line->setStyleSheet(
        QString::fromUtf8("QPushButton\n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::hover\n"
                          "{\n"
                          "	background-color: #8399ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::pressed\n"
                          "{\n"
                          "	background-color: #4969ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}"));

    horizontalLayout_15->addWidget(color_line);

    color_vertex = new QPushButton(centralwidget);
    color_vertex->setObjectName(QString::fromUtf8("color_vertex"));
    color_vertex->setStyleSheet(
        QString::fromUtf8("QPushButton\n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::hover\n"
                          "{\n"
                          "	background-color: #8399ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QPushButton::pressed\n"
                          "{\n"
                          "	background-color: #4969ff;\n"
                          "	color: #ffffff;\n"
                          "	border-style: solid;\n"
                          "	border-width: 1px;\n"
                          "	border-radius: 3px;\n"
                          "	border-color: #051a39;\n"
                          "	padding: 5px;\n"
                          "\n"
                          "}"));

    horizontalLayout_15->addWidget(color_vertex);

    verticalLayout_3->addLayout(horizontalLayout_15);

    horizontalLayout_2->addLayout(verticalLayout_3);

    GLwidget = new s21::GLWidget(centralwidget);
    GLwidget->setObjectName(QString::fromUtf8("GLwidget"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(GLwidget->sizePolicy().hasHeightForWidth());
    GLwidget->setSizePolicy(sizePolicy2);
    GLwidget->setMinimumSize(QSize(640, 600));
    GLwidget->setMaximumSize(QSize(640, 600));

    horizontalLayout_2->addWidget(GLwidget);

    verticalLayout = new QVBoxLayout();
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    horizontalLayout_11 = new QHBoxLayout();
    horizontalLayout_11->setObjectName(
        QString::fromUtf8("horizontalLayout_11"));
    label_proj_type = new QLabel(centralwidget);
    label_proj_type->setObjectName(QString::fromUtf8("label_proj_type"));
    label_proj_type->setMaximumSize(QSize(122, 20));
    label_proj_type->setFont(font);
    label_proj_type->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                                  Qt::AlignVCenter);

    horizontalLayout_11->addWidget(label_proj_type);

    projection_type = new QComboBox(centralwidget);
    projection_type->addItem(QString());
    projection_type->addItem(QString());
    projection_type->setObjectName(QString::fromUtf8("projection_type"));
    projection_type->setMaximumSize(QSize(100, 20));
    projection_type->setStyleSheet(
        QString::fromUtf8("QComboBox\n"
                          "{\n"
                          "    background-color: #607cff;\n"
                          "    border: 1px solid;\n"
                          "    border-radius: 3px;\n"
                          "    padding-left: 6px;\n"
                          "    color: #ffffff;\n"
                          "    height: 20px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::disabled\n"
                          "{\n"
                          "	background-color: #404040;\n"
                          "	color: #656565;\n"
                          "	border-color: #051a39;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox:hover\n"
                          "{\n"
                          "    background-color: #8399ff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox:on\n"
                          "{\n"
                          "    background-color: #4969ff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox QAbstractItemView\n"
                          "{\n"
                          "    background-color: #383838;\n"
                          "    color: #ffffff;\n"
                          "    border: 1px solid black;\n"
                          "    selection-background-color: #4969ff;\n"
                          "    selection-color: #ffffff;\n"
                          "    outline: 0;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::drop-down\n"
                          "{\n"
                          "    subcontrol-origin: padding;\n"
                          "    subcontrol-position: top right;\n"
                          "    width: 15px;\n"
                          "    border-left-width: 0px;\n"
                          "    border-left-color: darkgray;\n"
                          "    border-left-style: solid; \n"
                          "    border-top-right-radius: 3px; \n"
                          "    bor"
                          "der-bottom-right-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QComboBox::down-arrow\n"
                          "{\n"
                          "    image: url(://arrow-down.png);\n"
                          "    width: 8px;\n"
                          "    height: 8px;\n"
                          "}\n"
                          ""));

    horizontalLayout_11->addWidget(projection_type);

    verticalLayout->addLayout(horizontalLayout_11);

    label_position = new QLabel(centralwidget);
    label_position->setObjectName(QString::fromUtf8("label_position"));
    sizePolicy1.setHeightForWidth(
        label_position->sizePolicy().hasHeightForWidth());
    label_position->setSizePolicy(sizePolicy1);
    label_position->setMaximumSize(QSize(16777215, 20));
    label_position->setFont(font);
    label_position->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_position->setAlignment(Qt::AlignCenter);

    verticalLayout->addWidget(label_position);

    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
    label_x = new QLabel(centralwidget);
    label_x->setObjectName(QString::fromUtf8("label_x"));
    QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(label_x->sizePolicy().hasHeightForWidth());
    label_x->setSizePolicy(sizePolicy3);
    label_x->setMaximumSize(QSize(15, 20));
    label_x->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                          Qt::AlignVCenter);

    horizontalLayout_3->addWidget(label_x);

    SliderX = new QSlider(centralwidget);
    SliderX->setObjectName(QString::fromUtf8("SliderX"));
    SliderX->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderX->setMinimum(-1000);
    SliderX->setMaximum(1000);
    SliderX->setPageStep(1);
    SliderX->setOrientation(Qt::Horizontal);

    horizontalLayout_3->addWidget(SliderX);

    x = new QDoubleSpinBox(centralwidget);
    x->setObjectName(QString::fromUtf8("x"));
    sizePolicy3.setHeightForWidth(x->sizePolicy().hasHeightForWidth());
    x->setSizePolicy(sizePolicy3);
    x->setMinimumSize(QSize(60, 20));
    x->setMaximumSize(QSize(60, 20));
    x->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    x->setMinimum(-100.000000000000000);
    x->setMaximum(100.000000000000000);
    x->setSingleStep(1.000000000000000);

    horizontalLayout_3->addWidget(x);

    verticalLayout->addLayout(horizontalLayout_3);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
    label_y = new QLabel(centralwidget);
    label_y->setObjectName(QString::fromUtf8("label_y"));
    sizePolicy3.setHeightForWidth(label_y->sizePolicy().hasHeightForWidth());
    label_y->setSizePolicy(sizePolicy3);
    label_y->setMaximumSize(QSize(15, 20));
    label_y->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                          Qt::AlignVCenter);

    horizontalLayout_5->addWidget(label_y);

    SliderY = new QSlider(centralwidget);
    SliderY->setObjectName(QString::fromUtf8("SliderY"));
    SliderY->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderY->setMinimum(-1000);
    SliderY->setMaximum(1000);
    SliderY->setPageStep(1);
    SliderY->setOrientation(Qt::Horizontal);

    horizontalLayout_5->addWidget(SliderY);

    y = new QDoubleSpinBox(centralwidget);
    y->setObjectName(QString::fromUtf8("y"));
    sizePolicy3.setHeightForWidth(y->sizePolicy().hasHeightForWidth());
    y->setSizePolicy(sizePolicy3);
    y->setMinimumSize(QSize(60, 20));
    y->setMaximumSize(QSize(60, 20));
    y->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    y->setMinimum(-100.000000000000000);
    y->setMaximum(100.000000000000000);
    y->setSingleStep(1.000000000000000);
    y->setValue(0.000000000000000);

    horizontalLayout_5->addWidget(y);

    verticalLayout->addLayout(horizontalLayout_5);

    horizontalLayout_7 = new QHBoxLayout();
    horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
    label_z = new QLabel(centralwidget);
    label_z->setObjectName(QString::fromUtf8("label_z"));
    sizePolicy3.setHeightForWidth(label_z->sizePolicy().hasHeightForWidth());
    label_z->setSizePolicy(sizePolicy3);
    label_z->setMaximumSize(QSize(15, 20));
    label_z->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                          Qt::AlignVCenter);

    horizontalLayout_7->addWidget(label_z);

    SliderZ = new QSlider(centralwidget);
    SliderZ->setObjectName(QString::fromUtf8("SliderZ"));
    SliderZ->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderZ->setMinimum(-1000);
    SliderZ->setMaximum(0);
    SliderZ->setPageStep(1);
    SliderZ->setOrientation(Qt::Horizontal);

    horizontalLayout_7->addWidget(SliderZ);

    z = new QDoubleSpinBox(centralwidget);
    z->setObjectName(QString::fromUtf8("z"));
    QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(1);
    sizePolicy4.setHeightForWidth(z->sizePolicy().hasHeightForWidth());
    z->setSizePolicy(sizePolicy4);
    z->setMinimumSize(QSize(58, 10));
    z->setMaximumSize(QSize(60, 20));
    z->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    z->setMinimum(-100.000000000000000);
    z->setMaximum(0.000000000000000);
    z->setSingleStep(1.000000000000000);
    z->setStepType(QAbstractSpinBox::DefaultStepType);

    horizontalLayout_7->addWidget(z);

    verticalLayout->addLayout(horizontalLayout_7);

    label_rotation = new QLabel(centralwidget);
    label_rotation->setObjectName(QString::fromUtf8("label_rotation"));
    sizePolicy1.setHeightForWidth(
        label_rotation->sizePolicy().hasHeightForWidth());
    label_rotation->setSizePolicy(sizePolicy1);
    label_rotation->setMaximumSize(QSize(16777215, 20));
    label_rotation->setFont(font);
    label_rotation->setStyleSheet(
        QString::fromUtf8("QLabel\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #ffffff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QLabel::disabled\n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	color: #656565;\n"
                          "\n"
                          "}"));
    label_rotation->setAlignment(Qt::AlignCenter);

    verticalLayout->addWidget(label_rotation);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
    label_ox = new QLabel(centralwidget);
    label_ox->setObjectName(QString::fromUtf8("label_ox"));
    sizePolicy3.setHeightForWidth(label_ox->sizePolicy().hasHeightForWidth());
    label_ox->setSizePolicy(sizePolicy3);
    label_ox->setMaximumSize(QSize(23, 20));
    label_ox->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                           Qt::AlignVCenter);

    horizontalLayout_4->addWidget(label_ox);

    SliderOX = new QSlider(centralwidget);
    SliderOX->setObjectName(QString::fromUtf8("SliderOX"));
    SliderOX->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderOX->setMinimum(-360);
    SliderOX->setMaximum(360);
    SliderOX->setPageStep(1);
    SliderOX->setOrientation(Qt::Horizontal);

    horizontalLayout_4->addWidget(SliderOX);

    angle_x = new QSpinBox(centralwidget);
    angle_x->setObjectName(QString::fromUtf8("angle_x"));
    sizePolicy3.setHeightForWidth(angle_x->sizePolicy().hasHeightForWidth());
    angle_x->setSizePolicy(sizePolicy3);
    angle_x->setMinimumSize(QSize(60, 0));
    angle_x->setMaximumSize(QSize(60, 20));
    angle_x->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    angle_x->setMinimum(-360);
    angle_x->setMaximum(360);
    angle_x->setSingleStep(10);

    horizontalLayout_4->addWidget(angle_x);

    verticalLayout->addLayout(horizontalLayout_4);

    horizontalLayout_9 = new QHBoxLayout();
    horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
    label_oy = new QLabel(centralwidget);
    label_oy->setObjectName(QString::fromUtf8("label_oy"));
    label_oy->setMaximumSize(QSize(23, 20));
    label_oy->setCursor(QCursor(Qt::ArrowCursor));
    label_oy->setLayoutDirection(Qt::RightToLeft);
    label_oy->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                           Qt::AlignVCenter);

    horizontalLayout_9->addWidget(label_oy);

    SliderOY = new QSlider(centralwidget);
    SliderOY->setObjectName(QString::fromUtf8("SliderOY"));
    SliderOY->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderOY->setMinimum(-360);
    SliderOY->setMaximum(360);
    SliderOY->setPageStep(1);
    SliderOY->setOrientation(Qt::Horizontal);

    horizontalLayout_9->addWidget(SliderOY);

    angle_y = new QSpinBox(centralwidget);
    angle_y->setObjectName(QString::fromUtf8("angle_y"));
    angle_y->setMinimumSize(QSize(60, 0));
    angle_y->setMaximumSize(QSize(60, 20));
    angle_y->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    angle_y->setMinimum(-360);
    angle_y->setMaximum(360);
    angle_y->setSingleStep(10);

    horizontalLayout_9->addWidget(angle_y);

    verticalLayout->addLayout(horizontalLayout_9);

    horizontalLayout_10 = new QHBoxLayout();
    horizontalLayout_10->setObjectName(
        QString::fromUtf8("horizontalLayout_10"));
    label_oz = new QLabel(centralwidget);
    label_oz->setObjectName(QString::fromUtf8("label_oz"));
    label_oz->setMaximumSize(QSize(23, 20));
    label_oz->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                           Qt::AlignVCenter);

    horizontalLayout_10->addWidget(label_oz);

    SliderOZ = new QSlider(centralwidget);
    SliderOZ->setObjectName(QString::fromUtf8("SliderOZ"));
    SliderOZ->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderOZ->setMinimum(-360);
    SliderOZ->setMaximum(360);
    SliderOZ->setPageStep(1);
    SliderOZ->setOrientation(Qt::Horizontal);

    horizontalLayout_10->addWidget(SliderOZ);

    angle_z = new QSpinBox(centralwidget);
    angle_z->setObjectName(QString::fromUtf8("angle_z"));
    QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Fixed);
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(angle_z->sizePolicy().hasHeightForWidth());
    angle_z->setSizePolicy(sizePolicy5);
    angle_z->setMinimumSize(QSize(55, 0));
    angle_z->setMaximumSize(QSize(60, 20));
    angle_z->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    angle_z->setMinimum(-360);
    angle_z->setMaximum(360);
    angle_z->setSingleStep(10);

    horizontalLayout_10->addWidget(angle_z);

    verticalLayout->addLayout(horizontalLayout_10);

    horizontalLayout_6 = new QHBoxLayout();
    horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
    horizontalLayout_6->setSizeConstraint(QLayout::SetMinAndMaxSize);
    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));

    horizontalLayout_6->addWidget(label);

    SliderScale = new QSlider(centralwidget);
    SliderScale->setObjectName(QString::fromUtf8("SliderScale"));
    SliderScale->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	height: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	width: 14px;\n"
                          "	margin-top: -6px;\n"
                          "	margin-bottom: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:horizontal:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::groove:vertic"
                          "al \n"
                          "{\n"
                          "	background-color: transparent;\n"
                          "	width: 5px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical \n"
                          "{\n"
                          "	background-color: #666765;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	height: 14px;\n"
                          "	margin-left: -6px;\n"
                          "	margin-right: -6px;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:hover \n"
                          "{\n"
                          "	background-color: #607cff;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::sub-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #bbb;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::add-page:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border-color: #999;\n"
                          "\n"
                          "}\n"
                          "\n"
                          "\n"
                          "QSlider::handle:vertical:disabled \n"
                          "{\n"
                          "	background-color: #eee;\n"
                          "	border: 1px solid #aaa;\n"
                          "	border-radius: 3px;\n"
                          "\n"
                          "}\n"
                          ""));
    SliderScale->setMinimum(1);
    SliderScale->setMaximum(1000);
    SliderScale->setPageStep(1);
    SliderScale->setSliderPosition(10);
    SliderScale->setOrientation(Qt::Horizontal);

    horizontalLayout_6->addWidget(SliderScale);

    scale = new QDoubleSpinBox(centralwidget);
    scale->setObjectName(QString::fromUtf8("scale"));
    scale->setMinimumSize(QSize(60, 0));
    scale->setMaximumSize(QSize(60, 20));
    scale->setStyleSheet(QString::fromUtf8(
        "QSpinBox, \n"
        "QDoubleSpinBox,\n"
        "QDateTimeEdit\n"
        "{\n"
        "	background-color: #525251;\n"
        "	color: #ffffff;\n"
        "	border: 1px solid #051a39;\n"
        "	border-radius: 3px;\n"
        "	padding : 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox:hover, \n"
        "QDoubleSpinBox::hover,\n"
        "QDateTimeEdit::hover\n"
        "{\n"
        "    background-color: #626262;\n"
        "    border: 1px solid #607cff;\n"
        "    color:  #fff;\n"
        "    padding: 2px\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button, QSpinBox::down-button,\n"
        "QDoubleSpinBox::up-button, QDoubleSpinBox::down-button,\n"
        "QDateTimeEdit::up-button, QDateTimeEdit::down-button\n"
        "{\n"
        "    background-color: #607cff;\n"
        "	border-radius: 2px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::disabled, \n"
        "QDoubleSpinBox::disabled,\n"
        "QDateTimeEdit::disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #0"
        "51a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:hover, QSpinBox::down-button:hover,\n"
        "QDoubleSpinBox::up-button:hover, QDoubleSpinBox::down-button:hover,\n"
        "QDateTimeEdit::up-button:hover, QDateTimeEdit::down-button:hover\n"
        "{\n"
        "    background-color: #8399ff;\n"
        "    border: 1px solid #8399ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:disabled, QSpinBox::down-button:disabled,\n"
        "QDoubleSpinBox::up-button:disabled, "
        "QDoubleSpinBox::down-button:disabled,\n"
        "QDateTimeEdit::up-button:disabled, "
        "QDateTimeEdit::down-button:disabled\n"
        "{\n"
        "	background-color: #404040;\n"
        "	color: #656565;\n"
        "	border-color: #051a39;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-button:pressed, QSpinBox::down-button:pressed,\n"
        "QDoubleSpinBox::up-button:pressed, "
        "QDoubleSpinBox::down-button::pressed,\n"
        "QDateTimeEdit::up-button:pressed, "
        "QDateTimeEdit::down-button::pressed\n"
        "{\n"
        "    background-color: #4969ff;\n"
        "    border: 1px solid #4969ff;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::down-arrow,\n"
        "QDoubleSpinBox::down-arrow,\n"
        ""
        "QDateTimeEdit::down-arrow\n"
        "{\n"
        "    image: url(://arrow-down.png);\n"
        "    width: 7px;\n"
        "\n"
        "}\n"
        "\n"
        "\n"
        "QSpinBox::up-arrow,\n"
        "QDoubleSpinBox::up-arrow,\n"
        "QDateTimeEdit::up-arrow\n"
        "{\n"
        "    image: url(://arrow-up.png);\n"
        "    width: 7px;\n"
        "\n"
        "}"));
    scale->setDecimals(2);
    scale->setMinimum(0.100000000000000);
    scale->setMaximum(100.000000000000000);
    scale->setSingleStep(0.100000000000000);
    scale->setStepType(QAbstractSpinBox::DefaultStepType);
    scale->setValue(1.000000000000000);

    horizontalLayout_6->addWidget(scale);

    verticalLayout->addLayout(horizontalLayout_6);

    horizontalLayout_2->addLayout(verticalLayout);

    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    ButtonOpenFile->setText(
        QCoreApplication::translate("MainWindow", "OpenFile", nullptr));
    save_image->setText(
        QCoreApplication::translate("MainWindow", "SAVE IMAGE", nullptr));
    screencast->setText(
        QCoreApplication::translate("MainWindow", "SCREENCAST", nullptr));
    FileName->setText(
        QCoreApplication::translate("MainWindow", "FILE NAME", nullptr));
    VFCount->setText(QCoreApplication::translate(
        "MainWindow", "Vertex Edges count", nullptr));
    default_2->setText(
        QCoreApplication::translate("MainWindow", "default settings", nullptr));
    label_line_set->setText(
        QCoreApplication::translate("MainWindow", "LINE SETTINGS", nullptr));
    label_type->setText(
        QCoreApplication::translate("MainWindow", "type:", nullptr));
    line_type->setItemText(
        0, QCoreApplication::translate("MainWindow", "solid", nullptr));
    line_type->setItemText(
        1, QCoreApplication::translate("MainWindow", "dashed", nullptr));

    label_thickness->setText(
        QCoreApplication::translate("MainWindow", "width:", nullptr));
    label_vertex_set->setText(
        QCoreApplication::translate("MainWindow", "VERTEX SETTINGS", nullptr));
    label_type_2->setText(
        QCoreApplication::translate("MainWindow", "type:", nullptr));
    vertex_type->setItemText(
        0, QCoreApplication::translate("MainWindow", "none", nullptr));
    vertex_type->setItemText(
        1, QCoreApplication::translate("MainWindow", "circle", nullptr));
    vertex_type->setItemText(
        2, QCoreApplication::translate("MainWindow", "square", nullptr));

    label_size->setText(
        QCoreApplication::translate("MainWindow", "size:", nullptr));
    label_colors->setText(
        QCoreApplication::translate("MainWindow", "COLORS", nullptr));
    color_back->setText(
        QCoreApplication::translate("MainWindow", "Background", nullptr));
    color_line->setText(
        QCoreApplication::translate("MainWindow", "Line", nullptr));
    color_vertex->setText(
        QCoreApplication::translate("MainWindow", "Vertex", nullptr));
    label_proj_type->setText(
        QCoreApplication::translate("MainWindow", "PROJECTION TYPE", nullptr));
    projection_type->setItemText(
        0, QCoreApplication::translate("MainWindow", "parallel", nullptr));
    projection_type->setItemText(
        1, QCoreApplication::translate("MainWindow", "central", nullptr));

    label_position->setText(
        QCoreApplication::translate("MainWindow", "POSITION", nullptr));
    label_x->setText(QCoreApplication::translate("MainWindow", "X:", nullptr));
    label_y->setText(QCoreApplication::translate("MainWindow", "Y:", nullptr));
    label_z->setText(QCoreApplication::translate("MainWindow", "Z:", nullptr));
    label_rotation->setText(
        QCoreApplication::translate("MainWindow", "ROTATION", nullptr));
    label_ox->setText(
        QCoreApplication::translate("MainWindow", "OX:", nullptr));
    label_oy->setText(
        QCoreApplication::translate("MainWindow", "OY:", nullptr));
    label_oz->setText(
        QCoreApplication::translate("MainWindow", "OZ:", nullptr));
    label->setText(
        QCoreApplication::translate("MainWindow", "scale:", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
