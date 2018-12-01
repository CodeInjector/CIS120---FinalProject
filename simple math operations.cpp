    #include <iostream>
    using namespace std;

    int main()
    {
        char operation;
        float num1, num2;

        cout << "Enter operator either + or - or * or /: ";
        cin >> operation;



        if(cin.fail()){
            cout << "Please enter numbers.";
        }

        if(operation == '+'){
            cout << "How many numbers do you want to add? ";
            int num;
            cin >> num;
            float counts = 0;
            for(int i=0; i<num; i++){
                cout << "Enter a number: ";
                cin >> num1;
                counts += num1;

            }
            cout << "Answer: " << counts;
        }

        else if(operation == '-'){
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Enter a number: ";
                cin >> num2;
                cout << "Answer: " << num1-num2;
        }

        else if(operation == '*'){
              cout << "Enter a number: ";
              cin >> num1;
              cout << "Enter a number: ";
              cin >> num2;
              cout << "Answer: " << num1*num2;
        }

        else if(operation == '/'){
                cout << "Enter a number: ";
                cin >> num1;
                cout << "Enter a number: ";
                cin >> num2;
                cout << "Answer: " << num1/num2;
        }
    }
