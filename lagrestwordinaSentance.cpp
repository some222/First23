#include "bits/stdc++.h"
using namespace std;

int main()
{
    // largest word in a sentance
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n); // take a input full sentance
    cin.ignore();        // to ignore the buffer function

    int i = 0;
    int currlen = 0, maxlen = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
            }
            currlen = 0;
        }else
        currlen++;
        if (arr[i] == '\0')
            break;
        i++;
    }
    cout << maxlen << endl;
    return (0);
}