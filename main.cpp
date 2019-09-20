#include <iostream>

using namespace std;


class question{
private:
    int count;
    int mark;
public:
    void init(int a, int b){
        count = a;
        mark = b;
    }
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
    void display(){
        cout << "Count of questions of this theam is " << count << " And mark for each of them is " << mark << endl;
    }
};

class exam{
private:
    int countOfTheams;
    double markToPass;
    question mas[100];
public:

    void init(int a, double b){
        countOfTheams = a;
        markToPass = b;
    }
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
    void display(){
        cout << "Count of theams is " << countOfTheams << " and mark to pass this exam is " << markToPass << endl;
    }

};

int main()
{
    exam Math;
    Math.set();
    Math.display();
    if (Math.isDone())
        cout << "Math was passed";
    else
        cout << "Math wasnt passed";
    return 0;
}
