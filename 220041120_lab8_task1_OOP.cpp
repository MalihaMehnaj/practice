#include<iostream>
#include<string>
using namespace std;
class Animal
{
private:
    string name_of_animal;
    string habitat_area;
    string sound;
    int height;
    int weight;

public:
    Animal(int h, int w,string n,string A,string s)
    {
        sound=s;
        height=h;
        weight=w;
        name_of_animal=n;
        habitat_area=A;
    }

    void display()
    {
        cout<<"The name of the animal is: "<<name_of_animal<<endl;
        cout<<"The sound of the animal is: "<<sound<<endl;
        cout<<"The weight of the animal is: "<<weight<<endl;
        cout<<"The habitat area of the animal is: "<<habitat_area<<endl;
        cout<<"The name of the animal is: "<<name_of_animal<<endl;
    };

    int Change_weight(int W)
    {
        weight=W;
        return W;
    }

    void print_sound()
    {
        cout<<"The sound :"<<sound<<endl;
    }

    void set_sound(string sn)
    {
        sound=sn;
    }
};

class COW:public Animal
{
private:
    double milk_litre;
public:
    COW( string name_of_animal,string habitat_area,double milk_litre,int height,int weight):Animal(name_of_animal,habitat_area,"moo",height,weight,milk_litre)
        void get_sound()override
    {
        cout<<"The sound is :"<<s<<endl;
        Animal::print_sound();
    }
    double get_milk()
    {
        return milk_litre;
    }
};
class chicken:protected Animal
{
private:
    int daily_egg;
public:
    chicken( string name_of_animal,string habitat_area,int height,int weight,int egg_count):Animal(name_of_animal,habitat_area,"buck buck",height,weight),daily_egg(egg_count) {}

    void make_sound()
    {
        cout<<"The chicken says:";
        print_sound();
        Animal::make_sound();
    }

    int get_Egg_count()
    {
        return daily_egg;
    }

    class cat:private Animal
    {
    public:
        cat( string name_of_animal,string habitat_area,int height,int weight):Animal(name_of_animal,habitat_area,"meow meow",height,weight) {}
        void set_sound()
        {
            string s;
            sound=s;
            cout<<"The sound is :"<<s<<endl;
            Animal::make_sound();
        };

        void display()
        {
            cout<<"The sound is :"<<sound<<endl;
        }
    };

    class Pet_cat:public cat
    {
    private:
        string name;
    public:
        Pet_cat(string name_of_animal,string habitat_area,int height,int weight,string cat_name):cat(name_of_animal,habitat_area,height,weight,name(cat_name) {}
        Animal::make_sound();
        void made_sound()
        {
            cout<<"The named cat"<<name<<endl;
            print_sound();
        };
    }

    int main()
    {
        int p;
        cin>>p;
        Animal A(100,50,"Lion","Savannah","Roar");
        A.Change_weight(p);
        A.display();
        return 0;
    }

-
