
/* cocos2d::PUForceField::setForceFieldSize(unsigned int) */

void __thiscall cocos2d::PUForceField::setForceFieldSize(PUForceField *this,uint param_1)

{
  *(uint *)(this + 0x34) = param_1;
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3fe68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x68))();
    return;
  }
  return;
}

