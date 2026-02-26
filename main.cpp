#include "Game.h"
#include "Ice.h"
#include "Flip.h"
#include "sketch.h"

int main() {
	

	int i = 0;
	std::cout << "1、游戏模式" << std::endl;
	std::cout << "2、图片翻转模式" << std::endl;
	std::cout << "3、冰冻特效模式" << std::endl;
	std::cout << "4、闪烁特效翻转模式" << std::endl;
	std::cout << "请输入显示的模式:";
	std::cin >> i;

	if (i == 1)GameEnter();
	if (i == 2)FlipEnter();
	if (i == 3)IceEnter();
	if (i == 4)SketchEnter();

	return 0;
}