
/* cocos2d::JumpTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::JumpTo::startWithTarget(JumpTo *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  uVar2 = *puVar1;
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x70) = uVar2;
  *(float *)(this + 0x60) = *(float *)(this + 0x78) - (float)uVar2;
  *(float *)(this + 100) = *(float *)(this + 0x7c) - (float)((ulong)uVar2 >> 0x20);
  return;
}

