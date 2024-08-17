#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>


namespace third_task{
    int solution(int argc, char *argv[]){
        QApplication app(argc, argv);

        QWidget widget;
        widget.resize(640, 480);
        widget.setWindowTitle("Hello, world!!!");

        auto *gridLayout = new QGridLayout(&widget);

        auto * label = new QLabel("Hello, world!!!");
        label->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
        gridLayout->addWidget(label);

        widget.show();

        return app.exec();
    }
}