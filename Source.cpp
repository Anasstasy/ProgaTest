#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Hello, user!" << endl;

    int r1, r2;
    int max, min;
    const int n = 12;
    double a[n];
    cout << "¬ведите прибыль фирмы:";
    for (int i = 0; i < n; i++)
    {
        cout << "\n" "мес€ц " << i + 1 << ": ";
        cin >> a[i];
    }
    cout << "¬ведите желаемое начало диапазона: ";
    cin >> r1;
    cout << "¬ведите желаемый конец диапазона: ";
    cin >> r2;
    max = min = r1 - 1;
    for (int i = r1; i < r2; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
        if (a[i] < a[min])
        {
            min = i;
        }
    }
    cout << "ћинимальна€ прибыль была в мес€це: " << min + 1 << endl;
    cout << "ћаксимальна прибыль была в мес€це: " << max + 1 << endl;
}