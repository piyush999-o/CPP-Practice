#include <iostream>
#include <cmath>

using namespace std;

class Point{
    int x, y;

    public:
    friend double distance_between_points(Point o1, Point o2);
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }

        void printPoint(void){
            cout<<"x: "<<x<<" y: "<<y<<endl;
        }
};

double distance_between_points(Point o1, Point o2){
    int x_diff = (o1.x-o2.x);
    int y_diff = (o1.y-o2.y);

    double distance = (sqrt(((x_diff)*(x_diff)) + ((y_diff)*(y_diff))));
    return distance;
}

int main(){
    Point p1(8, 6);
    Point p2(0, 5);

    p1.printPoint();
    p2.printPoint();

    double net_dist = distance_between_points(p1, p2);
    cout<<"The Distance between first point and second point is: "<<net_dist;
    // net_dist.printPoint();

    return 0;
}