#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	///�e�N���X�̃C���X�^���X���쐬
	IShape* circle = new Circle();
	IShape* rectangle = new Rectangle();

	//�ʐς����߂郁���o�֐�Size���e�N���X����Ăяo��
	circle->Size();
	rectangle->Size();

	//���߂��ʐς��o�͂��������o�֐�Draw���e�N���X����Ăяo��
	circle->Draw();
	rectangle->Draw();

	//�e�N���X���������
	delete circle, rectangle;

	return 0;
}
