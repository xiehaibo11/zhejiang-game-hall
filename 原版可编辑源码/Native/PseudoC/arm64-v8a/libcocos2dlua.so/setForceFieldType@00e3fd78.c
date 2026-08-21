
/* cocos2d::PUForceField::setForceFieldType(cocos2d::PUForceField::ForceFieldType) */

void __thiscall cocos2d::PUForceField::setForceFieldType(PUForceField *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x4c) = param_2;
  if (*(long *)(this + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e3fda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))
              (*(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x18),
               *(undefined8 *)(this + 0x20),this,param_2,*(undefined4 *)(this + 0x34),
               *(undefined2 *)(this + 8),this + 0x28);
    return;
  }
  return;
}

