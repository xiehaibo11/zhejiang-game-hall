
/* cocos2d::OBB::set(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3
   const&, cocos2d::Vec3 const&) */

void __thiscall
cocos2d::OBB::set(OBB *this,Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4,Vec3 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_4 + 8);
  *(undefined8 *)(this + 0x24) = uVar1;
  uVar1 = *(undefined8 *)param_5;
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_5 + 8);
  *(undefined8 *)(this + 0x54) = uVar1;
  return;
}

