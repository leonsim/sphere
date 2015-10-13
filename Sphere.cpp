#include <iostream>
#include <GL/glut.h>
#include <math.h>
//2008.10.30
using namespace std;
void myinit(){
	glClearColor (0.0, 0.0, 0.0, 1.0);
	glColor3f(0.7, 0.2, 0.9); 
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);  
	glRotatef(-30.0,1.0,0.0,0.0);
}
void displaywithquads(){
	static int n=0;
	n++;
	glClear(GL_COLOR_BUFFER_BIT);
	double M_PI=3.1415926535;
	double c,phi,phir,phir20,theta,thetar,x,y,z;
	c=M_PI/180.0;
	 glPolygonMode(GL_FRONT,GL_LINE);
	 glPolygonMode(GL_BACK,GL_LINE);
	for(phi=-80;phi<=80;phi+=20.0){
	 //phi=-80;
		phir=c*phi;
		phir20=c*(phi+20);
		glBegin(GL_QUADS);
		thetar=c*(-180.0);
		x=sin(thetar)*cos(phir);
		y=cos(thetar)*cos(phir);
		z=sin(phir);
		glVertex3d(x,y,z);
		x=sin(thetar)*cos(phir20);
		y=cos(thetar)*cos(phir20);
		z=sin(phir20);
		glVertex3d(x,y,z);
		for(theta=-170.0;theta<=170.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
		}
		thetar=c*theta;
		x=sin(thetar)*cos(phir20);
		y=cos(thetar)*cos(phir20);
		z=sin(phir20);
		glVertex3d(x,y,z);
		x=sin(thetar)*cos(phir);
		y=cos(thetar)*cos(phir);
		z=sin(phir);
		glVertex3d(x,y,z);

		glEnd();
	}

	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,1.0);
		double c80=c*80.0;
		z=sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,-1.0);
		z=-sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	
	glFlush();
	if(n==1)
		printf("The elapsed time is: %d\n",glutGet(GLUT_ELAPSED_TIME));

}
void displaywithtrianglestrip(){
	static int n=0;
	n++;
	glClear(GL_COLOR_BUFFER_BIT);
	double M_PI=3.1415926535;
	double c,phi,phir,phir20,theta,thetar,x,y,z;
	c=M_PI/180.0;
	 glPolygonMode(GL_FRONT,GL_LINE);
	 glPolygonMode(GL_BACK,GL_LINE);
	for(phi=-80;phi<=80;phi+=20.0){
	 //phi=-80;
		phir=c*phi;
		phir20=c*(phi+20);
		glBegin(GL_TRIANGLE_STRIP);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
		}
		glEnd();
	}

	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,1.0);
		double c80=c*80.0;
		z=sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,-1.0);
		z=-sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	
	glFlush();
	if(n==1)
		printf("The elapsed time is: %d\n",glutGet(GLUT_ELAPSED_TIME));

}
void displaywithtriangles(){
	static int n=0;
	n++;
	glClear(GL_COLOR_BUFFER_BIT);
	double M_PI=3.1415926535;
	double c,phi,phir,phir20,theta,thetar,x,y,z;
	c=M_PI/180.0;
		glPolygonMode(GL_FRONT,GL_LINE);
	 glPolygonMode(GL_BACK,GL_LINE);
	for(phi=-80;phi<=80;phi+=20.0){
	 //phi=-80;
		phir=c*phi;
		phir20=c*(phi+20);
		glBegin(GL_TRIANGLES);
		for(theta=-180.0;theta<=180.0;){
			thetar=c*theta;
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
			theta+=10.0;
			thetar=c*theta;
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			theta-=10.0;
			thetar=c*theta;
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
			theta+=10.0;
			thetar=c*theta;
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
		}
		glEnd();
	}

	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,1.0);
		double c80=c*80.0;
		z=sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,-1.0);
		z=-sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	
	glFlush();
	if(n==1)
		printf("The elapsed time is: %d\n",glutGet(GLUT_ELAPSED_TIME));

}
void displaywithquadstrip(){
	static int n=0;
	n++;
	glClear(GL_COLOR_BUFFER_BIT);
	double M_PI=3.1415926535;
	double c,phi,phir,phir20,theta,thetar,x,y,z;
	c=M_PI/180.0;
	 glPolygonMode(GL_FRONT,GL_LINE);
	 glPolygonMode(GL_BACK,GL_LINE);
	for(phi=-80;phi<=80;phi+=20.0){
	 //phi=-80;
		phir=c*phi;
		phir20=c*(phi+20);
		glBegin(GL_QUAD_STRIP);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(phir);
			y=cos(thetar)*cos(phir);
			z=sin(phir);
			glVertex3d(x,y,z);
			x=sin(thetar)*cos(phir20);
			y=cos(thetar)*cos(phir20);
			z=sin(phir20);
			glVertex3d(x,y,z);
		}
		glEnd();
	}

	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,1.0);
		double c80=c*80.0;
		z=sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	glBegin(GL_TRIANGLE_FAN);
		glVertex3d(0.0,0.0,-1.0);
		z=-sin(c80);
		for(theta=-180.0;theta<=180.0;theta+=10.0){
			thetar=c*theta;
			x=sin(thetar)*cos(c80);
			y=cos(thetar)*cos(c80);
			glVertex3d(x,y,z);
		}
	glEnd();
	
	glFlush();
	if(n==1)
		printf("The elapsed time is: %d\n",glutGet(GLUT_ELAPSED_TIME));

}
int main(int argc,char **argv){
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Shpere");
	
	
	//Choose one of these 4 method:
	//glutDisplayFunc(displaywithquadstrip);
	//glutDisplayFunc(displaywithquads);
	//glutDisplayFunc(displaywithtrianglestrip);
	glutDisplayFunc(displaywithtriangles);
	
	
	myinit();
	glutMainLoop();
	return 0;
}
