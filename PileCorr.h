#ifndef Pile_H
#define Pile_H
class Pile
{
  public :
    Pile(int t = 10);      //Constructeur
     Pile ( const Pile & ); // Constructeur de copie
    ~Pile();               //Destructeur

  void Push(int);
  int Pop();
  bool Empty() const;
  bool Full() const;
  int Get_size() const;

  private :
    int dim;
    int size;
    int *adr;
};
#endif
