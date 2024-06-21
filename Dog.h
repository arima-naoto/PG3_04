#pragma once
#include "Animal.h"

/// <summary>
/// AnimalクラスをポリモーフィズムしたDogクラスを作成
/// </summary>
class Dog : public Animal
{
public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Dog();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Dog() override;

	/// <summary>
	/// 犬の鳴き声のメンバ関数を用意
	/// </summary>
	void Meowing() override;
};

