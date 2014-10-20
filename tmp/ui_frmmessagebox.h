/********************************************************************************
** Form generated from reading UI file 'frmmessagebox.ui'
**
** Created: Mon Oct 20 14:29:40 2014
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMESSAGEBOX_H
#define UI_FRMMESSAGEBOX_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMessageBox
{
public:
    QWidget *titleWidget;
    QLabel *iconTitleLabel;
    QLabel *titleLabel;
    QWidget *menuWidget;
    QPushButton *closeBtn;
    QWidget *mainWidget;
    QGroupBox *groupBox;
    QLabel *iconLabel;
    QLabel *infoLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *frmMessageBox)
    {
        if (frmMessageBox->objectName().isEmpty())
            frmMessageBox->setObjectName(QString::fromUtf8("frmMessageBox"));
        frmMessageBox->resize(303, 143);
        titleWidget = new QWidget(frmMessageBox);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setGeometry(QRect(0, 0, 303, 28));
        titleWidget->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        iconTitleLabel = new QLabel(titleWidget);
        iconTitleLabel->setObjectName(QString::fromUtf8("iconTitleLabel"));
        iconTitleLabel->setGeometry(QRect(0, 0, 31, 28));
        titleLabel = new QLabel(titleWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(31, 0, 217, 28));
        titleLabel->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        menuWidget = new QWidget(frmMessageBox);
        menuWidget->setObjectName(QString::fromUtf8("menuWidget"));
        menuWidget->setGeometry(QRect(248, 0, 55, 28));
        closeBtn = new QPushButton(menuWidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(0, 0, 50, 28));
        closeBtn->setMinimumSize(QSize(40, 0));
        closeBtn->setAutoDefault(true);
        closeBtn->setDefault(false);
        closeBtn->setFlat(true);
        mainWidget = new QWidget(frmMessageBox);
        mainWidget->setObjectName(QString::fromUtf8("mainWidget"));
        mainWidget->setGeometry(QRect(0, 28, 303, 115));
        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(5, 5, 293, 105));
        iconLabel = new QLabel(groupBox);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(10, 10, 45, 45));
        iconLabel->setStyleSheet(QString::fromUtf8("border-image: url(../image/info.png);"));
        infoLabel = new QLabel(groupBox);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(70, 10, 210, 40));
        infoLabel->setWordWrap(true);
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 70, 251, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okBtn = new QPushButton(widget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setMinimumSize(QSize(95, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        okBtn->setFont(font);

        horizontalLayout->addWidget(okBtn);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setMinimumSize(QSize(95, 30));

        horizontalLayout->addWidget(cancelBtn);


        retranslateUi(frmMessageBox);

        QMetaObject::connectSlotsByName(frmMessageBox);
    } // setupUi

    void retranslateUi(QDialog *frmMessageBox)
    {
        frmMessageBox->setWindowTitle(QApplication::translate("frmMessageBox", "Dialog", 0, QApplication::UnicodeUTF8));
        iconTitleLabel->setText(QString());
        titleLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        closeBtn->setToolTip(QApplication::translate("frmMessageBox", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        closeBtn->setText(QString());
        groupBox->setTitle(QString());
        iconLabel->setText(QString());
        infoLabel->setText(QString());
        okBtn->setText(QApplication::translate("frmMessageBox", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("frmMessageBox", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMessageBox: public Ui_frmMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMESSAGEBOX_H
