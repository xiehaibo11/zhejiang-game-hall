
/* cocos2d::Mat4::Mat4(float const*) */

void __thiscall cocos2d::Mat4::Mat4(Mat4 *this,float *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  uVar5 = *(undefined8 *)(param_1 + 2);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 6);
  uVar6 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 8) = uVar5;
  *(undefined8 *)this = uVar4;
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined8 *)(this + 0x10) = uVar6;
  return;
}

