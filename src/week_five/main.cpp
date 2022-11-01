#include <cstdio>
#include <iostream>
#include <string>
#include <array>

using namespace std;



namespace bar{

    class blah{

    };

    namespace foo{
        class string{
            blah b;
        };
    }
}

enum RBG{ RED, BLUE, GREEN };

const ushort blue = 0;
const ushort red = 1;
const ushort green = 3;

int foo();
int foo(int);
int foo(float);


int baz(int *m, size_t s)
{
    return 0;
}


void baz (int i)
{

}

void baz(int *i)
{
    int x = *i;
}

void baz(int &i)
{
    int x = i;
}

int main(int argc, char **argv)
{
    printf("%s", "hello world\0");
    std::cout << "hello world" << std::endl;

    int x;
    std::cin >> x;

    std::string s = "Hello World";

    bar::foo::string b
    s.length();
    s.append(", Or Not");


    MyThing::BLUE;
}

//big O notation
//O(1)
//O(n)
//O(n^x)
int foo()
{

    //O(n^2)
    for(int i = 0; i < 1000; i++)
    {
        for(int j = 0; j < 1000; j++)
        {
            //O(n^3)
            for(int k = 0; k < 1000; k++)
            {x-

            }
        }
    }
    return 0;
}
