void make_move(int num) 
{ 
//��� ������� ���� ������ �� ����������, �� � ��� ���� �������� - ����� ������, ������� ����� ������ ���
   if (num == 1) cout << PlayerName1; 
//���� �������� = 1, �� ��������� ��� ������� ������ (�� ���� �� ����� ������)
      else cout << PlayerName2;
   cout << ", enter a cell's number to make move: ";
   int cell;
   cin >> cell; //����� ������� ����� ������ ������� ����� ��������
   cout << "\n";
   while (cell > 9 || cell < 1 || cells[cell-1] == 'O' || cells[cell-1] == 'X') 
   { 
//�������� �� ���������� (�������� �� ������ � �� ����� �� <1 � �� >9
       cout << "Enter a CORRECT (1-9) or EMPTY (---) cell's number to make move: ";
       cin >> cell; //���� �������� �� ��������, �� ����� ������ ��� ��� ������ ����� ��������
       cout << "\n";
   }

   if (num == 1) cells[cell-1] = 'X'; //������ ����� ������ "����������", � ������ - "��������"
      else cells[cell-1] = 'O';
}
