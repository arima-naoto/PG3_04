#pragma once
#include "IShape.h"

/// <summary>
/// IShape�N���X���|�����[�t�B�Y������Circle�N���X��錾
/// </summary>
class Circle : public IShape
{
public: //�����o�֐�

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Circle();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Circle() override;

	/// <summary>
	/// �~�̖ʐς����߂郁���o�֐�Size��p��
	/// </summary>
	void Size() override;

	/// <summary>
	/// ���߂��l��\�����郁���o�֐�Draw��p��
	/// </summary>
	void Draw() override;

private:

	///�~�̖ʐς̌v�Z���ʗp�ϐ�
	float circleResult_;

};

