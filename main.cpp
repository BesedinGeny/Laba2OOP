#include <iostream>

using namespace std;


class question{
private:
    int count;
    int mark;
public:
    void set(){
        cout << "input count of questionss about this theam: ";
        cin >> count;
        cout << "input mark of each questions: ";
        cin >> mark;
    }

    double evgMark(){
        return 1.0 * mark / count;
    }

    int getMark(){
        return mark;
    }
};

class exam{
private:
    int countOfTheams;
    double markToPass;
    question mas[100];
public:

    void set(){
        cout << "Input how many theams will be in exams: ";
        cin >> countOfTheams;
        cout << "input count and marks of questions of each theams:" << endl;
        for ( int i = 0; i < countOfTheams; i++ ){
            cout << i + 1 << ")";
            mas[i].set();
        }
        cout << "Input mark to pass exam: ";
        cin >> markToPass;
    }

    char isDone(){
        double evgMark = 0;
        for (int i =0; i < countOfTheams; i++)
            evgMark += mas[i].getMark();
        evgMark = evgMark * 1.0 / countOfTheams;
        if (evgMark >= markToPass)
            return 1;
        return 0;

    }

};

int main()
{
    exam Math;
    Math.set();
    if (Math.isDone())
        cout << "Math was passed";
    else
        cout << "Math wasnt passed";
    return 0;
}
