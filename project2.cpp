#include <iostream>

using namespace std;

class rectangle {
    private:
    int wid;
    int len;

    public:

    rectangle() {
        len = 0;
        wid = 0;
    }

    rectangle(int l, int w) {
        len = l;
        wid = w;
    }

    int area() {
        return wid *len;
    }

    int perimeter() {
        return 2*len + 2*wid;
    }

};

int main() {

    rectangle r;
    rectangle r2(2, 3);
    rectangle r3(3, 5);

    cout << "R1: " << endl;
    cout << "AREA: " << r.area() << endl;
    cout << "PARIMETER: " << r.perimeter() << "\n" << endl;

    cout << "R2: " << endl;
    cout << "AREA: " << r2.area() << endl;
    cout << "PARIMETER: " << r2.perimeter() << "\n" << endl;

    cout << "R3: " << endl;
    cout << "AREA: " << r3.area() << endl;
    cout << "PARIMETER: " << r3.perimeter() << "\n" << endl;
}