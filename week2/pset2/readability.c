// A program that check the readability leve of a text.
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int count_letter(string word);
float count_word(string word);
int count_sentence(string sentence);
float colemanIndex(float words, int letters, int sentences);
int main(void)
{

    string sentence = get_string("Text: ");
    int words, letters, sentences;
    int grade;
    letters = count_letter(sentence);
    words = count_word(sentence);
    sentences = count_sentence(sentence);
    grade = roundf(colemanIndex(words, letters, sentences));

    // check if the grade is smaller than one
    if (grade <= 1)
    {
        printf(" Before Grade 1\n");
    }

    // check if the grade is greater than  16.
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }

    // return a grade between 1 and 16.
    else
    {
        printf("Grade %d\n", grade);
    }

}


// count the number of letters in the input from the user.
int count_letter(string word)
{
    int countLetter = 0;
    for (int i = 0; i <= strlen(word); i++)
    {

        //only proceed if the character is a alphabet letter
        if (isalpha(word[i]))
        {
            countLetter ++;
        }

    }
    return countLetter;

}
//count the number of words in the input from the user.
float count_word(string word)
{
    int countWord = 1;

    for (int i = 0; i <= strlen(word); i++)
    {
        if (word[i] == 32)
        {
            countWord ++;
        }
    }
    return countWord;
}

// count the number of sentences in the input from the user
int count_sentence(string sentence)
{
    int countSentence = 0;

    for (int i = 0; i <= strlen(sentence); i++)
    {
        if (sentence[i] == 33 || sentence[i] == 63 || sentence[i] == 46 || sentence[i] == '\n')
        {
            countSentence ++;
        }
    }
    return countSentence;
}

float colemanIndex(float words, int letters, int sentences)
{
    float index;
    float L = letters / words * 100 ;
    float S =  sentences / words * 100;

    //printf("Sentence: %d, word:%.f, letters:%d\nL:%f, S:%f\n", sentences, words, letters, L, S);
    // calculate the Coleman-Liau index
    index = 0.0588 * L -  0.296 * S - 15.8;
    return index;
}
