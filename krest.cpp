#include <iostream> //����������� ���������� �����-������
#include <cstring> //����������� ���������� ��� ������ �� ��������
using namespace std;
 
char PlayerName1[80], //���������� ��� ���� �������
     PlayerName2[80]; 
     
char cells[9] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'}; 
//� ��� �������� ������ � ��������� ("-" - ������, "�" - ������� ������, "�" - �������)

char win='-'; //������ ������ ("-" - �����, "�" - ������� ������, "�" - �������)

int main () 
{
//������� ����� ������������� �� ��� ���, ���� ��� �����
   do {
      cout << "Enter the name of the 1st player: ";
      gets(PlayerName1); 
//������� gets ������������ ��� ����� ���� ������� � ���������
//� ���� ������ ��� ������������ �� �� ������� �������
      cout << "Enter the name of the 2st player: ";
      gets(PlayerName2);
      cout << "\n";
      } while (!strcmp(PlayerName1, PlayerName2));
//������� �� cstring ��� �������� �������� ����� ��� ���������� 0, ���� ������ �����

show_cells();
 
   for (int move = 1; move <= 9; move++) 
   { //���� �� 9 �����, �.�. � ��� 9 ��������
      if (move % 2) make_move(1); //���� ��� ��������, �� ������� �� ������� �� 2 ����� ����� 1 (�� ���� true)
      else make_move(2); //���� ������, �� 0 (false). ����� ���� ��� �������� ����� ������ �����,
      show_cells(); //� ���� ������, �� ������
      
      if (move >= 5)
//���� ����� ���� 5 ��� ������, �� �������� �������� �� ������ (������, ��� �� 5-�� ���� �������� ������)*/
      {
          win=check(); //������ ������ - ��� ������������ �������� ������� ��������
          if(win!='-') //���� ������ ������ �� "-" (�� ���� ���-�� �������),
             break; //�� ���� ������ � ���������� ����� � ���� �����������
      }
   }

   //���� ���������� � ����� �� ������� - �����

    result(); //�������, ������� ������� ���������

   system ("pause");
//system ("pause") ������������ ��� ����, ����� ��������� �� ����������� ����� ����������
//������� ������������ ��� ����, ����� ���� ����� ���� �������� ��������� � .exe-�����, � �� ����� cmd
   return 0;
}

