#include "dialogue.h"
#include "QHBoxLayout"
#include "QVBoxLayout"
dialogue::dialogue(QWidget *parent) : QWidget(parent){
    this->setWindowTitle("           Nested Layout Test");
    createWidgets();
  placeWidgets();
   makeConnexions();}
void dialogue::createWidgets() {
                label = new QLabel("Name");
                edit = new QLineEdit;
                search = new QPushButton("Search");
                close= new QPushButton("Close");
                c1=new QCheckBox("Match case");
                c2=new QCheckBox("Search backward");  }
             void dialogue::placeWidgets()
             {
                 auto TopLeftlayout = new QHBoxLayout;
                  auto Leftlayout = new QVBoxLayout;
                   auto rightlayout = new QVBoxLayout;
                    rightlayout->setSpacing(1);
                   auto mainlayout = new QHBoxLayout;
                   this->setLayout(mainlayout);
                 TopLeftlayout->addWidget(label);
                 TopLeftlayout->addWidget(edit);

                 Leftlayout->addLayout(TopLeftlayout);
                 Leftlayout->addWidget(c1);
                 Leftlayout->addWidget(c2);
                  rightlayout->addWidget(search);
                   rightlayout->addWidget(close);
                   rightlayout->addStretch(7);
                   rightlayout->addSpacerItem(new QSpacerItem(200, 20));
                   mainlayout->addLayout(Leftlayout);

                     mainlayout->addLayout(rightlayout); }
             void dialogue :: makeConnexions(){ }



