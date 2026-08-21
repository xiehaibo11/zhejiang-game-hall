
/* dragonBones::CCArmatureDisplay::CCArmatureDisplay() */

void __thiscall dragonBones::CCArmatureDisplay::CCArmatureDisplay(CCArmatureDisplay *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *in_x1;
  long lVar3;
  
  cocos2d::Ref::Ref((Ref *)this);
  lVar3 = *in_x1;
  *(long *)this = lVar3;
  *(long *)(this + *(long *)(lVar3 + -0x18)) = in_x1[1];
  *(undefined8 *)(this + 0x20) = 0;
  this[0xc] = (CCArmatureDisplay)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(CCArmatureDisplay **)(this + 0x18) = this + 0x20;
  uVar2 = cocos2d::Color4F::WHITE._8_8_;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x62) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  return;
}

