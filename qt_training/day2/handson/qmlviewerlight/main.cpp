#include <QApplication>
#include <QDeclarativeView>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QDeclarativeView view;
    view.setSource(QUrl(QCoreApplication::arguments().at(1)));
    view.show();
    return app.exec();
}
