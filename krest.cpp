#include <iostream> //����������� ���������� �����-������
#include <cstring> //����������� ���������� ��� ������ �� ��������
using namespace std;
 
char PlayerName1[80], //���������� ��� ���� �������
     PlayerName2[80]; 

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

   system ("pause");
//system ("pause") ������������ ��� ����, ����� ��������� �� ����������� ����� ����������
//������� ������������ ��� ����, ����� ���� ����� ���� �������� ��������� � .exe-�����, � �� ����� cmd
   return 0;
}
