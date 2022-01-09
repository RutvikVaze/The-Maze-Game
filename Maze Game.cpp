#include<simplecpp>
#include<iostream>
#include<ctype.h>
#include<ctime>
main_program
{
    initCanvas("PACMAN",1000,1000);
    Rectangle r(450,530,400,500);
    Line l1(250,770,420,770);
    Line l2(250,750,380,750);
    Line lb(400,750,400,650);
    Line l3(380,750,380,650);
    Line l4(420,770,420,650);
    Line l5(380,650,280,650);
    Line l6(420,650,500,650);
    Line l6n(500,650,500,640);
    Line lp(300,610,500,610);
    Line lpn(500,610,500,620);
    Line lpb1(370,630,300,630);
    Line lpb2(420,630,470,630);
    Line lpnf1(500,620,550,620);
    Line l6nf2(500,640,570,640);
    Line lpn1(550,620,550,590);
    Line l6n2(570,640,570,570);
    Line con1(550,590,480,590);
    Line con2(570,570,500,570);
    Line con1p(480,590,480,550);
    Line con2p(500,570,500,550);
    Line con2pz(500,550,600,550);
    Line box1(600,550,600,430);
    Line box2(600,430,550,430);
    Line boxout1(520,430,520,400);
    Line Fboxl(520,400,270,400);
    Line boxout2(550,430,550,400);
    Line Fboxr(550,400,630,400);
    Line Fboxl1(270,400,270,300);
    Line Fboxr2(630,400,630,300);
    Line Fboxtop(630,300,270,300);
    Line Fobs1(300,300,300,380);
    Line Fobs2(330,300,330,380);
    Line Fobs3(360,300,360,380);
    Line Fobs4(390,300,390,380);
    Line Fobs5(420,300,420,380);
    Line Fobs6(450,300,450,380);
    Line Fobs7(480,300,480,380);
    Line Fobs9(510,300,510,380);
    Line Fobs10(540,300,540,380);
    Line Fobs11(570,300,570,380);
    Line Fobs12(600,300,600,380);
    Line l7(280,650,280,550);
    Line l8(300,610,300,570);
    Line l9(300,570,400,570);
    Line L01(280,550,380,550);
    Line L02(400,570,400,500);
    Line L03(380,550,380,480);
    Line L04(380,480,440,480);
    Line L05(400,500,440,500);
    Line L05b(440,500,440,550);
    Line L04b(440,480,440,430);
    Line bridge1(440,550,480,550);
    Line bridge2(440,430,520,430);
    Text txt1(615,320,"9");
    Text txt2(585,320,"1");
    Text txt3(555,320,"5");
    Text txt4(525,320,"6");
    Text txt5(495,320,"3");
    Text txt6(465,320,"4");
    Text txt7(435,320,"15");
    Text txt8(405,320,"2");
    Text txt9(375,320,"7");
    Text txt10(345,320,"8");
    Text txt11(315,320,"15");
    Text txt12(285,320,"10");
    Circle trial(520,490,30);
    Circle c(270,760,5);
    Text head(442,41,"Find the way");
    Text right(318,85,"d: To Move Right");
    Text left(312,105,"a: To Move Left");
    Text up(550,85,"w:To Move Upwards");
    Text down(557,105,"s:To Move Downwards");
    Text start(442,150,"Game Starts in");
    Circle Count(438,193,30);
    for(int i=5;i>0;i--)
    {
        Text ncount(439,193,i);
        wait(1);
    }
    Text play(439,193,"Play");
    XEvent e;

    while(1)
    {
        nextEvent(e);
        if(keyPressEvent(e))
        {
            if(charFromEvent(e)=='d')
            {
                c.move(10,0);
            }
            if(charFromEvent(e)=='w')
            {
                c.move(0,-10);
            }
            if(charFromEvent(e)=='s')
            {
                c.move(0,10);
            }
            if(charFromEvent(e)=='a')
            {
                c.move(-10,0);
            }

        }
    }
    wait(2);
}
