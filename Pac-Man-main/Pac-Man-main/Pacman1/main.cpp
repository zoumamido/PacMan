#include<windows.h>
#include<mmsystem.h>
#include <string>
#include<math.h>
#include<stdio.h>
#include<conio.h>
#include <cmath>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include<windows.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include<time.h>
using namespace std;
#define pi 3.1417
#define inc 0.003
#define PacRadius 13

///////////////////////////////////////////LEVEL 2 VARIABLES//////////////////////////////////////////////////////////////////
int pacLiveRadius1_lev2=13;
int pacLiveRadius2_lev2=13;
int pacLiveRadius3_lev2=13;
int score_lev2 =0;
int counter_lev2=0;
static float mouthSize2_lev2 = 0.6; // default size of pacman lives
float ghost1_x_lev2= 70;
float ghost1_y_lev2= 270;
float ghost2_x_lev2 = 300;
float ghost2_y_lev2= 520;
float ghost3_x_lev2 = 30;
float ghost3_y_lev2= 520;
float Pacman_x_lev2 = 80;
float Pacman_y_lev2 = 80;
float PacLive1x_lev2 = 420;
float PacLive1y_lev2 = 580;
float PacLive2x_lev2 = 460;
float PacLive2y_lev2 = 580;
float PacLive3x_lev2 = 500;
float PacLive3y_lev2 = 580;
boolean ff_lev2 = 0;
boolean lf_lev2 = 0;
boolean up_lev2 = 0;
boolean down_lev2 = 0;
boolean rightt_lev2 = 1;
boolean leftt_lev2 = 0;
bool gameOver_lev2=false;
static float mouthSizeBegin_lev2 = 0.785398;
static float mouthSizeEnd_lev2 = 5.49779;
//point of level 2
int p2t1x = 75; int p2t1y = 75; int p2t2x = 75;int p2t2y = 95;int p2t3y =  115;int p2t3x =  75;int p2t4y = 135;int p2t4x =  75;int p2t5y = 155;int p2t5x =  75;int p2t6y = 175;int p2t6x =  75;int p2t7y = 195;int p2t7x =  75;int p2t8y = 215;int p2t8x =  75;int p2t9y = 235;int p2t9x =  75;int p2t10y = 255;
int p2t10x =  75;int p2t11y = 275;int p2t11x =  75;int p2t12y = 295;int p2t12x =  75;int p2t13y = 295;int p2t13x =  75;int p2t14y = 315;int p2t14x =  75;int p2t15x =  75;int p2t15y = 335;int p2t16y = 355;
int p2t16x =  75;int p2t17y = 375;int p2t17x =  75;int p2t18y = 395;int p2t18x =  75;int p2t19y = 415;int p2t19x =  75;int p2t20y = 435;int p2t20x =  75;int p2t21y = 455;int p2t21x =  75;int p2t22y = 475;int p2t22x =  75;int p2t23y = 495;int p2t23x =  75;int p2t24y = 515;int p2t24x =  75;
//second column..bottom
int p2t25x=300;int p2t26x=300;
int p2t25y=95;int p2t26y=115;
//second column..top
int p2t33x=330;int p2t34x=350;int p2t35x=370;int p2t36x=390;int p2t37x=410;int p2t38x=430;int p2t39x=310;int p2t40x=310;
int p2t33y=520;int p2t34y=520;int p2t35y=520;int p2t36y=520;int p2t37y=520;int p2t38y=520;int p2t39y=480;int p2t40y=500;
// fourth column
int p2t41x=530;int p2t42x=530;int p2t43x=530;int p2t44x=530;int p2t45x=530;int p2t46x=530;int p2t47x=530;int p2t48x=530;int p2t49x=530;int p2t50x=530;int p2t51x=530;int p2t52x=530;int p2t53x=530;int p2t54x=530;int p2t55x=530;int p2t56x=530;int p2t57x=530;int p2t58x=530;int p2t59x=530;int p2t60x=530;int p2t61x=530;int p2t62x=530;int p2t63x=530;
int p2t41y=75;int p2t42y=95;int p2t43y=115;int p2t44y=135;int p2t45y=155;int p2t46y=175;int p2t47y=195;int p2t48y=215;int p2t49y=235;int p2t50y=255;int p2t51y=275;int p2t52y=295;int p2t53y=315;int p2t54y=335;int p2t55y=355;int p2t56y=375;int p2t57y=395;int p2t58y=415;int p2t59y=435;int p2t60y=455;int p2t61y=475;int p2t62y=495;int p2t63y=515;
//first row
int p2t64x=90;int p2t65x=110;int p2t66x=130;int p2t67x=150;int p2t68x=170;int p2t69x=190;int p2t70x=210;int p2t71x=230;int p2t72x=250;int p2t73x=270;int p2t74x=290;int p2t75x=310;int p2t76x=330;int p2t77x=350;int p2t78x=370;int p2t79x=390;int p2t80x=410;
int p2t64y=75;int p2t65y=75;int p2t66y=75;int p2t67y=75;int p2t68y=75;int p2t69y=75;int p2t70y=75;int p2t71y=75;int p2t72y=75;int p2t73y=75;int p2t74y=75;int p2t75y=75;int p2t76y=75;int p2t77y=75;int p2t78y=75;int p2t79y=75;int p2t80y=75;int p2t81x=450;int p2t81y=520;

int p2t82x=470;int p2t82y=520; int p2t83x=490;int p2t83y=520; int p2t84x=510;int p2t84y=520; int p2t85x=90;int p2t85y=520; int p2t86x=110;int p2t86y=520; int p2t87x=130;int p2t87y=520; int p2t88x=150;int p2t88y=520; int p2t89x=170;int p2t89y=520; int p2t90x=190;int p2t90y=520;
int p2t91x=310;int p2t91y=520; int p2t92x=250;int p2t92y=520;int p2t93x=270;int p2t93y=520;int p2t94x=290;int p2t94y=520;int p2t95x=210;int p2t95y=520;

int p2t27x=470;int p2t28x=230;int p2t29x=450; int p2t30x=430;int p2t31x=490;int p2t32x=510;
int p2t27y=75;int p2t28y=520;int p2t29y=75;int p2t30y=75;int p2t31y=75;int p2t32y=75;

/////////////////////////////////////////////////LEVEL 3 VARIABLES////////////////////////////////////////////////////////////////////////////////////////
int pacLiveRadius1=13;
int pacLiveRadius2=13;
int pacLiveRadius3=13;
int score =0;
int counter=0;
static float mouthSize2 = 0.6; // default size of pacman lives
int psize = 8;
float ghost1_x= 70;
float ghost1_y= 270;
float x = 0.02;
float y= 0;
float ghost2_x = 330;
float ghost2_y= 520;
float h = 0.02;
float w = 0;
float c = 0;
float d = 0;
float Pacman_x = 300;
float Pacman_y = 300;
float PacLive1x = 420;
float PacLive1y = 580;
float PacLive2x = 460;
float PacLive2y = 580;
float PacLive3x = 500;
float PacLive3y = 580;
boolean a = 0;
boolean b = 0;
boolean up = 0;
boolean down = 0;
boolean rightt = 1;
boolean leftt = 0;
boolean ff=0;
float MAN = 0.003;
bool gameOver=false;
static float mouthSizeBegin = 0.785398;
static float mouthSizeEnd = 5.49779;
float ghost3_x = 70;
float ghost3_y= 520;
float xx = 0.08;
float yy = 0;
int energised_dot1y=480;
int energised_dot1x=330;
bool energisedState1=false;
int ctr;
//first column
int pt1x = 75; int pt1y = 75; int pt2x = 75;int pt2y = 95;int pt3y =  115;int pt3x =  75;int pt4y = 135;int pt4x =  75;int pt5y = 155;int pt5x =  75;int pt6y = 175;int pt6x =  75;int pt7y = 195;int pt7x =  75;int pt8y = 215;int pt8x =  75;int pt9y = 235;int pt9x =  75;int pt10y = 255;
int pt10x =  75;int pt11y = 275;int pt11x =  75;int pt12y = 295;int pt12x =  75;int pt13y = 295;int pt13x =  75;int pt14y = 315;int pt14x =  75;int pt15x =  75;int pt15y = 335;int pt16y = 355;
int pt16x =  75;int pt17y = 375;int pt17x =  75;int pt18y = 395;int pt18x =  75;int pt19y = 415;int pt19x =  75;int pt20y = 435;int pt20x =  75;int pt21y = 455;int pt21x =  75;int pt22y = 475;int pt22x =  75;int pt23y = 495;int pt23x =  75;int pt24y = 515;int pt24x =  75;
//second column..bottom
int pt25x=300;int pt26x=300;int pt27x=300;int pt28x=300;int pt29x=300;int pt30x=300;int pt31x=300;int pt32x=300;
int pt25y=95;int pt26y=115;int pt27y=135;int pt28y=155;int pt29y=175;int pt30y=195;int pt31y=215;int pt32y=235;
//second column..top
int pt33x=300;int pt34x=300;int pt35x=300;int pt36x=300;int pt37x=300;int pt38x=300;int pt39x=300;int pt40x=300;
int pt33y=360;int pt34y=380;int pt35y=400;int pt36y=420;int pt37y=440;int pt38y=460;int pt39y=480;int pt40y=500;
// fourth column
int pt41x=530;int pt42x=530;int pt43x=530;int pt44x=530;int pt45x=530;int pt46x=530;int pt47x=530;int pt48x=530;int pt49x=530;int pt50x=530;int pt51x=530;int pt52x=530;int pt53x=530;int pt54x=530;int pt55x=530;int pt56x=530;int pt57x=530;int pt58x=530;int pt59x=530;int pt60x=530;int pt61x=530;int pt62x=530;int pt63x=530;
int pt41y=75;int pt42y=95;int pt43y=115;int pt44y=135;int pt45y=155;int pt46y=175;int pt47y=195;int pt48y=215;int pt49y=235;int pt50y=255;int pt51y=275;int pt52y=295;int pt53y=315;int pt54y=335;int pt55y=355;int pt56y=375;int pt57y=395;int pt58y=415;int pt59y=435;int pt60y=455;int pt61y=475;int pt62y=495;int pt63y=515;
//first row
int pt64x=90;int pt65x=110;int pt66x=130;int pt67x=150;int pt68x=170;int pt69x=190;int pt70x=210;int pt71x=230;int pt72x=250;int pt73x=270;int pt74x=290;int pt75x=310;int pt76x=330;int pt77x=350;int pt78x=370;int pt79x=390;int pt80x=410;int pt81x=430;int pt82x=450;int pt83x=470;int pt84x=490;int pt85x=510;
int pt64y=75;int pt65y=75;int pt66y=75;int pt67y=75;int pt68y=75;int pt69y=75;int pt70y=75;int pt71y=75;int pt72y=75;int pt73y=75;int pt74y=75;int pt75y=75;int pt76y=75;int pt77y=75;int pt78y=75;int pt79y=75;int pt80y=75;int pt81y=75;int pt82y=75;int pt83y=75;int pt84y=75;int pt85y=75;
//fourth row
int pt86x=90;int pt87x=110;int pt88x=130;int pt89x=150;int pt90x=170;int pt91x=190;int pt92x=210;int pt93x=230;int pt94x=250;int pt95x=270;int pt96x=290;int pt97x=310;int pt98x=330;int pt99x=350;int pt100x=370;int pt101x=390;int pt102x=410;int pt103x=430;int pt104x=450;int pt105x=470;int pt106x=490;int pt107x=510;
int pt86y=520;int pt87y=520;int pt88y=520;int pt89y=520;int pt90y=520;int pt91y=520;int pt92y=520;int pt93y=520;int pt94y=520;int pt95y=520;int pt96y=520;int pt97y=520;int pt98y=520;int pt99y=520;int pt100y=520;int pt101y=520;int pt102y=520;int pt103y=520;int pt104y=520;int pt105y=520;int pt106y=520;int pt107y=520;
// third row
int pt108x=90;int pt109x=110;int pt110x=130;int pt111x=150;int pt112x=170;int pt113x=190;int pt114x=210;int pt115x=230;int pt116x=250;int pt117x=270;int pt118x=290;int pt129x=310;int pt119x=330;int pt120x=350;int pt121x=370;int pt122x=390;int pt123x=410;int pt124x=430;int pt125x=450;int pt126x=470;int pt127x=490;int pt128x=510;
int pt108y=335;int pt109y=335;int pt110y=335;int pt111y=335;int pt112y=335;int pt113y=335;int pt114y=335;int pt115y=335;int pt116y=335;int pt117y=335;int pt118y=335;int pt129y=335;int pt119y=335;int pt120y=335;int pt121y=335;int pt122y=335;int pt123y=335;int pt124y=335;int pt125y=335;int pt126y=335;int pt127y=335;int pt128y=335;
// second row
int pt130x=90;int pt131x=110;int pt132x=130;int pt133x=150;int pt134x=170;int pt135x=190;int pt136x=210;int pt137x=230;int pt138x=250;int pt139x=270;int pt140x=290;int pt141x=310;int pt142x=330;int pt143x=350;int pt144x=370;int pt145x=390;int pt151x=410;int pt146x=430;int pt147x=450;int pt148x=470;int pt149x=490;int pt150x=510;
int pt130y=275;int pt131y=275;int pt132y=275;int pt133y=275;int pt134y=275;int pt135y=275;int pt136y=275;int pt137y=275;int pt138y=275;int pt139y=275;int pt140y=275;int pt141y=275;int pt142y=275;int pt143y=275;int pt144y=275;int pt145y=275;int pt151y=275;int pt146y=275;int pt147y=275;int pt148y=275;int pt149y=275;int pt150y=275;





//////////////////////////////////////////////////////////////////////////LEVEL 1 VARIABLES////////////////////////////////////
int pacLiveRadius1_lev1=13;
int pacLiveRadius2_lev1=13;
int pacLiveRadius3_lev1=13;
int score_lev1 =0;
int counter_lev1=0;
static float mouthSize2_lev1 = 0.6; // default size of pacman lives
float Pacman_x_lev1 = 80;
float Pacman_y_lev1 = 80;
float PacLive1x_lev1 = 420;
float PacLive1y_lev1 = 580;
float PacLive2x_lev1 = 460;
float PacLive2y_lev1 = 580;
float PacLive3x_lev1 = 500;
float PacLive3y_lev1 = 580;

boolean up_lev1 = 0;
boolean down_lev1 = 0;
boolean rightt_lev1 = 1;
boolean leftt_lev1 = 0;
bool gameOver_lev1=false;
static float mouthSizeBegin_lev1 = 0.785398;
static float mouthSizeEnd_lev1 = 5.49779;
int highscore;


//first column
int p1t1x = 270; int p1t1y = 75; int p1t2x = 270;int p1t2y = 95;int p1t3y =  115;int p1t3x =  270;
int p1t4y = 135;int p1t4x =  75;int p1t5y = 155;int p1t5x =  270;int p1t6y = 175;int p1t6x =  270;
int p1t7y = 195;int p1t7x =  270;int p1t8y = 215;int p1t8x =  270;int p1t9y = 235;int p1t9x =  270;
int p1t10y = 255;
int p1t10x =  270;int p1t11y = 275;int p1t11x =  270;int p1t12y = 295;int p1t12x =  270;
int p1t13y = 295;int p1t13x =  270;int p1t14y = 315;int p1t14x =  270;int p1t15x =  270;int p1t15y = 335;int p1t16y = 335;
int p1t16x =  270;int p1t17y = 375;int p1t17x =  270;int p1t18y = 395;int p1t18x =  270;int p1t19y = 415;int p1t19x =  270;int p1t20y = 435;int p1t20x =  270;int p1t21y = 455;int p1t21x =  270;int p1t22y = 475;int p1t22x =  270;int p1t23y = 495;int p1t23x =  270;int p1t24y = 515;int p1t24x =  270;
int p1t41x = 270; int p1t41y = 135;int p1t42x = 270;int p1t42y = 355;


//second column..bottom
int p1t25x=470;int p1t26x=450;int p1t27x=430;int p1t28x=410;int p1t29x=390;int p1t30x=370;int p1t31x=350;int p1t32x=290;int p1t43x=310;int p1t44x=330;
int p1t25y=515;int p1t26y=515;int p1t27y=515;int p1t28y=515;int p1t29y=515;int p1t30y=515;int p1t31y=515;int p1t32y=515;int p1t43y=515;int p1t44y=515;
//second column..top
int p1t33x=250;int p1t34x=230;int p1t35x=210;int p1t36x=190;int p1t37x=170;int p1t38x=150;int p1t39x=130;int p1t40x=110;
int p1t33y=75;int p1t34y=75;int p1t35y=75;int p1t36y=75;int p1t37y=75;int p1t38y=75;int p1t39y=75;int p1t40y=75;

////font declaration//////////
const int font1=(int)GLUT_BITMAP_TIMES_ROMAN_24;

/////////////////////////////////////DECLARING FUNCTIONS//////////////////////////////////////////////////////////////////////
void Text_display(float x, float y, void *font,const char *string);
void Victory();
void draw_lives( float pacLive_x,float pacLive_y,int pacLiveRadius);
void draw_pacman();
void draw_pacman_lvl_2();
void keyboard(int key, int x,int y);
void draw_maze();
void draw_ghosts();
void display2();
void display2_lev2();
void display2_lev1();
void draw_food();
void energised_dots();
void display();
void draw_lives2( float pacLive_x,float pacLive_y,int pacLiveRadius);
void draw_ghosts_2();
void draw_food_2();
void mazeldisplay_2();
void draw_pacman1();
void draw_food1();
void draw_lives1( float pacLive_x,float pacLive_y,int pacLiveRadius);
void mazeldisplay_level_1();
void Mainmenu();
void specFunc(unsigned char buttons, int x, int y);

//////////////////////////////////////////////////////////////////////////START OF THE CODE///////////////////////////////////////////////////////////////////////

char s[30];
void Text_display(float x, float y, void *font,const char *string){
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);

    }

}


void Victory(){
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);


char buffer3 [50];
sprintf (buffer3, "Your Score is : %d", score);
char buffer4 [50];
sprintf (buffer4, "Your High-score is : %d", highscore);
Text_display(100,70,(void*)font1, buffer4);
glColor3f(0,1,0);
Text_display(230,520,(void*) font1,"WELL DONE ");
glColor3f(0,1,1);
           Text_display(60,260,(void*)font1,"YOU HAVE FED PACMAN AND DEFEATED ");
           Text_display(210,230,(void*)font1," THE GHOSTS");
           Text_display(130,180,(void*)font1,"SEE YOU SOON CHALLENGER");
           glColor3f(0,1,0);
           Text_display(100,100,(void*)font1, buffer3);
           Text_display(100,70,(void*)font1, buffer4);

         glBegin(GL_POLYGON);
float theta1;
for(theta1= 0.0; theta1<= 2*pi; theta1 += inc){
glColor4f(1,1,0.3,0);
glVertex2f(300+50*cos(theta1), 400+50*sin(theta1));
}
glEnd();

//mouth

glBegin(GL_POLYGON);
glColor4f(0,0,0,0);
glVertex2f(300,400);
for(theta1 = -0.6; theta1<= 0.6; theta1 +=inc){
    glVertex2d((300)+(50)*cos(theta1), (400)+(50)*sin(theta1));
}

glEnd();
            glFlush();
            glutPostRedisplay();
}

void draw_lives( float pacLive_x,float pacLive_y,int pacLiveRadius){

float theta2 ;

//body

glBegin(GL_POLYGON);

for(theta2= 0.0; theta2 <= 2*pi; theta2 += inc){
glColor4f(1,1,0.3,0);
glVertex2f(pacLive_x+pacLiveRadius*cos(theta2), pacLive_y+pacLiveRadius*sin(theta2));
}
glEnd();

//mouth

glBegin(GL_POLYGON);
glColor4f(0,0,0,0);
glVertex2f(pacLive_x,pacLive_y);
for(theta2 = -mouthSize2; theta2<= mouthSize2; theta2 +=inc){
    glVertex2d((pacLive_x)+(pacLiveRadius)*cos(theta2), (pacLive_y)+(pacLiveRadius)*sin(theta2));
}

glEnd();



}

void draw_pacman() {
    float theta;
glBegin(GL_POLYGON);
glColor4f(1,1,0.3,0);
glVertex2f(Pacman_x,Pacman_y);
for(theta = mouthSizeBegin; theta<= mouthSizeEnd ; theta +=inc){
    glVertex2d((Pacman_x)+(PacRadius)*cos(theta), (Pacman_y)+(PacRadius)*sin(theta));
}

glEnd();
}

void draw_pacman_lvl_2() {
float theta;
glBegin(GL_POLYGON);
glColor4f(1,1,0.3,0);
glVertex2f(Pacman_x_lev2,Pacman_y_lev2);
for(theta = mouthSizeBegin_lev2; theta<= mouthSizeEnd_lev2 ; theta +=inc){
    glVertex2d((Pacman_x_lev2)+(PacRadius)*cos(theta), (Pacman_y_lev2)+(PacRadius)*sin(theta));
}

glEnd();
}


void keyboard(int key, int x,int y){
    switch(key){

    case GLUT_KEY_UP:
        d = -0.09;
        c = 0;

         mouthSizeBegin_lev2= 2.35619;
        mouthSizeEnd_lev2=7.068583;
        mouthSizeBegin_lev1= 2.35619;
        mouthSizeEnd_lev1=7.068583;
        up_lev2 = 1;
        up_lev1=1;
        down_lev2 =0;
        leftt_lev2 =0;
        rightt_lev2=0;
        down_lev1 =0;
        leftt_lev1 =0;
        rightt_lev1=0;
         mouthSizeBegin= 2.35619;
        mouthSizeEnd=7.068583;
        up = 1;
        down =0;
        leftt =0;
        rightt=0;
        MAN = 0.003;
    break;
    case GLUT_KEY_DOWN:
        d = 0.09;
        c = 0;

        mouthSizeBegin_lev2=-0.7068583;
        mouthSizeEnd_lev2= 3.92699;
         mouthSizeBegin_lev1=-0.7068583;
        mouthSizeEnd_lev1= 3.92699;
        down_lev2 = 1;
        rightt_lev2 = 0;
        leftt_lev2 =0;
        up_lev2 =0;
        down_lev1 = 1;
        rightt_lev1 = 0;
        leftt_lev1 =0;
        up_lev1 =0;
        mouthSizeBegin=-0.7068583;
        mouthSizeEnd= 3.92699;
        down = 1;
        rightt = 0;
        leftt =0;
        up =0;
        MAN = 0.003;
    break;
    case GLUT_KEY_LEFT:
         d = 0;
        c = 0.09;
         mouthSizeBegin_lev2=3.926991 ;
        mouthSizeEnd_lev2= 8.63938   ;
        leftt_lev2 = 1;
        rightt_lev2 = 0;
        up_lev2 = 0;
        down_lev2 =0;
         mouthSizeBegin_lev1=3.926991 ;
        mouthSizeEnd_lev1= 8.63938   ;
        leftt_lev1 = 1;
        rightt_lev1 = 0;
        up_lev1 = 0;
        down_lev1 =0;
          mouthSizeBegin=3.926991 ;
        mouthSizeEnd= 8.63938   ;
        leftt = 1;
        rightt = 0;
        up = 0;
        down =0;
        MAN = 0.003;
    break;
    case GLUT_KEY_RIGHT:
        d = 0;
        c = -0.09;
         mouthSizeBegin_lev2 = 0.785398;
        mouthSizeEnd_lev2 =5.49779;
        rightt_lev2 = 1;
        leftt_lev2 = 0;
        up_lev2 =0;
        down_lev2 = 0;
         mouthSizeBegin_lev1 = 0.785398;
        mouthSizeEnd_lev1 =5.49779;
        rightt_lev1= 1;
        leftt_lev1 = 0;
        up_lev1 =0;
        down_lev1 = 0;
        mouthSizeBegin = 0.785398;
        mouthSizeEnd =5.49779;
        rightt = 1;
        leftt = 0;
        up =0;
        down = 0;
        MAN = 0.003;
    break;
    }

}

void draw_maze(){


glColor3f(0,0,1);
//the points of the four corners of the square to create the edges of the map

glEnable(GL_POINT_SMOOTH);
glPointSize(13);
glBegin(GL_POINTS);
glVertex2f(50,50);
glVertex2f(50,550);
glVertex2f(550,550);
glVertex2f(550,50);

glEnd();
//creating a square to make the map of the game
glEnable(GL_POINT_SMOOTH);
glPointSize(10);
glEnable(GL_POINT_SMOOTH);
glBegin(GL_POINTS);
glEnd();



glLineWidth(15);
glBegin(GL_LINE_STRIP);

glVertex2f(50,50);
glVertex2f(50,550);
glVertex2f(550,550);
glVertex2f(550,50);
glVertex2f(50,50);
glEnd();

//creating the walls inside the map  we had created


glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(100,100);
glVertex2f(100,250);
glVertex2f(250,250);
glVertex2f(250,100);
glEnd();


glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(500,100);
glVertex2f(500,250);
glVertex2f(350,250);
glVertex2f(350,100);
glEnd();

glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(500,500);
glVertex2f(500,350);
glVertex2f(350,350);
glVertex2f(350,500);
glEnd();

glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(100,500);
glVertex2f(100,350);
glVertex2f(250,350);
glVertex2f(250,500);
glEnd();

}

void draw_ghosts(){
glPointSize(17);
glBegin(GL_POINTS);
glColor3f(0,0.9,1);
glVertex2f(ghost1_x,ghost1_y);
glColor3f(0.3,1,0);
glVertex2f(ghost2_x,ghost2_y);
glColor3f(1,0,0.5);
glVertex2f(ghost3_x,ghost3_y);
glEnd();
}

void gameOverlev3(){

glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);

           Text_display(200,520,(void *)font1,"GAME OVER!!");
           char buffer2 [50];
            sprintf (buffer2, "Your Score is : %d", score);
            Text_display(180,300,(void *)font1,buffer2);
            char buffer4 [50];
sprintf (buffer4, "Your High-score is : %d", highscore);
Text_display(180,260,(void*)font1, buffer4);
            Text_display(180,220,(void *)font1,"Press r to try again to beat your score!");
            Text_display(180,180,(void *)font1,"Press q to exit :( ");
            Pacman_x=-900;
            Pacman_y=-500;
            glFlush();
            glutPostRedisplay();
            glutKeyboardFunc(specFunc);
glutSpecialFunc(keyboard);
}
void display2(){
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
char buffer4 [50];
sprintf (buffer4, "Your High-score is : %d", highscore);

glColor3f(1,0,0);
           Text_display(200,520,(void *)font1,"GAME OVER!!");
         glColor3f(1,0,0);
            char buffer2 [50];
            sprintf (buffer2, "Your Score is : %d", score);
            Text_display(200,300,(void *)font1,buffer2);
            Text_display(100,260,(void*)font1, buffer4);
            Text_display(180,220,(void *)font1,"Press r to try again to beat your score!");
            glFlush();
            glutPostRedisplay();

           }
void display2_lev2(){
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
           Text_display(200,520,(void *)font1,"GAME OVER!!");
         glColor3f(1,0,0);
            char buffer2 [50];
            sprintf (buffer2, "Your Score is : %d", score_lev2);
            Text_display(200,300,(void *)font1,buffer2);
            char buffer6 [50];
sprintf (buffer6, "Your High-Score is : %d", score_lev2);
Text_display(200,260,(void *)font1,buffer6);
            Text_display(180,220,(void *)font1,"Try again to beat your score!");
            glFlush();
            glutPostRedisplay();
}
void display2_lev1(){
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
           Text_display(200,520,(void *)font1,"GAME OVER!!");
         glColor3f(1,0,0);
            char buffer2 [50];
            sprintf (buffer2, "Your Score is : %d", score_lev1);
            Text_display(200,300,(void *)font1,buffer2);
            char buffer5 [50];
sprintf (buffer5, "Your High-Score is : %d", score_lev1);
Text_display(200,260,(void *)font1,buffer5);
Text_display(180,220,(void *)font1,"Try again to beat your score!");
            Text_display(180,180,(void *)font1,"Try again to beat your score!");
            glFlush();
            glutPostRedisplay();
}
void draw_food() {

char stringg [50];
sprintf(stringg,"SCORE: %d", score);
glColor3f(1, 1, 1);
Text_display(100,570,(void *)font1, stringg);
Text_display(260,570,(void *)font1, "Level: 3");

glColor3f(1,0.7,0);
glPointSize(psize);
glEnable(GL_POINT_SMOOTH);
glBegin(GL_POINTS);

glVertex2f(pt1x,pt1y);
glVertex2f(pt2x,pt2y);
glVertex2f(pt3x,pt3y);
glVertex2f(pt4x,pt4y);
glVertex2f(pt5x,pt5y);
glVertex2f(pt6x,pt6y);
glVertex2f(pt8x,pt8y);
glVertex2f(pt9x,pt9y);
glVertex2f(pt10x,pt10y);
glVertex2f(pt11x,pt11y);
glVertex2f(pt12x,pt12y);

glVertex2f(pt14x,pt14y);
glVertex2f(pt15x,pt15y);
glVertex2f(pt16x,pt16y);
glVertex2f(pt17x,pt17y);
glVertex2f(pt18x,pt18y);
glVertex2f(pt20x,pt20y);
glVertex2f(pt21x,pt21y);
glVertex2f(pt22x,pt22y);
glVertex2f(pt23x,pt23y);
glVertex2f(pt24x,pt24y);
glVertex2f(pt25x,pt25y);
glVertex2f(pt27x,pt27y);
glVertex2f(pt28x,pt28y);
glVertex2f(pt40x,pt40y);
glVertex2f(pt29x,pt29y);
glVertex2f(pt30x,pt30y);
glVertex2f(pt31x,pt31y);
glVertex2f(pt32x,pt32y);
glVertex2f(pt33x,pt33y);
glVertex2f(pt34x,pt34y);
glVertex2f(pt35x,pt35y);
glVertex2f(pt36x,pt36y);
glVertex2f(pt37x,pt37y);
glVertex2f(pt39x,pt39y);
glVertex2f(pt41x,pt41y);
glVertex2f(pt42x,pt42y);
glVertex2f(pt43x,pt43y);
glVertex2f(pt44x,pt44y);
glVertex2f(pt45x,pt45y);
glVertex2f(pt46x,pt46y);
glVertex2f(pt47x,pt47y);
glVertex2f(pt48x,pt48y);
glVertex2f(pt50x,pt50y);
glVertex2f(pt51x,pt51y);
glVertex2f(pt52x,pt52y);
glVertex2f(pt53x,pt53y);
glVertex2f(pt54x,pt54y);
glVertex2f(pt56x,pt56y);
glVertex2f(pt57x,pt57y);
glVertex2f(pt58x,pt58y);
glVertex2f(pt59x,pt59y);
glVertex2f(pt60x,pt60y);
glVertex2f(pt61x,pt61y);
glVertex2f(pt62x,pt62y);
glVertex2f(pt63x,pt63y);
glVertex2f(pt64x,pt64y);
glVertex2f(pt65x,pt65y);
glVertex2f(pt66x,pt66y);
glVertex2f(pt67x,pt67y);
glVertex2f(pt68x,pt68y);
glVertex2f(pt70x,pt70y);
glVertex2f(pt69x,pt69y);
glVertex2f(pt72x,pt72y);
glVertex2f(pt73x,pt73y);
glVertex2f(pt74x,pt74y);
glVertex2f(pt75x,pt75y);
glVertex2f(pt76x,pt76y);
glVertex2f(pt77x,pt77y);
glVertex2f(pt78x,pt78y);
glVertex2f(pt79x,pt79y);
glVertex2f(pt80x,pt80y);
glVertex2f(pt81x,pt81y);
glVertex2f(pt82x,pt82y);
glVertex2f(pt84x,pt84y);
glVertex2f(pt85x,pt85y);
glVertex2f(pt86x,pt86y);
glVertex2f(pt87x,pt87y);
glVertex2f(pt89x,pt89y);
glVertex2f(pt90x,pt90y);
glVertex2f(pt91x,pt91y);
glVertex2f(pt93x,pt93y);
glVertex2f(pt94x,pt94y);
glVertex2f(pt95x,pt95y);
glVertex2f(pt96x,pt96y);
glVertex2f(pt97x,pt97y);
glVertex2f(pt98x,pt98y);
glVertex2f(pt99x,pt99y);
glVertex2f(pt100x,pt100y);
glVertex2f(pt101x,pt101y);
glVertex2f(pt103x,pt103y);
glVertex2f(pt104x,pt104y);
glVertex2f(pt105x,pt105y);
glVertex2f(pt107x,pt107y);
glVertex2f(pt92x,pt92y);
glVertex2f(pt102x,pt102y);
glVertex2f(pt108x,pt108y);
glVertex2f(pt109x,pt109y);
glVertex2f(pt110x,pt110y);
glVertex2f(pt111x,pt111y);
glVertex2f(pt112x,pt112y);
glVertex2f(pt113x,pt113y);
glVertex2f(pt114x,pt114y);
glVertex2f(pt115x,pt115y);
glVertex2f(pt116x,pt116y);
glVertex2f(pt117x,pt117y);
glVertex2f(pt118x,pt118y);
glVertex2f(pt119x,pt119y);
glVertex2f(pt120x,pt120y);
glVertex2f(pt121x,pt121y);
glVertex2f(pt121x,pt121y);
glVertex2f(pt122x,pt122y);
glVertex2f(pt123x,pt123y);
glVertex2f(pt124x,pt124y);
glVertex2f(pt125x,pt125y);
glVertex2f(pt126x,pt126y);
glVertex2f(pt129x,pt129y);
glVertex2f(pt128x,pt128y);
glVertex2f(pt130x,pt130y);
glVertex2f(pt131x,pt131y);
glVertex2f(pt132x,pt132y);
glVertex2f(pt133x,pt133y);
glVertex2f(pt134x,pt134y);
glVertex2f(pt135x,pt135y);
glVertex2f(pt136x,pt136y);
glVertex2f(pt137x,pt137y);
glVertex2f(pt138x,pt138y);
glVertex2f(pt139x,pt139y);
glVertex2f(pt140x,pt140y);
glVertex2f(pt141x,pt141y);
glVertex2f(pt142x,pt142y);
glVertex2f(pt143x,pt143y);
glVertex2f(pt144x,pt144y);
glVertex2f(pt145x,pt145y);
glVertex2f(pt147x,pt147y);
glVertex2f(pt148x,pt148y);
glVertex2f(pt149x,pt149y);
glVertex2f(pt150x,pt150y);
glVertex2f(pt151x,pt151y);


glColor3f(0,1,0);
glVertex2f(pt19x,pt19y);
glVertex2f(pt13x,pt13y);
glVertex2f(pt7x,pt7y);
glVertex2f(pt26x,pt26y);
glVertex2f(pt38x,pt38y);
glVertex2f(pt55x,pt55y);
glVertex2f(pt49x,pt49y);
glVertex2f(pt83x,pt83y);
glVertex2f(pt71x,pt71y);
glVertex2f(pt106x,pt106y);
glVertex2f(pt88x,pt88y);
glVertex2f(pt146x,pt146y);
glVertex2f(pt127x,pt127y);

glEnd();

    if(gameOver==true){
gameOverlev3();
}


}


void energised_dots(){

if(400<=score && score<=415){
    glColor3f(1,0,0);
    glEnable(GL_POINT_SMOOTH);
glPointSize(25);
glBegin(GL_POINTS);
glVertex2d(energised_dot1x,energised_dot1y);
glEnd();

}
}


void display(){

glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
if(ctr==0){
   highscore=score;
}
if(ctr>0){
    if(score==highscore || highscore<score){
        highscore=score;
    }
}







if(score > 815){
     glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("YOU WON");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(Victory);
glutSpecialFunc(keyboard);
glutMainLoop();
}


draw_maze();

draw_ghosts();
draw_food();

draw_pacman();
draw_lives(PacLive1x, PacLive1y, pacLiveRadius1);
draw_lives(PacLive2x, PacLive2y, pacLiveRadius2);
draw_lives(PacLive3x, PacLive3y, pacLiveRadius3);


energised_dots();


glFlush();




if(energised_dot1x-10<=Pacman_x && Pacman_x<=energised_dot1x+10 && energised_dot1y-10<=Pacman_y && Pacman_y<=energised_dot1y+10 ){
    energised_dot1x=-50;
    energised_dot1y=-900;
    energisedState1=true;
    }
if(energisedState1==true){

    if(ghost1_x-10<=Pacman_x && Pacman_x<=ghost1_x+10 && ghost1_y-10<=Pacman_y && Pacman_y<=ghost1_y+10 ){
   ghost1_x=-50;
    ghost1_y=-900;
    score+=15;
    }
    else if(ghost2_x-10<=Pacman_x && Pacman_x<=ghost2_x+10 && ghost2_y-10<=Pacman_y && Pacman_y<=ghost2_y+10 ){
   ghost2_x=-50;
    ghost2_y=-900;
    score+=15;
    }
    else if(ghost3_x-10<=Pacman_x && Pacman_x<=ghost3_x+10 && ghost3_y-10<=Pacman_y && Pacman_y<=ghost3_y+10 ){
   ghost3_x=-50;
    ghost3_y=-900;
    score+=15;
    }

}


if( pt1x-5<=Pacman_x &&Pacman_x <= pt1x + 10 && pt1y-5<=Pacman_y && Pacman_y<=pt1y + 5){
    pt1x = -200;
    pt1y = -200;
     score+=5;
}

if(  pt2x-5<=Pacman_x &&Pacman_x <= pt2x + 5 &&  pt2y-5<= Pacman_y && Pacman_y <=pt2y + 5){
    pt2x = -200;
    pt2y = -200;
     score+=5;
}
if( pt3x-5<=Pacman_x &&Pacman_x <= pt3x + 5 &&  pt3y-5<= Pacman_y && Pacman_y <= pt3y + 5){
    pt3x = -200;
    pt3y = -200;
    score+=5;
}
if(pt4x-5<=Pacman_x && Pacman_x <= pt4x + 5 &&  pt4y-10<=Pacman_y && Pacman_y <= pt4y + 5){
    pt4x = -200;
    pt4y = -200;
     score+=5;
}
if( pt5x-5<=Pacman_x &&Pacman_x <= pt5x + 5 &&  pt5y-10<=Pacman_y && Pacman_y <= pt5y + 5){
    pt5x = -200;
    pt5y = -200;
     score+=5;
}
if(pt6x-5<=Pacman_x && Pacman_x <= pt6x + 5 &&  pt6y-10<=Pacman_y && Pacman_y <= pt6y + 5){
    pt6x = -200;
    pt6y = -200;
    score+=5;}
if( pt7x-5<=Pacman_x &&Pacman_x <= pt7x + 5 &&  pt7y-10<=Pacman_y && Pacman_y <= pt7y + 5){
    pt7x = -200;
    pt7y = -200;
    score+=10;
}
if( pt8x-5<=Pacman_x &&Pacman_x <= pt8x + 5 &&  pt8y-10<=Pacman_y && Pacman_y <= pt8y + 5){
    pt8x = -200;
    pt8y = -200;
     score+=5;
}
if( pt9x-5<=Pacman_x &&Pacman_x <= pt9x + 5 &&  pt9y-10<=Pacman_y && Pacman_y <= pt9y + 5){
    pt9x = 1000;
    pt9y = 1000;
     score+=5;
}
if( pt10x-5<=Pacman_x &&Pacman_x <= pt10x + 5 &&  pt10y-10<=Pacman_y && Pacman_y <= pt10y + 5){
    pt10x = 1000;
    pt10y = 1000;
     score+=5;
}
if( pt11x-5<=Pacman_x &&Pacman_x <= pt11x + 5 &&  pt11y-5<Pacman_y && Pacman_y <= pt11y + 5){
    pt11x = 900;
    pt11y = 1000;
     score+=5;
}
if(pt12x-5<=Pacman_x && Pacman_x <= pt12x + 5 &&  pt12y-5<Pacman_y && Pacman_y <= pt12y + 5){
    pt12x = 750;
    pt12y = 1000;
     score+=5;
}
if( pt13x-5<=Pacman_x &&Pacman_x <= pt13x + 5 &&  pt13y-5<Pacman_y && Pacman_y <= pt13y + 5){
    pt13x = 1000;
    pt13y = 800;
    score+=10;
}
if( pt14x-5<=Pacman_x &&Pacman_x <= pt14x + 5 &&  pt14y-5<Pacman_y && Pacman_y <= pt14y + 5){
    pt14x = 700;
    pt14y = 1000;
     score+=5;
}
if( pt15x-5<=Pacman_x &&Pacman_x <= pt15x + 5 &&  pt15y-5<Pacman_y && Pacman_y <= pt15y + 5){
    pt15x = 9000;
    pt15y = 800;
     score+=5;
}
if( pt16x-5<=Pacman_x &&Pacman_x <= pt16x + 5 &&  pt16y-5<Pacman_y && Pacman_y <= pt16y + 5){
    pt16x = 6500;
    pt16y = 650;
     score+=5;
}
if( pt17x-5<=Pacman_x &&Pacman_x <= pt17x + 5 &&  pt17y-5<Pacman_y && Pacman_y <= pt17y + 5){
    pt17x = 6000;
    pt17y = 6000;
     score+=5;
}
if(pt18x-5<=Pacman_x && Pacman_x <= pt18x + 5 &&  pt18y-5<Pacman_y && Pacman_y <= pt18y + 5){
    pt18x = 700;
    pt18y = 700;
     score+=5;
}
if( pt19x-5<=Pacman_x &&Pacman_x <= pt19x + 5 &&  pt19y-5<Pacman_y && Pacman_y <= pt19y + 5){
    pt19x = 750;
    pt19y = 750;
    score+=10;
}
if( pt20x-5<=Pacman_x &&Pacman_x <= pt20x + 5 &&  pt20y-5<Pacman_y && Pacman_y <= pt20y + 5){
    pt20x = 850;
    pt20y = 850;
     score+=5;
}
if( pt21x-5<=Pacman_x &&Pacman_x <= pt21x + 5 &&  pt21y-5<Pacman_y && Pacman_y <= pt21y + 5){
    pt21x = 800;
    pt21y = 800;
     score+=5;
}
if( pt22x-5<=Pacman_x &&Pacman_x <= pt22x + 5 &&  pt22y-5<Pacman_y && Pacman_y <= pt22y + 5){
    pt22x = 950;
    pt22y = 950;
    score+=5;
}
if(pt23x-5<=Pacman_x && Pacman_x <= pt23x + 5 &&  pt23y-5<Pacman_y && Pacman_y <= pt23y + 5){
    pt23x = 800;
    pt23y = 800;
    score+=5;
}
if( pt24x-5<=Pacman_x &&Pacman_x <= pt24x + 5 &&  pt24y-5<Pacman_y && Pacman_y <= pt24y + 5){
    pt24x = 900;
    pt24y = 900;
    score+=5;
}
if( pt25x-5<=Pacman_x &&Pacman_x <= pt25x + 5 &&  pt25y-5<=Pacman_y && Pacman_y <= pt25y + 5){
    pt25x = 900;
    pt25y = 900;
    score+=5;
}
if( pt26x-5<=Pacman_x &&Pacman_x <= pt26x + 5 &&  pt26y-5<=Pacman_y && Pacman_y <= pt26y + 5){
    pt26x = 900;
    pt26y = 900;
    score+=10;
}
if( pt27x-5<=Pacman_x &&Pacman_x <= pt27x + 5 &&  pt27y-5<Pacman_y && Pacman_y <= pt27y + 5){
    pt27x = 900;
    pt27y = 900;
    score+=5;
}
if(pt28x-5<=Pacman_x && Pacman_x <= pt28x + 5 &&  pt28y-5<Pacman_y && Pacman_y <= pt28y + 5){
    pt28x = 900;
    pt28y = 900;
    score+=5;
}
if(pt29x-5<=Pacman_x && Pacman_x <= pt29x + 5 &&  pt29y-5<Pacman_y && Pacman_y <= pt29y + 5){
    pt29x = 900;
    pt29y = 900;
    score+=5;
}
if( pt30x-5<=Pacman_x &&Pacman_x <= pt30x + 5 &&  pt30y-5<Pacman_y && Pacman_y <= pt30y + 5){
    pt30x = 900;
    pt30y = 900;
    score+=5;
}
if(pt31x-5<=Pacman_x && Pacman_x <= pt31x + 5 &&  pt31y-5<Pacman_y && Pacman_y <= pt31y + 5){
    pt31x = 900;
    pt31y = 900;
    score+=5;
}
if( pt32x-5<=Pacman_x &&Pacman_x <= pt32x + 5 &&  pt32y-5<Pacman_y && Pacman_y <= pt32y + 5){
    pt32x = 900;
    pt32y = 900;
    score+=5;
}
if( pt34x-5<=Pacman_x &&Pacman_x <= pt34x + 5 &&  pt34y-5<=Pacman_y && Pacman_y <= pt34y + 5){
   // pt34x = 900;
    pt34y = 900;
    score+=5;
}
if( pt35x-5<=Pacman_x &&Pacman_x <= pt35x + 5 &&  pt35y-5<=Pacman_y && Pacman_y <= pt35y + 5){
    pt35x = 900;
    pt35y = 900;
    score+=5;
}
if( pt33x-5<=Pacman_x &&Pacman_x <= pt33x + 5 &&  pt33y-5<Pacman_y && Pacman_y <= pt33y + 5){
    pt33x = 900;
    pt33y = 900;
    score+=5;
}
if( pt36x-5<=Pacman_x &&Pacman_x <= pt36x + 5 &&  pt36y-5<Pacman_y && Pacman_y <= pt36y + 5){
    pt36x = 900;
    pt36y = 900;
    score+=5;
}
if( pt37x-5<=Pacman_x &&Pacman_x <= pt37x + 5 &&  pt37y-5<Pacman_y && Pacman_y <= pt37y + 5){
    pt37x = 900;
    pt37y = 900;
    score+=5;
}
if( pt38x-5<=Pacman_x &&Pacman_x <= pt38x + 5 &&  pt38y-5<Pacman_y && Pacman_y <= pt38y + 5){
    pt38x = 900;
    pt38y = 900;
    score+=10;
}
if(pt39x-5<=Pacman_x && Pacman_x <= pt39x + 5 &&  pt39y-5<Pacman_y && Pacman_y <= pt39y + 5){
    pt39x = 900;
    pt39y = 900;
    score+=5;
}
if( pt40x-5<=Pacman_x &&Pacman_x <= pt40x + 5 &&  pt40y-5<Pacman_y && Pacman_y <= pt40y + 5){
    pt40x = 900;
    pt40y = 900;
    score+=5;
}
if( pt42x-5<=Pacman_x &&Pacman_x <= pt42x + 5 &&  pt42y-5<Pacman_y && Pacman_y <= pt42y + 5){
    pt42x = 900;
    pt42y = 900;
    score+=5;
}
if( pt43x-5<=Pacman_x &&Pacman_x <= pt43x + 5 &&  pt43y-5<Pacman_y && Pacman_y <= pt43y + 5){
    pt43x = 900;
    pt43y = 900;
    score+=5;
}
if( pt44x-5<=Pacman_x &&Pacman_x <= pt44x + 5 &&  pt44y-5<Pacman_y && Pacman_y <= pt44y + 5){
    pt44x = 900;
    pt44y = 900;
    score+=5;
}
if( pt41x-5<=Pacman_x &&Pacman_x <= pt41x + 5 &&  pt41y-5<Pacman_y && Pacman_y <= pt41y + 5){
    pt41x = 900;
    pt41y = 900;
    score+=5;
}
if( pt45x-5<=Pacman_x &&Pacman_x <= pt45x + 5 &&  pt45y-5<Pacman_y && Pacman_y <= pt45y + 5){
    pt45x = 900;
    pt45y = 900;
    score+=5;
}
if( pt46x-5<=Pacman_x &&Pacman_x <= pt46x + 5 &&  pt46y-5<Pacman_y && Pacman_y <= pt46y + 5){
    pt46x = 900;
    pt46y = 900;
    score+=5;
}
if( pt47x-5<=Pacman_x &&Pacman_x <= pt47x + 5 &&  pt47y-5<Pacman_y && Pacman_y <= pt47y + 5){
    pt47x = 900;
    pt47y = 900;
    score+=5;
}
if( pt48x-5<=Pacman_x &&Pacman_x <= pt48x + 5 &&  pt48y-5<Pacman_y && Pacman_y <= pt48y + 5){
    pt48x = 900;
    pt48y = 900;
    score+=5;
}
if( pt49x-5<=Pacman_x &&Pacman_x <= pt49x + 5 &&  pt49y-5<Pacman_y && Pacman_y <= pt49y + 5){
    pt49x = 900;
    pt49y = 900;
    score+=10;
}
if( pt50x-5<=Pacman_x &&Pacman_x <= pt50x + 5 &&  pt50y-5<Pacman_y && Pacman_y <= pt50y + 5){
    pt50x = 900;
    pt50y = 900;
    score+=5;
}
if( pt51x-5<=Pacman_x &&Pacman_x <= pt51x + 5 &&  pt51y-5<Pacman_y && Pacman_y <= pt51y + 5){
    pt51x = 900;
    pt51y = 900;
    score+=5;
}
if( pt52x-5<=Pacman_x &&Pacman_x <= pt52x + 5 &&  pt52y-5<Pacman_y && Pacman_y <= pt52y + 5){
    pt52x = 900;
    pt52y = 900;
    score+=5;
}
if( pt53x-5<=Pacman_x &&Pacman_x <= pt53x + 5 &&  pt53y-5<Pacman_y && Pacman_y <= pt53y + 5){
    pt53x = 900;
    pt53y = 900;
    score+=5;
}
if( pt54x-5<=Pacman_x &&Pacman_x <= pt54x + 5 &&  pt54y-5<Pacman_y && Pacman_y <= pt54y + 5){
    pt54x = 900;
    pt54y = 900;
    score+=5;
}
if( pt55x-5<=Pacman_x &&Pacman_x <= pt55x + 5 &&  pt55y-5<Pacman_y && Pacman_y <= pt55y + 5){
    pt55x = 900;
    pt55y = 900;
    score+=10;
}
if( pt56x-5<=Pacman_x &&Pacman_x <= pt56x + 5 &&  pt56y-5<Pacman_y && Pacman_y <= pt56y + 5){
    pt56x = 900;
    pt56y = 900;
    score+=5;
}
if( pt57x-5<=Pacman_x &&Pacman_x <= pt57x + 5 &&  pt57y-5<Pacman_y && Pacman_y <= pt57y + 5){
    pt57x = 900;
    pt57y = 900;
    score+=5;
}
if( pt58x-5<=Pacman_x &&Pacman_x <= pt58x + 5 &&  pt58y-5<Pacman_y && Pacman_y <= pt58y + 5){
    pt58x = 900;
    pt58y = 900;
    score+=5;
}
if( pt59x-5<=Pacman_x &&Pacman_x <= pt59x + 5 &&  pt59y-5<Pacman_y && Pacman_y <= pt59y + 5){
    pt59x = 900;
    pt59y = 900;
    score+=5;
}
if( pt60x-5<=Pacman_x &&Pacman_x <= pt60x + 5 &&  pt60y-5<Pacman_y && Pacman_y <= pt60y + 5){
    pt60x = 900;
    pt60y = 900;
    score+=5;
}
if( pt61x-5<=Pacman_x &&Pacman_x <= pt61x + 5 &&  pt61y-5<Pacman_y && Pacman_y <= pt61y + 5){
    pt61x = 900;
    pt61y = 900;
    score+=5;
}
if( pt62x-5<=Pacman_x &&Pacman_x <= pt62x + 5 &&  pt62y-5<Pacman_y && Pacman_y <= pt62y + 5){
    pt62x = 900;
    pt62y = 900;
    score+=5;
}

if( pt63x-5<=Pacman_x &&Pacman_x <= pt63x + 5 &&  pt63y-5<Pacman_y && Pacman_y <= pt63y + 5){
    pt63x = 900;
    pt63y = 900;
    score+=5;
}
if( pt64x-5<=Pacman_x &&Pacman_x <= pt64x + 5 &&  pt64y-5<Pacman_y && Pacman_y <= pt64y + 5){
    pt64x = 900;
    pt64y = 900;
    score+=5;
}
if( pt65x-5<=Pacman_x &&Pacman_x <= pt65x + 5 &&  pt65y-5<Pacman_y && Pacman_y <= pt65y + 5){
    pt65x = 900;
    pt65y = 900;
    score+=5;
}
if( pt66x-5<=Pacman_x &&Pacman_x <= pt66x + 5 &&  pt66y-5<Pacman_y && Pacman_y <= pt66y + 5){
    pt66x = 900;
    pt66y = 900;
    score+=5;
}
if( pt67x-5<=Pacman_x &&Pacman_x <= pt67x + 5 &&  pt67y-5<Pacman_y && Pacman_y <= pt67y + 5){
    pt67x = 900;
    pt67y = 900;
    score+=5;
}
if( pt68x-5<=Pacman_x &&Pacman_x <= pt68x + 5 &&  pt68y-5<Pacman_y && Pacman_y <= pt68y + 5){
    pt68x = 900;
    pt68y = 900;
    score+=5;
}
if( pt69x-5<=Pacman_x &&Pacman_x <= pt69x + 5 &&  pt69y-5<Pacman_y && Pacman_y <= pt69y + 5){
    pt69x = 900;
    pt69y = 900;
    score+=5;
}
if( pt70x-5<=Pacman_x &&Pacman_x <= pt70x + 5 &&  pt70y-5<Pacman_y && Pacman_y <= pt70y + 5){
    pt70x = 900;
    pt70y = 900;
    score+=5;
}
if( pt71x-5<=Pacman_x &&Pacman_x <= pt71x + 5 &&  pt71y-5<Pacman_y && Pacman_y <= pt71y + 5){
    pt71x = 900;
    pt71y = 900;
    score+=10;
}
if( pt72x-5<=Pacman_x &&Pacman_x <= pt72x + 5 &&  pt72y-5<Pacman_y && Pacman_y <= pt72y + 5){
    pt72x = 900;
    pt72y = 900;
    score+=5;
}
if( pt73x-5<=Pacman_x &&Pacman_x <= pt73x + 5 &&  pt73y-5<Pacman_y && Pacman_y <= pt73y + 5){
    pt73x = 900;
    pt73y = 900;
    score+=5;
}
if( pt74x-5<=Pacman_x &&Pacman_x <= pt74x + 5 &&  pt74y-5<Pacman_y && Pacman_y <= pt74y + 5){
    pt74x = 900;
    pt74y = 900;
    score+=5;
}
if( pt75x-5<=Pacman_x &&Pacman_x <= pt75x + 5 &&  pt75y-5<Pacman_y && Pacman_y <= pt75y + 5){
    pt75x = 900;
    pt75y = 900;
    score+=5;
}
if( pt76x-5<=Pacman_x &&Pacman_x <= pt76x + 5 &&  pt76y-5<Pacman_y && Pacman_y <= pt76y + 5){
    pt76x = 900;
    pt76y = 900;
    score+=5;
}
if( pt77x-5<=Pacman_x &&Pacman_x <= pt77x + 5 &&  pt77y-5<Pacman_y && Pacman_y <= pt77y + 5){
    pt77x = 900;
    pt77y = 900;
    score+=5;
}
if( pt78x-5<=Pacman_x &&Pacman_x <= pt78x + 5 &&  pt78y-5<Pacman_y && Pacman_y <= pt78y + 5){
    pt78x = 900;
    pt78y = 900;
    score+=10;
}
if( pt79x-5<=Pacman_x &&Pacman_x <= pt79x + 5 &&  pt79y-5<Pacman_y && Pacman_y <= pt79y + 5){
    pt79x = 900;
    pt79y = 900;
    score+=5;
}
if( pt80x-5<=Pacman_x &&Pacman_x <= pt80x + 5 &&  pt80y-5<Pacman_y && Pacman_y <= pt80y + 5){
    pt80x = 900;
    pt80y = 900;
    score+=5;
}
if( pt81x-5<=Pacman_x &&Pacman_x <= pt81x + 5 &&  pt81y-5<Pacman_y && Pacman_y <= pt81y + 5){
    pt81x = 900;
    pt81y = 900;
    score+=5;
}
if( pt82x-5<=Pacman_x &&Pacman_x <= pt82x + 5 &&  pt82y-5<Pacman_y && Pacman_y <= pt82y + 5){
    pt82x = 900;
    pt82y = 900;
    score+=5;
}
if( pt83x-5<=Pacman_x &&Pacman_x <= pt83x + 5 &&  pt83y-5<Pacman_y && Pacman_y <= pt83y + 5){
    pt83x = 900;
    pt83y = 900;
    score+=5;
}
if( pt84x-5<=Pacman_x &&Pacman_x <= pt84x + 5 &&  pt84y-5<Pacman_y && Pacman_y <= pt84y + 5){
    pt84x = 900;
    pt84y = 900;
    score+=5;
}
if( pt85x-5<=Pacman_x &&Pacman_x <= pt85x + 5 &&  pt85y-5<Pacman_y && Pacman_y <= pt85y + 5){
    pt85x = 900;
    pt85y = 900;
    score+=5;
}
if( pt86x-5<=Pacman_x &&Pacman_x <= pt86x + 5 &&  pt86y-5<Pacman_y && Pacman_y <= pt86y + 5){
    pt86x = 900;
    pt86y = 900;
    score+=5;
}
if( pt87x-5<=Pacman_x &&Pacman_x <= pt87x + 5 &&  pt87y-5<Pacman_y && Pacman_y <= pt87y + 5){
    pt87x = 900;
    pt87y = 900;
    score+=5;
}
if( pt88x-5<=Pacman_x &&Pacman_x <= pt88x + 5 &&  pt88y-5<Pacman_y && Pacman_y <= pt88y + 5){
    pt88x = 900;
    pt88y = 900;
    score+=10;
}
if( pt89x-5<=Pacman_x &&Pacman_x <= pt89x + 5 &&  pt89y-5<Pacman_y && Pacman_y <= pt89y + 5){
    pt89x = 900;
    pt89y = 900;
    score+=5;
}
if( pt90x-5<=Pacman_x &&Pacman_x <= pt90x + 5 &&  pt90y-5<Pacman_y && Pacman_y <= pt90y + 5){
    pt90x = 900;
    pt90y = 900;
    score+=5;
}
if( pt91x-5<=Pacman_x &&Pacman_x <= pt91x + 5 &&  pt91y-5<Pacman_y && Pacman_y <= pt91y + 5){
    pt91x = 900;
    pt91y = 900;
    score+=5;
}
if( pt92x-5<=Pacman_x &&Pacman_x <= pt92x + 5 &&  pt92y-5<Pacman_y && Pacman_y <= pt92y + 5){
    pt92x = 900;
    pt92y = 900;
    score+=5;
}
if( pt93x-5<=Pacman_x &&Pacman_x <= pt93x + 5 &&  pt93y-5<Pacman_y && Pacman_y <= pt93y + 5){
    pt93x = 900;
    pt93y = 900;
    score+=5;
}
if( pt94x-5<=Pacman_x &&Pacman_x <= pt94x + 5 &&  pt94y-5<Pacman_y && Pacman_y <= pt94y + 5){
    pt94x = 900;
    pt94y = 900;
    score+=5;
}
if( pt95x-5<=Pacman_x &&Pacman_x <= pt95x + 5 &&  pt95y-5<Pacman_y && Pacman_y <= pt95y + 5){
    pt95x = 900;
    pt95y = 900;
    score+=5;
}
if( pt96x-5<=Pacman_x &&Pacman_x <= pt96x + 5 &&  pt96y-5<Pacman_y && Pacman_y <= pt96y + 5){
    pt96x = 900;
    pt96y = 900;
    score+=5;
}
if( pt97x-5<=Pacman_x &&Pacman_x <= pt97x + 5 &&  pt97y-5<Pacman_y && Pacman_y <= pt97y + 5){
    pt97x = 900;
    pt97y = 900;
    score+=5;
}
if( pt98x-5<=Pacman_x &&Pacman_x <= pt98x + 5 &&  pt98y-5<Pacman_y && Pacman_y <= pt98y + 5){
    pt98x = 900;
    pt98y = 900;
    score+=5;
}
if( pt99x-5<=Pacman_x &&Pacman_x <= pt99x + 5 &&  pt99y-5<Pacman_y && Pacman_y <= pt99y + 5){
    pt99x = 900;
    pt99y = 900;
    score+=5;
}
if( pt100x-5<=Pacman_x &&Pacman_x <= pt100x + 5 &&  pt100y-5<Pacman_y && Pacman_y <= pt100y + 5){
    pt100x = 900;
    pt100y = 900;
    score+=5;
}
if( pt101x-5<=Pacman_x &&Pacman_x <= pt101x + 5 &&  pt101y-5<Pacman_y && Pacman_y <= pt101y + 5){
    pt101x = 900;
    pt101y = 900;
    score+=5;
}
if( pt102x-5<=Pacman_x &&Pacman_x <= pt102x + 5 &&  pt102y-5<Pacman_y && Pacman_y <= pt102y + 5){
    pt102x = 900;
    pt102y = 900;
    score+=5;
}
if( pt103x-5<=Pacman_x &&Pacman_x <= pt103x + 5 &&  pt103y-5<Pacman_y && Pacman_y <= pt103y + 5){
    pt103x = 900;
    pt103y = 900;
    score+=5;
}
if( pt104x-5<=Pacman_x &&Pacman_x <= pt104x + 5 &&  pt104y-5<Pacman_y && Pacman_y <= pt104y + 5){
    pt104x = 900;
    pt104y = 900;
    score+=5;
}
if( pt105x-5<=Pacman_x &&Pacman_x <= pt105x + 5 &&  pt105y-5<Pacman_y && Pacman_y <= pt105y + 5){
    pt105x = 900;
    pt105y = 900;
    score+=5;
}
if( pt106x-5<=Pacman_x &&Pacman_x <= pt106x + 5 &&  pt106y-5<Pacman_y && Pacman_y <= pt106y + 5){
    pt106x = 900;
    pt106y = 900;
    score+=10;
}
if( pt107x-5<=Pacman_x &&Pacman_x <= pt107x + 5 &&  pt107y-5<Pacman_y && Pacman_y <= pt107y + 5){
    pt107x = 900;
    pt107y = 900;
    score+=5;
}
if( pt108x-5<=Pacman_x &&Pacman_x <= pt108x + 5 &&  pt108y-5<Pacman_y && Pacman_y <= pt108y + 5){
    pt108x = 900;
    pt108y = 900;
    score+=5;
}
if( pt109x-5<=Pacman_x &&Pacman_x <= pt109x + 5 &&  pt109y-5<Pacman_y && Pacman_y <= pt109y + 5){
    pt109x = 900;
    pt109y = 900;
    score+=5;
}
if( pt110x-5<=Pacman_x &&Pacman_x <= pt110x + 5 &&  pt110y-5<Pacman_y && Pacman_y <= pt110y + 5){
    pt110x = 900;
    pt110y = 900;
    score+=5;
}
if( pt111x-5<=Pacman_x &&Pacman_x <= pt111x + 5 &&  pt111y-5<Pacman_y && Pacman_y <= pt111y + 5){
    pt111x = 900;
    pt111y = 900;
    score+=5;
}
if( pt112x-5<=Pacman_x &&Pacman_x <= pt112x + 5 &&  pt112y-5<Pacman_y && Pacman_y <= pt112y + 5){
    pt112x = 900;
    pt112y = 900;
    score+=5;
}
if( pt113x-5<=Pacman_x &&Pacman_x <= pt113x + 5 &&  pt113y-5<Pacman_y && Pacman_y <= pt113y + 5){
    pt113x = 900;
    pt113y = 900;
    score+=5;
}
if( pt114x-5<=Pacman_x &&Pacman_x <= pt114x + 5 &&  pt114y-5<Pacman_y && Pacman_y <= pt114y + 5){
    pt114x = 900;
    pt114y = 900;
    score+=5;
}
if( pt115x-5<=Pacman_x &&Pacman_x <= pt115x + 5 &&  pt115y-5<Pacman_y && Pacman_y <= pt115y + 5){
    pt115x = 900;
    pt115y = 900;
    score+=5;
}
if( pt116x-5<=Pacman_x &&Pacman_x <= pt116x + 5 &&  pt116y-5<Pacman_y && Pacman_y <= pt116y + 5){
    pt116x = 900;
    pt116y = 900;
    score+=5;
}
if( pt117x-5<=Pacman_x &&Pacman_x <= pt117x + 5 &&  pt117y-5<Pacman_y && Pacman_y <= pt117y + 5){
    pt117x = 900;
    pt117y = 900;
    score+=5;
}
if( pt118x-5<=Pacman_x &&Pacman_x <= pt118x + 5 &&  pt118y-5<Pacman_y && Pacman_y <= pt118y + 5){
    pt118x = 900;
    pt118y = 900;
    score+=5;
}
if( pt119x-5<=Pacman_x &&Pacman_x <= pt119x + 5 &&  pt119y-5<Pacman_y && Pacman_y <= pt119y + 5){
    pt119x = 900;
    pt119y = 900;
    score+=5;
}
if( pt120x-5<=Pacman_x &&Pacman_x <= pt120x + 5 &&  pt120y-5<Pacman_y && Pacman_y <= pt120y + 5){
    pt120x = 900;
    pt120y = 900;
    score+=5;
}
if( pt121x-5<=Pacman_x &&Pacman_x <= pt121x + 5 &&  pt121y-5<Pacman_y && Pacman_y <= pt121y + 5){
    pt121x = 900;
    pt121y = 900;
    score+=5;
}
if( pt122x-5<=Pacman_x &&Pacman_x <= pt122x + 5 &&  pt122y-5<Pacman_y && Pacman_y <= pt122y + 5){
    pt122x = 900;
    pt122y = 900;
    score+=5;
}
if( pt123x-5<=Pacman_x &&Pacman_x <= pt123x + 5 &&  pt123y-5<Pacman_y && Pacman_y <= pt123y + 5){
    pt123x = 900;
    pt123y = 900;
    score+=5;
}
if( pt124x-5<=Pacman_x &&Pacman_x <= pt124x + 5 &&  pt124y-5<Pacman_y && Pacman_y <= pt124y + 5){
    pt124x = 900;
    pt124y = 900;
    score+=5;
}
if( pt125x-5<=Pacman_x &&Pacman_x <= pt125x + 5 &&  pt125y-5<Pacman_y && Pacman_y <= pt125y + 5){
    pt125x = 900;
    pt125y = 900;
    score+=5;
}
if( pt126x-5<=Pacman_x &&Pacman_x <= pt126x + 5 &&  pt126y-5<Pacman_y && Pacman_y <= pt126y + 5){
    pt126x = 900;
    pt126y = 900;
    score+=5;
}
if( pt127x-5<=Pacman_x &&Pacman_x <= pt127x + 5 &&  pt127y-5<Pacman_y && Pacman_y <= pt127y + 5){
    pt127x = 900;
    pt127y = 900;
    score+=10;
}
if( pt128x-5<=Pacman_x &&Pacman_x <= pt128x + 5 &&  pt128y-5<Pacman_y && Pacman_y <= pt128y + 5){
    pt128x = 900;
    pt128y = 900;
    score+=5;
}
if( pt129x-5<=Pacman_x &&Pacman_x <= pt129x + 5 &&  pt129y-5<Pacman_y && Pacman_y <= pt129y + 5){
    pt129x = 900;
    pt129y = 900;
    score+=5;
}
if( pt130x-5<=Pacman_x &&Pacman_x <= pt130x + 5 &&  pt130y-5<Pacman_y && Pacman_y <= pt130y + 5){
    pt130x = 900;
    pt130y = 900;
    score+=5;
}
if( pt131x-5<=Pacman_x &&Pacman_x <= pt131x + 5 &&  pt131y-5<Pacman_y && Pacman_y <= pt131y + 5){
    pt131x = 900;
    pt131y = 900;
    score+=5;
}
if( pt132x-5<=Pacman_x &&Pacman_x <= pt132x + 5 &&  pt132y-5<Pacman_y && Pacman_y <= pt132y + 5){
    pt132x = 900;
    pt132y = 900;
    score+=5;
}
if( pt133x-5<=Pacman_x &&Pacman_x <= pt133x + 5 &&  pt133y-5<Pacman_y && Pacman_y <= pt133y + 5){
    pt133x = 900;
    pt133y = 900;
    score+=5;
}
if( pt134x-5<=Pacman_x &&Pacman_x <= pt134x + 5 &&  pt134y-5<Pacman_y && Pacman_y <= pt134y + 5){
    pt134x = 900;
    pt134y = 900;
    score+=5;
}
if( pt135x-5<=Pacman_x &&Pacman_x <= pt135x + 5 &&  pt135y-5<Pacman_y && Pacman_y <= pt135y + 5){
    pt135x = 900;
    pt135y = 900;
    score+=5;
}
if( pt136x-5<=Pacman_x &&Pacman_x <= pt136x + 5 &&  pt136y-5<Pacman_y && Pacman_y <= pt136y + 5){
    pt136x = 900;
    pt136y = 900;
    score+=5;
}
if( pt137x-5<=Pacman_x &&Pacman_x <= pt137x + 5 &&  pt137y-5<Pacman_y && Pacman_y <= pt137y + 5){
    pt137x = 900;
    pt137y = 900;
    score+=5;
}
if( pt138x-5<=Pacman_x &&Pacman_x <= pt138x + 5 &&  pt138y-5<Pacman_y && Pacman_y <= pt138y + 5){
    pt138x = 900;
    pt138y = 900;
    score+=5;
}
if( pt139x-5<=Pacman_x &&Pacman_x <= pt139x + 5 &&  pt139y-5<Pacman_y && Pacman_y <= pt139y + 5){
    pt139x = 900;
    pt139y = 900;
    score+=5;
}
if( pt140x-5<=Pacman_x &&Pacman_x <= pt140x + 5 &&  pt140y-5<Pacman_y && Pacman_y <= pt140y + 5){
    pt140x = 900;
    pt140y = 900;
    score+=5;
}
if( pt141x-5<=Pacman_x &&Pacman_x <= pt141x + 5 &&  pt141y-5<Pacman_y && Pacman_y <= pt141y + 5){
    pt141x = 900;
    pt141y = 900;
    score+=5;
}
if( pt142x-5<=Pacman_x &&Pacman_x <= pt142x + 5 &&  pt142y-5<Pacman_y && Pacman_y <= pt142y + 5){
    pt142x = 900;
    pt142y = 900;
    score+=5;
}
if( pt143x-5<=Pacman_x &&Pacman_x <= pt143x + 5 &&  pt143y-5<Pacman_y && Pacman_y <= pt143y + 5){
    pt143x = 900;
    pt143y = 900;
    score+=5;
}
if( pt144x-5<=Pacman_x &&Pacman_x <= pt144x + 5 &&  pt144y-5<Pacman_y && Pacman_y <= pt144y + 5){
    pt144x = 900;
    pt144y = 900;
    score+=5;
}
if( pt145x-5<=Pacman_x &&Pacman_x <= pt145x + 5 &&  pt145y-5<Pacman_y && Pacman_y <= pt145y + 5){
    pt145x = 900;
    pt145y = 900;
    score+=5;
}
if( pt146x-5<=Pacman_x &&Pacman_x <= pt146x + 5 &&  pt146y-5<Pacman_y && Pacman_y <= pt146y + 5){
    pt146x = 900;
    pt146y = 900;
    score+=10;
}
if( pt147x-5<=Pacman_x &&Pacman_x <= pt147x + 5 &&  pt147y-5<Pacman_y && Pacman_y <= pt147y + 5){
    pt147x = 900;
    pt147y = 900;
    score+=5;
}
if( pt148x-5<=Pacman_x &&Pacman_x <= pt148x + 5 &&  pt148y-5<Pacman_y && Pacman_y <= pt148y + 5){
    pt148x = 900;
    pt148y = 900;
    score+=5;
}
if( pt149x-5<=Pacman_x &&Pacman_x <= pt149x + 5 &&  pt149y-5<Pacman_y && Pacman_y <= pt149y + 5){
    pt149x = 900;
    pt149y = 900;
    score+=5;
}
if( pt150x-5<=Pacman_x &&Pacman_x <= pt150x + 5 &&  pt150y-5<Pacman_y && Pacman_y <= pt150y + 5){
    pt150x = 900;
    pt150y = 900;
    score+=5;
}
if( pt151x-5<=Pacman_x &&Pacman_x <= pt151x + 5 &&  pt151y-5<Pacman_y && Pacman_y <= pt151y + 5){
    pt151x = 900;
    pt151y = 900;
    score+=5;
}

ghost2_x = ghost2_x - w;
ghost2_y = ghost2_y - h;
if(ghost2_x < 330){
    b = 0;
    w = 0;
    h = 0.08;
}
if(ghost2_y< 330){
    h = 0;
    w = -0.08;
}
if(ghost2_x > 520){
    w = 0;
    h = -0.08;
    b = 1;
}
if(ghost2_x > 520 && ghost2_y > 520 && b == 1){
    h = 0;
    w = 0.08;
}
ghost1_x = ghost1_x + x;
ghost1_y = ghost1_y - y;
if (ghost1_y > 275){
    a = 0;
    y = 0;
    x = 0.08;
}
if(ghost1_x> 275){
    x = 0;
    y = 0.08;
}
if(ghost1_y < 75){
    y = 0 ;
    x = -0.08;
    a = 1;
}
if ( ghost1_x < 75 && a == 1){
    x = 0;
    y = -0.08;
}

Pacman_x = Pacman_x - c;
Pacman_y = Pacman_y - d;


if(Pacman_x < 65 || Pacman_x > 530 || Pacman_y < 65 || Pacman_y > 530 || 90 < Pacman_x && Pacman_x < 265 && 90 < Pacman_y && Pacman_y < 265 || 340 < Pacman_x && Pacman_x < 515 && 90 < Pacman_y && Pacman_y < 265 || 340 < Pacman_x && Pacman_x < 515 && 340 < Pacman_y && Pacman_y < 515 || 90 < Pacman_x && Pacman_x < 265 && 340 < Pacman_y && Pacman_y < 515 ){
    counter++;
    Pacman_x = 300;
    Pacman_y = 300;
    c = 0;
    d = 0;
    if(counter==1){
        PacLive1x=-400;
        PacLive1y=-400;
        pacLiveRadius1=0;

    }
     else if(counter==2){
        PacLive2x=-200;
        PacLive2y=-300;
        pacLiveRadius2=0;

    }
     else if(counter==3){
        PacLive3x=-300;
        PacLive3y=-300;
         pacLiveRadius3=0;
    }
    else if(counter==4){
           gameOver=true;
    }

}


mouthSizeBegin = mouthSizeBegin -MAN;
mouthSizeEnd = mouthSizeEnd +MAN;
if(( mouthSizeBegin<0.0&&mouthSizeEnd>0.0&&rightt==1)||( mouthSizeBegin>0.785398&&mouthSizeEnd< 5.49779&&rightt==1)){
    MAN = -MAN;
}
if( (mouthSizeBegin<3.141593&&mouthSizeEnd>3.141593&&leftt==1)||( mouthSizeBegin>3.926991 &&mouthSizeEnd<8.63938&&leftt==1)){
    MAN = -MAN;
}
if( (mouthSizeBegin<1.5708&&mouthSizeEnd>1.5708&&up==1)||( mouthSizeBegin>2.35619 &&mouthSizeEnd<7.068583&&up==1)){
    MAN = -MAN;
}
if(( mouthSizeBegin<4.712389&&mouthSizeEnd>4.712389&&down==1)||( mouthSizeBegin>-0.7068583 &&mouthSizeEnd<3.92699&&down==1)){
    MAN = -MAN;
}

//g3
ghost3_x = ghost3_x + xx;//70
ghost3_y = ghost3_y - yy;//520

if (ghost3_x>=270 &&ff==0){

    xx=0;
    yy=0.08;

}

if (ghost3_y<=310&&ff==0){

     xx=0.08;
     yy=0;
}


if (ghost3_x>=530&&ff==0){

     xx=0;
     yy=0.08;
}


if (ghost3_y<=70&&ff==0){

     xx=-0.08;
     yy=0;

}


if (ghost3_x<=330&&ghost3_y<=70){

    ff=1;
}




if (ghost3_x<=330&&ghost3_y<=70&&ff==1){

     xx=0;
     yy=-0.08;
}



if (ghost3_y>=310&&ff==1){

     xx=-0.08;
     yy=0;
}





if (ghost3_x<=70&&ff==1){

     xx=0;
     yy=-0.08;
}

if (ghost3_y>=520&&ff==1){

     xx=0.08;
     yy=0;
     ff=0;
}

if(energisedState1==false){

    if(Pacman_y < ghost1_y+10 && Pacman_y > ghost1_y-10 && Pacman_x < ghost1_x+10 && Pacman_x > ghost1_x-10 || Pacman_y < ghost2_y+10 && Pacman_y > ghost2_y-10 && Pacman_x < ghost2_x+10 && Pacman_x > ghost2_x-10 || Pacman_y < ghost3_y+10 && Pacman_y > ghost3_y-10 && Pacman_x < ghost3_x+10 && Pacman_x > ghost3_x-10){
    Pacman_x = 300;
    Pacman_y = 300;
    c = 0;
    d = 0;
    counter++;
    if(counter==1){
        PacLive1x=-400;
        PacLive1y=-400;
        pacLiveRadius1=0;

    }
     else if(counter==2){
        PacLive2x=-200;
        PacLive2y=-300;
        pacLiveRadius2=0;

    }
     else if(counter==3){
        PacLive3x=-300;
        PacLive3y=-300;
         pacLiveRadius3=0;
    }
    else if(counter==4){
           gameOver=true;
    }


}



}



glutPostRedisplay();

}

void draw_lives2( float pacLive_x,float pacLive_y,int pacLiveRadius){

float theta2 ;

//body

glBegin(GL_POLYGON);

for(theta2= 0.0; theta2 <= 2*pi; theta2 += inc){
glColor4f(1,1,0.3,0);
glVertex2f(pacLive_x+pacLiveRadius*cos(theta2), pacLive_y+pacLiveRadius*sin(theta2));
}
glEnd();

//mouth

glBegin(GL_POLYGON);
glColor4f(0,0,0,0);
glVertex2f(pacLive_x,pacLive_y);
for(theta2 = -mouthSize2_lev2; theta2<= mouthSize2_lev2; theta2 +=inc){
    glVertex2d((pacLive_x)+(pacLiveRadius)*cos(theta2), (pacLive_y)+(pacLiveRadius)*sin(theta2));
}

glEnd();



}


void draw_ghosts_2(){
glPointSize(17);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(ghost1_x_lev2,ghost1_y_lev2);
glVertex2f(ghost2_x_lev2,ghost2_y_lev2);
glVertex2f(ghost3_x_lev2,ghost3_y_lev2);
glEnd();
}

// food for maze level 1
void draw_food_2() {

char stringg [50];
sprintf(stringg,"Score: %d", score_lev2);
glColor3f(1, 1, 1);
Text_display(100,570,(void *)font1, stringg);
Text_display(260,570,(void *)font1, "Level: 2");

glColor3f(1,0.7,0);
glPointSize(psize);
glEnable(GL_POINT_SMOOTH);
glBegin(GL_POINTS);


glVertex2f(p2t1x,p2t1y);
glVertex2f(p2t2x,p2t2y);
glVertex2f(p2t3x,p2t3y);
glVertex2f(p2t4x,p2t4y);
glVertex2f(p2t5x,p2t5y);
glVertex2f(p2t6x,p2t6y);
glVertex2f(p2t8x,p2t8y);
glVertex2f(p2t9x,p2t9y);
glVertex2f(p2t10x,p2t10y);
glVertex2f(p2t11x,p2t11y);
glVertex2f(p2t12x,p2t12y);

glVertex2f(p2t14x,p2t14y);
glVertex2f(p2t15x,p2t15y);
glVertex2f(p2t16x,p2t16y);
glVertex2f(p2t17x,p2t17y);
glVertex2f(p2t18x,p2t18y);
glVertex2f(p2t20x,p2t20y);
glVertex2f(p2t21x,p2t21y);
glVertex2f(p2t22x,p2t22y);
glVertex2f(p2t23x,p2t23y);
glVertex2f(p2t24x,p2t24y);
glVertex2f(p2t25x,p2t25y);
glVertex2f(p2t27x,p2t27y);
glVertex2f(p2t28x,p2t28y);
glVertex2f(p2t40x,p2t40y);
glVertex2f(p2t29x,p2t29y);
glVertex2f(p2t30x,p2t30y);
glVertex2f(p2t31x,p2t31y);
glVertex2f(p2t32x,p2t32y);
glVertex2f(p2t33x,p2t33y);
glVertex2f(p2t34x,p2t34y);
glVertex2f(p2t35x,p2t35y);
glVertex2f(p2t36x,p2t36y);
glVertex2f(p2t37x,p2t37y);
glVertex2f(p2t39x,p2t39y);
glVertex2f(p2t41x,p2t41y);
glVertex2f(p2t42x,p2t42y);
glVertex2f(p2t43x,p2t43y);
glVertex2f(p2t44x,p2t44y);
glVertex2f(p2t45x,p2t45y);
glVertex2f(p2t46x,p2t46y);
glVertex2f(p2t47x,p2t47y);
glVertex2f(p2t48x,p2t48y);
glVertex2f(p2t50x,p2t50y);
glVertex2f(p2t51x,p2t51y);
glVertex2f(p2t52x,p2t52y);
glVertex2f(p2t53x,p2t53y);
glVertex2f(p2t54x,p2t54y);
glVertex2f(p2t56x,p2t56y);
glVertex2f(p2t57x,p2t57y);
glVertex2f(p2t58x,p2t58y);
glVertex2f(p2t59x,p2t59y);
glVertex2f(p2t60x,p2t60y);
glVertex2f(p2t61x,p2t61y);
glVertex2f(p2t62x,p2t62y);
glVertex2f(p2t63x,p2t63y);
glVertex2f(p2t64x,p2t64y);
glVertex2f(p2t65x,p2t65y);
glVertex2f(p2t66x,p2t66y);
glVertex2f(p2t67x,p2t67y);
glVertex2f(p2t68x,p2t68y);
glVertex2f(p2t70x,p2t70y);
glVertex2f(p2t69x,p2t69y);
glVertex2f(p2t72x,p2t72y);
glVertex2f(p2t73x,p2t73y);
glVertex2f(p2t74x,p2t74y);
glVertex2f(p2t75x,p2t75y);
glVertex2f(p2t76x,p2t76y);
glVertex2f(p2t77x,p2t77y);
glVertex2f(p2t78x,p2t78y);
glVertex2f(p2t79x,p2t79y);
glVertex2f(p2t80x,p2t80y);
glVertex2f(p2t81x,p2t81y);
glVertex2f(p2t82x,p2t82y);
glVertex2f(p2t83x,p2t83y);
glVertex2f(p2t84x,p2t84y);
glVertex2f(p2t85x,p2t85y);
glVertex2f(p2t86x,p2t86y);
glVertex2f(p2t87x,p2t88y);
glVertex2f(p2t88x,p2t88y);
glVertex2f(p2t89x,p2t89y);
glVertex2f(p2t90x,p2t90y);
glVertex2f(p2t91x,p2t91y);
glVertex2f(p2t92x,p2t92y);
glVertex2f(p2t93x,p2t93y);
glVertex2f(p2t94x,p2t94y);
glVertex2f(p2t95x,p2t95y);
glColor3f(0,1,0);
glVertex2f(p2t19x,p2t19y);
glVertex2f(p2t13x,p2t13y);
glVertex2f(p2t7x,p2t7y);
glVertex2f(p2t26x,p2t26y);
glVertex2f(p2t38x,p2t38y);
glVertex2f(p2t55x,p2t55y);
glVertex2f(p2t49x,p2t49y);
glVertex2f(p2t71x,p2t71y);


glEnd();
 if(gameOver_lev2==true){
glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("GAME OVER");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(display2_lev2);
glutMainLoop();
}
}


void mazeldisplay_2(){

glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);

if(score_lev2 > 510){
        b=0;
        w=0;
h=0.02;
a=0;
y=0;
x=0.02;
xx=0.08;
yy=0;
ff=0;
    glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("Pacman Level 3");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(display);
glutSpecialFunc(keyboard);
glutMainLoop();
}



glColor3f(0,0,1);

//the points of the four corners of the square to create the edges of the map

glEnable(GL_POINT_SMOOTH);
glPointSize(12);
glBegin(GL_POINTS);
glVertex2f(50,50);
glVertex2f(50,550);
glVertex2f(550,550);
glVertex2f(550,50);

glEnd();

glLineWidth(13);
glBegin(GL_LINE_STRIP);

glVertex2f(50,50);
glVertex2f(50,550);
glVertex2f(550,550);
glVertex2f(550,50);
glVertex2f(50,50);
glEnd();

//creating the walls inside the map  we had created


glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(150,250);
glVertex2f(150,350); //SIDE VIEW
glVertex2f(450,350);
glVertex2f(450,250);
glEnd();


glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(225,350);
glVertex2f(225,450);
glVertex2f(375,450);
glVertex2f(375,350);
glEnd();


glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(225,250); // GREEN SIDE RIGHT
glVertex2f(225,150);
glVertex2f(375,150);
glVertex2f(375,250);
glEnd();
draw_lives2(PacLive1x_lev2, PacLive1y_lev2, pacLiveRadius1_lev2);
draw_lives2(PacLive2x_lev2, PacLive2y_lev2, pacLiveRadius2_lev2);
draw_lives2(PacLive3x_lev2, PacLive3y_lev2, pacLiveRadius3_lev2);
draw_ghosts_2();
draw_food_2();
draw_pacman_lvl_2();
glFlush();




if( p2t1x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t1x + 10 && p2t1y-5<=Pacman_y_lev2 && Pacman_y_lev2<=p2t1y + 5){
    p2t1x = -200;
    p2t1y = -200;
     score_lev2+=5;
}

if(  p2t2x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t2x + 5 &&  p2t2y-5<= Pacman_y_lev2 && Pacman_y_lev2 <=p2t2y + 5){
    p2t2x = -200;
    p2t2y = -200;
     score_lev2+=5;
}
if( p2t3x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t3x + 5 &&  p2t3y-5<= Pacman_y_lev2 && Pacman_y_lev2 <= p2t3y + 5){
    p2t3x = -200;
    p2t3y = -200;
    score_lev2+=5;
}
if(p2t4x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t4x + 5 &&  p2t4y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t4y + 5){
    p2t4x = -200;
    p2t4y = -200;
     score_lev2+=5;
}
if( p2t5x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t5x + 5 &&  p2t5y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t5y + 5){
    p2t5x = -200;
    p2t5y = -200;
     score_lev2+=5;
}
if(p2t6x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t6x + 5 &&  p2t6y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t6y + 5){
    p2t6x = -200;
    p2t6y = -200;
    score_lev2+=5;}
if( p2t7x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t7x + 5 &&  p2t7y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t7y + 5){
    p2t7x = -200;
    p2t7y = -200;
    score_lev2+=10;
}
if( p2t8x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t8x + 5 &&  p2t8y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t8y + 5){
    p2t8x = -200;
    p2t8y = -200;
     score_lev2+=5;
}
if( p2t9x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t9x + 5 &&  p2t9y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t9y + 5){
    p2t9x = 1000;
    p2t9y = 1000;
     score_lev2+=5;
}
if( p2t10x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t10x + 5 &&  p2t10y-10<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t10y + 5){
    p2t10x = 1000;
    p2t10y = 1000;
     score_lev2+=5;
}
if( p2t11x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t11x + 5 &&  p2t11y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t11y + 5){
    p2t11x = 900;
    p2t11y = 1000;
     score_lev2+=5;
}
if(p2t12x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t12x + 5 &&  p2t12y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t12y + 5){
    p2t12x = 750;
    p2t12y = 1000;
     score_lev2+=5;
}
if( p2t13x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t13x + 5 &&  p2t13y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t13y + 5){
    p2t13x = 1000;
    p2t13y = 800;
    score_lev2+=10;
}
if( p2t14x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t14x + 5 &&  p2t14y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t14y + 5){
    p2t14x = 700;
    p2t14y = 1000;
     score_lev2+=5;
}
if( p2t15x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t15x + 5 &&  p2t15y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t15y + 5){
    p2t15x = 9000;
    p2t15y = 800;
     score_lev2+=5;
}
if( p2t16x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t16x + 5 &&  p2t16y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t16y + 5){
    p2t16x = 6500;
    p2t16y = 650;
     score_lev2+=5;
}
if( p2t17x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t17x + 5 &&  p2t17y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t17y + 5){
    p2t17x = 6000;
    p2t17y = 6000;
     score_lev2+=5;
}
if(p2t18x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t18x + 5 &&  p2t18y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t18y + 5){
    p2t18x = 700;
    p2t18y = 700;
     score_lev2+=5;
}
if( p2t19x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t19x + 5 &&  p2t19y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t19y + 5){
    p2t19x = 750;
    p2t19y = 750;
    score_lev2+=10;
}
if( p2t20x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t20x + 5 &&  p2t20y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t20y + 5){
    p2t20x = 850;
    p2t20y = 850;
     score_lev2+=5;
}
if( p2t21x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t21x + 5 &&  p2t21y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t21y + 5){
    p2t21x = 800;
    p2t21y = 800;
     score_lev2+=5;
}
if( p2t22x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t22x + 5 &&  p2t22y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t22y + 5){
    p2t22x = 950;
    p2t22y = 950;
    score_lev2+=5;
}
if(p2t23x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t23x + 5 &&  p2t23y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t23y + 5){
    p2t23x = 800;
    p2t23y = 800;
    score_lev2+=5;
}
if( p2t24x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t24x + 5 &&  p2t24y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t24y + 5){
    p2t24x = 900;
    p2t24y = 900;
    score_lev2+=5;
}
if( p2t25x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t25x + 5 &&  p2t25y-5<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t25y + 5){
    p2t25x = 900;
    p2t25y = 900;
    score_lev2+=5;
}
if( p2t26x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t26x + 5 &&  p2t26y-5<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t26y + 5){
    p2t26x = 900;
    p2t26y = 900;
    score_lev2+=10;
}
if( p2t27x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t27x + 5 &&  p2t27y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t27y + 5){
    p2t27x = 900;
    p2t27y = 900;
    score_lev2+=5;
}
if(p2t28x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t28x + 5 &&  p2t28y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t28y + 5){
    p2t28x = 900;
    p2t28y = 900;
    score_lev2+=5;
}
if(p2t29x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t29x + 5 &&  p2t29y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t29y + 5){
    p2t29x = 900;
    p2t29y = 900;
    score_lev2+=5;
}
if( p2t30x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t30x + 5 &&  p2t30y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t30y + 5){
    p2t30x = 900;
    p2t30y = 900;
    score_lev2+=5;
}
if(p2t31x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t31x + 5 &&  p2t31y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t31y + 5){
    p2t31x = 900;
    p2t31y = 900;
    score_lev2+=5;
}
if( p2t32x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t32x + 5 &&  p2t32y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t32y + 5){
    p2t32x = 900;
    p2t32y = 900;
    score_lev2+=5;
}
if( p2t34x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t34x + 5 &&  p2t34y-5<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t34y + 5){
   // pt34x = 900;
    p2t34y = 900;
    score_lev2+=5;
}
if( p2t35x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t35x + 5 &&  p2t35y-5<=Pacman_y_lev2 && Pacman_y_lev2 <= p2t35y + 5){
    p2t35x = 900;
    p2t35y = 900;
    score_lev2+=5;
}
if( p2t33x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t33x + 5 &&  p2t33y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t33y + 5){
    p2t33x = 900;
    p2t33y = 900;
    score_lev2+=5;
}
if( p2t36x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t36x + 5 &&  p2t36y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t36y + 5){
    p2t36x = 900;
    p2t36y = 900;
    score_lev2+=5;
}
if( p2t37x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t37x + 5 &&  p2t37y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t37y + 5){
    p2t37x = 900;
    p2t37y = 900;
    score_lev2+=5;
}
if( p2t38x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t38x + 5 &&  p2t38y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t38y + 5){
    p2t38x = 900;
    p2t38y = 900;
    score_lev2+=10;
}
if(p2t39x-5<=Pacman_x_lev2 && Pacman_x_lev2 <= p2t39x + 5 &&  p2t39y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t39y + 5){
    p2t39x = 900;
    p2t39y = 900;
    score_lev2+=5;
}
if( p2t40x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t40x + 5 &&  p2t40y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t40y + 5){
    p2t40x = 900;
    p2t40y = 900;
    score_lev2+=5;
}
if( p2t42x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t42x + 5 &&  p2t42y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t42y + 5){
    p2t42x = 900;
    p2t42y = 900;
    score_lev2+=5;
}
if( p2t43x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t43x + 5 &&  p2t43y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t43y + 5){
    p2t43x = 900;
    p2t43y = 900;
    score_lev2+=5;
}
if( p2t44x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t44x + 5 &&  p2t44y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t44y + 5){
    p2t4x = 900;
    p2t44y = 900;
    score_lev2+=5;
}
if( p2t41x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t41x + 5 &&  p2t41y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t41y + 5){
    p2t41x = 900;
    p2t41y = 900;
    score_lev2+=5;
}
if( p2t45x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t45x + 5 &&  p2t45y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t45y + 5){
    p2t45x = 900;
    p2t45y = 900;
    score_lev2+=5;
}
if( p2t46x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t46x + 5 &&  p2t46y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t46y + 5){
    p2t46x = 900;
    p2t46y = 900;
    score_lev2+=5;
}
if( p2t47x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t47x + 5 &&  p2t47y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t47y + 5){
    p2t47x = 900;
    p2t47y = 900;
    score_lev2+=5;
}
if( p2t48x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t48x + 5 &&  p2t48y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t48y + 5){
    p2t48x = 900;
    p2t48y = 900;
    score_lev2+=5;
}
if( p2t49x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t49x + 5 &&  p2t49y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t49y + 5){
    p2t49x = 900;
    p2t49y = 900;
    score_lev2+=10;
}
if( p2t50x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t50x + 5 &&  p2t50y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t50y + 5){
    p2t50x = 900;
    p2t50y = 900;
    score_lev2+=5;
}
if( p2t51x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t51x + 5 &&  p2t51y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t51y + 5){
    p2t51x = 900;
    p2t51y = 900;
    score_lev2+=5;
}
if( p2t52x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t52x + 5 &&  p2t52y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t52y + 5){
    p2t52x = 900;
    p2t52y = 900;
    score_lev2+=5;
}
if( p2t53x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t53x + 5 &&  p2t53y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t53y + 5){
    p2t53x = 900;
    p2t53y = 900;
    score_lev2+=5;
}
if( p2t54x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t54x + 5 &&  p2t54y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t54y + 5){
    p2t54x = 900;
    p2t54y = 900;
    score_lev2+=5;
}
if( p2t55x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t55x + 5 &&  p2t55y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t55y + 5){
    p2t55x = 900;
    p2t55y = 900;
    score_lev2+=10;
}
if( p2t56x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t56x + 5 &&  p2t56y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t56y + 5){
    p2t56x = 900;
    p2t56y = 900;
    score_lev2+=5;
}
if( p2t57x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t57x + 5 &&  p2t57y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t57y + 5){
    p2t57x = 900;
    p2t57y = 900;
    score_lev2+=5;
}
if( p2t58x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t58x + 5 &&  p2t58y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t58y + 5){
    p2t58x = 900;
    p2t58y = 900;
    score_lev2+=5;
}
if( p2t59x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t59x + 5 &&  p2t59y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t59y + 5){
    p2t59x = 900;
    p2t59y = 900;
    score_lev2+=5;
}
if( p2t60x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t60x + 5 &&  p2t60y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t60y + 5){
    p2t60x = 900;
    p2t60y = 900;
    score_lev2+=5;
}
if( p2t61x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t61x + 5 &&  p2t61y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t61y + 5){
    p2t61x = 900;
    p2t61y = 900;
    score_lev2+=5;
}
if( p2t62x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t62x + 5 &&  p2t62y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t62y + 5){
    p2t62x = 900;
    p2t62y = 900;
    score_lev2+=5;
}

if( p2t63x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t63x + 5 &&  p2t63y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t63y + 5){
    p2t63x = 900;
    p2t63y = 900;
    score_lev2+=5;
}
if( p2t64x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t64x + 5 &&  p2t64y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t64y + 5){
    p2t64x = 900;
    p2t64y = 900;
    score_lev2+=5;
}
if( p2t65x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t65x + 5 &&  p2t65y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t65y + 5){
    p2t65x = 900;
    p2t65y = 900;
    score_lev2+=5;
}
if( p2t66x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t66x + 5 &&  p2t66y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t66y + 5){
    p2t66x = 900;
    p2t66y = 900;
    score_lev2+=5;
}
if( p2t67x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t67x + 5 &&  p2t67y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t67y + 5){
    p2t67x = 900;
    p2t67y = 900;
    score_lev2+=5;
}
if( p2t68x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t68x + 5 &&  p2t68y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t68y + 5){
    p2t68x = 900;
    p2t68y = 900;
    score_lev2+=5;
}
if( p2t69x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t69x + 5 &&  p2t69y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t69y + 5){
    p2t69x = 900;
    p2t69y = 900;
    score_lev2+=5;
}
if( p2t70x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t70x + 5 &&  p2t70y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t70y + 5){
    p2t70x = 900;
    p2t70y = 900;
    score_lev2+=5;
}
if( p2t71x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t71x + 5 &&  p2t71y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t71y + 5){
    p2t71x = 900;
    p2t71y = 900;
    score_lev2+=10;
}
if( p2t72x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t72x + 5 &&  p2t72y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t72y + 5){
    p2t72x = 900;
    p2t72y = 900;
    score_lev2+=5;
}
if( p2t73x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t73x + 5 &&  p2t73y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t73y + 5){
    p2t73x = 900;
    p2t73y = 900;
    score_lev2+=5;
}
if( p2t74x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t74x + 5 &&  p2t74y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t74y + 5){
    p2t74x = 900;
    p2t74y = 900;
    score_lev2+=5;
}
if( p2t75x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t75x + 5 &&  p2t75y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t75y + 5){
    p2t75x = 900;
    p2t75y = 900;
    score_lev2+=5;
}
if( p2t76x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t76x + 5 &&  p2t76y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t76y + 5){
    p2t76x = 900;
    p2t76y = 900;
    score_lev2+=5;
}
if( p2t77x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t77x + 5 &&  p2t77y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t77y + 5){
    p2t77x = 900;
    p2t77y = 900;
    score_lev2+=5;
}
if( p2t78x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t78x + 5 &&  p2t78y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t78y + 5){
    p2t78x = 900;
    p2t78y = 900;
    score_lev2+=10;
}
if( p2t79x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t79x + 5 &&  p2t79y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t79y + 5){
    p2t79x = 900;
    p2t79y = 900;
    score_lev2+=5;
}
if( p2t80x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t80x + 5 &&  p2t80y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t80y + 5){
    p2t80x = 900;
    p2t80y = 900;
    score_lev2+=5;
}
if( p2t81x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t81x + 5 &&  p2t81y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t81y + 5){
    p2t81x = 900;
    p2t81y = 900;
    score_lev2+=5;
}
if( p2t82x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t82x + 5 &&  p2t82y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t82y + 5){
    p2t82x = 900;
    p2t82y = 900;
    score_lev2+=5;
}
if( p2t83x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t83x + 5 &&  p2t83y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t83y + 5){
    p2t83x = 900;
    p2t83y = 900;
    score_lev2+=5;
}
if( p2t84x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t84x + 5 &&  p2t84y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t84y + 5){
    p2t84x = 900;
    p2t84y = 900;
    score_lev2+=5;
}
if( p2t85x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t85x + 5 &&  p2t85y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t85y + 5){
    p2t85x = 900;
    p2t85y = 900;
    score_lev2+=5;
}
if( p2t86x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t86x + 5 &&  p2t86y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t86y + 5){
    p2t86x = 900;
    p2t86y = 900;
    score_lev2+=5;
}
if( p2t87x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t87x + 5 &&  p2t87y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t87y + 5){
    p2t87x = 900;
    p2t87y = 900;
    score_lev2+=5;
}
if( p2t88x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t88x + 5 &&  p2t88y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t88y + 5){
    p2t88x = 900;
    p2t88y = 900;
    score_lev2+=5;
}
if( p2t89x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t89x + 5 &&  p2t89y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t89y + 5){
    p2t89x = 900;
    p2t89y = 900;
    score_lev2+=5;
}if( p2t90x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t90x + 5 &&  p2t90y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t90y + 5){
    p2t90x = 900;
    p2t90y = 900;
    score_lev2+=5;
}
if( p2t91x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t91x + 5 &&  p2t91y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t91y + 5){
    p2t91x = 900;
    p2t91y = 900;
    score_lev2+=5;
}
if( p2t92x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t92x + 5 &&  p2t92y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t92y + 5){
    p2t92x = 900;
    p2t92y = 900;
    score_lev2+=5;
}
if( p2t93x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t93x + 5 &&  p2t93y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t93y + 5){
    p2t93x = 900;
    p2t93y = 900;
    score_lev2+=5;
}
if( p2t94x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t94x + 5 &&  p2t94y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t94y + 5){
    p2t94x = 900;
    p2t94y = 900;
    score_lev2+=5;
}
if( p2t95x-5<=Pacman_x_lev2 &&Pacman_x_lev2 <= p2t95x + 5 &&  p2t95y-5<Pacman_y_lev2 && Pacman_y_lev2 <= p2t95y + 5){
    p2t95x = 900;
    p2t95y = 900;
    score_lev2+=5;
}

//g3
ghost3_x_lev2 = ghost3_x_lev2 + xx;//70
ghost3_y_lev2 = ghost3_y_lev2 - yy;//520
 xx=0.64;
if (ghost3_x_lev2>=520 &&ff_lev2==0){

    xx=0;
    yy=0.03;

}

if (ghost3_y_lev2<=310&&ff_lev2==0){

     xx=0.03;
     yy=0;
}


if (ghost3_x_lev2>=530&&ff_lev2==0){

     xx=0;
     yy=0.03;
}


if (ghost3_y_lev2<=70&&ff_lev2==0){

     xx=-0.03;
     yy=0;

}


if (ghost3_x_lev2<=70&&ghost3_y_lev2<=70){

    ff_lev2=1;
}




if (ghost3_x_lev2<=70&&ghost3_y_lev2<=70&&ff_lev2==1){

     xx=0;
     yy=-0.03;
}



if (ghost3_y_lev2>=310&&ff_lev2==1){

     xx=-0.03;
     yy=0;
}





if (ghost3_x_lev2<=70&&ff_lev2==1){

     xx=0;
     yy=-0.03;
}

if (ghost3_y_lev2>=520&&ff_lev2==1){

     xx=0.03;
     yy=0;
     ff_lev2=0;
}













ghost1_x_lev2 = ghost1_x_lev2 + x;
ghost1_y_lev2 = ghost1_y_lev2 - y;
if (ghost1_y_lev2 > 275){

    y = 0;
    x = 0.08;
}
if(ghost1_x_lev2> 520){
   x = -0.08;
    y = 0;
}

if ( ghost1_x_lev2 < 75 ){
    x = 0.08;
    y = 0;
}


ghost2_x_lev2 = ghost2_x_lev2 + h;
ghost2_y_lev2 = ghost2_y_lev2 - w;

if(ghost2_x_lev2>= 300){
    h = 0;
    w = 0.08;
}
if(ghost2_y_lev2<= 75){
    h = -0.08;
    w = 0;
}
if(ghost2_x_lev2<= 300){
    h = 0;
    w = -0.08;
}
if(ghost2_x_lev2<= 300&&ghost2_y_lev2>=520){
  h = 0.08;
    w = 0;
}






Pacman_x_lev2 = Pacman_x_lev2 - c;
Pacman_y_lev2 = Pacman_y_lev2 - d;


if(ghost1_x_lev2+10<=Pacman_x_lev2 && Pacman_x_lev2<=ghost1_x_lev2+10   && ghost1_y_lev2+10<=Pacman_y_lev2 && Pacman_y_lev2<=ghost1_y_lev2+10  ){

    Pacman_x_lev2 = 300;
    Pacman_y_lev2 = 300;
    c = 0;
    d = 0;
}


if(Pacman_x_lev2 < 65 || Pacman_x_lev2 > 530 || Pacman_y_lev2 < 65 || Pacman_y_lev2 > 530 || Pacman_x_lev2 > 140 && Pacman_x_lev2 <440 &&Pacman_y_lev2 < 360 &&Pacman_y_lev2 >235  || Pacman_x_lev2 >410 &&Pacman_x_lev2 <325 &&Pacman_y_lev2 >350 && Pacman_y_lev2 <240 ||  Pacman_x_lev2 >220 && Pacman_x_lev2 <400 &&  Pacman_y_lev2>140 &&  Pacman_y_lev2<450){
//////////////////////////////////// BLOCK OUT////////////////////////   ////////////////////////////////////// SAMAWIIII/////////////////    ///////////////////////////////// WHITE BOX///////////////////     //////////////////////////// GREEN////////////////////////////////
       counter_lev2++;
    Pacman_x_lev2 = 80;
    Pacman_y_lev2 = 80;
    c = 0;
    d = 0;
    if(counter_lev2==1){
        PacLive1x_lev2=-400;
        PacLive1y_lev2=-400;
        pacLiveRadius1_lev2=0;

    }
     else if(counter_lev2==2){
        PacLive2x_lev2=-200;
        PacLive2y_lev2=-300;
        pacLiveRadius2_lev2=0;

    }
     else if(counter_lev2==3){
        PacLive3x_lev2=-300;
        PacLive3y_lev2=-300;
         pacLiveRadius3_lev2=0;
    }
    else if(counter_lev2==4){
           gameOver_lev2=true;
    }

}


mouthSizeBegin_lev2 = mouthSizeBegin_lev2 -MAN;
mouthSizeEnd_lev2 = mouthSizeEnd_lev2 +MAN;
if(( mouthSizeBegin_lev2<0.0&&mouthSizeEnd_lev2>0.0&&rightt_lev2==1)||( mouthSizeBegin_lev2>0.785398&&mouthSizeEnd_lev2< 5.49779&&rightt_lev2==1)){
    MAN = -MAN;
}
if( (mouthSizeBegin_lev2<3.141593&&mouthSizeEnd_lev2>3.141593&&leftt_lev2==1)||( mouthSizeBegin_lev2>3.926991 &&mouthSizeEnd_lev2<8.63938&&leftt_lev2==1)){
    MAN = -MAN;
}
if( (mouthSizeBegin_lev2<1.5708&&mouthSizeEnd_lev2>1.5708&&up_lev2==1)||( mouthSizeBegin_lev2>2.35619 &&mouthSizeEnd_lev2<7.068583&&up_lev2==1)){
    MAN = -MAN;
}
if(( mouthSizeBegin_lev2<4.712389&&mouthSizeEnd_lev2>4.712389&&down_lev2==1)||( mouthSizeBegin_lev2>-0.7068583 &&mouthSizeEnd_lev2<3.92699&&down_lev2==1)){
    MAN = -MAN;
}




if(Pacman_y_lev2 < ghost1_y_lev2+10 && Pacman_y_lev2 > ghost1_y_lev2-10 && Pacman_x_lev2 < ghost1_x_lev2+10 && Pacman_x_lev2 > ghost1_x_lev2-10 || Pacman_y_lev2 < ghost2_y_lev2+10 && Pacman_y_lev2 > ghost2_y_lev2-10 && Pacman_x_lev2 < ghost2_x_lev2+10 && Pacman_x_lev2 > ghost2_x_lev2-10 || Pacman_y_lev2 < ghost3_y_lev2+15 && Pacman_y_lev2 > ghost3_y_lev2-15 && Pacman_x_lev2 < ghost3_x_lev2+15 && Pacman_x_lev2 > ghost3_x_lev2-15){
    Pacman_x_lev2 = 300;
    Pacman_y_lev2 = 300;
    c = 0;
    d = 0;
}



glutPostRedisplay();
}


void draw_pacman1() {
float theta;
glBegin(GL_POLYGON);
glColor4f(1,1,0.3,0);
glVertex2f(Pacman_x_lev1,Pacman_y_lev1);
for(theta = mouthSizeBegin_lev1; theta<= mouthSizeEnd_lev1 ; theta +=inc){
    glVertex2d((Pacman_x_lev1)+(PacRadius)*cos(theta), (Pacman_y_lev1)+(PacRadius)*sin(theta));
}

glEnd();
}

void draw_food1() {

char stringg [50];
sprintf(stringg,"Score: %d", score_lev1);
glColor3f(1, 1, 1);
Text_display(100,570,(void *)font1, stringg);
Text_display(260,570,(void *)font1, "Level: 1");

glColor3f(1,0.7,0);
glPointSize(psize);
glEnable(GL_POINT_SMOOTH);
glBegin(GL_POINTS);

glVertex2f(p1t1x,p1t1y);
glVertex2f(p1t2x,p1t2y);
glVertex2f(p1t3x,p1t3y);
//glVertex2f(pt4x,pt4y); do not remove comment
glVertex2f(p1t5x,p1t5y);
glVertex2f(p1t6x,p1t6y);
glVertex2f(p1t7x,p1t7y);
glVertex2f(p1t8x,p1t8y);

glVertex2f(p1t9x,p1t9y);
glVertex2f(p1t10x,p1t10y);
glVertex2f(p1t11x,p1t11y);
glVertex2f(p1t12x,p1t12y);
glVertex2f(p1t13x,p1t13y);
glVertex2f(p1t14x,p1t14y);
glVertex2f(p1t15x,p1t15y);
glVertex2f(p1t16x,p1t16y);
glVertex2f(p1t17x,p1t17y);
glVertex2f(p1t18x,p1t18y);
glVertex2f(p1t19x,p1t19y);
glVertex2f(p1t20x,p1t20y);
glVertex2f(p1t21x,p1t21y);
glVertex2f(p1t22x,p1t22y);
glVertex2f(p1t23x,p1t23y);
glVertex2f(p1t24x,p1t24y);
glVertex2f(p1t25x,p1t25y);
glVertex2f(p1t26x,p1t26y);
glVertex2f(p1t27x,p1t27y);
glVertex2f(p1t28x,p1t28y);
glVertex2f(p1t29x,p1t29y);
glVertex2f(p1t30x,p1t30y);
glVertex2f(p1t31x,p1t31y);
glVertex2f(p1t32x,p1t32y);
glVertex2f(p1t33x,p1t33y);
glVertex2f(p1t34x,p1t34y);
glVertex2f(p1t35x,p1t35y);
glVertex2f(p1t36x,p1t36y);
glVertex2f(p1t37x,p1t37y);
glVertex2f(p1t38x,p1t38y);
glVertex2f(p1t39x,p1t39y);
glVertex2f(p1t40x,p1t40y);
glVertex2f(p1t41x,p1t41y);
glVertex2f(p1t42x,p1t42y);
glVertex2f(p1t44x,p1t44y);
glVertex2f(p1t43x,p1t43y);


glColor3f(0,1,0);

glVertex2f(p1t13x,p1t13y);
glVertex2f(p1t7x,p1t7y);


glEnd();
 if(gameOver_lev1==true){
glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("GAME OVER");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(display2_lev1);
glutMainLoop();
}
}

void draw_lives1( float pacLive_x,float pacLive_y,int pacLiveRadius){

float theta2 ;

//body

glBegin(GL_POLYGON);

for(theta2= 0.0; theta2 <= 2*pi; theta2 += inc){
glColor4f(1,1,0.3,0);
glVertex2f(pacLive_x+pacLiveRadius*cos(theta2), pacLive_y+pacLiveRadius*sin(theta2));
}
glEnd();

//mouth

glBegin(GL_POLYGON);
glColor4f(0,0,0,0);
glVertex2f(pacLive_x,pacLive_y);
for(theta2 = -mouthSize2_lev1; theta2<= mouthSize2_lev1; theta2 +=inc){
    glVertex2d((pacLive_x)+(pacLiveRadius)*cos(theta2), (pacLive_y)+(pacLiveRadius)*sin(theta2));
}

glEnd();



}



void mazeldisplay_level_1(){
 if(score_lev1 > 230){
    glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("Pacman Level 2");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(mazeldisplay_2);
glutSpecialFunc(keyboard);
glutMainLoop();
}
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,0,1);


//the points of the four corners of the square to create the edges of the map

glEnable(GL_POINT_SMOOTH);
glPointSize(13);
glBegin(GL_POINTS);
glVertex2f(50,50);
glVertex2f(50,550);
glVertex2f(550,550);
glVertex2f(550,50);

glEnd();

glLineWidth(15);
glBegin(GL_LINE_STRIP);

glVertex2f(50,50);
glVertex2f(50,550);
glVertex2f(550,550);
glVertex2f(550,50);
glVertex2f(50,50);
glEnd();

//creating the walls inside the map  we had created


glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(50,150);
glVertex2f(200,150);
glVertex2f(200,550);
glVertex2f(50,550);
glEnd();

glLineWidth(10);
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(300,50);
glVertex2f(300,450);
glVertex2f(550,450);
glVertex2f(550,50);
glEnd();
draw_lives1(PacLive1x_lev1, PacLive1y_lev1, pacLiveRadius1_lev1);
draw_lives1(PacLive2x_lev1, PacLive2y_lev1, pacLiveRadius2_lev1);
draw_lives1(PacLive3x_lev1, PacLive3y_lev1, pacLiveRadius3_lev1);
draw_pacman1();
draw_food1();
glFlush();

if( p1t1x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t1x + 10 && p1t1y-5<=Pacman_y_lev1 && Pacman_y_lev1<=p1t1y + 5){
    p1t1x = -200;
    p1t1y = -200;
     score_lev1+=5;
}

if(  p1t2x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t2x + 5 &&  p1t2y-5<= Pacman_y_lev1 && Pacman_y_lev1 <=p1t2y + 5){
    p1t2x = -200;
    p1t2y = -200;
     score_lev1+=5;
}
if( p1t3x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t3x + 5 &&  p1t3y-5<= Pacman_y_lev1 && Pacman_y_lev1 <= p1t3y + 5){
    p1t3x = -200;
    p1t3y = -200;
    score_lev1+=5;
}
if(p1t4x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t4x + 5 &&  p1t4y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t4y + 5){
    p1t4x = -200;
    p1t4y = -200;
     score_lev1+=5;
}
if( p1t5x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t5x + 5 &&  p1t5y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t5y + 5){
    p1t5x = -200;
    p1t5y = -200;
     score_lev1+=5;
}
if(p1t6x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t6x + 5 &&  p1t6y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t6y + 5){
    p1t6x = -200;
    p1t6y = -200;
    score_lev1+=5;}
if( p1t7x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t7x + 5 &&  p1t7y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t7y + 5){
    p1t7x = -200;
    p1t7y = -200;
    score_lev1+=10;
}
if( p1t8x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t8x + 5 &&  p1t8y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t8y + 5){
    p1t8x = -200;
    p1t8y = -200;
     score_lev1+=5;
}
if( p1t9x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t9x + 5 &&  p1t9y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t9y + 5){
    p1t9x = 1000;
    p1t9y = 1000;
     score_lev1+=5;
}
if( p1t10x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t10x + 5 &&  p1t10y-10<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t10y + 5){
    p1t10x = 1000;
    p1t10y = 1000;
     score_lev1+=5;
}
if( p1t11x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t11x + 5 &&  p1t11y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t11y + 5){
    p1t11x = 900;
    p1t11y = 1000;
     score_lev1+=5;
}
if(p1t12x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t12x + 5 &&  p1t12y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t12y + 5){
    p1t12x = 750;
    p1t12y = 1000;
     score_lev1+=5;
}
if( p1t13x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t13x + 5 &&  p1t13y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t13y + 5){
    p1t13x = 1000;
    p1t13y = 800;
    score_lev1+=10;
}
if( p1t14x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t14x + 5 &&  p1t14y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t14y + 5){
    p1t14x = 700;
    p1t14y = 1000;
     score_lev1+=5;
}
if( p1t15x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t15x + 5 &&  p1t15y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t15y + 5){
    p1t15x = 9000;
    p1t15y = 800;
     score_lev1+=5;
}
if( p1t16x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t16x + 5 &&  p1t16y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t16y + 5){
    p1t16x = 6500;
    p1t16y = 650;
     score_lev1+=5;
}
if( p1t17x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t17x + 5 &&  p1t17y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t17y + 5){
    p1t17x = 6000;
    p1t17y = 6000;
     score_lev1+=5;
}
if(p1t18x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t18x + 5 &&  p1t18y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t18y + 5){
    p1t18x = 700;
    p1t18y = 700;
     score_lev1+=5;
}
if( p1t19x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t19x + 5 &&  p1t19y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t19y + 5){
    p1t19x = 750;
    p1t19y = 750;
    score_lev1+=10;
}
if( p1t20x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t20x + 5 &&  p1t20y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t20y + 5){
    p1t20x = 850;
    p1t20y = 850;
     score_lev1+=5;
}
if( p1t21x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t21x + 5 &&  p1t21y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t21y + 5){
    p1t21x = 800;
    p1t21y = 800;
     score_lev1+=5;
}
if( p1t22x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t22x + 5 &&  p1t22y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t22y + 5){
    p1t22x = 950;
    p1t22y = 950;
    score_lev1+=5;
}
if(p1t23x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t23x + 5 &&  p1t23y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t23y + 5){
    p1t23x = 800;
    p1t23y = 800;
    score_lev1+=5;
}
if( p1t24x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t24x + 5 &&  p1t24y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t24y + 5){
    p1t24x = 900;
    p1t24y = 900;
    score_lev1+=5;
}
if( p1t25x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t25x + 5 &&  p1t25y-5<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t25y + 5){
    p1t25x = 900;
    p1t25y = 900;
    score_lev1+=5;
}
if( p1t26x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t26x + 5 &&  p1t26y-5<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t26y + 5){
    p1t26x = 900;
    p1t26y = 900;
    score_lev1+=10;
}
if( p1t27x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t27x + 5 &&  p1t27y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t27y + 5){
    p1t27x = 900;
    p1t27y = 900;
    score_lev1+=5;
}
if(p1t28x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t28x + 5 &&  p1t28y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t28y + 5){
    p1t28x = 900;
    p1t28y = 900;
    score_lev1+=5;
}
if(p1t29x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t29x + 5 &&  p1t29y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t29y + 5){
    p1t29x = 900;
    p1t29y = 900;
    score_lev1+=5;
}
if( p1t30x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t30x + 5 &&  p1t30y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t30y + 5){
    p1t30x = 900;
    p1t30y = 900;
    score_lev1+=5;
}
if(p1t31x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t31x + 5 &&  p1t31y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t31y + 5){
    p1t31x = 900;
    p1t31y = 900;
    score_lev1+=5;
}
if( p1t32x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t32x + 5 &&  p1t32y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t32y + 5){
    p1t32x = 900;
    p1t32y = 900;
    score_lev1+=5;
}
if( p1t34x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t34x + 5 &&  p1t34y-5<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t34y + 5){
   // pt34x = 900;
    p1t34y = 900;
    score_lev1+=5;
}
if( p1t35x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t35x + 5 &&  p1t35y-5<=Pacman_y_lev1 && Pacman_y_lev1 <= p1t35y + 5){
    p1t35x = 900;
    p1t35y = 900;
    score_lev1+=5;
}
if( p1t33x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t33x + 5 &&  p1t33y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t33y + 5){
    p1t33x = 900;
    p1t33y = 900;
    score_lev1+=5;
}
if( p1t36x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t36x + 5 &&  p1t36y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t36y + 5){
    p1t36x = 900;
    p1t36y = 900;
    score_lev1+=5;
}
if( p1t37x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t37x + 5 &&  p1t37y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t37y + 5){
    p1t37x = 900;
    p1t37y = 900;
    score_lev1+=5;
}
if( p1t38x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t38x + 5 &&  p1t38y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t38y + 5){
    p1t38x = 900;
    p1t38y = 900;
    score_lev1+=10;
}
if(p1t39x-5<=Pacman_x_lev1 && Pacman_x_lev1 <= p1t39x + 5 &&  p1t39y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t39y + 5){
    p1t39x = 900;
    p1t39y = 900;
    score_lev1+=5;
}
if( p1t40x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t40x + 5 &&  p1t40y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t40y + 5){
    p1t40x = 900;
    p1t40y = 900;
    score_lev1+=5;
}

if( p1t41x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t41x + 5 &&  p1t41y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t41y + 5){
    p1t41x = 900;
    p1t41y = 900;
    score_lev1+=5;
}
if( p1t42x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t42x + 5 &&  p1t42y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t42y + 5){
    p1t42x = 900;
    p1t42y = 900;
    score_lev1+=5;
}
if( p1t43x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t43x + 5 &&  p1t43y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t43y + 5){
    p1t43x = 900;
    p1t43y = 900;
    score_lev1+=5;
}
if( p1t44x-5<=Pacman_x_lev1 &&Pacman_x_lev1 <= p1t44x + 5 &&  p1t44y-5<Pacman_y_lev1 && Pacman_y_lev1 <= p1t44y + 5){
    p1t44x = 900;
    p1t44y = 900;
    score_lev1+=5;
}


Pacman_x_lev1 = Pacman_x_lev1 - c;
Pacman_y_lev1 = Pacman_y_lev1 - d;


if(Pacman_x_lev1 > 60 && Pacman_x_lev1 < 180 && Pacman_y_lev1 < 540 && Pacman_y_lev1 > 140 || Pacman_x_lev1 > 280 && Pacman_x_lev1 < 540 && Pacman_y_lev1 > 60 && Pacman_y_lev1 < 440 ||Pacman_x_lev1 < 60||Pacman_x_lev1 > 540||Pacman_y_lev1 < 60 || Pacman_y_lev1 > 540 ){
    counter_lev1++;
    Pacman_x_lev1 = 80;
    Pacman_y_lev1 = 80;
    c = 0;
    d = 0;
    if(counter_lev1==1){
        PacLive1x_lev1=-400;
        PacLive1y_lev1=-400;
        pacLiveRadius1_lev1=0;

    }
     else if(counter_lev1==2){
        PacLive2x_lev1=-200;
        PacLive2y_lev1=-300;
        pacLiveRadius2_lev1=0;

    }
     else if(counter_lev1==3){
        PacLive3x_lev1=-300;
        PacLive3y_lev1=-300;
         pacLiveRadius3_lev1=0;
    }
    else if(counter_lev1==4){
           gameOver_lev1=true;
    }

}


mouthSizeBegin_lev1 = mouthSizeBegin_lev1 -MAN;
mouthSizeEnd_lev1 = mouthSizeEnd_lev1 +MAN;
if(( mouthSizeBegin_lev1<0.0&&mouthSizeEnd_lev1>0.0&&rightt_lev1==1)||( mouthSizeBegin_lev1>0.785398&&mouthSizeEnd_lev1< 5.49779&&rightt_lev1==1)){
    MAN = -MAN;
}
if( (mouthSizeBegin_lev1<3.141593&&mouthSizeEnd_lev1>3.141593&&leftt_lev1==1)||( mouthSizeBegin_lev1>3.926991 &&mouthSizeEnd_lev1<8.63938&&leftt_lev1==1)){
    MAN = -MAN;
}
if( (mouthSizeBegin_lev1<1.5708&&mouthSizeEnd_lev1>1.5708&&up_lev1==1)||( mouthSizeBegin_lev1>2.35619 &&mouthSizeEnd_lev1<7.068583&&up_lev1==1)){
    MAN = -MAN;
}
if(( mouthSizeBegin_lev1<4.712389&&mouthSizeEnd_lev1>4.712389&&down_lev1==1)||( mouthSizeBegin_lev1>-0.7068583 &&mouthSizeEnd_lev1<3.92699&&down_lev1==1)){
    MAN = -MAN;
}

glutPostRedisplay();
}


void Mainmenu(){
glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
Text_display(150,520,(void*) font1,"HELLO CHALLENGER ");
glColor3f(0,1,1);
           Text_display(150,240,(void*)font1,"FOR LEVEL 1  PRESS 1 ");
           glColor3f(0.3,1,0);
           Text_display(150,190,(void *)font1,"FOR LEVEL 2  PRESS 2 ");
           glColor3f(1,0,0.5);
           Text_display(150,140,(void*)font1,"FOR LEVEL 3  PRESS 3 ");
         glColor3f(1,1,0);
         Text_display(100,390,(void *)font1,"READY ? ");
         glBegin(GL_POLYGON);
float theta1;
for(theta1= 0.0; theta1<= 2*pi; theta1 += inc){
glColor4f(1,1,0.3,0);
glVertex2f(360+50*cos(theta1), 400+50*sin(theta1));
}
glEnd();

//mouth

glBegin(GL_POLYGON);
glColor4f(0,0,0,0);
glVertex2f(360,400);
for(theta1 = -0.6; theta1<= 0.6; theta1 +=inc){
    glVertex2d((360)+(50)*cos(theta1), (400)+(50)*sin(theta1));
}

glEnd();
            glFlush();
            glutPostRedisplay();
}


void specFunc(unsigned char buttons, int x, int y){
switch (buttons){
case '1': glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("Pacman level 1");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(mazeldisplay_level_1);
glutSpecialFunc(keyboard);
glutMainLoop();
       ;break;
case '2': glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("Pacman level 2");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(mazeldisplay_2);
glutSpecialFunc(keyboard);
glutMainLoop();
       ;break;
case '3':glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("Pacman Level 3");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(display);
glutSpecialFunc(keyboard);
glutMainLoop();
       ;break;
case 'r':
////////////////////////////////LEVEL 3 VARIABLES RESETTING//////////////////////
ctr++;

 pacLiveRadius1=13;
 pacLiveRadius2=13;
 pacLiveRadius3=13;
 score =0;
 counter=0;
 mouthSize2 = 0.6; // default size of pacman lives
 psize = 8;
 ghost1_x= 70;
 ghost1_y= 270;
 x = 0.02;
 y= 0;
 ghost2_x = 330;
 ghost2_y= 520;
 h = 0.02;
 w = 0;
 c = 0;
 d = 0;
 Pacman_x = 300;
 Pacman_y = 300;
 PacLive1x = 420;
 PacLive1y = 580;
 PacLive2x = 460;
 PacLive2y = 580;
 PacLive3x = 500;
 PacLive3y = 580;
 a = 0;
 b = 0;
 up = 0;
 down = 0;
 rightt = 1;
 leftt = 0;
 ff=0;
 MAN = 0.003;
 gameOver=false;
 mouthSizeBegin = 0.785398;
 mouthSizeEnd = 5.49779;
 ghost3_x = 70;
 ghost3_y= 520;
 xx = 0.08;
 yy = 0;
 energised_dot1y=480;
 energised_dot1x=330;
 energisedState1=false;


//first column
 pt1x = 75;  pt1y = 75;  pt2x = 75; pt2y = 95; pt3y =  115; pt3x =  75; pt4y = 135; pt4x =  75; pt5y = 155; pt5x =  75; pt6y = 175; pt6x =  75; pt7y = 195; pt7x =  75; pt8y = 215; pt8x =  75; pt9y = 235; pt9x =  75; pt10y = 255;
 pt10x =  75; pt11y = 275; pt11x =  75; pt12y = 295; pt12x =  75; pt13y = 295; pt13x =  75; pt14y = 315; pt14x =  75; pt15x =  75; pt15y = 335; pt16y = 355;
 pt16x =  75; pt17y = 375; pt17x =  75; pt18y = 395; pt18x =  75; pt19y = 415; pt19x =  75; pt20y = 435; pt20x =  75; pt21y = 455; pt21x =  75; pt22y = 475; pt22x =  75; pt23y = 495; pt23x =  75; pt24y = 515; pt24x =  75;
//second column..bottom
 pt25x=300; pt26x=300; pt27x=300; pt28x=300; pt29x=300; pt30x=300; pt31x=300; pt32x=300;
 pt25y=95; pt26y=115; pt27y=135; pt28y=155; pt29y=175; pt30y=195; pt31y=215; pt32y=235;
//second column..top
 pt33x=300; pt34x=300; pt35x=300; pt36x=300; pt37x=300; pt38x=300; pt39x=300; pt40x=300;
 pt33y=360; pt34y=380; pt35y=400; pt36y=420; pt37y=440; pt38y=460; pt39y=480; pt40y=500;
// fourth column
 pt41x=530; pt42x=530; pt43x=530; pt44x=530; pt45x=530; pt46x=530; pt47x=530; pt48x=530; pt49x=530; pt50x=530; pt51x=530; pt52x=530; pt53x=530; pt54x=530; pt55x=530; pt56x=530; pt57x=530; pt58x=530; pt59x=530; pt60x=530; pt61x=530; pt62x=530; pt63x=530;
 pt41y=75; pt42y=95; pt43y=115; pt44y=135; pt45y=155; pt46y=175; pt47y=195; pt48y=215; pt49y=235; pt50y=255; pt51y=275; pt52y=295; pt53y=315; pt54y=335; pt55y=355; pt56y=375; pt57y=395; pt58y=415; pt59y=435; pt60y=455; pt61y=475; pt62y=495; pt63y=515;
//first row
 pt64x=90; pt65x=110; pt66x=130; pt67x=150; pt68x=170; pt69x=190; pt70x=210; pt71x=230; pt72x=250; pt73x=270; pt74x=290; pt75x=310; pt76x=330; pt77x=350; pt78x=370; pt79x=390; pt80x=410; pt81x=430; pt82x=450; pt83x=470; pt84x=490; pt85x=510;
 pt64y=75; pt65y=75; pt66y=75; pt67y=75; pt68y=75; pt69y=75; pt70y=75; pt71y=75; pt72y=75; pt73y=75; pt74y=75; pt75y=75; pt76y=75; pt77y=75; pt78y=75; pt79y=75; pt80y=75; pt81y=75; pt82y=75; pt83y=75; pt84y=75; pt85y=75;
//fourth row
 pt86x=90; pt87x=110; pt88x=130; pt89x=150; pt90x=170; pt91x=190; pt92x=210; pt93x=230; pt94x=250; pt95x=270; pt96x=290; pt97x=310; pt98x=330; pt99x=350; pt100x=370; pt101x=390; pt102x=410; pt103x=430; pt104x=450; pt105x=470; pt106x=490; pt107x=510;
 pt86y=520; pt87y=520; pt88y=520; pt89y=520; pt90y=520; pt91y=520; pt92y=520; pt93y=520; pt94y=520; pt95y=520; pt96y=520; pt97y=520; pt98y=520; pt99y=520; pt100y=520; pt101y=520; pt102y=520; pt103y=520; pt104y=520; pt105y=520; pt106y=520; pt107y=520;
// third row
 pt108x=90; pt109x=110; pt110x=130; pt111x=150; pt112x=170; pt113x=190; pt114x=210; pt115x=230; pt116x=250; pt117x=270; pt118x=290; pt129x=310; pt119x=330; pt120x=350; pt121x=370; pt122x=390; pt123x=410; pt124x=430; pt125x=450; pt126x=470; pt127x=490; pt128x=510;
 pt108y=335; pt109y=335; pt110y=335; pt111y=335; pt112y=335; pt113y=335; pt114y=335; pt115y=335; pt116y=335; pt117y=335; pt118y=335; pt129y=335; pt119y=335; pt120y=335; pt121y=335; pt122y=335; pt123y=335; pt124y=335; pt125y=335; pt126y=335; pt127y=335; pt128y=335;
// second row
 pt130x=90; pt131x=110; pt132x=130; pt133x=150; pt134x=170; pt135x=190; pt136x=210; pt137x=230; pt138x=250; pt139x=270; pt140x=290; pt141x=310; pt142x=330; pt143x=350; pt144x=370; pt145x=390; pt151x=410; pt146x=430; pt147x=450; pt148x=470; pt149x=490; pt150x=510;
 pt130y=275; pt131y=275; pt132y=275; pt133y=275; pt134y=275; pt135y=275; pt136y=275; pt137y=275; pt138y=275; pt139y=275; pt140y=275; pt141y=275; pt142y=275; pt143y=275; pt144y=275; pt145y=275; pt151y=275; pt146y=275; pt147y=275; pt148y=275; pt149y=275; pt150y=275;


glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("LEVEL 3");
gluOrtho2D(0,600,0,600);
glutDisplayFunc(display);
glutSpecialFunc(keyboard);
glutKeyboardFunc(specFunc);
glutMainLoop();
       ;break;
case'q':
    exit(0);
    break;
}
}

int main(){
glutInitWindowPosition(100,100);
glutInitWindowSize(600,600);
glutCreateWindow("Pacman");
gluOrtho2D(0,600,0,600);
glutKeyboardFunc(specFunc);
glutSpecialFunc(keyboard);
glutDisplayFunc(Mainmenu);
glutMainLoop();
return 0;
}
