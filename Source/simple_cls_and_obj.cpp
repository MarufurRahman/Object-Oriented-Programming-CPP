// Create a simple class and object
// Programmed by Marufur Rahman

#include  <iostream>
using namespace std;
 
class Hello
{
    public:
        void sayHello()
        {
                cout << "Hello World" << endl;
        }
};
 
int main()
{
    Hello classObject1;
     
    classObject1.sayHello();
     
    return 0;
}
