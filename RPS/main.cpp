#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//message for winning the game
void user_win()
{
    cout<<"You Win!"<<endl;
}

//message for winning the game
void cpu_win()
{
    cout<<"You Lost!"<<endl;
}

//message for winning the game
void draw_tie()
{
    cout<<"You Drew!"<<endl;
}



int main()
{
    srand(time(NULL));
    char again;


    do
{   //game menu to let user decide option
    cout<<"***************"<<endl;
    cout<<"1. Rock"<<endl;
    cout<<"2. Paper"<<endl;
    cout<<"3. Scissors"<<endl;
    cout<<"4. Lizard"<<endl;
    cout<<"5. Spock"<<endl;
    cout<<endl;
    cout<<"Your move!"<<endl;
    cout<<endl;

    //user can input option
    int userChoice;
    cin>>userChoice;

    //computer generates random option
    int cpuChoice = (rand()%5)+1;

    //output to confirm what option the have selected
    if(userChoice == 1)
    {
        cout<<"You've chosen Rock"<<endl;
    }
    else if(userChoice == 2)
            {
        cout<<"You've chosen Paper"<<endl;
    }
    else if (userChoice == 3)
            {
        cout<<"You've chosen Scissors"<<endl;
    }
    else if (userChoice == 4)
            {
        cout<<"You've chosen Lizard"<<endl;
    }
    else if (userChoice == 5)
            {
        cout<<"You've chosen Spock"<<endl;
    }
    else
    {
        cout<<"Choice not valid"<<endl;
        return 1;
    }

    //output to confirm what option the computer has generated
        if(cpuChoice == 1)
    {
        cout<<"Computer has chosen Rock"<<endl;
    }
    else if(cpuChoice == 2)
            {
        cout<<"Computer has chosen Paper"<<endl;
    }
    else if (cpuChoice == 3)
            {
        cout<<"Computer has chosen Scissors"<<endl;
    }
    else if (cpuChoice == 4)
            {
        cout<<"Computer has chosen Lizard"<<endl;
    }
    else if (cpuChoice == 5)
            {
        cout<<"Computer has chosen Spock"<<endl;
    }

    cout<<endl;

    //code for if the user picks rock
    if (userChoice==1)
    {
    if(cpuChoice==2)
    {
            cpu_win();
    }
    else if (cpuChoice==3)
    {
        user_win();
    }
    else if (cpuChoice==4)
    {
        user_win();
    }
    else if (cpuChoice==5)
    {
        cpu_win();
    }
    }
    //code for if the user picks paper
    else if (userChoice==2)
        {
    if(cpuChoice==1)
    {
        user_win();
    }
    else if (cpuChoice==3)
    {
        cpu_win();
    }
    else if (cpuChoice==4)
    {
        cpu_win();
    }
    else if (cpuChoice==5)
    {
        user_win();
    }
    }
    //code for if the user picks scissors
    else if (userChoice==3)
        {
    if(cpuChoice==1)
    {
        cpu_win();
    }
    else if (cpuChoice==2)
    {
        user_win();
    }
    else if (cpuChoice==4)
    {
        user_win();
    }
    else if (cpuChoice==5)
    {
        cpu_win();
    }
    }
    //code for if the user picks lizard
    else if (userChoice==4)
        {
    if(cpuChoice==1)
    {
        cpu_win();
    }
    else if (cpuChoice==2)
    {
        user_win();
    }
    else if (cpuChoice==3)
    {
        cpu_win();
    }
    else if (cpuChoice==5)
    {
        user_win();
    }
    }
    //code for if the user picks spock
    else if (userChoice==3)
        {
    if(cpuChoice==1)
    {
        user_win();
    }
    else if (cpuChoice==2)
    {
        cpu_win();
    }
    else if (cpuChoice==4)
    {
        user_win();
    }
    else if (cpuChoice==5)
    {
        cpu_win();
    }
    }
    //code for a draw
    if (userChoice==cpuChoice)
    {
        draw_tie();
    }

    //thank you message to user
    cout<<endl;
    cout<<"Thank you for playing!"<<endl;
    cout<<endl;
    //message asking user whether they want to continue or not
    cout<<"Do you want to continue? (Y/N)"<<endl;
    cin>>again;

    }while (again == 'Y' || again == 'y');
    system("pause");
    return 0;
}
