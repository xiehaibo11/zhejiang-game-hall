
/* cocos2d::PUForceField::PUForceField() */

void __thiscall cocos2d::PUForceField::PUForceField(PUForceField *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined2 *)(this + 8) = 2;
  *(undefined8 *)(this + 0x20) = 0x3ff0000000000000;
  auVar3 = NEON_fmov(0x3ff0000000000000,8);
  *(long *)(this + 0x18) = auVar3._8_8_;
  *(long *)(this + 0x10) = auVar3._0_8_;
  *(undefined ***)this = &PTR__PUForceField_016f1d90;
  uVar2 = DAT_01788fd0;
  uVar1 = PUForceFieldCalculationFactory::DEFAULT_WORLDSIZE;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x34) = 0x40;
  Vec3::Vec3((Vec3 *)(this + 0x40));
  *(undefined4 *)(this + 0x4c) = 0;
  return;
}

