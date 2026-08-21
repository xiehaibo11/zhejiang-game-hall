
/* cocos2d::AABB::getCorners(cocos2d::Vec3*) const */

void __thiscall cocos2d::AABB::getCorners(AABB *this,Vec3 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined8 *)(param_1 + 4) = uVar3;
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)this;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  uVar2 = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar1 = *(undefined4 *)(this + 0x14);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar3 = *(undefined8 *)(this + 4);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(this + 0xc);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)this;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar2 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  return;
}

