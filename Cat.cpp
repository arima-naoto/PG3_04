#include "Cat.h"

/// <summary>
/// 初期化処理
/// </summary>
Cat::Cat(){}

/// <summary>
/// delete処理
/// </summary>
Cat::~Cat(){
}

/// <summary>
/// 猫の鳴き声のメンバ関数を定義
/// </summary>
void Cat::Meowing() {

	///文章をprintf関数で出力する
	printf("猫は「にゃー」と泣きます\n");
}