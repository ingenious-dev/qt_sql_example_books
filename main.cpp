//#include "mainwindow.h"

//#include <QApplication>

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();
//}

// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include "bookwindow.h"

#include <QtWidgets>

int main(int argc, char * argv[])
{
    Q_INIT_RESOURCE(books);

    QApplication app(argc, argv);

    BookWindow win;
    win.show();

    return app.exec();
}
