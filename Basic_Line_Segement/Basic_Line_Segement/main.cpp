#include <gl/glut.h>
#define X_MAX 640
#define Y_MAX 480
#define X_POS 200
#define Y_POS 150

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, X_POS, 0, Y_POS);
}

void lineSegment(void)
{
	int points[][2] = { {180, 15}, {10, 145} };
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.4, 0.2);
	glBegin(GL_LINE_LOOP);
		glVertex2f(50.0, 37.5);
		glVertex2i(150.0, 37.5);
		glVertex2i(150.0, 112.5);
		glVertex2i(50, 112.5);
		//glVertex2iv(points[0]);
		//glVertex2iv(points[1]);
		//glVertex3i(180, 15, 0);
		//glVertex3i(10, 145, 0);
		//glVertex4i(180, 15, 0, 1);
		//glVertex4i(10, 145, 0, 1);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(75, 50);
	glutInitWindowSize(200, 150);
	glutCreateWindow("Rectangle");

	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();

	return 0;
}