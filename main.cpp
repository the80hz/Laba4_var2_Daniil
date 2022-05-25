#include <iostream>
#include <fstream>
#include "file_error.h"

using namespace std;

int main(){
    int command = 10;
    string filename_orig;
    while(true){
        switch(command){
            case 1: { // read the file
                printf("\nRead data from the file");
                char filename[255] = { 0 };
                printf("\nEnter filename: ");
                gets(filename);
                FILE* input = nullptr;

                try
                {
                    fopen_s(&input, filename, "r");

                    if (input == nullptr)
                    {
                        throw open_file_error();
                    }


                    fclose(input);
                    printf("\nДанные успешно получены");
                }
                catch (error& err)
                {
                    fclose(input);
                    err.print();
                }

                break;
            }

            case 2: {// work on the massive

                break;
            }

            case 3: { // save massive to the file

                break;
            }

            case 4: {// forming new massive (save it?)

                break;
            }

            case 5: {// navigation

                break;
            }

            case 6: {// working on current element (edit? delete?)

                break;
            }

            case 7: {// find element

                break;
            }

            case 8: {// add element (to the start? to the end?)

                break;
            }

            case 10: {// show menu

                break;
            }

            case 0: {
                command = 0;
            }

            default:
                break;
        }

        cout << endl << "Enter command: ";
        cin >> command;
        cout << endl;
        if (command == 0) break;
    }
    return 0;
}
