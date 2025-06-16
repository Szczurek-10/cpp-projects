#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100 ) + 1;

    cout << " ****** number guessing game ******\n";

    do
    {
        cout << "enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if(guess > num)
        {
            cout << "too high\n";
        }
        else if(guess < num)
        {
        cout << "too low\n";
        }
        else
        {
        cout << "correct # of tries: " << tries << '\n';
        }

    }while(guess != num);

    cout << " **************************************\n";


    return 0;
}