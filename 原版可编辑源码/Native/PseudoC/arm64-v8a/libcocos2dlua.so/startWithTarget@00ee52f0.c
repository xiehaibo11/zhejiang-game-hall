
/* cocos2d::ActionFloat::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ActionFloat::startWithTarget(ActionFloat *this,Node *param_1)

{
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  *(float *)(this + 0x60) = *(float *)(this + 0x5c) - *(float *)(this + 0x58);
  return;
}

