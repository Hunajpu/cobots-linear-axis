/********************************************************************************
** Form generated from reading UI file 'cobot_7thaxis.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COBOT_7THAXIS_H
#define UI_COBOT_7THAXIS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "cobots_axis_gui/mytoolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_LinearAxisGUI
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_choose;
    QVBoxLayout *verticalLayout;
    QComboBox *robotSelection;
    QPushButton *pushButton;
    QWidget *tab_plan;
    QHBoxLayout *horizontalLayout;
    QGroupBox *axisGroupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *hwRadioBtn;
    QRadioButton *simRadioBtn;
    QRadioButton *disableRadioBtn;
    QGroupBox *robotGroupBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *hwRadioBtn_2;
    QRadioButton *simRadioBtn_2;
    QRadioButton *disableRadioBtn_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *runRVIZ;
    QPushButton *runCode;
    QWidget *tab_manual;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *controlLabel;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *homeBtn;
    QToolButton *stopBtn;
    QHBoxLayout *horizontalLayout_7;
    QSlider *positionControl;
    QLCDNumber *positionDisplay_2;
    QPushButton *sendPosButton;
    QVBoxLayout *verticalLayout_6;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *connectionLabel;
    QToolButton *reloadBtn;
    MyToolButton *connectionLed;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLCDNumber *positionDisplay;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sensor1Label;
    MyToolButton *sensor1Led;
    QHBoxLayout *horizontalLayout_5;
    QLabel *sensor2Label;
    MyToolButton *sensor2Led;

    void setupUi(QWidget *LinearAxisGUI)
    {
        if (LinearAxisGUI->objectName().isEmpty())
            LinearAxisGUI->setObjectName(QString::fromUtf8("LinearAxisGUI"));
        LinearAxisGUI->resize(700, 222);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LinearAxisGUI->sizePolicy().hasHeightForWidth());
        LinearAxisGUI->setSizePolicy(sizePolicy);
        LinearAxisGUI->setMinimumSize(QSize(700, 222));
        LinearAxisGUI->setMaximumSize(QSize(1000, 249));
        gridLayout = new QGridLayout(LinearAxisGUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(LinearAxisGUI);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(2000, 2000));
        tab_choose = new QWidget();
        tab_choose->setObjectName(QString::fromUtf8("tab_choose"));
        verticalLayout = new QVBoxLayout(tab_choose);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        robotSelection = new QComboBox(tab_choose);
        robotSelection->addItem(QString());
        robotSelection->addItem(QString());
        robotSelection->addItem(QString());
        robotSelection->addItem(QString());
        robotSelection->addItem(QString());
        robotSelection->addItem(QString());
        robotSelection->setObjectName(QString::fromUtf8("robotSelection"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(robotSelection->sizePolicy().hasHeightForWidth());
        robotSelection->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(robotSelection);

        pushButton = new QPushButton(tab_choose);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pushButton);

        tabWidget->addTab(tab_choose, QString());
        tab_plan = new QWidget();
        tab_plan->setObjectName(QString::fromUtf8("tab_plan"));
        horizontalLayout = new QHBoxLayout(tab_plan);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        axisGroupBox = new QGroupBox(tab_plan);
        axisGroupBox->setObjectName(QString::fromUtf8("axisGroupBox"));
        verticalLayout_2 = new QVBoxLayout(axisGroupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hwRadioBtn = new QRadioButton(axisGroupBox);
        hwRadioBtn->setObjectName(QString::fromUtf8("hwRadioBtn"));

        verticalLayout_2->addWidget(hwRadioBtn);

        simRadioBtn = new QRadioButton(axisGroupBox);
        simRadioBtn->setObjectName(QString::fromUtf8("simRadioBtn"));
        simRadioBtn->setChecked(true);

        verticalLayout_2->addWidget(simRadioBtn);

        disableRadioBtn = new QRadioButton(axisGroupBox);
        disableRadioBtn->setObjectName(QString::fromUtf8("disableRadioBtn"));
        disableRadioBtn->setEnabled(false);

        verticalLayout_2->addWidget(disableRadioBtn);


        horizontalLayout->addWidget(axisGroupBox);

        robotGroupBox = new QGroupBox(tab_plan);
        robotGroupBox->setObjectName(QString::fromUtf8("robotGroupBox"));
        verticalLayout_3 = new QVBoxLayout(robotGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hwRadioBtn_2 = new QRadioButton(robotGroupBox);
        hwRadioBtn_2->setObjectName(QString::fromUtf8("hwRadioBtn_2"));
        hwRadioBtn_2->setEnabled(false);

        verticalLayout_3->addWidget(hwRadioBtn_2);

        simRadioBtn_2 = new QRadioButton(robotGroupBox);
        simRadioBtn_2->setObjectName(QString::fromUtf8("simRadioBtn_2"));
        simRadioBtn_2->setChecked(true);

        verticalLayout_3->addWidget(simRadioBtn_2);

        disableRadioBtn_2 = new QRadioButton(robotGroupBox);
        disableRadioBtn_2->setObjectName(QString::fromUtf8("disableRadioBtn_2"));

        verticalLayout_3->addWidget(disableRadioBtn_2);


        horizontalLayout->addWidget(robotGroupBox);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        runRVIZ = new QPushButton(tab_plan);
        runRVIZ->setObjectName(QString::fromUtf8("runRVIZ"));
        sizePolicy2.setHeightForWidth(runRVIZ->sizePolicy().hasHeightForWidth());
        runRVIZ->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(runRVIZ);

        runCode = new QPushButton(tab_plan);
        runCode->setObjectName(QString::fromUtf8("runCode"));
        runCode->setEnabled(false);
        sizePolicy2.setHeightForWidth(runCode->sizePolicy().hasHeightForWidth());
        runCode->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(runCode);


        horizontalLayout->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_plan, QString());
        tab_manual = new QWidget();
        tab_manual->setObjectName(QString::fromUtf8("tab_manual"));
        horizontalLayout_2 = new QHBoxLayout(tab_manual);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        controlLabel = new QLabel(tab_manual);
        controlLabel->setObjectName(QString::fromUtf8("controlLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(controlLabel->sizePolicy().hasHeightForWidth());
        controlLabel->setSizePolicy(sizePolicy3);
        controlLabel->setLayoutDirection(Qt::LeftToRight);
        controlLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(controlLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        homeBtn = new QToolButton(tab_manual);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));
        homeBtn->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(homeBtn->sizePolicy().hasHeightForWidth());
        homeBtn->setSizePolicy(sizePolicy4);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../.designer/backup/home.jpeg"), QSize(), QIcon::Normal, QIcon::On);
        homeBtn->setIcon(icon);
        homeBtn->setIconSize(QSize(200, 50));

        horizontalLayout_6->addWidget(homeBtn);

        stopBtn = new QToolButton(tab_manual);
        stopBtn->setObjectName(QString::fromUtf8("stopBtn"));
        stopBtn->setEnabled(false);
        sizePolicy4.setHeightForWidth(stopBtn->sizePolicy().hasHeightForWidth());
        stopBtn->setSizePolicy(sizePolicy4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../.designer/backup/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopBtn->setIcon(icon1);
        stopBtn->setIconSize(QSize(200, 50));

        horizontalLayout_6->addWidget(stopBtn);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        positionControl = new QSlider(tab_manual);
        positionControl->setObjectName(QString::fromUtf8("positionControl"));
        positionControl->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(positionControl->sizePolicy().hasHeightForWidth());
        positionControl->setSizePolicy(sizePolicy5);
        positionControl->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 2px solid;\n"
"    height: 60px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"    margin: 0px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: grey;\n"
"    border: 1px solid;\n"
"	height: 5;\n"
"    width: 50px;\n"
"    margin: -2px 0px; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"    border-radius: 3px;\n"
"}"));
        positionControl->setMinimum(-162);
        positionControl->setMaximum(213);
        positionControl->setValue(0);
        positionControl->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(positionControl);

        positionDisplay_2 = new QLCDNumber(tab_manual);
        positionDisplay_2->setObjectName(QString::fromUtf8("positionDisplay_2"));
        positionDisplay_2->setEnabled(false);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        positionDisplay_2->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        positionDisplay_2->setFont(font);
        positionDisplay_2->setFrameShape(QFrame::Panel);
        positionDisplay_2->setFrameShadow(QFrame::Plain);
        positionDisplay_2->setLineWidth(1);
        positionDisplay_2->setMidLineWidth(2);
        positionDisplay_2->setSmallDecimalPoint(false);
        positionDisplay_2->setDigitCount(6);
        positionDisplay_2->setMode(QLCDNumber::Dec);
        positionDisplay_2->setSegmentStyle(QLCDNumber::Outline);
        positionDisplay_2->setProperty("value", QVariant(0.000000000000000));
        positionDisplay_2->setProperty("intValue", QVariant(0));

        horizontalLayout_7->addWidget(positionDisplay_2);

        sendPosButton = new QPushButton(tab_manual);
        sendPosButton->setObjectName(QString::fromUtf8("sendPosButton"));
        sendPosButton->setEnabled(false);
        sizePolicy2.setHeightForWidth(sendPosButton->sizePolicy().hasHeightForWidth());
        sendPosButton->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(sendPosButton);


        verticalLayout_5->addLayout(horizontalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        statusLabel = new QLabel(tab_manual);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        sizePolicy3.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy3);
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(statusLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        connectionLabel = new QLabel(tab_manual);
        connectionLabel->setObjectName(QString::fromUtf8("connectionLabel"));

        horizontalLayout_3->addWidget(connectionLabel);

        reloadBtn = new QToolButton(tab_manual);
        reloadBtn->setObjectName(QString::fromUtf8("reloadBtn"));

        horizontalLayout_3->addWidget(reloadBtn);

        connectionLed = new MyToolButton(tab_manual);
        connectionLed->setObjectName(QString::fromUtf8("connectionLed"));

        horizontalLayout_3->addWidget(connectionLed);


        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label = new QLabel(tab_manual);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        positionDisplay = new QLCDNumber(tab_manual);
        positionDisplay->setObjectName(QString::fromUtf8("positionDisplay"));
        positionDisplay->setEnabled(false);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        positionDisplay->setPalette(palette1);
        positionDisplay->setFont(font);
        positionDisplay->setFrameShape(QFrame::Panel);
        positionDisplay->setFrameShadow(QFrame::Plain);
        positionDisplay->setLineWidth(1);
        positionDisplay->setMidLineWidth(2);
        positionDisplay->setSmallDecimalPoint(false);
        positionDisplay->setDigitCount(6);
        positionDisplay->setMode(QLCDNumber::Dec);
        positionDisplay->setSegmentStyle(QLCDNumber::Outline);
        positionDisplay->setProperty("value", QVariant(0.000000000000000));
        positionDisplay->setProperty("intValue", QVariant(0));

        horizontalLayout_8->addWidget(positionDisplay);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        sensor1Label = new QLabel(tab_manual);
        sensor1Label->setObjectName(QString::fromUtf8("sensor1Label"));

        horizontalLayout_4->addWidget(sensor1Label);

        sensor1Led = new MyToolButton(tab_manual);
        sensor1Led->setObjectName(QString::fromUtf8("sensor1Led"));

        horizontalLayout_4->addWidget(sensor1Led);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        sensor2Label = new QLabel(tab_manual);
        sensor2Label->setObjectName(QString::fromUtf8("sensor2Label"));

        horizontalLayout_5->addWidget(sensor2Label);

        sensor2Led = new MyToolButton(tab_manual);
        sensor2Led->setObjectName(QString::fromUtf8("sensor2Led"));

        horizontalLayout_5->addWidget(sensor2Led);


        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_6);

        tabWidget->addTab(tab_manual, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(LinearAxisGUI);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(LinearAxisGUI);
    } // setupUi

    void retranslateUi(QWidget *LinearAxisGUI)
    {
        LinearAxisGUI->setWindowTitle(QApplication::translate("LinearAxisGUI", "LinearAxisGUI", nullptr));
        robotSelection->setItemText(0, QApplication::translate("LinearAxisGUI", "Elija un robot", nullptr));
        robotSelection->setItemText(1, QApplication::translate("LinearAxisGUI", "Universal Robots UR3", nullptr));
        robotSelection->setItemText(2, QApplication::translate("LinearAxisGUI", "Franka Emika Panda", nullptr));
        robotSelection->setItemText(3, QApplication::translate("LinearAxisGUI", "UF Factory xArm", nullptr));
        robotSelection->setItemText(4, QApplication::translate("LinearAxisGUI", "Kinova Jaco", nullptr));
        robotSelection->setItemText(5, QApplication::translate("LinearAxisGUI", "Aubo i3", nullptr));

        pushButton->setText(QApplication::translate("LinearAxisGUI", "Configuraci\303\263n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_choose), QApplication::translate("LinearAxisGUI", "Robot", nullptr));
        axisGroupBox->setTitle(QApplication::translate("LinearAxisGUI", "Eje lineal", nullptr));
        hwRadioBtn->setText(QApplication::translate("LinearAxisGUI", "Hardware", nullptr));
        simRadioBtn->setText(QApplication::translate("LinearAxisGUI", "Simulaci\303\263n", nullptr));
        disableRadioBtn->setText(QApplication::translate("LinearAxisGUI", "Deshabilitar", nullptr));
        robotGroupBox->setTitle(QApplication::translate("LinearAxisGUI", "Robot", nullptr));
        hwRadioBtn_2->setText(QApplication::translate("LinearAxisGUI", "Hardware", nullptr));
        simRadioBtn_2->setText(QApplication::translate("LinearAxisGUI", "Simulaci\303\263n", nullptr));
        disableRadioBtn_2->setText(QApplication::translate("LinearAxisGUI", "Deshabilitar", nullptr));
        runRVIZ->setText(QApplication::translate("LinearAxisGUI", "Realizar Planeaci\303\263n", nullptr));
        runCode->setText(QApplication::translate("LinearAxisGUI", "Ejecutar c\303\263digo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_plan), QApplication::translate("LinearAxisGUI", "Planeaci\303\263n", nullptr));
        controlLabel->setText(QApplication::translate("LinearAxisGUI", "Controles del eje lineal", nullptr));
        homeBtn->setText(QString());
        stopBtn->setText(QString());
        sendPosButton->setText(QApplication::translate("LinearAxisGUI", "Ejecutar", nullptr));
        statusLabel->setText(QApplication::translate("LinearAxisGUI", "Estatus del eje lineal", nullptr));
        connectionLabel->setText(QApplication::translate("LinearAxisGUI", "Conexi\303\263n", nullptr));
        reloadBtn->setText(QString());
        connectionLed->setText(QString());
        label->setText(QApplication::translate("LinearAxisGUI", "Posici\303\263n actual", nullptr));
        sensor1Label->setText(QApplication::translate("LinearAxisGUI", "Sensor final de carrera 1", nullptr));
        sensor1Led->setText(QString());
        sensor2Label->setText(QApplication::translate("LinearAxisGUI", "Sensor final de carrera 2", nullptr));
        sensor2Led->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_manual), QApplication::translate("LinearAxisGUI", "Control Manual", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinearAxisGUI: public Ui_LinearAxisGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COBOT_7THAXIS_H
