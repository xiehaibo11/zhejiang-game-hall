
/* cocos2d::FadeTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::FadeTo::startWithTarget(FadeTo *this,Node *param_1)

{
  FadeTo FVar1;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  if (param_1 != (Node *)0x0) {
    FVar1 = (FadeTo)(**(code **)(*(long *)param_1 + 0x480))(param_1);
    this[0x57] = FVar1;
  }
  return;
}

