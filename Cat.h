#pragma once
#include "Animal.h"

/// <summary>
/// AnimalクラスをポリモーフィズムしたCatクラスを作成する
/// </summary>
class Cat : public Animal
{
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Cat();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Cat() override;


	/// <summary>
	/// 猫の鳴き声のメンバ変数を用意
	/// </summary>
	void Meowing() override;

};

