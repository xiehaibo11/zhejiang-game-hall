
/* cocos2d::Particle::reset() */

void __thiscall cocos2d::Particle::reset(Particle *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = Vec3::ZERO;
  *(undefined4 *)(this + 8) = DAT_01d37ca8;
  *(undefined8 *)this = uVar1;
  uVar1 = Vec3::ZERO;
  *(undefined4 *)(this + 0x14) = DAT_01d37ca8;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar1 = Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 0x20) = Color4F::BLACK._8_8_;
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar3 = Color4F::BLACK._8_8_;
  uVar1 = Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = Vec3::ZERO;
  *(undefined4 *)(this + 0x54) = DAT_01d37ca8;
  *(undefined8 *)(this + 0x4c) = uVar1;
  uVar2 = DAT_01d37ca8;
  uVar1 = Vec3::ZERO;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x60) = uVar2;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 100) = 0;
  return;
}

