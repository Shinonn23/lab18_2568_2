#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r_1, Rect *r_2) {
    Rect r1 = *r_1;
    Rect r2 = *r_2;
    
    
    double left   = max(r1.x, r2.x);
    double right  = min(r1.x + r1.w, r2.x + r2.w);
    double top    = min(r1.y, r2.y);
    double bottom = max(r1.y - r1.h, r2.y - r2.h);

    if (right <= left || top <= bottom)
        return 0;

    return (right - left) * (top - bottom);
}
