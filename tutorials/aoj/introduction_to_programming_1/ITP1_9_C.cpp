#include <iostream>
using namespace std;

int main()
{
  string taro_card, hanako_card;
  int n, taro_score, hanako_score;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> taro_card >> hanako_card;

    size_t size = taro_card.size() < hanako_card.size() ? taro_card.size() : hanako_card.size();
    for (size_t j = 0; j < size; j++)
    {
      if (taro_card[j] > hanako_card[j])
      {
        taro_score += 3;
        break;
      }
      else if (taro_card[j] < hanako_card[j])
      {
        hanako_score += 3;
        break;
      }
      else
      {
        if (j != size - 1)
        {
          continue;
        }
        else if (taro_card.size() == hanako_card.size())
        {
          taro_score++;
          hanako_score++;
        }
        else if (taro_card.size() > hanako_card.size())
        {
          taro_score += 3;
        }
        else
        {
          hanako_score += 3;
        }
      }
    }
  }

  cout << taro_score << " " << hanako_score << endl;

  return 0;
}