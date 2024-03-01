#include <iostream>

using namespace std;

class rectangel {
    public:
    int w;
    int l;

    int area() {
        return w * l;
    }

    int perimeter() {
        return 2*l + 2*w;
    }
};

int main() {

    rectangel r;

    r.w = 2;
    r.l = 3;
    cout << "AREA: " << r.area() << endl;
    cout << "PARIMETER: " << r.perimeter() << endl;
}