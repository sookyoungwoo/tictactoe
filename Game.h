#ifndef Game_h
#define Game_h

class Game
{
  private:
  int x_loc=0;  //판에서 x위치
  int y_loc=0;  //판에서 y위치
  
  
  public:
  int whoturn=0;//짝수일 때 X차례, 홀수일 때 O차례 9번 하면 무승부
  int whowin=0;//1이면 x승리,2이면 O승리
  int checkwin(char (*arr)[3]) const;//행렬을 입력받아 승부체크 함수
  //승부가 안나면 0, x가 이기면 1, O가 이기면 2 반환
  void print_arr(char (*arr)[3]) const;//틱택토 행렬 보여주는 함수
  int set_stone(char (*arr)[3]);//돌 빈 곳에 두는 함수
  void findloc(int num);
  //입력받은 수를 좌표상의 위치로 변경해주는 함수
  //멤버 변수 x_loc,y_loc 값을 변경하므로 const 선언 불가
};

#endif