
/* cocos2d::PUForceField::setWorldSize(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUForceField::setWorldSize(PUForceField *this,Vec3 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x30) = uVar1;
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3fea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x78))();
    return;
  }
  return;
}

