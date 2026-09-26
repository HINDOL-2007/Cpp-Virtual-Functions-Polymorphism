#include <iostream>
using namespace std;
class StandardPlayer
{
public:
    int runSpeed;
    virtual void display()
    {
        cout << "Standard Player Run Speed :- " << runSpeed << endl;
    }
};
class ProPlayer : public StandardPlayer
{
public:
    int dashSpeed;
    void display()
    {

        cout << "Pro Player Dash Speed :- " << dashSpeed << endl;
    }
};
int main()
{
    ProPlayer alok;
    StandardPlayer *base_ptr = &alok;
    alok.dashSpeed = 15;
    
    base_ptr->display();
    return 0;
}
