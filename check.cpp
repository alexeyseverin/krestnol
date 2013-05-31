char check()
{
   for(int i = 0; i < 3; i++) //Для победы нужны 3 клеточки
      if (cells[i*3] == cells[i*3+1] && cells[i*3+1] == cells[i*3+2]) //Комбинации для победы вычисляются по
         return cells[i]; //разным формулам, эта - по горизонтали
         //0-1-2, 3-4-5 и 6-7-8
         //нумерация в массиве начинается с 0
      else if (cells[i] == cells[i+3] && cells[i+3] == cells[i+6]) //Вертикальная
         return cells[i]; //0-3-6, 1-4-7 и 2-5-8
      else if ((cells[2] == cells[4] && cells[4] == cells[6]) || (cells[0] == cells[4] && cells[4] == cells[8]))
         return cells[i]; //И по диагонали: 0-4-8 и 2-4-6
      return '-'; //Иначе - ничья
}
