#include<bits/stdc++.h>
#include<stdlib.h>


using namespace std;

 

char square[10]={'0','1','2','3','4','5','6','7','8','9'};

void board()
{
    system("cls");
    cout << "\tTic Tac Toe\t"<<"\n";

    cout <<setw(50)<<right<< "Player 1 (X)  -  Player 2 (O)" <<"\n";
    cout <<"\n";

    cout << "     |     |     " <<"\n";
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] <<"\n";

    cout << "_____|_____|_____" <<"\n";
    cout << "     |     |     " <<"\n";

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] <<"\n";

    cout << "_____|_____|_____" <<"\n";
    cout << "     |     |     " <<"\n";

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] <<"\n";

    cout << "     |     |     " <<"\n";
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}


  
 int main()
{
    int player =1;
    int choice , i=-1;
    
    char playchar;
    do{
        board();
        cout<<"Player "<<player<<" enter position :"<<"\n";
        cin>>choice;
        playchar=(player%2)?'X':'O';
        if(choice==1&& square[1]=='1')
        {
            square[1] = playchar;
        }
        else if(choice==2 && square[2]=='2')
        {
            square[2] = playchar;
        }
        else if(choice==3 && square[3]=='3')
        {
            square[3] = playchar;
        }
        else if(choice==4 && square[4]=='4')
        {
            square[4] = playchar;
        }
        else if(choice==5 && square[5]=='5')
        {
            square[5] = playchar;
        }
        else if(choice==6 && square[6]=='6')
        {
            square[6] = playchar;
        }
        else if(choice==7 && square[7]=='7')
        {
            square[7] = playchar;
        }
        else if(choice==8 && square[8]=='8')
        {
            square[8] = playchar;
        }
        else if(choice==9 && square[9]=='9')
        {
            square[9] = playchar;
        }
        else
        {
            cout<<"Invalid entry , enter a digit which is not entered previously  "<<"\n";
            player--;
            cin.ignore();
            cin.get();
        }
        
        
        player= 2-((player+1)%2);
        i = checkwin();
        

    }while(i==-1);
    board();
    if(i==1)
    {
        cout<<"Player "<<player%2+1<<" wins!!"<<"\n";

    }
    else
    {
        cout<<" its a draw"<<"\n";

    }
    cin.get();
    return 0;
    
}
