
/* cocos2d::Bone3D::setInverseBindPose(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Bone3D::setInverseBindPose(Bone3D *this,Mat4 *param_1)

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
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x60) = uVar1;
  *(undefined8 *)(this + 0x78) = uVar3;
  *(undefined8 *)(this + 0x70) = uVar2;
  *(undefined8 *)(this + 0x48) = uVar5;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x58) = uVar7;
  *(undefined8 *)(this + 0x50) = uVar6;
  return;
}

