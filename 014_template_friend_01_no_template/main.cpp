#include <iostream>
#include "frnd2tmp.h"

int main()
{
    std::cout << "No objects declared: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "After hail declared: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "After hfi2 declared: ";
    counts();
    HasFriend<double> hfdb(10.5);
    std::cout << "After hfdb declared: ";
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);

    return 0;
}
