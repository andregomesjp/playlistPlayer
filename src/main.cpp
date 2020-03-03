#include <QApplication>

#include "AppFacade.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    AppFacade *appFacade = new AppFacade();

    return app.exec();
}
