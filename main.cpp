#include <stdio.h>
#include "Cat.h"
#include "Dog.h"

int main() {

	//各クラスのインスタンスを作成する
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	//動物(猫、犬)が鳴くメンバ関数Meowingを呼び出す
	cat->Meowing();
	dog->Meowing();

	///各クラスを解放する
	delete cat, dog;

	return 0;
}