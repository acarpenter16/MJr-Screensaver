#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup();
}

void loop() {
  for(int x=0; x<8; x++)
  {
    DrawPx(x,0,4);
    DrawPx(0,x,4);
    DrawPx(x,7,4);
    DrawPx(7,x,4);
  }
  for(int y=1; y<7; y++)
  {
    DrawPx(y,1,6);
    DrawPx(1,y,6);
    DrawPx(y,6,6);
    DrawPx(6,y,6);
  }
  for(int i=2; i<6; i++)
  {
    DrawPx(i,2,2);
    DrawPx(2,i,2);
    DrawPx(i,5,2);
    DrawPx(5,i,2);
  }
  for(int j=3; j<5; j++)
  {
    DrawPx(j,3,12);
    DrawPx(3,j,12);
    DrawPx(j,4,12);
    DrawPx(4,j,12);
  }

  DisplaySlate();
  delay (1000);
  
  for(int x=0; x<8; x++)
  {
    DrawPx(x,0,12);
    DrawPx(0,x,12);
    DrawPx(x,7,12);
    DrawPx(7,x,12);
  }
  for(int y=1; y<7; y++)
  {
    DrawPx(y,1,4);
    DrawPx(1,y,4);
    DrawPx(y,6,4);
    DrawPx(6,y,4);
  }
  for(int i=2; i<6; i++)
  {
    DrawPx(i,2,6);
    DrawPx(2,i,6);
    DrawPx(i,5,6);
    DrawPx(5,i,6);
  }
  for(int j=3; j<5; j++)
  {
    DrawPx(j,3,2);
    DrawPx(3,j,2);
    DrawPx(j,4,2);
    DrawPx(4,j,2);
  }

  DisplaySlate();
  delay (1000);

  for(int x=0; x<8; x++)
  {
    DrawPx(x,0,2);
    DrawPx(0,x,2);
    DrawPx(x,7,2);
    DrawPx(7,x,2);
  }
  for(int y=1; y<7; y++)
  {
    DrawPx(y,1,12);
    DrawPx(1,y,12);
    DrawPx(y,6,12);
    DrawPx(6,y,12);
  }
  for(int i=2; i<6; i++)
  {
    DrawPx(i,2,4);
    DrawPx(2,i,4);
    DrawPx(i,5,4);
    DrawPx(5,i,4);
  }
  for(int j=3; j<5; j++)
  {
    DrawPx(j,3,6);
    DrawPx(3,j,6);
    DrawPx(j,4,6);
    DrawPx(4,j,6);
  }

  DisplaySlate();
  delay (1000);

  for(int x=0; x<8; x++)
  {
    DrawPx(x,0,6);
    DrawPx(0,x,6);
    DrawPx(x,7,6);
    DrawPx(7,x,6);
  }
  for(int y=1; y<7; y++)
  {
    DrawPx(y,1,2);
    DrawPx(1,y,2);
    DrawPx(y,6,2);
    DrawPx(6,y,2);
  }
  for(int i=2; i<6; i++)
  {
    DrawPx(i,2,12);
    DrawPx(2,i,12);
    DrawPx(i,5,12);
    DrawPx(5,i,12);
  }
  for(int j=3; j<5; j++)
  {
    DrawPx(j,3,4);
    DrawPx(3,j,4);
    DrawPx(j,4,4);
    DrawPx(4,j,4);
  }

  DisplaySlate();
  delay (1000);


}
