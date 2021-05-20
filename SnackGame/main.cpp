#include <iostream>
//#include <windows.h>
#include <stdlib.h>
//#include <conio.h>

using namespace std;
bool gameover;
const int width=20 ;const int  height = 20;
int x ,y,fruitX,fruitY,score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void settings(){
gameover = false;
dir =STOP;
x= width/2;
y=height/2;
fruitX = rand() % width;
fruitY = rand() % height;
score =0;
}
void visual()
{
 system("cls");
for (int i=0;i<width;i++){
cout<<"#";
     }
cout<<endl;

for(int i=0;i<height;i++){
 for(int j=0;j<width;j++){
 if (j==0){
  cout<<"#";
  }
   cout<<" ";
if(j==width-1){
  cout<<"#";
}
  }
  cout<<endl;
    }
    for (int i=0;i<width;i++){
cout<<"#";
     }
     cout<<endl;
      }


int main()
{
settings();
visual();

    return 0;
}
