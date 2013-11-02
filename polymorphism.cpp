/*
  A class that declares or inherits a virtual function
  is called a polymorphic class
*/

#include <iostream>
using namespace std;

class CPolygon {
protected:
  int width, height;
public:
  void set_values(int a, int b) {width = a; height = b;};
  virtual int area() {return (0);};
};

class CRectangle : public CPolygon {
public:
  int area() {return (width * height);};
};

class CTriangle : public CPolygon {
public:
  int area() {return (width * height * 0.5);};
};

int main()
{
  CPolygon poly;
  CRectangle rect;
  CTriangle trgl;
  CPolygon *polyptr[3] = {&poly, &rect, &trgl};

  for (int ipoly = 0; ipoly < 3; ipoly++) {
    polyptr[ipoly]->set_values(4, 5);
    cout << polyptr[ipoly]->area() << endl;
  }
}
