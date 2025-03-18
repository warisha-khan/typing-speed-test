#include <iostream>
#include <ctime>
using namespace std;
int main() {
    string sentence = "The Quick Brown Fox Jumps Over the Lazy Dog"; 
    string userInput;
    time_t startTime, endTime;

    cout << "Type this sentence: " << sentence << endl;
    cout << "Press Enter to start...";
    cin.ignore();

    startTime = time(0); 

    cout << "\nNow type: ";
    getline(cin, userInput); 

    endTime = time(0); 

    double timeTaken = difftime(endTime, startTime); 
    cout << "\nYou took " << timeTaken << " seconds to type.\n";

    return 0;
}
