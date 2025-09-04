// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char c)
{
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' 
                 || c == 'o' || c == 'u')
        return true;
    return false;
}

// Function to swap two consecutively
// repeated vowels or consonants
string swapRepeated(string str)
{
    // Traverse through the length of the string
    for (int i = 0; i < str.length() - 1; i++) {

        // Check if the two consecutive characters
        // are vowels or consonants
        if ((isVowel(str[i]) && isVowel(str[i + 1]))
            || (!isVowel(str[i]) && !isVowel(str[i + 1])))

            // swap the two characters
            swap(str[i], str[i + 1]);
    }

    return str;
}

// Driver code
int main()
{
    string str = "intelligent";

    cout << swapRepeated(str);
    return 0;
}