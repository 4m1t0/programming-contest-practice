#include <iostream>

using namespace std;

int main()
{
  char result[50];
  int midExam, finalExam, retest;
  int i = 0;

  do
  {
    cin >> midExam >> finalExam >> retest;
    int totalScore = midExam + finalExam;
    if (midExam == -1 || finalExam == -1)
    {
      result[i] = 'F';
    }
    else if (totalScore >= 80)
    {
      result[i] = 'A';
    }
    else if (totalScore >= 65 && totalScore < 80)
    {
      result[i] = 'B';
    }
    else if (totalScore >= 50 && totalScore < 65)
    {
      result[i] = 'C';
    }
    else if (totalScore >= 30 && totalScore < 50)
    {
      result[i] = retest >= 50 ? 'C' : 'D';
    }
    else
    {
      result[i] = 'F';
    }
    i++;
  } while (midExam != -1 || finalExam != -1 || retest != -1);

  for (int j = 0; j < i - 1; j++)
  {
    cout << result[j] << endl;
  }

  return 0;
}