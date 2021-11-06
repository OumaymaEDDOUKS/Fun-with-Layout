#include "dialogue1.h"
#include "QHBoxLayout"
dialogue1::dialogue1(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("QHBoxLayout Text");
    createWidgets();

    placeWidgets();


     makeConnexions();
}


     void dialogue1::createWidgets()
                 {
                     label = new QLabel("Name");
                     edit = new QLineEdit;
                     search = new QPushButton("Search");

               }
             void dialogue1::placeWidgets()
             {
                 auto layout = new QHBoxLayout;
                 this->setLayout(layout);

                 layout->addWidget(label);
                 layout->addWidget(edit);
                 layout->addWidget(search);
             }
             void dialogue1 :: makeConnexions(){


             }



