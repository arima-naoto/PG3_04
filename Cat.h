#pragma once
#include "Animal.h"

/// <summary>
/// Animal�N���X���|�����[�t�B�Y������Cat�N���X���쐬����
/// </summary>
class Cat : public Animal
{
public:

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	Cat();

	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~Cat() override;


	/// <summary>
	/// �L�̖����̃����o�ϐ���p��
	/// </summary>
	void Meowing() override;

};

