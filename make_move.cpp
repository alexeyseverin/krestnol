void make_move(int num) 
{ 
//эта функци€ тоже ничего не возвращает, но у нее есть аргумент - номер игрока, который будет делать ход
   if (num == 1) cout << PlayerName1; 
//≈сли аргумент = 1, то выводитс€ им€ первого игрока (то есть он будет ходить)
      else cout << PlayerName2;
   cout << ", enter a cell's number to make move: ";
   int cell;
   cin >> cell; //»грок который ходит должен указать номер клеточки
   cout << "\n";
   while (cell > 9 || cell < 1 || cells[cell-1] == 'O' || cells[cell-1] == 'X') 
   { 
//ѕроверка на валидность (клеточка не зан€та и ее номер не <1 и не >9
       cout << "Enter a CORRECT (1-9) or EMPTY (---) cell's number to make move: ";
       cin >> cell; //≈сли проверка не пройдена, то игрок должен еще раз ввести номер клеточки
       cout << "\n";
   }

   if (num == 1) cells[cell-1] = 'X'; //ѕервый игрок играет "крестиками", а второй - "ноликами"
      else cells[cell-1] = 'O';
}
