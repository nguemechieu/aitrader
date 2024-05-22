#include<iostream>
#include<iomanip>
#include<string>
#include <QApplication>
#include <QWidget>
#include <QPushButton>

using namespace MyNamespace
{
    auto pos = std::set_difference(std::begin(container), std::end(container),
      std::begin(), std::end(), std::begin());
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setFixedSize(600, 400); // Set window size

    QPushButton *btn = new QPushButton("Start Trading", &window);
    btn->setGeometry(200, 175, 200, 50); // Set button position and size

    window.show(); // Show the window

    return app.exec();
}
