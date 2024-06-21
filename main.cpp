#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	///各クラスのインスタンスを作成
	IShape* circle = new Circle();
	IShape* rectangle = new Rectangle();

	//面積を求めるメンバ関数Sizeを各クラスから呼び出す
	circle->Size();
	rectangle->Size();

	//求めた面積を出力したメンバ関数Drawを各クラスから呼び出す
	circle->Draw();
	rectangle->Draw();

	//各クラスを解放する
	delete circle, rectangle;

	return 0;
}
