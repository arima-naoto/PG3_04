#include "Circle.h"

/// <summary>
/// ����������
/// </summary>
Circle::Circle() {

	///�~�̖ʐς̌v�Z���ʗp�ϐ�
	circleResult_ = 0.0f;

}

/// <summary>
/// delete����
/// </summary>
Circle::~Circle() {}

/// <summary>
/// �����o�֐�Size�̒�`
/// </summary>
void Circle::Size(){

	float pi = 3.14f;//�~����

	//�~�̔��a��5�Ƃ��A�~�̖ʐς����߂�
	float radius = 5.0f;

	circleResult_ = pi * radius * radius;
}

/// <summary>
/// �����o�֐�Draw�̒�`
/// </summary>
void Circle::Draw()
{
	//���߂��~�̖ʐς�printf�֐��ŏo�͂���(����͑�񏬐��_�܂�)
	printf("�~�̖ʐς� : %.2f\n", circleResult_);
}