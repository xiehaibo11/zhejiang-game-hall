
/* cocos2d::PUForceField::setOctaves(unsigned short) */

void __thiscall cocos2d::PUForceField::setOctaves(PUForceField *this,ushort param_1)

{
  *(ushort *)(this + 8) = param_1;
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3fdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x28))();
    return;
  }
  return;
}

