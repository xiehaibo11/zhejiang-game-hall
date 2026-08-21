
/* cocos2d::FadeIn::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::FadeIn::startWithTarget(FadeIn *this,Node *param_1)

{
  FadeIn FVar1;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  if (*(long *)(this + 0x58) == 0) {
    this[0x56] = (FadeIn)0xff;
  }
  else {
    this[0x56] = *(FadeIn *)(*(long *)(this + 0x58) + 0x57);
  }
  if (param_1 != (Node *)0x0) {
    FVar1 = (FadeIn)(**(code **)(*(long *)param_1 + 0x480))(param_1);
    this[0x57] = FVar1;
  }
  return;
}

