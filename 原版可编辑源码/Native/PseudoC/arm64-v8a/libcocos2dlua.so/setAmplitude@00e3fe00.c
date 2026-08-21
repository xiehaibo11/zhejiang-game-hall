
/* cocos2d::PUForceField::setAmplitude(double) */

void __thiscall cocos2d::PUForceField::setAmplitude(PUForceField *this,double param_1)

{
  *(double *)(this + 0x18) = param_1;
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3fe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 0x48))();
    return;
  }
  return;
}

