#pragma once
#include "Animal.h"

/// <summary>
/// Animal�N���X���|�����[�t�B�Y������Dog�N���X���쐬
/// </summary>
class Dog : public Animal
{
public://�����o�֐�

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Dog();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Dog() override;

	/// <summary>
	/// ���̖����̃����o�֐���p��
	/// </summary>
	void Meowing() override;
};

