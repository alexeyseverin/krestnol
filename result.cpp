void result() 
{
   if (win=='X') cout << PlayerName1 << " win! Congratulations! " << PlayerName2 << " is looser!" << endl;
   else if (win=='O') cout << PlayerName2 << " win! Congratulations! " << PlayerName1 << " is looser!" << endl;
   else cout << "Draw!!!" << endl; //Ничья
}
