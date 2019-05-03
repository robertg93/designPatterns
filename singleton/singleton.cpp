#include <iostream>



class singleton
 {
  private:
        singleton() {}
        singleton(const singleton &);
        singleton& operator=(const singleton&);
        ~singleton() {}
  public:
        std::string method() { return "singleton pattern"; }
        static singleton& getInstance()
        {
          static singleton instance;
          return instance;
        }
 };

int main()
{
  std::cout << singleton::getInstance().method();

  return 0;
}
