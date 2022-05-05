#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

#define Upkey 72
#define Downkey 80
#define Enterkey 13

int SelectionMenu(string option1, string option2, string option3)
{
    int Select = 0;
    bool selected = false;
    string Sel1 = "\n", Sel2 = "\n", Sel3 = "\n", SelSym = " <<\n";

    Sel1 = SelSym;

    while (selected == false)
    {
        cout << option1 + Sel1;
        cout << option2 + Sel2;
        cout << option3 + Sel3;

        switch(getch())
        {
            case Upkey:
                Select--;
                break;

            case Downkey:
                Select++;
                break;
            
            case Enterkey:
                selected = true;
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

    return Select;
}

int main()
{
    int x;

    x = SelectionMenu("(1)?","(2)?","(3)?");

    cout << x << endl;

    if (x == 0)
    {
        cout << "You have chosen (1)!" << endl;
    }
    else if (x == 1)
    {
        cout << "You have chosen (2)!" << endl;
    }
    else
    {
        cout << "You have chosen (3)!" << endl;
    }

    cout << "\nPress Enter to continue..!";
    getchar();
}