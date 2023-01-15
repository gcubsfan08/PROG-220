///////////////////////////////////////
// //SOLID                           //
// //Single Responsibilty            //
// //Open Closed                     //
// //Liskov's Substitution Principle //
// //Interface Segregation Principle //
// //Dependency Inversion            //
///////////////////////////////////////


#include<string>
#include<iostream>
#include<functional>

struct Animal
{
    Animal()
    {

    }
    virtual void make_noise() = 0;
    int age;
    std::string name;
};


class Printer
{
    virtual void print(std::string data) = 0;
};

class StdOutPrinter : public Printer
{
    void print(std::string data)
    {
        std::cout << data << std::endl;
    }
};

class ErrorPrinter : public Printer
{
    void print(std::string data)
    {
        std::cerr << data << std::endl;
    }
};


class Person
{
public:
    Person(std::function<Printer*()> resolver)
    {
        this->printer = resolver();
    }

    virtual ~Person()
    {
        delete this->printer;
    }

private:
    int id;
    std::string name;
    int age;
    Printer *printer;

    int get_id()
    {
        return this->id;
    }

    void set_id(int id)
    {
        this->id = id;
    }

    void have_birthday()
    {
        this->age += 1;
    }
};

struct PersonService
{
    void HaveBirthday(Person *p)
    {
        p->age += 1;
    }
};

struct CanMakeNoise
{
    virtual void make_noise() = 0;
};

struct Dog : CanMakeNoise
{
    int leg_count;
    bool tail_wagging;

    void make_noise()
    {
        std::cout << "Bark" << std::endl;
    }
};


void handle(CanMakeNoise *c)
{
    c->make_noise();
}

struct PrinterFactory
{
    static Printer* CreateErrorPrinter()
    {
        return new ErrorPrinter();
    }

    static Printer* CreateStdOutPrinter()
    {
        return new StdOutPrinter();
    }
};

int main()
{
    int x;

    ErrorPrinter *ep = new ErrorPrinter();
    Person *p = new Person(PrinterFactory::CreateErrorPrinter);

    //do a bunch of stuff
    delete ep;

    Person *p2 = new Person(PrinterFactory::CreateStdOutPrinter);

    Dog *d = new Dog();

    handle(d);
    return 0;
}
