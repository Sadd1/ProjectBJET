#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<MMSystem.h>
#include <gl/glut.h>
#include<GL/gl.h>
#define PI 3.14159
using namespace std;

double plane_movex=0.01;
double plane_movey=0.0;

double bullet_movex=0.01;
double bullet_movey=0.0;

double enemy1_movex=0.0;
double enemy1_movey=0.0;

double enemy2_movex=0.0;
double enemy2_movey=0.0;

double enemy3_movex=0.0;
double enemy3_movey=0.0;

double enemy4_movex=0.0;
double enemy4_movey=0.0;


int coun =0;
float getX(int val)
{
    int width = glutGet(GLUT_WINDOW_WIDTH);
    float frac = (float)val/((float)width/2);
    return frac;
}
float getY(int val)
{
    int height = glutGet(GLUT_WINDOW_HEIGHT);
    float frac = (float)val/((float)height/2);
    return frac;
}


void initRendering() {
	glEnable(GL_DEPTH_TEST);

}


void update(int value) {
    bullet_movex+=0.1f;
    if(bullet_movex>getX(800*2))
    {
       bullet_movex = plane_movex;
       bullet_movey = plane_movey;
    }
    else{}

    enemy1_movex-=0.005;


    enemy2_movex+=0.0015;

    enemy3_movex+=0.008;

    enemy4_movex+=0.003;



	glutPostRedisplay();


	glutTimerFunc(15, update, 0);
}






void specialKeys(int key, int x, int y) {
    switch (key) {
      case GLUT_KEY_UP:
          plane_movey+=0.10;
          break;

      case GLUT_KEY_DOWN:
          plane_movey-=0.10;

          break;
           case GLUT_KEY_RIGHT:
          plane_movex+=0.05;
          break;
      case GLUT_KEY_LEFT:
          plane_movex-=0.05;

          break;

    }
}



void circle(float x, float y, double r )
{
    float x1,y1;
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/25;
		float x1 = x+((r-.07) * cos(A) );
		float y1 = y+((r) * sin(A) );
		glVertex2f(x1,y1);
	}
	glEnd();
}

void Tree1()
{
     glColor3f(0.38f,0.19f,0.0f);
     glBegin(GL_QUADS);
    glVertex2f(-0.93,.10);
    glVertex2f(-0.93,.20);
    glVertex2f(-0.89,.20);
    glVertex2f(-0.89,.10);
    glEnd();

    glColor3f(0.0,0.43,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.97,0.20);
    glVertex2f(-0.85,0.20);
    glVertex2f(-0.90,0.31);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.98,0.24);
    glVertex2f(-0.84,0.24);
    glVertex2f(-0.91,0.38);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.99,0.31);
    glVertex2f(-0.83,0.30);
    glVertex2f(-0.91,0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.99,0.36);
    glVertex2f(-0.83,0.36);
    glVertex2f(-0.91,0.48);
    glEnd();
}

void Building1()
{
     glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.90,0.36);
    glVertex2f(0.89,0.44);
    glVertex2f(0.70,0.44);
    glVertex2f(0.69,0.36);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.87,0.25);
    glVertex2f(0.87,0.15);
    glVertex2f(0.81,0.15);
    glVertex2f(0.81,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.78,0.25);
    glVertex2f(0.78,0.15);
    glVertex2f(0.72,0.15);
    glVertex2f(0.72,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.85,0.40);
    glVertex2f(0.85,0.30);
    glVertex2f(0.74,0.30);
    glVertex2f(0.74,0.40);
    glEnd();

    glColor3f(.19,0.61,0.22);
    glBegin(GL_QUADS);
    glVertex2f(0.89,0.10);
    glVertex2f(0.89,0.45);
    glVertex2f(0.70,0.45);
    glVertex2f(0.70,0.10);
    glEnd();
}

void Building2()
{
    glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.76,0.27);
    glVertex2f(0.75,0.33);
    glVertex2f(0.55,0.33);
    glVertex2f(0.54,0.27);
    glEnd();

    glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.77,0.67);
    glVertex2f(0.76,0.73);
    glVertex2f(0.54,0.73);
    glVertex2f(0.53,0.67);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.88,0.25);
    glVertex2f(0.88,0.15);
    glVertex2f(0.66,0.15);
    glVertex2f(0.66,0.25);
    glEnd();

    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.63,0.25);
    glVertex2f(0.63,0.15);
    glVertex2f(0.58,0.15);
    glVertex2f(0.58,0.25);
    glEnd();


    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.72,0.65);
    glVertex2f(0.72,0.55);
    glVertex2f(0.58,0.55);
    glVertex2f(0.58,0.65);
    glEnd();


    glColor3f(0.72f,0.91f,0.73f);
    glBegin(GL_QUADS);
    glVertex2f(0.72,0.50);
    glVertex2f(0.72,0.40);
    glVertex2f(0.58,0.40);
    glVertex2f(0.58,0.50);
    glEnd();

    glColor3f(0.25,0.50,0.50);
    glBegin(GL_QUADS);
    glVertex2f(0.75,0.10);
    glVertex2f(0.75,0.67);
    glVertex2f(0.55,0.67);
    glVertex2f(0.55,0.10);
    glEnd();
}

void Building5()
{
    glColor3f(0.38f,0.19f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(0.30,0.80);
    glVertex2f(0.33,0.70);
    glVertex2f(.02,0.70);
    glVertex2f(.05,0.80);
    glEnd();

    glColor3f(0.0f,0.18f,0.350f);
    glBegin(GL_POLYGON);
     glVertex2f(0.19,0.72);
    glVertex2f(0.19,0.28);
    glVertex2f(0.16,0.28);
    glVertex2f(0.16,0.72);
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(0.20,0.10);
    glVertex2f(0.20,0.25);
    glVertex2f(0.15,0.25);
    glVertex2f(0.15,0.10);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.21,0.27);
    glVertex2f(0.21,0.17);
    glVertex2f(0.27,0.17);
    glVertex2f(0.27,0.27);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.08,0.27);
    glVertex2f(0.08,0.17);
    glVertex2f(0.14,0.17);
    glVertex2f(0.14,0.27);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.21,0.42);
    glVertex2f(0.21,0.32);
    glVertex2f(0.27,0.32);
    glVertex2f(0.27,0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.08,0.42);
    glVertex2f(0.08,0.32);
    glVertex2f(0.14,0.32);
    glVertex2f(0.14,0.42);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.21,0.57);
    glVertex2f(0.21,0.47);
    glVertex2f(0.27,0.47);
    glVertex2f(0.27,0.57);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.08,0.57);
    glVertex2f(0.08,0.47);
    glVertex2f(0.14,0.47);
    glVertex2f(0.14,0.57);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.21,0.72);
    glVertex2f(0.21,0.62);
    glVertex2f(0.27,0.62);
    glVertex2f(0.27,0.72);
    glEnd();

     glBegin(GL_POLYGON);
     glVertex2f(0.08,0.72);
    glVertex2f(0.08,0.62);
    glVertex2f(0.14,0.62);
    glVertex2f(0.14,0.72);
    glEnd();

    glColor3f(0.35,0.31,0.92);
     glBegin(GL_POLYGON);
     glVertex2f(0.05,0.10);
    glVertex2f(0.05,0.75);
    glVertex2f(0.30,0.75);
    glVertex2f(0.30,0.10);
    glEnd();
}

void Building7()
{
    glColor3f(0.87f,0.28f,0.0f);
    glBegin(GL_POLYGON);
    glVertex2f(-.25,0.50);
    glVertex2f(-.20,0.64);
    glVertex2f(-.05,0.64);
    glVertex2f(-.001,0.50);
    glEnd();

    glColor3f(1.0f,1.0f,0.70f);
    glBegin(GL_POLYGON);
    glVertex2f(-.165,.16);
    glVertex2f(-.165,.22);
    glVertex2f(-.22,.22);
    glVertex2f(-.22,.16);
    glEnd();

     glBegin(GL_POLYGON);
    glVertex2f(-0.15,.10);
    glVertex2f(-0.15,.23);
    glVertex2f(-0.09,.23);
    glVertex2f(-0.09,.10);
    glEnd();

     glBegin(GL_POLYGON);
     glVertex2f(-.022,.16);
    glVertex2f(-.022,.22);
    glVertex2f(-.078,.22);
    glVertex2f(-.078,.16);
    glEnd();

    glColor3f(1.0f,1.0f,0.70f);
    glBegin(GL_POLYGON);
    glVertex2f(-.15,.25);
    glVertex2f(-.15,.33);
    glVertex2f(-.22,.33);
    glVertex2f(-.22,.25);
    glEnd();

     glBegin(GL_POLYGON);
     glVertex2f(-.022,.25);
    glVertex2f(-.022,.33);
    glVertex2f(-.09,.33);
    glVertex2f(-.09,.25);
    glEnd();

    glColor3f(1.0f,1.0f,0.70f);
    glBegin(GL_POLYGON);
    glVertex2f(-.15,.36);
    glVertex2f(-.15,.44);
    glVertex2f(-.22,.44);
    glVertex2f(-.22,.36);
    glEnd();

     glBegin(GL_POLYGON);
     glVertex2f(-.022,.36);
    glVertex2f(-.022,.44);
    glVertex2f(-.09,.44);
    glVertex2f(-.09,.36);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.13,.25);
    glVertex2f(-0.13,.45);
    glVertex2f(-0.11,.45);
    glVertex2f(-0.11,.25);
    glEnd();

     glColor3f(0.50f,0.0f,0.0f);
     glBegin(GL_POLYGON);
     glVertex3f (-.24,.10, 0.0);
     glVertex3f (-.24,0.50, 0.0);
     glVertex3f (-.01,0.50, 0.0);
     glVertex3f (-.01,.10, 0.0);
    glEnd();
}



void Building9()
{

    glColor3f(0.0f,0.31f,0.31f);
    glBegin(GL_QUADS);
    glVertex2f(-.80,.15);
    glVertex2f(-.80,.25);
    glVertex2f(-.74,.25);
    glVertex2f(-.74,.15);
    glEnd();

    glColor3f(0.0f,0.31f,0.31f);
    glBegin(GL_QUADS);
    glVertex2f(-.72,.15);
    glVertex2f(-.72,.25);
    glVertex2f(-.66,.25);
    glVertex2f(-.66,.15);
    glEnd();

    glBegin(GL_POLYGON);
     glVertex2f(-.80,.30);
    glVertex2f(-.80,.40);
    glVertex2f(-.74,.40);
    glVertex2f(-.74,.30);
    glEnd();

    glBegin(GL_POLYGON);
     glVertex2f(-.72,.30);
    glVertex2f(-.72,.40);
    glVertex2f(-.66,.40);
    glVertex2f(-.66,.30);
    glEnd();


    glColor3f(1.0,0.65,0.42);
    glBegin(GL_POLYGON);
     glVertex2f(-.82,.10);
    glVertex2f(-.82,.45);
    glVertex2f(-.64,.45);
    glVertex2f(-.64,.10);
    glEnd();
}


void Building10()
{
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-.62,.15);
    glVertex2f(-.62,.25);
    glVertex2f(-.57,.25);
    glVertex2f(-.57,.15);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-.53,.15);
    glVertex2f(-.53,.25);
    glVertex2f(-.48,.25);
    glVertex2f(-.48,.15);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-.62,.30);
    glVertex2f(-.62,.40);
    glVertex2f(-.57,.40);
    glVertex2f(-.57,.30);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-.53,.30);
    glVertex2f(-.53,.40);
    glVertex2f(-.48,.40);
    glVertex2f(-.48,.30);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-.62,.45);
    glVertex2f(-.62,.55);
    glVertex2f(-.57,.55);
    glVertex2f(-.57,.45);
    glEnd();

    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-.53,.45);
    glVertex2f(-.53,.55);
    glVertex2f(-.48,.55);
    glVertex2f(-.48,.45);
    glEnd();


    glColor3f(0.0,0.0,0.25);
    glBegin(GL_POLYGON);
    glVertex2f(-.64,.10);
    glVertex2f(-.64,.60);
    glVertex2f(-.46,.60);
    glVertex2f(-.46,.10);
 glEnd();
}


void Grass()
{
    glColor3f(0.0,0.43,0.0);
    glBegin(GL_QUADS);
    glVertex2f(-1.0,.01);
    glVertex2f(-1.0,.05);
    glVertex2f(1.0,.05);
    glVertex2f(1.0,0.01);
 glEnd();
}

void Cloud1()
{
   glColor3f(0.50,0.50,0.50);
   circle(-0.85,0.77,0.15);
   circle(-0.79,0.70,0.15);
   circle(-0.70,0.70,0.15);
   circle(-0.75,0.77,0.15);
}

void Cloud2()
{
   glColor3f(0.80,0.80,0.80);
   circle(0.35,0.77,0.15);
   circle(0.45,0.70,0.15);
   circle(0.55,0.75,0.15);
   circle(0.45,0.80,0.15);
}


void Sky()
{
    glColor3f(0.73, 0.73, 1);
	glBegin(GL_QUADS);
    glVertex2f(-1.0,.10);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,0.10);
 glEnd();
}
void Footpath()
{
    glColor3f(0.5,0.5,0.52);
    glBegin(GL_QUADS);
    glVertex2f(-1.0,.02);
    glVertex2f(-1.0,0.40);
    glVertex2f(1.0,0.40);
    glVertex2f(1.0,0.02);
glEnd();
}

void Footpath1()
{
    glColor3f(0.5,0.5,0.52);
    glBegin(GL_QUADS);
    glVertex2f(-1.0,-.99);
    glVertex2f(-1.0,-.89);
    glVertex2f(1.0,-.89);
    glVertex2f(1.0,-.99);
glEnd();
}

void Plane(){

    glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
            glVertex2f(getX(-400),getY(0));
            glVertex2f(getX(-350),getY(0));
            glVertex2f(getX(-335),getY(10));
            glVertex2f(getX(-350),getY(20));
            glVertex2f(getX(-400),getY(20));
    glEnd();

    glBegin(GL_QUADS);

            glVertex2f(getX(-385),getY(0));
            glVertex2f(getX(-390),getY(-10));
            glVertex2f(getX(-380),getY(-10));
            glVertex2f(getX(-365),getY(0));
    glEnd();

    glBegin(GL_QUADS);

            glVertex2f(getX(-385),getY(20));
            glVertex2f(getX(-390),getY(30));
            glVertex2f(getX(-380),getY(30));
            glVertex2f(getX(-365),getY(20));
    glEnd();


}

 void Road_line()
 {
    glLineWidth(6);
    glColor3f(1.000, 0.843, 0.000);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-.60);
    glVertex2f(1.0,-.60);
glEnd();
 }

 void Road_line1()
 {
    glLineWidth(6);
    glColor3f(1.000, 0.843, 0.000);
    glBegin(GL_LINES);
    glVertex2f(-1.0,-.25);
    glVertex2f(1.0,-.25);
glEnd();
 }


 void Road()
 {
   glColor3f(0.21f,0.21f,0.21f);
   glBegin(GL_QUADS);
   glVertex2f(-1.0,-1.0);
   glVertex2f(-1.0,.10);
   glVertex2f(1.0,.10);
   glVertex2f(1.0,-1.0);
   glEnd();
 }

 void Bullet()
 {
      glColor3f(0.0f,0.0f,0.21f);
      glBegin(GL_QUADS);
            glVertex2f(getX(-360),getY(8));
            glVertex2f(getX(-340),getY(8));
            glVertex2f(getX(-340),getY(14));
            glVertex2f(getX(-360),getY(14));
   glEnd();

 }
void enemy1()
{
    glBegin(GL_QUADS);
            glVertex2f(1.2,0);
            glVertex2f(1.3,0);
            glVertex2f(1.3,0.1);
            glVertex2f(1.2,0.1);
   glEnd();
}

void enemy2()
{
    glBegin(GL_QUADS);
            glVertex2f(1.2,0.3);
            glVertex2f(1.25,0.3);
            glVertex2f(1.25,0.45);
            glVertex2f(1.2,0.45);
   glEnd();
}

void enemy3()
{
    glBegin(GL_QUADS);
            glVertex2f(getX(360),getY(-60));
            glVertex2f(getX(400),getY(-60));
            glVertex2f(getX(400),getY(-110));
            glVertex2f(getX(360),getY(-110));
   glEnd();
}

void enemy4()
{
    glBegin(GL_QUADS);
            glVertex2f(getX(360),getY(-150));
            glVertex2f(getX(400),getY(-150));
            glVertex2f(getX(400),getY(-200));
            glVertex2f(getX(360),getY(-200));
   glEnd();
}





void Display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1,0,0);
	glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glTranslatef(plane_movex,plane_movey, 0.0);
    Plane();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(bullet_movex,bullet_movey, 0.0);
    Bullet();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(enemy1_movex,0.0, 0.0);
    enemy1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-enemy2_movex,0.0, 0.0);
    enemy2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-enemy3_movex,0.0, 0.0);
    enemy3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-enemy4_movex,0.0, 0.0);
    enemy4();
    glPopMatrix();


    Building1();
    Building5();
    Building7();
    Grass();
    Building2();
    Building9();
    Building10();
    Tree1();



    Cloud1();
    glPopMatrix();

    Cloud2();
    glPopMatrix();





            if((float)plane_movey >= .93f){
                        coun++;
                        plane_movey=.92;
               }

               if((float)plane_movey <= -.97f){
                        coun++;
                        plane_movey=-.960;
               }

               if((float)plane_movex >= 1.0f){
                        coun++;
                        plane_movex=1.0;
               }

               if((float)plane_movex <= -.46f){
                        coun++;
                        plane_movex=-.46;
               }



    Sky();
    Footpath();
    Footpath1();
    Road_line();
    Road_line1();
    Road();
    glFlush();
	glutSwapBuffers();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1350,800);

	glutCreateWindow("Airplane shoot");
	initRendering();

	glutDisplayFunc(Display);


	glutSpecialFunc(specialKeys);


	glutTimerFunc(15, update, 0);
	glutMainLoop();
	return 0;
}
