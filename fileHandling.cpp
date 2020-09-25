#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream fout;

    string line;

    fout.open("test.txt");

    string opening = "Skriv noget tekst her. 'exit' stopper programmet.\n";
    
    cout << opening;

    while (fout)
    {

        getline(cin, line);

        if (line == "exit") 
        {
            break;
        }

        fout << line << endl;
    }

    fout.close();

    return 0;
}