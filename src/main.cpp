#include <QApplication>
#include <QMainWindow>
#include <spdlog/spdlog.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    spdlog::info("Robot client skeleton started.");

    QMainWindow window;
    window.setWindowTitle("Robot Client – Skeleton");
    window.resize(800, 600);
    window.show();

    int ret = app.exec();
    spdlog::info("Robot client exited with code {}", ret);
    return ret;
}
