/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created: Mon Oct 20 18:24:10 2014
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QPushButton *pushButton_2;
    QWidget *titleWidget;
    QLabel *iconTitleLabel;
    QLabel *titleLabel;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QProgressBar *progressBar;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QWidget *menuWidget;
    QPushButton *minBtn;
    QPushButton *maxBtn;
    QPushButton *closeBtn;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QSlider *horizontalSlider;
    QSlider *verticalSlider;

    void setupUi(QDialog *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->setWindowModality(Qt::NonModal);
        frmMain->resize(400, 300);
        frmMain->setMaximumSize(QSize(16777214, 16777215));
        frmMain->setContextMenuPolicy(Qt::DefaultContextMenu);
        frmMain->setAutoFillBackground(false);
        frmMain->setSizeGripEnabled(true);
        frmMain->setModal(false);
        pushButton_2 = new QPushButton(frmMain);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 146, 111, 41));
        titleWidget = new QWidget(frmMain);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setGeometry(QRect(0, 0, 400, 30));
        iconTitleLabel = new QLabel(titleWidget);
        iconTitleLabel->setObjectName(QString::fromUtf8("iconTitleLabel"));
        iconTitleLabel->setGeometry(QRect(5, 0, 30, 30));
        titleLabel = new QLabel(titleWidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(46, 0, 260, 30));
        horizontalScrollBar = new QScrollBar(frmMain);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(80, 260, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(frmMain);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(360, 90, 16, 160));
        verticalScrollBar->setOrientation(Qt::Vertical);
        progressBar = new QProgressBar(frmMain);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 200, 141, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        progressBar->setFont(font);
        progressBar->setValue(24);
        pushButton_3 = new QPushButton(frmMain);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 150, 97, 27));
        lineEdit = new QLineEdit(frmMain);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 100, 113, 27));
        menuWidget = new QWidget(frmMain);
        menuWidget->setObjectName(QString::fromUtf8("menuWidget"));
        menuWidget->setGeometry(QRect(309, 0, 100, 30));
        minBtn = new QPushButton(menuWidget);
        minBtn->setObjectName(QString::fromUtf8("minBtn"));
        minBtn->setGeometry(QRect(0, 0, 30, 30));
        minBtn->setMinimumSize(QSize(30, 0));
        minBtn->setFlat(true);
        maxBtn = new QPushButton(menuWidget);
        maxBtn->setObjectName(QString::fromUtf8("maxBtn"));
        maxBtn->setGeometry(QRect(30, 0, 30, 30));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(maxBtn->sizePolicy().hasHeightForWidth());
        maxBtn->setSizePolicy(sizePolicy);
        maxBtn->setMinimumSize(QSize(30, 0));
        maxBtn->setFocusPolicy(Qt::NoFocus);
        maxBtn->setFlat(true);
        closeBtn = new QPushButton(menuWidget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setGeometry(QRect(60, 0, 30, 30));
        closeBtn->setMinimumSize(QSize(30, 0));
        closeBtn->setFlat(true);
        pushButton = new QPushButton(frmMain);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 190, 91, 41));
        checkBox = new QCheckBox(frmMain);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(200, 91, 91, 41));
        horizontalSlider = new QSlider(frmMain);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(30, 230, 160, 29));
        horizontalSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(frmMain);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(10, 60, 29, 160));
        verticalSlider->setOrientation(Qt::Vertical);

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QDialog *frmMain)
    {
        pushButton_2->setText(QApplication::translate("frmMain", "\346\230\276\347\244\272\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        iconTitleLabel->setText(QString());
        titleLabel->setText(QString());
        pushButton_3->setText(QApplication::translate("frmMain", "\350\257\242\351\227\256\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        minBtn->setText(QApplication::translate("frmMain", "PushButton", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        maxBtn->setToolTip(QApplication::translate("frmMain", "\346\234\200\345\244\247\345\214\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        maxBtn->setText(QString());
        closeBtn->setText(QApplication::translate("frmMain", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("frmMain", "\351\224\231\350\257\257\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("frmMain", "CheckBox", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(frmMain);
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
