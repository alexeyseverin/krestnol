#include <iostream> //Стандартная библиотека ввода-вывода
#include <cstring> //Стандартная библиотека для работы со строками
using namespace std;
 
char PlayerName1[80], //Переменные для имен игроков
     PlayerName2[80]; 

int main () 
{
//Вводить имена пользователей до тех пор, пока они равны
   do {
      cout << "Enter the name of the 1st player: ";
      gets(PlayerName1); 
//Функция gets использована для ввода имен игроков с пробелами
//в ином случае имя показывалось бы до первого пробела
      cout << "Enter the name of the 2st player: ";
      gets(PlayerName2);
      cout << "\n";
      } while (!strcmp(PlayerName1, PlayerName2));
//Функция из cstring для проверки разности строк она возвращает 0, если строки равны

   system ("pause");
//system ("pause") использовано для того, чтобы программа не закрывалась после выполнения
//функция использована для того, чтобы игру можно было свободно запускать с .exe-файла, а не через cmd
   return 0;
}
