#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int num1;
    double num2, ans;
    string str;

    cin >> num1;
    cin >> num2;
    cin.ignore();
    getline (cin, str);

    cout << i + num1 << endl;
    ans = num2 + d;

    std::cout << std:: fixed;
    std::cout << std::setprecision(1);
    std::cout << ans << endl;

    cout << s;
    cout << str;


    return 0;
}
