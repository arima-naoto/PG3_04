#pragma once
#include <stdio.h>

/// <summary>
/// IShape�N���X��錾
/// </summary>
class IShape
{
public:

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	IShape();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	virtual~IShape();

	/// <summary>
	/// �ʐς����߂郁���o�֐�Size��p��
	/// </summary>
	virtual void Size() = 0;

	/// <summary>
	/// ���߂��l��\������֐�Draw��p��
	/// </summary>
	virtual void Draw() = 0;



};

