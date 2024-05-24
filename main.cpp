#include <iostream>
#include <vector>
#include <string>

using namespace std;

class app {
    private:
        struct userrecords {
            int userId;
            string Name;
            int age;
        };
    vector<userrecords>records;
    int nextuserId;

    enum MenuOptions {
        ADD_RECORD = 1,
        GET_USER_INFO,
        EXIT
    };

    public:
        app(): nextuserId(1){}

        void addrec(){
            string name;
            int age;
            cout << "\n\n\n";
            cout << "Please Enter your Name\nName : ";
            cin.ignore();
            getline(cin, name); 

            cout << "Please Enter your Age\nAge : ";
            cin >> age;      

            cout << "\n\n\n";



            
            userrecords newUser;
            newUser.userId = nextuserId++;
            newUser.Name = name;
            newUser.age = age;

            records.push_back(newUser);
            cout << "User ID " << newUser.userId << " added successfully." << endl;
            cout << "\n\n\n";

        }
        void getuser(){
            int userId;
            cout << "\n\n\n";

            cout<<"please enter userID\nuserID:";
            cin>> userId;
            cout << "\n\n\n";

            bool found = false;
            for(const auto& records : records){
                if (records.userId == userId) {
                    cout << "User ID: " << records.userId << endl;
                    cout << "Name: " << records.Name << endl;
                    cout << "Age: " << records.age << endl;
                    cout << "\n\n\n";

                    found = true;
                    break;
                }
            }
            if (!found){
                cout << "User ID " << userId << " not found." << endl;
                cout << "\n\n\n";

            }
            }
            
        void exitapp() {
            cout << "Exiting..." << endl;
        }

        void displayMenu() {
            int choice;
            do {
                cout << "Menu:" << endl;
                cout << "1. Add a Record" << endl;
                cout << "2. Get User Info by ID" << endl;
                cout << "3. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;



                MenuOptions selectedOption = static_cast<MenuOptions>(choice);


                switch (selectedOption) {
                    case ADD_RECORD:
                        addrec();
                        break;
                    case GET_USER_INFO:
                        getuser();
                        break;
                    case EXIT:
                        exitapp();
                        break;
                    default:
                        cout << "Invalid option. Please try again." << endl;
                }
            } while (choice != EXIT);  // Continue looping until the user chooses to exit
    }


};


        





int main ()
{
    app application;
    application.displayMenu();
    return 0;

}