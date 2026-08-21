
/* cocos2d::Bone3D::setOriPose(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Bone3D::setOriPose(Bone3D *this,Mat4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0xa8) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(undefined8 *)(this + 0xb8) = uVar3;
  *(undefined8 *)(this + 0xb0) = uVar2;
  *(undefined8 *)(this + 0x88) = uVar5;
  *(undefined8 *)(this + 0x80) = uVar4;
  *(undefined8 *)(this + 0x98) = uVar7;
  *(undefined8 *)(this + 0x90) = uVar6;
  return;
}

