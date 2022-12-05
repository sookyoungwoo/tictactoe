#include <iostream>
#include "Game.h"

using namespace std;


int Game::checkwin(char (*arr)[3]) const//행렬을 입력받아 승부 체크 함수
{
  for (int i=0;i<3;i++)//가로 한줄을 만들었을 시
  {
    if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]=='X')
    {
      cout<<"경기 끝! X 승리!\n";
      return 1;
    }
    if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]&&arr[i][0]=='O')
    {
      cout<<"경기 끝! O 승리!\n";
      return 2;
    }
    else
    {
      
    }
  }  
  
  for (int j=0;j<3;j++)//세로 한줄을 만들었을 시
  {
    if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[0][j]=='X')
    {
      cout<<"경기 끝! X 승리!\n";
      return 1;
    }
    if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j]&&arr[0][j]=='O')
    {
      cout<<"경기 끝! O 승리!\n";
      return 2;
    }
    else
    {
      
    }
  }
  
  if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[0][0]=='O')//대각선에서 O가 이긴경우(\방향)
  {
      cout<<"경기 끝! O 승리!\n";
      return 2;
  }
  if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[0][2]=='O')//대각선에서 O가 이긴경우(/방향)
  {
      cout<<"경기 끝! O 승리!\n";
      return 2;
  }
  
  if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]&&arr[0][0]=='X')//대각선에서 X가 이긴경우(\방향)
  {
      cout<<"경기 끝! X 승리!\n";
      return 1;
  }
  if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]&&arr[0][2]=='X')//대각선에서 X가 이긴경우(/방향)
  {
      cout<<"경기 끝! X 승리!\n";
      return 1;
  }
  

  return 0;//승부가 나지 않은 경우 함수 탈출
}

  int Game::set_stone(char (*arr)[3])
  {
  
    if((whoturn%2)==0&&arr[x_loc][y_loc]=='.')//누구 차례인지에 따라 x or o 입력
    {
      arr[x_loc][y_loc]='X';
      ++whoturn;
      return 0;
    }
    if((whoturn%2)==1&&arr[x_loc][y_loc]=='.')
    {
      arr[x_loc][y_loc]='O';
      ++whoturn;
      return 0;
    }
    else
    {
     cout<<"이 자리에는 둘 수 없습니다!\n";
     return 0;
    }
  }



void Game::print_arr(char (*arr)[3]) const//틱택토 행렬을 보여주는 함수
{
  
  for (int i=0;i<3;i++)
  {
    for (int j=0;j<3;j++)
    {
      cout << arr[i][j];
    }  
    cout <<'\n';
  }
}

void Game::findloc(int num=0) //입력받은 숫자를 행렬의 위치로 변환 함수
{
  x_loc=num/3;
  y_loc=num%3-1;
}