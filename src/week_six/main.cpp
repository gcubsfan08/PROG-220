#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>
#include <string>

int *create_array(const size_t n)
{
    return (int* )malloc(sizeof(int) * n);
}

void process_array(int * arry, const size_t len)
{
    for(int i = 0; i < len; i++)
    {
        //do something
        arry[i];
    }
}


std::vector<int> make_vect()
{
    return std::vector<int>();
}

void foo(int x)
{

}

int main()
{

    /*
    **
    ** int a[5];

    std::vector<int> v = std::vector<int>(a, a + sizeof(a) / sizeof(a[0]));

    int * x = v.data();

    std::vector<int> myVect;
    myVect.reserve(10);
    myVect.push_back(10);
    myVect.push_back(11);

    std::vector<int>(10);

    for(std::vector<int>::iterator it = myVect.begin(); it != myVect.end(); it++)
    {
        std::cout << *it << std::endl;
    }


    auto x = { 1, 2, 3, 4, 5 };

    auto v = std::vector<int>();

    auto z = make_vect();

    for(auto it = myVect.begin(); it != myVect.end(); it++)
    {

    }

    int f = myVect.at(10);

    myVect.emplace(myVect.begin() + 10), 10);

        */

    std::map<int, std::string> m;


    m.insert({ 1, "Hank" });
    m.insert({ 2, "Stacy" });
    m.insert({ 3, "Slagathor"});
    m.insert( { 55, "other name"} );

    std::string s = m.at(55);

    std::cout << s << std::endl;

}
