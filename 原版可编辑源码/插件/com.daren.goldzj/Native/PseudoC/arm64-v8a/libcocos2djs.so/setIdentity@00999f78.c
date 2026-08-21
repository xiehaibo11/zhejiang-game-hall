
/* cocos2d::Mat4::setIdentity() */

void __thiscall cocos2d::Mat4::setIdentity(Mat4 *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = IDENTITY._56_8_;
  uVar6 = IDENTITY._48_8_;
  uVar5 = IDENTITY._32_8_;
  uVar4 = IDENTITY._24_8_;
  uVar3 = IDENTITY._16_8_;
  uVar2 = IDENTITY._8_8_;
  uVar1 = IDENTITY._0_8_;
  *(undefined8 *)(this + 0x28) = IDENTITY._40_8_;
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x38) = uVar7;
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar3;
  return;
}

