/*
    Crashing Trashing Bots is a 3D game in freeglut
    Copyright (C) 2015 Mladen Markovic,Tamara Plazinic,Nikola Banjac

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


/* klasa koja sluzi za prikaz sadrzaja prozora */


#include <iostream>
#include "global.h"


/* prikazuje sadrzaj prozora */
void Display::show(void)
{
    if(modus==MODUS_MENI)
        Display::meni();
    else if(modus==MODUS_START)
        Display::start();
}


/* prikazuje meni */
void Display::meni()
{
    glut::light(GL_OFF);
    glut::modelView2D();

    glut::color(1,0,0,1);
    glut::pravougaonik(Tacka(1,1,0),Tacka(1,-1,0),Tacka(0,-1,0),Tacka(0,1,0));

    glut::color(1,1,1,1);
    glut::text(0.5,0.5,"Test");
    glut::text(0,0,"Test");
    glut::swapBuffers();
}


/* prikazuje meni->start */
void Display::start()
{
    this->ugao++;
    glut::light(GL_ON);
    glut::modelView3D(0,0,100);
    glut::lightPosition(0,0,1,0);
    glut::color(1.0,1.0,0,1.0);

    glut::rotate(30,1,0,0);
    glut::rotate(this->ugao,0,1,0);
    //model_1();
    model_2();
    //model_3();

    /*
    glut::rotate(45,1,0,1);
    glut::cube(10);
    glut::sphere(10);
    glut::cylinder(10,10);
    glut::cone(10,20);*/
    glut::swapBuffers();
}
