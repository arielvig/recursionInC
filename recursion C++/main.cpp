#include <iostream>
#include <iomanip>
using namespace std;
//ENMERATED DATA TYPE
enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main()
{
        const int NUM_DAYS = 5; //the number of days
        double sales[NUM_DAYS]; //to hold sales for each day
        double total = 0.0; //accumulator
        int index;

        //get the sales for each day
        for(index = MONDAY; index <= FRIDAY; index++)
        {
            cout << "Enter the sales for day " << index << ":";
            cin >> sales[index];
        }
        //Calculate the total sales.
        for(index = MONDAY; index <= FRIDAY; index++)
        {
            total +=sales[index];
        }
        //display the total
        cout << "The total sales are $" << setprecision(2) << fixed << total << endl;
    return 0;
}
