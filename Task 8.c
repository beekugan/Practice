#include <stdio.h>
#include <string.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to count the number of anagrams for a given word
int countAnagrams(char word[]) {
    int count[26] = {0};  // Array to count the occurrences of each letter

    int len = strlen(word);
    int totalAnagrams = factorial(len);  // Initialize the anagram count

    // Count the occurrences of each letter in the word
    for (int i = 0; i < len; i++) {
        int index = word[i] - 'A';  // Index of the letter in the count array
        count[index]++;
    }

    // Calculate the number of anagrams based on the counts
    for (int i = 0; i < 26; i++) {
        if (count[i] > 1) {
            totalAnagrams /= factorial(count[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];
    printf("Enter a word: ");
    scanf("%s", word);

    int anagramCount = countAnagrams(word);
    printf("Number of anagrams: %d\n", anagramCount);

    return 0;
}
