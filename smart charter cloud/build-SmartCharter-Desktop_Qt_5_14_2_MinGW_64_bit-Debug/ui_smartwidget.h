/********************************************************************************
** Form generated from reading UI file 'smartwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTWIDGET_H
#define UI_SMARTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;

    void setupUi(QWidget *SmartWidget)
    {
        if (SmartWidget->objectName().isEmpty())
            SmartWidget->setObjectName(QString::fromUtf8("SmartWidget"));
        SmartWidget->resize(408, 349);
        verticalLayout = new QVBoxLayout(SmartWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(SmartWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        listWidget = new QListWidget(SmartWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        lineEdit = new QLineEdit(SmartWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(SmartWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(SmartWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SmartWidget);

        QMetaObject::connectSlotsByName(SmartWidget);
    } // setupUi

    void retranslateUi(QWidget *SmartWidget)
    {
        SmartWidget->setWindowTitle(QCoreApplication::translate("SmartWidget", "SmartWidget", nullptr));
        label->setText(QCoreApplication::translate("SmartWidget", "Smart Chat", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("SmartWidget", "ECHO", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("SmartWidget", "TULING", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("SmartWidget", "YANSHEE", nullptr));

        pushButton->setText(QCoreApplication::translate("SmartWidget", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartWidget: public Ui_SmartWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTWIDGET_H
