#include<math.h>
#include<process.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
	int gd=DETECT,gm,i=0,j=0,ch,x=0,y=0,t=0,place[9]={0,0,0,0,0,0,0,0,0},mato[3][3]={0,0,0,0,0,0,0,0,0},matx[3][3]={0,0,0,0,0,0,0,0,0},matchk=0;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();

	setbkcolor(15);  delay(300);
	settextstyle(1,HORIZ_DIR,7);setcolor(CYAN);
	outtextxy(getmaxx()/2-53,getmaxy()/2-100-10,"T");
	outtextxy(getmaxx()/2-53+45,getmaxy()/2-100-10,"I");
	outtextxy(getmaxx()/2-53+73,getmaxy()/2-100-10,"C");
	setcolor(LIGHTRED);delay(250);
	outtextxy(getmaxx()/2-53,getmaxy()/2-50-10,"TAC");
	setcolor(LIGHTMAGENTA);delay(290);
	outtextxy(getmaxx()/2-53,getmaxy()/2-10,"TOE");

	while(1)
	{
		settextstyle(1,HORIZ_DIR,7);setcolor(CYAN);
		outtextxy(getmaxx()/2-53,getmaxy()/2-100-10,"T");
		outtextxy(getmaxx()/2-53+45,getmaxy()/2-100-10,"I");
		outtextxy(getmaxx()/2-53+73,getmaxy()/2-100-10,"C");
		setcolor(LIGHTRED);
		outtextxy(getmaxx()/2-53,getmaxy()/2-50-10,"TAC");
		setcolor(LIGHTMAGENTA);
		outtextxy(getmaxx()/2-53,getmaxy()/2-10,"TOE");
		settextstyle(15,HORIZ_DIR,1);
		for(i=0;i<201;i++)
		{ delay(4);
		}
		if(i>199)
		{ setcolor(1);
		outtextxy(247,getmaxy()/2+100,"Press Enter to Play");
		}
		if(kbhit())
		{
			ch=getch();
			if(ch==27) exit(0);
			else break;
		}
	}
	loop:
	cleardevice();
	setcolor(7);
	circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
	circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
	delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
	delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
	delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
	delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
	delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
	delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
	delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
	delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
	delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
	delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
	delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
	delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);

	delay(50);setcolor(YELLOW);rectangle(getmaxx()/2-102+2,getmaxy()/2-102+2,getmaxx()/2+102-1,getmaxy()/2+102-1);
	setcolor(13); delay(70);
	line(getmaxx()/2-100+65+2,getmaxy()/2-100,getmaxx()/2-100+65+2,getmaxy()/2+100);
	line(getmaxx()/2+100-65-1,getmaxy()/2-100,getmaxx()/2+100-65-1,getmaxy()/2+100);
	line(getmaxx()/2-100,getmaxy()/2-100+65+2,getmaxx()/2+100,getmaxy()/2-100+65+2);
	line(getmaxx()/2-100,getmaxy()/2+100-65-1,getmaxx()/2+100,getmaxy()/2+100-65-1);
	delay(25);


	while(1)
	{
		setcolor(7);circle(45,90,10);           circle(550,100,30);circle(647,116,60);
		circle(80,125,30);circle(130,80,28);    circle(573,143,11);circle(586,180,20);
		circle(117,178,25);circle(20,120,20);   circle(528,167,32);circle(580,0,65);
		circle(35,205,52);circle(75,65,20);     circle(520,60,13);circle(556,253,50);
		circle(135,132,17);circle(0,40,50);     circle(605,209,7);circle(620,189,7);
		circle(108,-16,60);circle(118,242,30);  circle(652,233,39);circle(515,208,5);
		circle(76,264,11);circle(45,285,20);    circle(514,298,5);circle(531,332,25);
		circle(10,270,10);circle(-5,321,35);    circle(574,319,10);circle(525,400,35);
		circle(104,319,40);circle(47,322,10);   circle(502,470,30);circle(456,475,10);
		circle(45,354,15);circle(76,373,13);    circle(580,361,25);circle(626,311,32);
		circle(121,401,32);circle(139,359,7);   circle(624,361,10);circle(612,394,15);
		circle(142,441,7);circle(115,458,18);   circle(608,485,70);circle(577,403,10);
		circle(10,450,80);circle(165,477,28);   circle(509,36,7);circle(503,17,7);
		circle(136,279,5);circle(515,82,4);     circle(490,-9,18);circle(519,125,5);

		if(matchk==0)
		{
					matchk=1;
					setcolor(15);
					outtextxy(getmaxx()/2-56,getmaxy()/2-125,"Player 2's Turn");setcolor(12);
					outtextxy(getmaxx()/2-56,getmaxy()/2-125,"Player 1's Turn");
		}
		setcolor(8);
		outtextxy(0,5," PRESS ESC TO EXIT                                        PRESS R TO RESET GAME");
		outtextxy(5,getmaxy()-13,"                         PRESS SPACE BAR TO PUT SYMBOL");
		setcolor(YELLOW);rectangle(getmaxx()/2-102+2,getmaxy()/2-102+2,getmaxx()/2+102-1,getmaxy()/2+102-1);
		setcolor(13);
		line(getmaxx()/2-100+65+2,getmaxy()/2-100,getmaxx()/2-100+65+2,getmaxy()/2+100);
		line(getmaxx()/2+100-65-1,getmaxy()/2-100,getmaxx()/2+100-65-1,getmaxy()/2+100);
		line(getmaxx()/2-100,getmaxy()/2-100+65+2,getmaxx()/2+100,getmaxy()/2-100+65+2);
		line(getmaxx()/2-100,getmaxy()/2+100-65-1,getmaxx()/2+100,getmaxy()/2+100-65-1);

		if(kbhit())
		{
			ch=getch();      //press any key
			if(ch==114)
			{
				mato[0][0]=0; matx[0][0]=0;
				mato[0][1]=0; matx[0][1]=0;
				mato[0][2]=0; matx[0][2]=0;
				mato[1][0]=0; matx[1][0]=0;
				mato[1][1]=0; matx[1][1]=0;
				mato[1][2]=0; matx[1][2]=0;
				mato[2][0]=0; matx[2][0]=0;
				mato[2][1]=0; matx[2][1]=0;
				mato[2][2]=0; matx[2][2]=0;
				x=0;y=0;matchk=0;
				goto loop;
			}
			if(ch==72)       //up
			{       //cleardevice();
				x=x+0;    sound(480);
				if(y>-67) y=y-67;
			}
			if(ch==75)       //left
			{       //cleardevice();
				if(x>-67) x=x-67;   sound(480);
				y=y+0;
			}
			if(ch==77)       //right
			{       //cleardevice();
				if(x<67) x=x+67;   sound(480);
				y=y+0;
			}
			if(ch==80)       //down
			{       //cleardevice();
				x=x+0;    sound(480);
				if(y<67) y=y+67;
			}

			delay(12);nosound();
			if(ch==32)
			{
				sound(2000);delay(15);nosound();
				if(t%2==0)     //for O
				{
					if((mato[0][0]==1)&&(mato[0][1]==1)&&(mato[0][2]==1))//1st horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[1][0]==1)&&(mato[1][1]==1)&&(mato[1][2]==1))//2nd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[2][0]==1)&&(mato[2][1]==1)&&(mato[2][2]==1))//3rd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][0]==1)&&(mato[1][0]==1)&&(mato[2][0]==1))//1st verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][1]==1)&&(mato[1][1]==1)&&(mato[2][1]==1))//2nd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][2]==1)&&(mato[1][2]==1)&&(mato[2][2]==1))//3rd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][0]==1)&&(mato[1][1]==1)&&(mato[2][2]==1))//diagonal-1
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[2][0]==1)&&(mato[1][1]==1)&&(mato[0][2]==1))//diagonal-2
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}

					//put symbol check
					if(x==0&&y==0)    //center
					{
						mato[1][1]=1; place[0]=1;
					}
					if(x==0&&y==-67)    //up
					{
						mato[0][1]=1; place[1]=1;
					}
					if(x==0&&y==67)    //down
					{
						mato[2][1]=1; place[2]=1;
					}
					if(x==67&&y==0)    //right
					{
						mato[1][2]=1; place[3]=1;
					}
					if(x==-67&&y==0)    //left
					{
						mato[1][0]=1; place[4]=1;
					}
					if(x==67&&y==-67)    //up-right
					{
						mato[0][2]=1; place[5]=1;
					}
					if(x==67&&y==67)    //down-right
					{
						mato[2][2]=1; place[6]=1;
					}
					if(x==-67&&y==-67)    //up-left
					{
						mato[0][0]=1; place[7]=1;
					}
					if(x==-67&&y==67)    //down-left
					{
						mato[2][0]=1; place[8]=1;
					}
					setcolor(15);
					outtextxy(getmaxx()/2-56,getmaxy()/2-125,"Player 1's Turn");setcolor(3);
					outtextxy(getmaxx()/2-56,getmaxy()/2-125,"Player 2's Turn");
					if(x>-68&&x<68&&y>-68&&y<68)
					{
						setcolor(12);circle(getmaxx()/2+1+x,getmaxy()/2+y,25);
					}
					else
					{
						setcolor(RED);circle(getmaxx()/2+1+x,getmaxy()/2+y,25);circle(getmaxx()/2+1+x,getmaxy()/2+y,24);line(getmaxx()/2+1+x-18,getmaxy()/2+y+18,getmaxx()/2+1+x+18,getmaxy()/2+y-18);
					}
					t++;
				}
				else         //for X
				{
					if((matx[0][0]==1)&&(matx[0][1]==1)&&(matx[0][2]==1))//1st horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[1][0]==1)&&(matx[1][1]==1)&&(matx[1][2]==1))//2nd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);

						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[2][0]==1)&&(matx[2][1]==1)&&(matx[2][2]==1))//3rd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][0]==1)&&(matx[1][0]==1)&&(matx[2][0]==1))//1st verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][1]==1)&&(matx[1][1]==1)&&(matx[2][1]==1))//2nd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][2]==1)&&(matx[1][2]==1)&&(matx[2][2]==1))//3rd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][0]==1)&&(matx[1][1]==1)&&(matx[2][2]==1))//diagonal-1
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[2][0]==1)&&(matx[1][1]==1)&&(matx[0][2]==1))//diagonal-2
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}

					if(x==0&&y==0)    //center
					{
						matx[1][1]=1;
					}
					if(x==0&&y==-67)    //up
					{
						matx[0][1]=1;
					}
					if(x==0&&y==67)    //down
					{
						matx[2][1]=1;
					}
					if(x==67&&y==0)    //right
					{
						matx[1][2]=1;
					}
					if(x==-67&&y==0)    //left
					{
						matx[1][0]=1;
					}
					if(x==67&&y==-67)    //up-right
					{
						matx[0][2]=1;
					}
					if(x==67&&y==67)    //down-right
					{
						matx[2][2]=1;
					}
					if(x==-67&&y==-67)    //up-left
					{
						matx[0][0]=1;
					}
					if(x==-67&&y==67)    //down-left
					{
						matx[2][0]=1;
					}
					setcolor(15);
					outtextxy(getmaxx()/2-56,getmaxy()/2-125,"Player 2's Turn");setcolor(12);
					outtextxy(getmaxx()/2-56,getmaxy()/2-125,"Player 1's Turn");
					if(x>-68&&x<68&&y>-68&&y<68)
					{
						setcolor(CYAN);
						line(319-25+x,239+25+y,319+25+x,239-25+y);
						line(319-25+x,239-25+y,319+25+x,239+25+y);
					}
					else
					{
						setcolor(RED);circle(getmaxx()/2+1+x,getmaxy()/2+y,25);circle(getmaxx()/2+1+x,getmaxy()/2+y,24);line(getmaxx()/2+1+x-18,getmaxy()/2+y+18,getmaxx()/2+1+x+18,getmaxy()/2+y-18);
					}
					t++;
				}

			}
			if(ch==27)       //exit game
				exit(0);
		}

					if((mato[0][0]==1)&&(mato[0][1]==1)&&(mato[0][2]==1))//1st horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);

					}
					if((mato[1][0]==1)&&(mato[1][1]==1)&&(mato[1][2]==1))//2nd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[2][0]==1)&&(mato[2][1]==1)&&(mato[2][2]==1))//3rd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][0]==1)&&(mato[1][0]==1)&&(mato[2][0]==1))//1st verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][1]==1)&&(mato[1][1]==1)&&(mato[2][1]==1))//2nd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][2]==1)&&(mato[1][2]==1)&&(mato[2][2]==1))//3rd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[0][0]==1)&&(mato[1][1]==1)&&(mato[2][2]==1))//diagonal-1
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}
					if((mato[2][0]==1)&&(mato[1][1]==1)&&(mato[0][2]==1))//diagonal-2
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(12);
						setcolor(12);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 1 is Winner"); sleep(2.5); exit(0);
					}

					if((matx[0][0]==1)&&(matx[0][1]==1)&&(matx[0][2]==1))//1st horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[1][0]==1)&&(matx[1][1]==1)&&(matx[1][2]==1))//2nd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[2][0]==1)&&(matx[2][1]==1)&&(matx[2][2]==1))//3rd horiz
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][0]==1)&&(matx[1][0]==1)&&(matx[2][0]==1))//1st verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][1]==1)&&(matx[1][1]==1)&&(matx[2][1]==1))//2nd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][2]==1)&&(matx[1][2]==1)&&(matx[2][2]==1))//3rd verti
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[0][0]==1)&&(matx[1][1]==1)&&(matx[2][2]==1))//diagonal-1
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(5);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}
					if((matx[2][0]==1)&&(matx[1][1]==1)&&(matx[0][2]==1))//diagonal-2
					{
						settextstyle(1,HORIZ_DIR,5);setcolor(3);
						setcolor(3);
						circle(45,90,10); delay(15);			  circle(550,100,30); circle(647,116,60);
						circle(80,125,30);circle(130,80,28);  delay(15);  circle(573,143,11);circle(586,180,20);
						delay(15);circle(117,178,25);circle(20,120,20); delay(15);  circle(528,167,32);circle(580,0,65);
						delay(15);circle(35,205,52);circle(75,65,20);   delay(15);  circle(520,60,13);circle(556,253,50);
						delay(15);circle(135,132,17);circle(0,40,50);   delay(15);  circle(605,209,7);circle(620,189,7);
						delay(15);circle(108,-16,60);circle(118,242,30);delay(15);  circle(652,233,39);circle(515,208,5);
						delay(15);circle(76,264,11);circle(45,285,20);  delay(15);  circle(514,298,5);circle(531,332,25);
						delay(15);circle(10,270,10);circle(-5,321,35);  delay(15);  circle(574,319,10);circle(525,400,35);
						delay(15);circle(104,319,40);circle(47,322,10); delay(15);  circle(502,470,30);circle(456,475,10);
						delay(15);circle(45,354,15);circle(76,373,13);  delay(15);  circle(580,361,25);circle(626,311,32);
						delay(15);circle(121,401,32);circle(139,359,7); delay(15);  circle(624,361,10);circle(612,394,15);
						delay(15);circle(142,441,7);circle(115,458,18); delay(15);  circle(608,485,70);circle(577,403,10);
						delay(15);circle(10,450,80);circle(165,477,28); delay(15);  circle(509,36,7);circle(503,17,7);
						delay(15);circle(136,279,5);circle(515,82,4);   delay(15);  circle(490,-9,18);circle(519,125,5);
						outtextxy(getmaxx()/2-190,getmaxy()/2-180,"Player 2 is Winner"); sleep(2.5); exit(0);
					}

	if((x==0)&&(y==0))      //center
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);
	{
	setcolor(0);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if((x==0)&&(y==-67))     //up
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	/*line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);*/

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==0&&y==67)     //down
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	/*line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);*/

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==67&&y==0)     //right
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	/*line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);*/

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==-67&&y==0)    		//left\\
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	/*line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);*/

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==67&&y==-67)    	    //up-right\\
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	/*line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);*/

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==67&&y==67)            //down-right\\
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	/*line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);*/

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==-67&&y==-67)     //up-left
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	/*line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);*/

	line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);
	}

	setcolor(15);
	}
	if(x==-67&&y==67)            //down-left\\
	{
	setcolor(2);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);

	{
	setcolor(15);
	line(220+69+x,140+69-67+y,220+69+x,145+69-67+y);  //1  up
	line(220+69+x,140+69-67+y,225+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,276+69+x,140+69-67+y);
	line(281+69+x,140+69-67+y,281+69+x,145+69-67+y);
	line(276+69+x,201+69-67+y,281+69+x,201+69-67+y);
	line(281+69+x,201+69-67+y,281+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,220+69+x,196+69-67+y);
	line(220+69+x,201+69-67+y,225+69+x,201+69-67+y);

	line(220+69+x,140+69+67+y,220+69+x,145+69+67+y);   //2  down
	line(220+69+x,140+69+67+y,225+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,276+69+x,140+69+67+y);
	line(281+69+x,140+69+67+y,281+69+x,145+69+67+y);
	line(276+69+x,201+69+67+y,281+69+x,201+69+67+y);
	line(281+69+x,201+69+67+y,281+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,220+69+x,196+69+67+y);
	line(220+69+x,201+69+67+y,225+69+x,201+69+67+y);

	line(220+69+67+x,140+69+y,220+69+67+x,145+69+y);   //3  right
	line(220+69+67+x,140+69+y,225+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,276+69+67+x,140+69+y);
	line(281+69+67+x,140+69+y,281+69+67+x,145+69+y);
	line(276+69+67+x,201+69+y,281+69+67+x,201+69+y);
	line(281+69+67+x,201+69+y,281+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,220+69+67+x,196+69+y);
	line(220+69+67+x,201+69+y,225+69+67+x,201+69+y);

	line(220+69-67+x,140+69+y,220+69-67+x,145+69+y);   //4  left
	line(220+69-67+x,140+69+y,225+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,276+69-67+x,140+69+y);
	line(281+69-67+x,140+69+y,281+69-67+x,145+69+y);
	line(276+69-67+x,201+69+y,281+69-67+x,201+69+y);
	line(281+69-67+x,201+69+y,281+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,220+69-67+x,196+69+y);
	line(220+69-67+x,201+69+y,225+69-67+x,201+69+y);

	line(220+69+67+x,140+69-67+y,220+69+67+x,145+69-67+y);   //5  up-right
	line(220+69+67+x,140+69-67+y,225+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,276+69+67+x,140+69-67+y);
	line(281+69+67+x,140+69-67+y,281+69+67+x,145+69-67+y);
	line(276+69+67+x,201+69-67+y,281+69+67+x,201+69-67+y);
	line(281+69+67+x,201+69-67+y,281+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,220+69+67+x,196+69-67+y);
	line(220+69+67+x,201+69-67+y,225+69+67+x,201+69-67+y);

	line(220+69+67+x,140+69+67+y,220+69+67+x,145+69+67+y);   //6  down-right
	line(220+69+67+x,140+69+67+y,225+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,276+69+67+x,140+69+67+y);
	line(281+69+67+x,140+69+67+y,281+69+67+x,145+69+67+y);
	line(276+69+67+x,201+69+67+y,281+69+67+x,201+69+67+y);
	line(281+69+67+x,201+69+67+y,281+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,220+69+67+x,196+69+67+y);
	line(220+69+67+x,201+69+67+y,225+69+67+x,201+69+67+y);

	line(220+69-67+x,140+69-67+y,220+69-67+x,145+69-67+y);   //7  up-left
	line(220+69-67+x,140+69-67+y,225+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,276+69-67+x,140+69-67+y);
	line(281+69-67+x,140+69-67+y,281+69-67+x,145+69-67+y);
	line(276+69-67+x,201+69-67+y,281+69-67+x,201+69-67+y);
	line(281+69-67+x,201+69-67+y,281+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,220+69-67+x,196+69-67+y);
	line(220+69-67+x,201+69-67+y,225+69-67+x,201+69-67+y);

	/*line(220+69-67+x,140+69+67+y,220+69-67+x,145+69+67+y);   //8  down-left
	line(220+69-67+x,140+69+67+y,225+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,276+69-67+x,140+69+67+y);
	line(281+69-67+x,140+69+67+y,281+69-67+x,145+69+67+y);
	line(276+69-67+x,201+69+67+y,281+69-67+x,201+69+67+y);
	line(281+69-67+x,201+69+67+y,281+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,220+69-67+x,196+69+67+y);
	line(220+69-67+x,201+69+67+y,225+69-67+x,201+69+67+y);*/
	}

	setcolor(13);
	}
	if((x<-67)||(x>67)||(y<-67)||(y>67))
	{
	setcolor(i);
	line(220+69+x,140+69+y,220+69+x,145+69+y);
	line(220+69+x,140+69+y,225+69+x,140+69+y);

	line(281+69+x,140+69+y,276+69+x,140+69+y);
	line(281+69+x,140+69+y,281+69+x,145+69+y);

	line(276+69+x,201+69+y,281+69+x,201+69+y);
	line(281+69+x,201+69+y,281+69+x,196+69+y);

	line(220+69+x,201+69+y,220+69+x,196+69+y);
	line(220+69+x,201+69+y,225+69+x,201+69+y);
	setcolor(4);
	}

	} //while
}//main
