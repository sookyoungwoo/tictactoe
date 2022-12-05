#include <iostream>
#include "Game.h"
#include "Player.h"

using namespace std;

void game_play(void)
{
  Game tictactoe;
  
  int loc=0;
  char arr[3][3]=
    {
      {'.','.','.'},
      {'.','.','.'},
      {'.','.','.'}
    };
while(1)
  {
    tictactoe.print_arr(arr);
    cout<<"어디에 두시겠습니까?";
    cin>>loc; //둘 위치를 입력
    tictactoe.findloc(loc);  //입력받은 위치 배열 위치로 변환
    int a=tictactoe.set_stone(arr);
    tictactoe.whowin=tictactoe.checkwin(arr);  //누가 이겼는지 승부가 아직 안 났는지 확인
    if(tictactoe.whowin==1)
    {
      cout<<"X가 이겼습니다 게임을 종료합니다\n";
      tictactoe.print_arr(arr);
      break;
    }
    if(tictactoe.whowin==2)
    {
      cout<<"O가 이겼습니다 게임을 종료합니다/n";
      tictactoe.print_arr(arr);
      break;
    }
    if(tictactoe.whoturn==9&&tictactoe.whowin==0)
    {
      cout<<"비겼습니다 게임을 종료합니다\n";
      tictactoe.print_arr(arr);
      break;
    }
    else
    {
      //승부가 안났으면 진행!
    }
  }
}

int main() 
{
  Player X_player(0);
  Player Y_player(0);
  
  int mode=0;
  cout<<"틱택토 게임에 오신것을 환영합니다\n";
  cout<<"이 게임은 2인용 게임입니다 확인 하셨다면 0을 눌러주세요"<<endl;
  cin>>mode;
  if(mode==0)
  {
    cout<<"게임을 시작합니다"<<endl;
    game_play();  
  }  
  else
  {
    cout<<"지원하지 않는 기능입니다!"<<endl;
  }
}