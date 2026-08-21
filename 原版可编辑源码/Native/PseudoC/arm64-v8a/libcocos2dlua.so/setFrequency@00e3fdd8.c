
/* cocos2d::PUForceField::setFrequency(double) */

void __thiscall cocos2d::PUForceField::setFrequency(PUForceField *this,double param_1)

{
  *(double *)(this + 0x10) = param_1;
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3fdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x38))();
    return;
  }
  return;
}

