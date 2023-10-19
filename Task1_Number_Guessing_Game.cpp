#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int number, guess;
    int count = 0;
    srand(time(0));
    number = rand() % 50 + 1;                                        // Generating the random number between 1 to 50
    cout << "\t\t\tWelcome TO Number Guessing Game" << endl;

    do
    {
        cout << "Guess the number between 1 to 50: ";
        cin >> guess;
        count++;              

        if (guess > number)
            cout << " Wrong!->Number is Too high" << endl;
        else if (guess < number)
            cout << " Wrong!->Number is Too low" << endl;
        else
            cout << "This Time you guessed the right number \nYou guess the number in  " << count << " guesses";
    } while (guess != number);

    return 0;
}
