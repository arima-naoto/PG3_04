#pragma once
#include "IShape.h"

/// <summary>
/// IShapeクラスをポリモーフィズムしたCircleクラスを宣言
/// </summary>
class Circle : public IShape
{
public: //メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	Circle();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Circle() override;

	/// <summary>
	/// 円の面積を求めるメンバ関数Sizeを用意
	/// </summary>
	void Size() override;

	/// <summary>
	/// 求めた値を表示するメンバ関数Drawを用意
	/// </summary>
	void Draw() override;

private:

	///円の面積の計算結果用変数
	float circleResult_;

};

