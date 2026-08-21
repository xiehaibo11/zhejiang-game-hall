
/* cocos2d::PUForceField::createForceFieldCalculationFactory(cocos2d::PUForceField::ForceFieldType)
    */

undefined8 * __thiscall
cocos2d::PUForceField::createForceFieldCalculationFactory(PUForceField *this,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
                    /* catch() { ... } // from try @ 00e3f784 with catch @ 00e3fb8c */
  *(int *)(this + 0x4c) = param_2;
  if (param_2 == 1) {
    puVar2 = *(undefined8 **)(this + 0x38);
                    /* catch() { ... } // from try @ 00e3fa48 with catch @ 00e3fba8 */
  }
  else {
    puVar2 = operator_new(0x878,(nothrow_t *)&std::nothrow);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR__PUForceFieldCalculationFactory_016f1e20;
      PUNoise3D::PUNoise3D((PUNoise3D *)(puVar2 + 1));
      auVar3 = NEON_fmov(0x3ff0000000000000,8);
      *(undefined2 *)(puVar2 + 0x106) = 2;
      puVar2[0x108] = auVar3._8_8_;
      puVar2[0x107] = auVar3._0_8_;
      puVar2[0x109] = 0x3ff0000000000000;
      Vec3::Vec3((Vec3 *)(puVar2 + 0x10a));
      uVar1 = PUForceFieldCalculationFactory::DEFAULT_WORLDSIZE;
      *(undefined4 *)((long)puVar2 + 0x864) = DAT_01788fd0;
      *(undefined8 *)((long)puVar2 + 0x85c) = uVar1;
      Vec3::Vec3((Vec3 *)(puVar2 + 0x10d));
      *puVar2 = &PTR__PUForceFieldCalculationFactory_016f1ec0;
    }
    if (*(long **)(this + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x38) + 8))();
    }
    *(undefined8 **)(this + 0x38) = puVar2;
  }
  return puVar2;
}

