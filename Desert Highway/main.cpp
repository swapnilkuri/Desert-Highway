#include <GL/glut.h>
#include <iostream>
#include <math.h>
using namespace std;

float cloudOffset = 0.0f;
float leafOffset = 0.0f;
float carX = 0.0f;         // Car's horizontal position
float carSpeed = 0.2f;  // Initial car speed
bool isCarMoving = false;  // Car movement toggle
bool isNight = false;               // Current mode



void drawCircle(float cx, float cy, float r)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy); // center
    for (int angle = 0; angle <= 360; angle += 10) {
        float radian = angle * 3.1416f / 180.0f;
        glVertex2f(cx + cos(radian) * r, cy + sin(radian) * r);
    }
    glEnd();
}


void A_Stones1()
{
    // Color for stones
    glColor3ub(90, 80, 70);
    // Left side stones
    drawCircle(-75.0f, -4.0f, 3.0f);/// 1 from left side /// these 3 makes one big stone
}
void A_Stones2()
{   glColor3ub(124, 96, 91);
    drawCircle(-72.0f, -6.0f, 1.5f); ///2 from left side /// these 3 makes one big stone
}
void A_Stones3()///beside the stone no 2 /// these 3 makes one big stone
    {   glColor3ub(99, 78, 75  );
        drawCircle(-68.0f, -3.5f, 4.0f);
    }
   void A_Stones4()///Above the road black color right side
        {
        glColor3ub (51, 44, 43 );
       drawCircle(-78.0f, -28.2f, 3.5f);
        }
void A_Stones5() ///around the tree 2 left side
    {
    glColor3ub (90, 80, 70 );
    drawCircle(-42.0f, -9.0f, 2.0f);
     }

// Center stones
void A_Stones6() ///around the tree 2 right side
    {
    glColor3ub (90, 80, 70  );
     drawCircle(-40.0f, -8.7f, 2.3f);
     }
void A_Stones7()///around the tree 3 left side
    {
    glColor3ub (51, 44, 43 );
    drawCircle(-23.0f, -24.4f, 3.0f);
     }
void A_Stones8()///middle of tree3
{
    glColor3ub (51, 44, 43 );
    drawCircle(-18.0f, -23.5f, 2.3f);
     }
void A_Stones9() ///right of tree 3
{
    glColor3ub (51, 44, 43 );
     drawCircle(-15.0f, -20.2f, 1.4f);
      }
void A_Stones10()///middle of the ground
{
    glColor3ub (51, 44, 43 );
    drawCircle(8.0f, -9.0f, 2.6f);
     }
void A_Stones11() ///middle of the ground 2
{glColor3ub (51, 44, 43 );
    drawCircle(16.0f, -8.8f, 1.1f);
     }
void A_Stones12()/// right side of tree 4
    {
    glColor3ub (51, 44, 43 );
     drawCircle(22.5f, -29.0f, 1.9f);
     }
void A_Stones13() ///left side stone from the tree no 5
    {
     drawCircle(34.0f, -9.2f, 2.7f);
     }

// Right-side stones
void A_Stones14() ///with the tree no 5
    {
    glColor3ub (51, 44, 43 );
    drawCircle(40.0f, -9.3f, 1.3f);
     }
void A_Stones15() ///right side stone from the tree no 5
    {
     glColor3ub (51, 44, 43 );
    drawCircle(48.0f, -9.0f, 2.2f);
     }
void A_Stones16() ///no 4 from the right side of the animation
 {glColor3ub (51, 44, 43 );
     drawCircle(58.0f, -27.1f, 3.5f);
     }  // Big stone
void A_Stones17() ///no 3 from the right side of the animation
{glColor3ub (51, 44, 43 );
    drawCircle(63.0f, -28.4f, 2.0f);
     }
void A_Stones18() /// no 2 from the right side of the animation
{
    glColor3ub (51, 44, 43 );
     drawCircle(68.0f, -28.3f, 3.0f);
      }  // Big stone
void A_Stones19()///The last one on the right side
{   glColor3ub (51, 44, 43 );
     drawCircle(77.5f, -9.2f, 4.5f);
      }



////#Clouds
void Cloud1()
{
    glColor3f(1.0f, 1.0f, 1.0f); // white cloud
    drawCircle(-51.0f + cloudOffset, 40.0f, 4.0f);
    drawCircle(-47.0f + cloudOffset, 42.0f, 5.0f);
    drawCircle(-43.0f + cloudOffset, 40.0f, 4.0f);
}

void Cloud2()
{   glColor3f(1.0f, 1.0f, 1.0f); // white cloud
    drawCircle(1.0f + cloudOffset, 38.0f, 4.0f);
    drawCircle(5.0f + cloudOffset, 40.0f, 5.0f);
    drawCircle(9.0f + cloudOffset, 38.0f, 4.0f);

}

void Cloud3()
{
    glColor3f(1.0f, 1.0f, 1.0f); // white cloud
    drawCircle(39.0f + cloudOffset, 40.0f, 4.0f);
    drawCircle(43.0f + cloudOffset, 42.0f, 5.0f);
    drawCircle(47.0f + cloudOffset, 40.0f, 4.0f);

}





//#Sun
void A_Sun()
{

float sunX = 60.0f;
float sunY = 35.0f;
float radius = 5.0f;

glColor3f(1.0f, 0.7f, 0.0f);

glBegin(GL_TRIANGLE_FAN);
glVertex2f(sunX, sunY);
for (int angle = 0; angle <= 360; angle += 10) {
    float radian = angle * 3.1416f / 180.0f;
    float x = sunX + cos(radian) * radius;
    float y = sunY + sin(radian) * radius;
    glVertex2f(x, y);
}
glEnd();
}


//#A_hills
void A_hills1()
    {
    glBegin(GL_POLYGON);// big rock 1 like black
    glColor3f(0.5f, 0.4f, 0.4f);
    glVertex2f(-80.0f, 0.0f);
    glVertex2f(-60.0f, 30.0f);
    glVertex2f(-40.0f, 0.0f);
    glEnd();
    }

void A_hills2()
{
glBegin(GL_POLYGON);// small rock 2 like black
    glColor3f(0.5f, 0.4f, 0.4f);
    glVertex2f(-16.47f, 0.22f);
    glVertex2f(0.58f, 20.6f);
    glVertex2f(20.0f, 0.0f);
    glEnd();

}
    void A_hills3()
{
    glBegin(GL_POLYGON);// small rock 3 like black
    glColor3f(0.5f, 0.4f, 0.4f);
    glVertex2f(20.0f, 0.0f);
    glVertex2f(28.08f, 25.0f);
    glVertex2f(45.08f, 23.11f);
    glVertex2f(50.0f, 0.0f);
    glEnd();
}
void A_hills4()
{
    glBegin(GL_POLYGON);// small rock 4 like black
    glColor3f(0.5f, 0.4f, 0.4f);
    glVertex2f(50.0f, 0.0f);
    glVertex2f(64.7f, 24.7f);
    glVertex2f(80.0f, 0.0f);
    glEnd();
}
    //Big hill
void A_hills5()
{
    glBegin(GL_POLYGON);// big rock 1
    glColor3f(0.7f, 0.6f, 0.5f);
    glVertex2f(-80.0f, 0.0f);
    glVertex2f(-80.05f, 29.46f);
    glVertex2f(-60.0f, 0.0f);
    glEnd();
}

void A_hills6()
{
    glBegin(GL_POLYGON);// big rock 2
    glColor3f(0.7f, 0.6f, 0.5f);;
    glVertex2f(-60.0f, 0.0f);
    glVertex2f(-42.80f, 28.64f);
    glVertex2f(-23.90f, 18.77f);
    glVertex2f(-13.16f, 29.7f);
    glVertex2f(0.0f, 0.0f);
    glEnd();
}
void A_hills7()
{
    glBegin(GL_POLYGON);// big rock 3
    glColor3f(0.7f, 0.6f, 0.5f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(24.32f, 30.11f);
    glVertex2f(39.16f, 0.0f);
    glEnd();
}
void A_hills8()
{
    glBegin(GL_POLYGON);// big rock 4
    glColor3f(0.7f, 0.6f, 0.5f);
    glVertex2f(35.16f, 0.0f);
    glVertex2f(47.78f, 29.38f);
    glVertex2f(67.56f, 0.0f);
    glEnd();
}
void A_hills9()
{
    glBegin(GL_POLYGON);// big rock 5
    glColor3f(0.7f, 0.6f, 0.5f);
    glVertex2f(67.56f, 0.029f);
    glVertex2f(80, 30);
    glVertex2f(80.0f, 0.0f);
    glEnd();

    }


//#Grounds
void A_Groud1()//Grounds above the road

{
    glBegin(GL_POLYGON); //Black brown ground
    glColor3ub(249, 222, 117);
    glVertex2f(-80.0f, 0.0f);
    glVertex2f(80.0f, 0.0f);
    glVertex2f(80, -10);
    glEnd();
}

void A_Groud2()
{
    glBegin(GL_POLYGON); //ground above ground 3
    glColor3ub(239, 166, 64);
    glVertex2f(-80.0f, 0.0f);
    glVertex2f(-80, -30);
    glVertex2f(80, -10);
    glEnd();
}
void A_Groud3()
{
    glBegin(GL_POLYGON); //ground3 near road
    glColor3ub (232, 146, 87);
    glVertex2f(-80.0f, -30.0f);
    glVertex2f(80.0f, -30.0f);
    glVertex2f(80.0f, -10.0f);
    glEnd();

}


//#Desert Trees
void A_DesertTrees1() {
    glLineWidth(3.0f);
    glColor3ub(0, 100, 0); // Dark green color

    // Tree 1 (Upper ground left)
    glBegin(GL_LINES);
        glVertex2f(-60, 0);
        glVertex2f(-60, 6); // smaller trunk
        glVertex2f(-60, 3);
        glVertex2f(-62+ leafOffset, 5); // tiny branches
        glVertex2f(-60+ leafOffset, 3);
        glVertex2f(-58+ leafOffset, 5);

    glEnd();
}
    // Tree 2 (Middle ground left)
void A_DesertTrees2(){
 glLineWidth(3.0f);
    glColor3ub(0, 100, 0); // Dark green color
    glBegin(GL_LINES);
        glVertex2f(-40 , -10);
        glVertex2f(-40 , 0);
        glVertex2f(-40 , -5);
        glVertex2f(-43+ leafOffset, -2);
        glVertex2f(-40+ leafOffset,-5);
        glVertex2f(-37+ leafOffset,-2);
    glEnd();
}

    // Tree 3 (Lower yellow ground center)
void A_DesertTrees3() {
    glLineWidth(3.0f);
    glColor3ub(0, 100, 0); // Dark green color

    glBegin(GL_LINES);
        glVertex2f(-20 , -25);
        glVertex2f(-20 , -10);
        glVertex2f(-20 , -18);
        glVertex2f(-25 + leafOffset, -14);
        glVertex2f(-20 + leafOffset, -18);
        glVertex2f(-15 + leafOffset, -14);
    glEnd();
}

    // Tree 4 (Near road right)
void A_DesertTrees4(){
 glLineWidth(7.0f);
    glColor3ub(0, 100, 0); // Dark green color
    glBegin(GL_LINES);
        glVertex2f(20 , -30);
        glVertex2f(20 , -15);
        glVertex2f(20 , -22);
        glVertex2f(15 + leafOffset, -18);
        glVertex2f(20 + leafOffset, -22);
        glVertex2f(25 + leafOffset, -18);
    glEnd();
}
    // Tree 5 (Middle ground right)
void A_DesertTrees5(){
 glLineWidth(3.0f);
    glColor3ub(0, 100, 0); // Dark green color
    glBegin(GL_LINES);
        glVertex2f(40 , -10);
        glVertex2f(40 , 0);
        glVertex2f(40 , -5);
        glVertex2f(37 + leafOffset, -1);
        glVertex2f(40 + leafOffset, -5);
        glVertex2f(43 + leafOffset, -1);
    glEnd();
}
    // Tree 6 (Upper ground right)
void A_DesertTrees6(){
 glLineWidth(3.0f);
    glColor3ub(0, 100, 0); // Dark green color
    glBegin(GL_LINES);
        glVertex2f(60 , 0);
        glVertex2f(60 , 6); // smaller trunk
        glVertex2f(60 , 3);
        glVertex2f(58 + leafOffset, 5); // tiny branches
        glVertex2f(60 + leafOffset, 3);
        glVertex2f(62 + leafOffset, 5);
    glEnd();
}
/////////////////////////////////////
////////////////////////////////////
/////////////////////////////////////
///////////////////////////////////
///////////////////////////////////////


void timer(int value)
{
    // Simulate simple leaf movement (oscillating back and forth)
    leafOffset = 0.05f * sin(value * 0.1f);  // Simple sine wave motion

    //  Move clouds to the right
    cloudOffset += 0.01f;
    if (cloudOffset > 160.0f)
        cloudOffset = -160.0f;


    // Request a redraw
    glutPostRedisplay();

    // Set up the next timer event
    glutTimerFunc(30, timer, value + 1);  // Update every 30 ms
}

void moveCar(int value)

 {
    if (isCarMoving)
        {
        carX += carSpeed; // move speed
        if (carX > 160) carX = -160; // loop around
        glutPostRedisplay();
        glutTimerFunc(10, moveCar, 0); // keep updating
    }
}


// #Car
void A_car()
{
    glPushMatrix();
    glTranslatef(carX, 0, 0); // Move car horizontally
    // Main body
    glBegin(GL_POLYGON);
    glColor3ub(245, 36, 3);
    glVertex2f(-72.4f, -46.3f);
    glVertex2f(-72.5f, -38.8f);
    glVertex2f(-58.4f, -38.6f);
    glVertex2f(-56.3f, -31.7f);
    glVertex2f(-40.1f, -31.7f);
    glVertex2f(-32.8f, -39.3f);
    glVertex2f(-20.0f, -40.0f);
    glVertex2f(-20.0f, -46.4f);
    glEnd();

    // Window 1
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-55.9f, -33.3f);
    glVertex2f(-49.3f, -33.2f);
    glVertex2f(-49.9f, -38.4f);
    glVertex2f(-56.2f, -38.2f);
    glEnd();

    // Window 2
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-46.7f, -33.5f);
    glVertex2f(-46.7f, -38.6f);
    glVertex2f(-35.5f, -39.1f);
    glVertex2f(-40.6f, -33.6f);
    glEnd();

  // Back wheel
float backWheelX = -62;
float backWheelY = -46;
float wheelRadius = 3;

glColor3f(1.0f, 1.0f, 1.0f); // white wheel
glBegin(GL_TRIANGLE_FAN);
    glVertex2f(backWheelX, backWheelY); // center
    for (int angle = 0; angle <= 360; angle += 10) {
        float radian = angle * 3.1416f / 180.0f;
        float x = backWheelX + cos(radian) * wheelRadius;
        float y = backWheelY + sin(radian) * wheelRadius;
        glVertex2f(x, y);
    }
glEnd();

// Front wheel
float frontWheelX = -28;
float frontWheelY = -46;

glBegin(GL_TRIANGLE_FAN);
    glVertex2f(frontWheelX, frontWheelY); // center
    for (int angle = 0; angle <= 360; angle += 10) {
        float radian = angle * 3.1416f / 180.0f;
        float x = frontWheelX + cos(radian) * wheelRadius;
        float y = frontWheelY + sin(radian) * wheelRadius;
        glVertex2f(x, y);
    }
glEnd();


    glPopMatrix();
}



//#Road & divider
void A_road()
{
    glColor3ub(73, 29, 20); // Dark brown road
    glBegin(GL_QUADS);
    glVertex2f(-80, -50);
    glVertex2f(80, -50);
    glVertex2f(80, -30);
    glVertex2f(-80, -30);
    glEnd();
}

void A_roadanddivider1()
{
    // White dividers manually placed
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 1
    glVertex2f(-80, -39);
    glVertex2f(-70, -39);
    glVertex2f(-70, -40);
    glVertex2f(-80, -40);
    glEnd();
}

void A_roadanddivider2()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 2
    glVertex2f(-60, -39);
    glVertex2f(-50, -39);
    glVertex2f(-50, -40);
    glVertex2f(-60, -40);
    glEnd();
}

void A_roadanddivider3()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 3
    glVertex2f(-40, -39);
    glVertex2f(-30, -39);
    glVertex2f(-30, -40);
    glVertex2f(-40, -40);
    glEnd();
}
void A_roadanddivider4()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 4
    glVertex2f(-20, -39);
    glVertex2f(-10, -39);
    glVertex2f(-10, -40);
    glVertex2f(-20, -40);
    glEnd();
}

void A_roadanddivider5()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 5
    glVertex2f(0, -39);
    glVertex2f(10, -39);
    glVertex2f(10, -40);
    glVertex2f(0, -40);
    glEnd();
}

void A_roadanddivider6()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 6
    glVertex2f(20, -39);
    glVertex2f(30, -39);
    glVertex2f(30, -40);
    glVertex2f(20, -40);
    glEnd();
}

void A_roadanddivider7()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 7
    glVertex2f(40, -39);
    glVertex2f(50, -39);
    glVertex2f(50, -40);
    glVertex2f(40, -40);
    glEnd();
}
void A_roadanddivider8()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_QUADS); //divider no 8
    glVertex2f(60, -39);
    glVertex2f(70, -39);
    glVertex2f(70, -40);
    glVertex2f(60, -40);
    glEnd();
}
void Star1() //from left
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POINTS);
    glVertex2f(-70.0f, 40.0f);
    glEnd();
}

void Star2()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POINTS);
    glVertex2f(-10.0f, 35.0f);
    glEnd();
}

void Star3() {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POINTS);
    glVertex2f(10.0f, 45.0f);
    glEnd();
}



void Star4() {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POINTS);
    glVertex2f(30.0f, 48.0f);
    glEnd();
}

void Star5() {
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POINTS);
    glVertex2f(55.0f, 42.0f);
    glEnd();
}


void display()
{
    if (isNight)
        glClearColor(0.0f, 0.0f, 0.2f, 1.0f); // Night sky

    else
        glClearColor(0.53f, 0.81f, 0.98f, 1.0f); // Day sky

    glClear(GL_COLOR_BUFFER_BIT);

    if (!isNight)
        {
        A_Sun();
    }
   else {
    // Draw moon
    glColor3f(1.0f, 1.0f, 0.8f); // Moon
    drawCircle(60.0f, 35.0f, 4.0f); // Same sun position

    // Draw individual stars
    Star1();
    Star2();
    Star3();
    Star4();
    Star5();
}


    // Common scene
if (!isNight) {
    Cloud1();
    Cloud2();
    Cloud3();
}

    A_hills1(); A_hills2(); A_hills3(); A_hills4(); A_hills5();
    A_hills6(); A_hills7(); A_hills8(); A_hills9();
    A_Groud1(); A_Groud2(); A_Groud3();
    A_DesertTrees1(); A_DesertTrees2(); A_DesertTrees3();
    A_DesertTrees4(); A_DesertTrees5(); A_DesertTrees6();
    A_road();
    A_roadanddivider1(); A_roadanddivider2(); A_roadanddivider3();
    A_roadanddivider4(); A_roadanddivider5(); A_roadanddivider6();
    A_roadanddivider7(); A_roadanddivider8();
    A_Stones1(); A_Stones2(); A_Stones3(); A_Stones4(); A_Stones5();
    A_Stones6(); A_Stones7(); A_Stones8(); A_Stones9(); A_Stones10();
    A_Stones11(); A_Stones12(); A_Stones13(); A_Stones14(); A_Stones15();
    A_Stones16(); A_Stones17(); A_Stones18(); A_Stones19();
    A_car();

    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
    if (key == 'a' || key == 'A') {
        isNight = false;  // Set to day
        glutPostRedisplay();
    }
    else if (key == 's' || key == 'S') {
        isNight = true;   // Set to night
        glutPostRedisplay();
    }
   else if (key == 'r' || key == 'R') {
    isCarMoving = false;  // Stop the car
    carSpeed = 0.2f;       // (Optional) Reset speed
}
}




//##for CAR
void mouseClick(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        isCarMoving = true;       // enable movement
        glutTimerFunc(60, moveCar, 0); // start moving
    }

    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        if (carSpeed > 0.05f) {
            carSpeed -= 0.05f; // decrease speed
        }
    }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Desert Highway");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-80, 80, -50, 70);

    glutDisplayFunc(display);
    glutMouseFunc(mouseClick);// for Car
    glutKeyboardFunc(keyboard);
    glutTimerFunc(0, timer, 0);  // Start the timer for animation

    glutMainLoop();
    return 0;
}
