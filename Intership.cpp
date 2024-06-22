#include <iostream>
#include <regex>
using namespace std;

bool isValid(string s) {
    const regex pattern("(0|91)?[7-9][0-9]{9}");
    return regex_match(s, pattern);
}

void Book() {
    cout << "\n\t\t\t*******Book a Room*******\t\t\t\n";
    string Name;
    cout << "Enter the customer's Name: ";
    cin.ignore();
    getline(cin, Name);

    string Address;
    cout << "Enter the customer's Address: ";
    getline(cin, Address);

    string phone;
    do {
        cout << "Enter the customer's Mobile No.: ";
        cin >> phone;
        if (!isValid(phone)) {
            cout << "Invalid Mobile No. Please Enter a valid Mobile No.\n";
        }
    } while (!isValid(phone));
    cout << "Your Mobile No. is Verified..\n";

    string Area;
    cout << "In which Area do you want to book your room: ";
    cin >> Area;
    cout << "\n\t\t\tCongratulations!!...Your room has been booked.\t\t\t\n";
    cout << endl;
}

void setHost() {
    cout << "\n\t\t\t*******Set the Host*******\t\t\t\n";
    string Name;
    cout << "Host's Name to Manage the room: ";
    cin.ignore();
    getline(cin, Name);
    cout << endl;
}

void startTime() {
    cout << "\n\t\t\t*******Set the Start Time*******\t\t\t\n";
    string Time;
    cout << "Set the start time to start the work: ";
    cin.ignore();
    getline(cin, Time);
    cout << "At " << Time << " everyone should start their work\n";

    string Time1;
    cout << "Lunch break: ";
    getline(cin, Time1);
    cout << "At " << Time1 << " you can lunch in Lunch Area\n";
    cout << endl;
}

void endTime() {
    cout << "\n\t\t\t*******Set the End Time*******\t\t\t\n";
    string Time;
    cout << "Set the end time to stop the work: ";
    cin.ignore();
    getline(cin, Time);
    cout << "At " << Time << " Relax!!\n";
    cout << endl;
}

void capability() {
    cout << "\n\t\t\t*******Set the Chair Booking Capability*******\t\t\t\n";
    int n1, n2, n3;
    cout << "Enter chair capability in Workspace Area: ";
    cin >> n1;
    cout << "There are total " << n1 << " employees, so everyone should be comfortable in the Workspace Area.\n";
    cout << "Enter chair capability in Meeting Area: ";
    cin >> n2;
    cout << n2 << " number of people can meet in the Meeting Area.\n";
    cout << "Enter chair capability in Lab Area: ";
    cin >> n3;
    cout << n3 << " employees perform experiments in the Lab Area.\n";
    cout << endl;
}

void roomNo() {
    cout << "\n\t\t\t*******Define the Room Number*******\t\t\t\n";
    cout << "According to your requirements:\n";
    cout << "Room is divided into two compartments:\n";
    cout << "\n\t\t\t---------------FIRST COMPARTMENT---------------\t\t\t\n";
    cout << "As you enter the room, there is a Stuff Area in Room No.101\n";
    cout << "There is a Kitchen Area after the Stuff Area, and the Room No. of the Kitchen is 102\n";
    cout << "There is a Coffee Room after the Kitchen, and the Room No. of the Coffee Area is 103\n";
    cout << "At the back side, there is a small lean area.\n";
    cout << "So, finally..\n";
    cout << "Room No. of Stuff Area: 101\n";
    cout << "Room No. of Kitchen Area: 102\n";
    cout << "Room No. of Coffee Area: 103\n";
        cout << "\n\t\t\t---------------SECOND COMPARTMENT---------------\t\t\t\n";
    cout << "Room No. of Lab Area: 201\n";
    cout << "Room No. of Meeting Area: 202\n";
    cout << "Room No. of Workspace Area: 203\n";
    cout << endl;
}

int main() {
    cout << "\n1. Book a room";
    cout << "\n2. Set the host";
    cout << "\n3. Set the start time";
    cout << "\n4. Set the end time";
    cout << "\n5. Set the chair booking capability";
    cout << "\n6. Define the room number";
    cout << "\n0. Exit\n";

    int ch;
    do {
        cout << "\nEnter Your Choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                Book();
                break;
            case 2:
                setHost();
                break;
            case 3:
                startTime();
                break;
            case 4:
                endTime();
                break;
            case 5:
                capability();
                break;
            case 6:
                roomNo();
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (ch != 0);

    return 0;
}

