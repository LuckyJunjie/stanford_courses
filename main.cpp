#include <QtCore/QDebug>
#include <iostream>
#include <cctype>

int main()
{
    qDebug() << "Finally I run the cpp with QT libs..";
    int a;
    qDebug() << a;

    // Loop
    std::string word = "hello";
    for (int letterIndex = 0; letterIndex < word.length(); letterIndex++)
    {
        std::cout << word[letterIndex] << std::endl;
    }

    for (char letter : word)
    {
        std::cout << letter << std::endl;
    }

    // c functions
    char lowChar = 'n';
    std::cout << isalpha(lowChar) << std::endl;
}