#include <iostream>
using namespace std;
#include <conio.h>
enum itsaWord
{
  NO,
  YES
};
int main()
{
  itsaWord isWord = NO;

  char ch = 'a';
  int wordcount = 0;
  cout << "Введите предложение: \n";
  do
  {
    ch = getche();
    if (ch == ' ' || ch == '\r')
    {
      if (isWord == YES)
      {
        wordcount++;
        isWord = NO;
      }
    }
    else
    {
      if (isWord == NO)
      {
        isWord = YES;
      }
    }
  } while (ch != '\r');
  cout << "\n---Число слов: " << wordcount << "---\n";
  return 0;
}