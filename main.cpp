#include <stdio.h>
#include "Cat.h"
#include "Dog.h"

int main() {

	//�e�N���X�̃C���X�^���X���쐬����
	Animal* cat = new Cat();
	Animal* dog = new Dog();

	//����(�L�A��)���������o�֐�Meowing���Ăяo��
	cat->Meowing();
	dog->Meowing();

	///�e�N���X���������
	delete cat, dog;

	return 0;
}