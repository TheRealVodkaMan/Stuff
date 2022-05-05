#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

#define Upkey 72
#define Downkey 80

int main()
{
    int Select = 0;

    string Sel1 = "\n", Sel2 = "\n", Sel3 = "\n", SelSym = "<<\n";

    Sel1 = SelSym;

    while (true)
    {
        cout << "Option(1)? " + Sel1;
        cout << "Option(2)? " + Sel2;
        cout << "Option(3)? " + Sel3;

        switch(getch())
        {
            case Upkey:
                Select--;
                break;

            case Downkey:
                Select++;
                break;
        }

        if (Select < 0)
        {
            Select = 2;
        }

        if (Select > 2)
        {
            Select = 0;
        }

        if (Select == 0)
        {
            Sel1 = SelSym;
            Sel2 = Sel3 = "\n";
        }
        else if (Select == 1)
        {
            Sel2 = SelSym;
            Sel1 = Sel3 = "\n";
        }
        else if (Select == 2)
        {
            Sel3 = SelSym;
            Sel1 = Sel2 = "\n";
        }

        system("CLS");
    }
}