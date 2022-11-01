// SOLID
// S: Single Responsibility Principle
// O: Open and Closed Principle
// L: Liskov's Substitution Principle
// I: Interface Segregation Principle
// D: Dependency Inversion Principle
//
#include <iostream>
#include <vector>
enum Type { Withdrawl, Deposit };

struct LedgerEntry {
  Type type;
  float amount;
};


struct Account {
    long id;
    float balance;
};

class Ledger {
private:
  long account_id;
  std::vector<LedgerEntry *> *ledger;

public:
  Ledger(long account_id) {
    this->account_id = account_id;
    this->ledger = new std::vector<LedgerEntry *>();
  }

  float CalculateBalance()
  {
      float b = 0.0;

      for(std::vector<LedgerEntry *>::iterator it = this->ledger->begin();
         it != this->ledger->end(); it++) {
          if((*it)->type == Type::Deposit)
          {
              b += (*it)->amount;
          }
          else {
              b -= (*it)->amount;
          }
      }
      return b;
  }

  void AddTransaction(Type type, float amount) {
    auto ledgerEntry = new LedgerEntry{type = type, amount = amount};
    this->ledger->push_back(ledgerEntry);
  }

  ~Ledger() {
    for (std::vector<LedgerEntry *>::iterator it = this->ledger->begin();
         it != this->ledger->end(); it++) {
      delete *it;
    }
    delete this->ledger;
  }
};

struct CanMakeNoise
{
    virtual void MakeNoise();
};

struct CanShootLazerBeams
{
    virtual void LaserBeams();
};

struct HasAge
{
    int age;
};




struct Dog {
    int age;
    void MakeNoise()
    {
        std::cout << "Bark" << std::endl;
    }
};

struct SuperDog : public Dog {
    void LaserBeams()
    {
       std::cout << "Pew Pew" << std::endl;
    }
};


void FooDog(Dog *d)
{
    d->MakeNoise();
}


int main() {
    Ledger *l = new Ledger(1);

    l->AddTransaction(Type::Deposit, 100.00f);

    l->AddTransaction(Type::Withdrawl, 50.00f);

    float balance = l->CalculateBalance();

    std::cout << balance << std::endl;


    Dog d;


    SuperDog sd;

    FooDog(&d);
    FooDog(&sd);

    delete l;
}
