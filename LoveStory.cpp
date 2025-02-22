#include<graphics.h>
#include<windows.h>
#include <cstdlib>
#include <ctime>
#include<string>

// stickman open legs with rose
//part1
void stickman_open_pt1(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);//body
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);
	}	
}

// stickman close legs with rose
void stickman_close_pt1(int speed,int color)
{	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;
	//right hand
		line(50+s,360+i,80+s,400+i);
	}
}

// stickwomen open legs 

void stickwomen_open_pt1(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

//stickman with rose
void stickman_rose_pt1(int speed,int color)
{
		int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);
	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
}

// stickman rose break
void stickman_rose_break_pt1(int speed,int color)
{
		int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);
	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
    {
		line(100+i+s,360,100+i+s,350);
		line(100+s,350+i,110+s,350+i);
	}
	setcolor(LIGHTRED);
	for(int i=1,h=0;i<=10;i++,h++)
	{
		line(110+s+i,350-i,110+i+s,350+i);
	}
}
// stickwomen close legs 

void stickwomen_close_pt1(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}

// stickman chat
void stickman_chat_pt1(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s
	,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);	//1=fontsize
	outtextxy(-20+s,210,"I Love");
	outtextxy(-5+s,240,"You");
	
}

void stickwomen_chat_pt1(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,220+s+50,200,220+s+50
	,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"Sorry, I don't have");
	outtextxy(100+s,240,"time for 'Love'");
	
}
// road

void road_pt1(int color)
{
	setcolor(GREEN);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(GREEN);
}

void rose_fall_pt1(int speed,int height_speed)
{
	int s=speed;
	int hf=height_speed;
	setcolor(LIGHTGREEN);
	// rose
	for(int i=0;i<2;i++)
	line(100+i+s,360+hf,120+i+s,360+hf);
	setcolor(LIGHTRED);
	for(int i=1;i<=10;i++)
	{
		line(120+s+i,360-i+hf,120+i+s,360+i+hf);
	}

}

//part2	
// heart

// stickman final chat
void stickman_chat2(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,-40+s,270,-40+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
	drawpoly(8,points);

   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(-20+s,210,"It's Ok!'");
	outtextxy(-5+s,240," ");
	
}

//stickman open legs with left hand up
void stickman_open_leftup(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
		line(20+s+i, 400, 5+s+i, 361);
	//right hand
		line(50+s,360+i,80+s,400+i);

	
	}
	
}


// Stick women last chat
void stickwomen_chat3(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"I am");
	outtextxy(100+s,240,"sorry...");
	
}
// Stick women call stickman
void stickwomen_chat2(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"HEY!");
	outtextxy(100+s,240,"wait....");
	
}
// stickwomen open legs with rose

void stickwomen_open_rose(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);

	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
	
}

// stickwomen close legs with rose

void stickwomen_close_rose(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,380+i);
		line(80+i+s,380,100+i+s,360);

	
	}
	// rose
	setcolor(LIGHTGREEN);
	for(int i=0;i<2;i++)
	line(100+i+s,360,100+i+s,345);
	setcolor(LIGHTRED);
	for(int i=10,h=0;i>=0;i--,h++)
	{
		line(90+i+s,345-h,110-i+s,345-h);
	}
	
}


// rose

void rose(int speed)
{
	int s = speed;
	for (int i=0; i<3; i++)
	{
		setcolor(LIGHTGREEN);
		line(50+s, 466+i, 60+s, 466+i);
	}
	setcolor(LIGHTRED);
	for(int i=10,h=0;i<=20;i++,h++)
	{
		line(50+i+s, 466-h, 50+i+s, 466+h);
	}
}
// rain 

void rain(int speed,int drop_size)
{

   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}

// cloud
void cloud(int speed,int cloud_color)
{setcolor(LIGHTGRAY);
 int a=speed;
    int i=2;
		//up
		arc(50+a,50+2,20,160,25+i);
		arc(100-2+a,50+2,20,160,25+i);
		//down
		arc(50+a,80-4,180+20,360-20,25+i);
		arc(100-2+a,80-4,180+20,360-20,25+i);
	    //left
		arc(25+5+a,65,90+10,270-10,20+i);     
	    // right  
		arc(125-5+a,65,270,90,20+i);              
		
	
	setfillstyle(1,cloud_color);
	floodfill(50+a,75,LIGHTGRAY);
}

// stick man chats (think)
void stickman_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,158,140+s+50,158,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   	setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,180,"I have to die");
	outtextxy(45+s,210,"   no one");
	outtextxy(90+s,240,"love me");
	
}
// Stick women thinking
void stickwomen_chat(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,210,"I have done");
	outtextxy(100+s,240,"wrong");
	
}

// Stick women thinking next
void stickwomen_chat1(int speed,int box_color,int text_color)
{
	int s=speed;
	setcolor(box_color);

	int points[16]={50+s,280,40+s,270,30+s,270,30+s,158,140+s+50,158,140+s+50,270,60+s,270,50+s,280};
	drawpoly(8,points);
   	setcolor(text_color);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,1);
	outtextxy(45+s,180,"I have to go");
	outtextxy(45+s,210,"to say sorry");
	outtextxy(100+s,240,"to him");
	
}
//Music 
void music()
{
	mciSendString("open \"song.wav\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString("play mp3", NULL, 0, NULL);
}
//home
void home(int color)
{
	for (int i = 0; i<3; i++)
	{
		setcolor(color);
		// rectanglular part of home
		rectangle(524+i, 362+i, 670+i, 453+i);
		rectangle(477+i, 363+i, 524+i, 453+i);
		rectangle(493+i, 404+i, 510+i, 453+i);
		// lines to draw roof triangle
		line(477+i, 362+i, 500+i, 316+i);
		line(500+i, 316+i, 524+i, 362+i);
		line(477+i, 362+i, 524+i, 362+i);
		// roof right side
		line(670+i, 362+i, 640+i, 316+i);
		line(640, 316+i, 500, 316+i);
		// Home window (circle)
		circle(602, 402, 17+i);	
	}
}
// cloud
void cloud_pt1(int speed,int cloud_color)
{setcolor(LIGHTGRAY);
 int a=speed;
    int i=2;
		//up
		arc(50+a,50+2,20,160,25+i);
		arc(100-2+a,50+2,20,160,25+i);
		//down
		arc(50+a,80-4,180+20,360-20,25+i);
		arc(100-2+a,80-4,180+20,360-20,25+i);
	    //left
		arc(25+5+a,65,90+10,270-10,20+i);     
	    // right  
		arc(125-5+a,65,270,90,20+i);              	
	
	setfillstyle(1,cloud_color);
	floodfill(50+a,75,LIGHTGRAY);
}

// rain 

void rain_pt1(int speed,int drop_size)
{

   setcolor(LIGHTCYAN);

	for(int i=0;i<30;i++)
	{
		settextstyle(0,HORIZ_DIR,drop_size);
		outtextxy(speed+rand()%150,100+rand()%345,"| ");
	}
	setcolor(WHITE);
}

//Road

void road(int color)
{
	setcolor(GREEN);
	for(int i=0;i<3;i++)
	{
		line(0,450+i,700,450+i);
	}
	setcolor(WHITE);
}

//stickman open legs
void stickman_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
	//right hand
		line(50+s,360+i,80+s,400+i);

	
	}
	
}

// stickman close legs 

void stickman_close(int speed,int color)
{	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	line(50+i+s,350,50+i+s,400);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,360,20+s+i,400);
;
	//right hand
		line(50+s,360+i,80+s,400+i);


	}
	
	
}

// stickwomen open legs 

void stickwomen_open(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50+i+s,400,30+i+s,450);
	line(50+i+s,400,70+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}
// stick womrn close leg
void stickwomen_close(int speed,int color)
{
	int s=speed;
	
	for(int i=0;i<3;i++)
	{
	setcolor(color);
	circle(50+s,320,30+i);
	//dress
	line(50+i+s,350,40+i+s,400);
	line(50+i+s,350,60+i+s,400);
	line(40+s,400-i,60+s,400-i);
	//legs
	line(50-i+s,400,50-i+s,450);
	line(50+i+s,400,50+i+s,450);
	//left hand
		line(50+s+i,350,20+s+i,400);
	//right hand
		line(50+s+i,350,80+s+i,400);

	
	}
	
}


void end()
{
	setcolor(LIGHTGREEN);
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
	outtextxy(50,150,"An animated love story");
	settextstyle(EUROPEAN_FONT,HORIZ_DIR,4);
	setcolor(LIGHTBLUE);
	outtextxy(100,230,"THANK FOR WATCHING");
//	mciSendString("pause mp3", NULL, 0, NULL);
//	mciSendString("close mp3", NULL, 0, NULL);
}

// driver program
int main()
{

	initwindow(700, 550, "Stickman", 150, 50);
	int page=0;
	int speedMan=6;
	int speedWomen=6;
	int n=0;
	int cs=650;
	int rf=300;
	int rff=0;
	int sm=1;
	int sw=1;
	music();
	road(13);
	
	while(n<=1300)
	{
		setactivepage(page);
		setvisualpage(1-page);
		
		cleardevice();			
	// rest position
		
	    if(n<20)
	    {  	road_pt1(13);
	  		stickman_open_pt1(sm,14);
	    	stickwomen_open_pt1(280,15);
		}
		
	// stick_man walk 40
		if(n>=20&&n<=60)
		{
		road_pt1(13);
		if(n%2==0)
		stickman_open_pt1(sm,14);
		else
		stickman_close_pt1(sm,14); 
		stickwomen_open_pt1(280,15);	
		sm+=4;

		}
		
	//stick man propose 10
	  if(n>60&&n<=70)
	    {
	    	if(n==61)
	    	delay(300);
		    road_pt1(13);
			stickman_rose_pt1(sm,14);
			if(n==61)
			stickman_chat_pt1(sm,14,14);
			if(n==62)
			delay(3000);
	    	stickwomen_open_pt1(280,15);
	    	if(n==63)
	    	stickwomen_chat_pt1(280,15,15);
	    	if(n==64)
	    	delay(3000);
		}
		
	//stick women walk 70
	
		if(n>70&&n<=170)
		{
		    road_pt1(13);
			stickman_rose_pt1(sm,14);
			if(n%2==0)
			stickwomen_open_pt1(280+sw,15);
			else
			stickwomen_close_pt1(280+sw,15);
			sw+=4;
		}
    //cloud move 50
    
		if(n>170&&n<220)
		{
		    road_pt1(13);
			stickman_rose_pt1(sm,14);
			cloud_pt1(cs,15);
			cs-=10;
			
		}
		
	//rose break and starting rain
	
		if(n>=220&&n<=280)
		{
		    road_pt1(13);
			stickman_rose_break_pt1(sm,14);
			cloud_pt1(sm,15);
			rain_pt1(sm,2);
		}
		
	// rose fall
	
		if(n>280&&n<=330)
		{
		road_pt1(13);
		cloud_pt1(sm,15);
		rain_pt1(sm,2);
		rose_fall_pt1(200,rff);
		stickman_open_pt1(sm,14);
		rff+=2;

		}
		
	// stick man walk
	
		if(n>330&&n<422)
		{
		road_pt1(13);
		cloud_pt1(sm,15);
		rain_pt1(sm,2);
		rose_fall_pt1(200,rff);
		if(n%2==0)
		stickman_open_pt1(sm,14);
		else
		stickman_close_pt1(sm,14);
		sm-=4;
		}
		
		//part2
		
		//position outside window	1
		if(n>420&&n<435)
		{
			road(13);
			home(15);
			stickwomen_open(-90, 15);
		}
		// move stickwomen forward	2
		if (n>=435 && n<=486)
		{
			road(13);
			home(15);
			if (n%2==0)
			stickwomen_open(-90+speedWomen, 15);
			else
			stickwomen_close(-90+speedWomen, 15);			
			speedWomen+=6;			
		}
		
		// stickwomen think	3
		if (n>486 && n<=532)
		{
			road(13);
			home(15);
			stickwomen_open(250, 15);
			if (n>488 && n<508)
			stickwomen_chat(speedWomen,15, 15);
			if (n>=508 && n<= 512);
			if (n>=512 && n<=532)
			stickwomen_chat1(speedWomen, 15, 15);
			
		}
		
		// Stick women moving back 	4
		if (n>532 && n<=606)
		{
			road(13);
			home(15);
			if (n%2==0)
			stickwomen_open(speedWomen, 15);
			else
			stickwomen_close(speedWomen, 15);			
			speedWomen-=6;			
		}
		// stick man go forward	5
		if (n>606 && n<=657)
		{
			cloud(-100+speedMan, 15);
			rain(-100+speedMan, 2);
			road(13);
			if (n%2==0)
			stickman_open(-90+speedMan, 14);
			else
			stickman_close(-90+speedMan, 14);			
			speedMan+=6;			
		}
		
		// stickman think	6
		if (n>657 && n<=709)
		{
			cloud(-100+speedMan, 15);
			rain(-100+speedMan, 2);
			road(13);
			stickman_open(speedMan-90, 14);
			stickman_chat(speedMan-90, 14, 14);
						
		}
		
		// stickman go forward after thinking	7
		if (n>709 && n<=792)
		{
		//	cloud(-100+speedMan, 15);
		//	rain(-100+speedMan, 2);
			road(13);
			if (n%2==0)
			stickman_open(-90+speedMan, 14);
			else
			stickman_close(-90+speedMan, 14);			
			speedMan+=6;
		}
		
		//rose and stickwomen walk forward to pick rose	8
		
		if (n>792 && n<=854)
		{
			
			road(13);
			rose(rf);
			if (n%2==0)
			stickwomen_open(speedWomen, 15);
			else
			stickwomen_close(speedWomen, 15);
			speedWomen+=6;	
		}
		
		// stickwomen stop to pick rose	9
		if (n>854 && n<=864)
		{
			road(13);
			rose(rf);
			stickwomen_open(speedWomen, 15);
		}
		// stickwomen pick rose	10
		if (n>864 & n<=900)
		{
			road(13);
			stickwomen_open_rose(speedWomen, 15);
			
		}
		// stickwomen pick rose and move foward	11
		if (n>900 && n<=978)
		{
			road(13);
			if (n%2==0)
			stickwomen_open_rose(speedWomen, 15);
			else
			stickwomen_close_rose(speedWomen, 15);
			speedWomen+=6;
		}
		// stickwomen and stickman meet	12
		
		if (n>978 && n<=1036)
		{
			road(13);
			if (n%2==0)
			{
				
				stickman_open(speedMan-550, 14);
				stickwomen_open_rose(speedWomen-730, 15);
				speedWomen+=6;
				speedMan+=6;
			}
				
			else
				{
				stickman_close(speedMan-550, 14);
				stickwomen_close_rose(speedWomen-730, 15);
				speedWomen+=6;
				speedMan+=6;
				}
			
		}
		
		// stickwomen call stickman	13
		if (n>1036 && n<=1051)
		{
			road(13);
			if (n%2==0)
			{
				stickman_open(speedMan-550, 14);
				speedMan+=6;
			}
				
			else
				{
				stickman_close(speedMan-550, 14);
				speedMan+=6;
				}
			stickwomen_open_rose(speedWomen-730, 15);
			stickwomen_chat2(speedWomen-730,15,2);
		}
		
		// stickman come back	14
		if (n>1051 && n<=1091)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730, 15);
			stickwomen_chat2(speedWomen-730,15,2);
			if (n%2==0)
			{
				stickman_open(speedMan-550, 14);
				speedMan-=6;
			}
				
			else
				{
				stickman_close(speedMan-550, 14);
				speedMan-=6;
				}
		}
		
		// meet	15
		if (n>1091 && n<=1130)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730,15);
			stickman_open(speedMan-550, 14);
		}
		
		// stickwomen saying sorry	16
		if (n>1130 && n<=1180)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730,15);
			stickwomen_chat3(speedWomen-730,15,2);
			stickman_open(speedMan-550, 14);
		}
		// stickman hand up	17
		if (n>1180 && n<=1240)
		{
			road(13);
			stickwomen_open_rose(speedWomen-730,15);
			stickman_open_leftup(speedMan-550, 14);
			stickman_chat2(speedMan-550, 14,2);
			
		}
		if (n>1240 && n<=1300)
		{
			road(13);
			end();
			if(n==1244)
			delay(10000);
			
		}
		
		page=1-page;
		delay(90);
		
		n++;
		
	}
			exit(0);
			setactivepage(1);
			

	getch();
	closegraph();

}
