
/* cocos2d::Blink::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Blink::startWithTarget(Blink *this,Node *param_1)

{
  byte bVar1;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  bVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1);
  this[0x5c] = (Blink)(bVar1 & 1);
  return;
}

