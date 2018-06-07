#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using std::cin;
using std::cout;
using std::endl;



int main()
{
    Stack<std::string> st;
    char ch;
    std::string po;
    std::cout << "Please enter A to add a purchase order.\n"
              << "P to process a PO , or Q to quit.\n";

    while(cin >> ch && std::toupper(ch) != 'Q')
    {
        std::cout << "-------------------------------------" << endl;
        while(cin.get() != '\n')
            continue;
        if(!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
        case 'A':
        case 'a': cout << "Enter a PO number to add:";
            cin >> po;
            if(st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'p':
        case 'P':
            if(st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                cout << "PO #" << po << " opooed\n";
                break;
            }

        }

        cout << "Please enter A to add a pruchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0;
}
