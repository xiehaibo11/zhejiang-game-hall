
/* cocos2d::TextRowSpace::TextRowSpace(cocos2d::TextRowSpace&&) */

void __thiscall cocos2d::TextRowSpace::TextRowSpace(TextRowSpace *this,TextRowSpace *param_1)

{
  TextRowSpace TVar1;
  undefined8 uVar2;
  
  this[0x30] = (TextRowSpace)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0x80000000800000;
  *(undefined8 *)this = 0x7f7fffff7f7fffff;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  TVar1 = param_1[0x30];
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  this[0x30] = TVar1;
  *(undefined8 *)(param_1 + 8) = 0x80000000800000;
  *(undefined8 *)param_1 = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x30] = (TextRowSpace)0x0;
  return;
}

