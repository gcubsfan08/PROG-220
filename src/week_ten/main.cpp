#include<stdlib.h>
#include<iostream>
#include<vector>
#include<memory>


struct X
{
public:
    X()
    {
        std::cout << "Created" << std::endl;
        data = new std::vector<int>();
        data->reserve(10000);
    }
    ~X()
    {
        std::cout << "Actually Deleted" << std::endl;
        delete data;
    }

    int sum()
    {
        int sum =  0;
        for(auto d : (*data))
        {
            sum += d;
        }
        return sum;
    }

private:
    std::vector<int> *data;
};


X * makeX()
{
    return new X();
}

int main()
{
    std::allocator<int> alloc;

    int *p = alloc.allocate(1);

    //do soemthing with our int
    //
    alloc.deallocate(p, 1);

    X *x = makeX();

    std::vector<X> xs = std::vector<X>();

    xs.push_back(X());
    xs.push_back(X());



    delete x;
    return 0;
}
