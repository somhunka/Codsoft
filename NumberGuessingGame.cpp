#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    int num,guess,tries = 0;
    srand(time(0));
    num = rand()%100 +1;
    
    cout<<"NUMBER GUESSING GAME\n";

    do
    {
        cout<<"Enter a number between 1 and 100 :";
        cin>>guess;
        tries++;

        if(guess>num)
        cout<<"Too High!\n";

        else if(guess<num)
        cout<<"Too Low!\n";
        
        else
        cout<<"Correct!You get ot in:"<<tries<<" guesses!";

    
    }while(guess!=num);

return 0;

}