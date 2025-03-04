#include <bits/stdc++.h>
using namespace std;

// structの定義
struct Person {
  // デフォルトがpublic
  string name;
  int age;

  // コンストラクタ
  Person(string n, int a) : name(n), age(a) {}

  void introduce() {
    cout << "My name is " << name << " and I am " << age << " years old." << endl;
  }
};

// structの継承
struct Student : public Person {
  string school;

  // コンストラクタ
  Student(string n, int a, string s) : Person(n, a), school(s) {}

  void introduce() {
    Person::introduce();
    cout << "I study at " << school << "." << endl;
  }
};

// classの定義
class Animal {
  // privateとpublicを明示しておけばよい
 private:
  string species;
  int age;

 public:
  // コンストラクタ
  Animal(string sp, int ag) : species(sp), age(ag) {}

  void introduce() {
    cout << "I am a " << species << " and I am " << age << " years old." << endl;
  }

  // アクセサメソッド(プライベート変数は外部から直接アクセスできないので、メソッドを介してアクセスする)
  string getSpecies() {
    return species;
  }

  void setSpecies(string sp) {
    species = sp;
  }

  int getAge() {
    return age;
  }

  void setAge(int ag) {
    age = ag;
  }
};

// classの継承
class Dog : public Animal {
  private:
   string breed;
 
   void bark() {
     cout << "Woof! Woof!" << endl;
   }
 
  public:
   // コンストラクタ
   Dog(string sp, int ag, string br) : Animal(sp, ag), breed(br) {}
 
   void introduce() {
     Animal::introduce();
     cout << "I am a " << breed << "." << endl;
     bark(); // プライベートメソッドの呼び出し
   }
 
   // アクセサメソッド
   string getBreed() {
     return breed;
   }
 
   void setBreed(string br) {
     breed = br;
   }
 };
 
 int main() {
   // structの使用例
   Student student("Alice", 20, "Keio University");
   student.introduce();

   cout << student.name << endl;  // publicなメンバ変数は外部からアクセスできる

   // classの使用例
   Dog dog("Dog", 5, "Golden Retriever");
   dog.introduce();
 
   // cout << dog.species << endl;  // privateなメンバ変数は外部からアクセスできない
   // dog.bark();  // privateなメンバ関数は外部からアクセスできない
 
  // アクセサメソッドの使用例
  dog.setSpecies("Canine");
  dog.setAge(6);
  dog.setBreed("Labrador");
  cout << "Updated: ";
  dog.introduce();

  return 0;
}
