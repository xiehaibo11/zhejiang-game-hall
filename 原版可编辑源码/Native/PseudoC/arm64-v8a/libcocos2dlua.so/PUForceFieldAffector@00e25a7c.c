
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PUForceFieldAffector::PUForceFieldAffector() */

void __thiscall cocos2d::PUForceFieldAffector::PUForceFieldAffector(PUForceFieldAffector *this)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined ***)this = &PTR__PUForceFieldAffector_016ef190;
  PUForceField::PUForceField((PUForceField *)(this + 0xb0));
  *(undefined8 *)(this + 0x100) = 0x3f80000000000000;
  Vec3::Vec3((Vec3 *)(this + 0x108));
  *(undefined4 *)(this + 0x114) = 0x43c80000;
  *(undefined2 *)(this + 0x118) = 2;
  auVar2 = NEON_fmov(0x3ff0000000000000,8);
  *(long *)(this + 0x128) = auVar2._8_8_;
  *(long *)(this + 0x120) = auVar2._0_8_;
  *(undefined8 *)(this + 0x130) = 0x4008000000000000;
  *(undefined4 *)(this + 0x138) = 0x40;
  uVar1 = DEFAULT_WORLDSIZE;
                    /* try { // try from 00e25af8 to 00f25aff has its CatchHandler @ 00e25dd0 */
                    /* try { // try from 00e25b00 to 00f25b83 has its CatchHandler @ 00e2573c */
  *(undefined4 *)(this + 0x144) = _DAT_01788d0c;
  *(undefined8 *)(this + 0x13c) = uVar1;
  *(undefined4 *)(this + 0x148) = 1;
  uVar1 = DEFAULT_MOVEMENT;
  *(undefined4 *)(this + 0x154) = _DAT_01788d18;
  *(undefined8 *)(this + 0x14c) = uVar1;
  this[0x158] = (PUForceFieldAffector)0x0;
  *(undefined8 *)(this + 0x15c) = 0x40a00000;
  Vec3::Vec3((Vec3 *)(this + 0x164));
  Vec3::Vec3((Vec3 *)(this + 0x170));
  this[0x17c] = (PUForceFieldAffector)0x0;
  return;
}

