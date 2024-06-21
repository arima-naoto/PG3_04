#include "Rectangle.h"

/// <summary>
/// 初期化処理
/// </summary>
Rectangle::Rectangle() {
	rectangleResult_ = 0.0f;
}

/// <summary>
/// delete処理
/// </summary>
Rectangle::~Rectangle() {}

/// <summary>
/// メンバ関数Sizeの定義
/// </summary>
void Rectangle::Size() 
{
	//短形は幅20、高さ15とし、面積を求める
	float width = 20, height = 15;

	rectangleResult_ = width * height;
}

/// <summary>
/// メンバ関数Drawの定義
/// </summary>
void Rectangle::Draw() {

	//求めた面積をprintfで出力する
	printf("短形の面積は %.2f", rectangleResult_);

}