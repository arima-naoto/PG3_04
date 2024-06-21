#pragma once

/// <summary>
/// Animalクラスの作成
/// </summary>
class Animal
{
public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Animal();

	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~Animal();

	/// <summary>
	/// 動物の鳴き声のメンバ関数を用意
	/// </summary>
	virtual void Meowing();

};

