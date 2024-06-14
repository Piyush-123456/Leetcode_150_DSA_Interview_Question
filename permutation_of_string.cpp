#include <iostream>
using namespace std;

void permutation(string str, int index, string output)
{
    if (index >= str.size())
    {
        cout << output << endl;
        return;
    }
    // excluding
    char ch = str[index];
    permutation(str, index + 1, output);
    // including
    output += ch;
    permutation(str, index + 1, output);
}

int main()
{
    string str = "abc";
    string output = "";
    permutation(str, 0, output);
}
