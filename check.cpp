char check()
{
   for(int i = 0; i < 3; i++) //��� ������ ����� 3 ��������
      if (cells[i*3] == cells[i*3+1] && cells[i*3+1] == cells[i*3+2]) //���������� ��� ������ ����������� ��
         return cells[i]; //������ ��������, ��� - �� �����������
         //0-1-2, 3-4-5 � 6-7-8
         //��������� � ������� ���������� � 0
      else if (cells[i] == cells[i+3] && cells[i+3] == cells[i+6]) //������������
         return cells[i]; //0-3-6, 1-4-7 � 2-5-8
      else if ((cells[2] == cells[4] && cells[4] == cells[6]) || (cells[0] == cells[4] && cells[4] == cells[8]))
         return cells[i]; //� �� ���������: 0-4-8 � 2-4-6
      return '-'; //����� - �����
}
