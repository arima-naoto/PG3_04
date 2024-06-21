#include "Circle.h"

/// <summary>
/// 初期化処理
/// </summary>
Circle::Circle() {

	///円の面積の計算結果用変数
	circleResult_ = 0.0f;

}

/// <summary>
/// delete処理
/// </summary>
Circle::~Circle() {}

/// <summary>
/// メンバ関数Sizeの定義
/// </summary>
void Circle::Size(){

	float pi = 3.14f;//円周率

	//円の半径は5とし、円の面積を求める
	float radius = 5.0f;

	circleResult_ = pi * radius * radius;
}

/// <summary>
/// メンバ関数Drawの定義
/// </summary>
void Circle::Draw()
{
	//求めた円の面積をprintf関数で出力する(今回は第二小数点まで)
	printf("円の面積は : %.2f\n", circleResult_);
}