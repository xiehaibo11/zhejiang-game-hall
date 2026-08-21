
/* cocos2d::FadeOut::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::FadeOut::startWithTarget(FadeOut *this,Node *param_1)

{
  FadeOut FVar1;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  FVar1 = (FadeOut)0x0;
  if (*(long *)(this + 0x58) != 0) {
    FVar1 = *(FadeOut *)(*(long *)(this + 0x58) + 0x57);
  }
  this[0x56] = FVar1;
  if (param_1 != (Node *)0x0) {
    FVar1 = (FadeOut)(**(code **)(*(long *)param_1 + 0x480))(param_1);
    this[0x57] = FVar1;
  }
  return;
}

