#include "Dog.h"

/// <summary>
/// 初期化処理
/// </summary>
Dog::Dog() {}

/// <summary>
/// delete処理
/// </summary>
Dog::~Dog(){}

/// <summary>
/// 犬の鳴き声のメンバ関数を定義
/// </summary>
void Dog::Meowing(){

	///文章をprintf関数で出力する
	printf("犬は「ワン」と鳴きます\n");
}