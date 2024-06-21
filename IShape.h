#pragma once
#include <stdio.h>

/// <summary>
/// IShapeクラスを宣言
/// </summary>
class IShape
{
public:

	/// <summary>
	/// コンストラクタ
	/// </summary>
	IShape();

	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual~IShape();

	/// <summary>
	/// 面積を求めるメンバ関数Sizeを用意
	/// </summary>
	virtual void Size() = 0;

	/// <summary>
	/// 求めた値を表示する関数Drawを用意
	/// </summary>
	virtual void Draw() = 0;



};

