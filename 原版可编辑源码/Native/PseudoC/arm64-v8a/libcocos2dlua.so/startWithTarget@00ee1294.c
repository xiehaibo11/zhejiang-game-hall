
/* cocos2d::BezierBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::BezierBy::startWithTarget(BezierBy *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  uVar2 = *puVar1;
  *(undefined8 *)(this + 0x70) = uVar2;
  *(undefined8 *)(this + 0x78) = uVar2;
  return;
}

