#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>



int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QWidget window;
	window.setWindowTitle("Window title");

	auto *layout = new QVBoxLayout(&window);

	auto *label1 = new QLabel("This is a label");
	
	auto *label2 = new QLabel("This is another label");

	auto *button1 = new QPushButton("A button");
	auto *button2 = new QPushButton("Another button");
	auto *button3 = new QPushButton("The Quit button");

	// button1->setStyleSheet("background-color: #A3C1DA; color: red;");
	// button2->setStyleSheet("background-color: #FF0000; color: white;");


	layout->addWidget(label1);
	layout->addWidget(label2);

	layout->addWidget(button1);
	layout->addWidget(button2);
	layout->addWidget(button3);

	QObject::connect(button3, &QPushButton::clicked, &app, &QApplication::quit);

	window.resize(360, 120);
	window.show();

	return app.exec();
}
