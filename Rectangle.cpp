#include "Rectangle.h"

/// <summary>
/// ����������
/// </summary>
Rectangle::Rectangle() {
	rectangleResult_ = 0.0f;
}

/// <summary>
/// delete����
/// </summary>
Rectangle::~Rectangle() {}

/// <summary>
/// �����o�֐�Size�̒�`
/// </summary>
void Rectangle::Size() 
{
	//�Z�`�͕�20�A����15�Ƃ��A�ʐς����߂�
	float width = 20, height = 15;

	rectangleResult_ = width * height;
}

/// <summary>
/// �����o�֐�Draw�̒�`
/// </summary>
void Rectangle::Draw() {

	//���߂��ʐς�printf�ŏo�͂���
	printf("�Z�`�̖ʐς� %.2f", rectangleResult_);

}