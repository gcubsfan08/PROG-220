#include <utility>
#include <vector>
struct A
{
    A();
    ~A();
};


A foo()
{
    A a = A();
    return a;
}




void bar(A &a)
{

}

void foo(A &&a)
{

}


std::unique_ptr<Row> parse(std::string)
{
    //do something
    return std::make_unique<Row>();
}

struct Row
{

};

int main()
{

    auto rows = std::vector<string>();
    //parse the row into a data struction
    std::vector<std::unique_ptr<Row>> data;

    for(auto r : rows)
    {
        Row row = parse(r);
        data.push_back(std::move(row));
    }
}
