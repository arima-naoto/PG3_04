#pragma once
#include "IShape.h"

/// <summary>
/// IShape�N���X���|�����[�t�B�Y������Rectangle�N���X��錾����
/// </summary>
class Rectangle : public IShape
{
public://�����o�֐�

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Rectangle();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Rectangle() override;

	/// <summary>
	/// �Z�`�̖ʐς����߂郁���o�֐�Size��錾
	/// </summary>
	void Size() override;

	/// <summary>
	/// ���߂��ʐς̒l��\�����郁���o�֐�Draw��p��
	/// </summary>
	void Draw() override;

private:

	//�Z�`�̖ʐς̌v�Z���ʗp�ϐ�
	float rectangleResult_;

};

