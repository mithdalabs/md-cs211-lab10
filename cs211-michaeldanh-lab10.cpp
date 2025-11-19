#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cmath>
using namespace std;

//function prototypes
double FindAreaOfCircle(double radius); //question 1
double FindCircumference(double radius); //question 1
//void FindAreaAndCircumference(); //question 1
void FindAmenities(int age, string citizenship); // question 2
void FindPetNameMatches(); //question 3
bool FindIfRectangleFits(float width, float height, float radius); // question 4
void ConvertHoursToSeconds(float hour); //question 5
void PrintRightTriangle(int rows); // question 6
void PrintTriangleAndInvert(int rows); // question 7
float FindAverageTemp(); // question 8
void ConvertToBinary(int n); //question 9
void SwapIntegers(int int1, int int2); // question 10


//global variables/constants
const double PI = 3.14;


int main() {
    int choice;

    do {
        cout << "\nMain Menu\n";
        cout << "1. Find area and circumference of circle\n";
        cout << "2. Find amenities for a guest\n";
        cout << "3. Find number of pet name appearances\n";
        cout << "4. Find if rectangle fits inside a circle\n";
        cout << "5. Convert hours to seconds\n";
        cout << "6. Print right angle triangle using int\n";
        cout << "7. Print right angle triangle and invert it using int\n";
        cout << "8. Find average temperature\n";
        cout << "9. Convert integer to binary\n";
        cout << "10. Swap two int values\n";
        cout << "11. Exit program\n";
        cout << "Select choice (1-11): ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: {
                double radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                cout << "\nRadius: " << radius << endl;
                cout << "Area of circle = " << FindAreaOfCircle(radius) << endl;
                cout << "Circumference of circle = " << FindCircumference(radius) << endl;
                break;
            }
            case 2: {
                int input2Age;
                string input2Citizenship;
                cout << "\nEnter age: ";
                cin >> input2Age;
                cout << "\nEnter citizenship: ";
                cin >> input2Citizenship;
                FindAmenities(input2Age, input2Citizenship);
                break;
            }
            case 3: {
                FindPetNameMatches();
                break;
            }
            case 4: {
                float input4Width, input4Height, input4Radius;
                cout << "\nEnter width of rectangle: ";
                cin >> input4Width;
                cout << "\nEnter height of rectangle: ";
                cin >> input4Height;
                cout << "\nEnter radius of circle: ";
                cin >> input4Radius;
                string result4 = FindIfRectangleFits(input4Width, input4Height, input4Radius) ? "True" : "False";
                cout << "Does the rectangle fit into the circle?: " << result4 << endl;

                break;
            }
            case 5: {
                float input5Hours;
                cout << "\nEnter number of hours: ";
                cin >> input5Hours;
                ConvertHoursToSeconds(input5Hours);
                break;
            }
            case 6: {
                int input6Rows;
                cout << "\nEnter how many rows you want your pattern to be: ";
                cin >> input6Rows;
                PrintRightTriangle(input6Rows);
                break;
            }
            case 7: {
                int input7Rows;
                cout << "\nEnter how many rows you want your triangle to be and I'll invert it too: ";
                cin >> input7Rows;
                PrintTriangleAndInvert(input7Rows);
                break;
            }
            case 8: {
                float result8 = FindAverageTemp();
                cout << "Average temp: " << result8;
                break;
            }
            case 9: {
                int input9;
                cout << "\nEnter an integer and I will convert it to binary: ";
                cin >> input9;
                ConvertToBinary(input9);
                break;
            }
            case 10: {
                int firstInput10, secondInput10;
                cout << "\nEnter two integers below and I will swap them: ";
                cin >> firstInput10 >> secondInput10;
                SwapIntegers(firstInput10, secondInput10);
                break;
            }
            case 11: {
                cout << "Exiting.\n";
                break;
            }
            default:cout << "Invalid choice. Try again.\n";
        }

    }while (choice != 11);



    return 0;
}

double FindAreaOfCircle(double radius) {
    return PI * (radius * radius);
}
double FindCircumference(double radius) {
    return 2 * PI * radius;
}
// void FindAreaAndCircumference() {
//     double radius;
//     cout << "Enter radius of circle: ";
//     cin >> radius;
//     cout << "\nRadius: " << radius << endl;
//     cout << "Area of circle = " << FindAreaOfCircle(radius) << endl;
//     cout << "Circumference of circle = " << FindCircumference(radius) << endl;
// }

void FindAmenities(int age, string citizenship) {
    if (citizenship == "American" || citizenship == "american") {
        if (age >= 21) {
            cout << "\nYou have access to all amenities and the casino!\n";
        }
        else if (age < 21 && age >= 18) {
            cout << "\nYou have access to all amenities except the casino!\n";
        }
        else {
            cout << "\nYou are not allowed into the resort...\n";

        }
    }
    else {
        if (age >= 21) {
            cout << "\nYou have access to all amenities and the casino! With a $15 fee.\n";
        }
        else if (age >= 18 && age < 21) {
            cout << "\nYou have access to all amenities except the casino!\n";
        }
        else {
            cout << "\nYou are not allowed into the resort...\n";
        }
    }
    return;
}

void FindPetNameMatches() {
    vector<string> petNames;
    string nameToMatch, nameInput;
    int numMatches = 0;

    cout << "\nEnter pet names(type quit to finish): ";
    getline (cin, nameInput);
    petNames.push_back(nameInput);
    while (nameInput != "quit") {
        cout << "\nEnter pet names(type quit to finish): ";
        getline (cin, nameInput);
        petNames.push_back(nameInput);
    }
    cout << "\nEnter one name to search for: ";
    getline(cin, nameToMatch);
    string tempNameToMatch = nameToMatch;
    transform(tempNameToMatch.begin(), tempNameToMatch.end(), tempNameToMatch.begin(), ::tolower);
    for (int i = 0; i < petNames.size(); ++i) {
        transform(petNames[i].begin(), petNames[i].end(), petNames[i].begin(),
            [](unsigned char c){ return ::tolower(c); });
        if (tempNameToMatch == petNames.at(i)) {
            numMatches++;
        }
    }
    cout << endl << numMatches << " matches for " << nameToMatch << "!\n";
    return;
}

bool FindIfRectangleFits(float width, float height, float radius) {
    float diagonal = sqrt(pow(width, 2) + pow(height, 2));
    return diagonal >= pow(radius, 2);
}

void ConvertHoursToSeconds(float hour) {
    int seconds = hour * 60 * 60;
    cout << endl << hour << " hour(s) is " << seconds << " seconds!\n";
    return;
}

void PrintRightTriangle(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout <<".";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

void PrintTriangleAndInvert(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout <<".";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows-1; i >= 1; --i) {
        for (int j = 0; j < rows - i; ++j) {
            cout << ".";
        }
        for (int k = 0; k < i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return;
}

float FindAverageTemp() {
    float highest, lowest, average = 0, inputTemp;
    vector<float> temps;
    cout << "\nEnter temperatures(type -1 to quit): ";
    cin >> inputTemp;
    temps.push_back(inputTemp);
    highest = inputTemp;
    lowest = inputTemp;
    while (inputTemp != -1) {
        cout << "\nEnter temperatures(type -1 to quit): ";
        cin >> inputTemp;
        if (inputTemp == -1) {
            break;
        }
        temps.push_back(inputTemp);
    }
    for (int i = 0; i < temps.size(); ++i) {
        if (highest < temps.at(i)) {
            highest = temps.at(i);
        }
        if (lowest > temps.at(i)) {
            lowest = temps.at(i);
        }
        average += temps.at(i);
    }
    average /= temps.size();
    cout << "\nHighest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    return average;
}

void ConvertToBinary(int n) {
    if (n == 0) {
        cout << "0\n";
        return;
    }

    string binaryStr = "";
    unsigned int temp = static_cast<unsigned int>(n);

    while (temp > 0) {
        binaryStr += (temp % 2 == 0 ? "0" : "1");
        temp /= 2;
    }

    reverse(binaryStr.begin(), binaryStr.end());
    cout << binaryStr << endl;
}

void SwapIntegers(int int1, int int2) {
    int temp1, temp2;
    cout << "Before: int1 = " << int1 << ", int2 = " << int2 << endl;
    temp1 = int1;
    temp2 = int2;
    int1 = temp2;
    int2 = temp1;
    cout << "After: int1 = " << int1 << ", int2 = " << int2 << endl;
}
