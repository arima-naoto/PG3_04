#pragma once
#include "IShape.h"

/// <summary>
/// IShapeクラスをポリモーフィズムしたRectangleクラスを宣言する
/// </summary>
class Rectangle : public IShape
{
public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Rectangle();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Rectangle() override;

	/// <summary>
	/// 短形の面積を求めるメンバ関数Sizeを宣言
	/// </summary>
	void Size() override;

	/// <summary>
	/// 求めた面積の値を表示するメンバ関数Drawを用意
	/// </summary>
	void Draw() override;

private:

	//短形の面積の計算結果用変数
	float rectangleResult_;

};

