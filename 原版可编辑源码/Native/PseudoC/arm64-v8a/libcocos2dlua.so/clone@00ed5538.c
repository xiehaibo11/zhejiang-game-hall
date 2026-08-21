
/* cocos2d::DeccelAmplitude::clone() const */

void __thiscall cocos2d::DeccelAmplitude::clone(DeccelAmplitude *this)

{
  Action *pAVar1;
  
  if (*(long **)(this + 0x60) != (long *)0x0) {
    pAVar1 = (Action *)(**(code **)(**(long **)(this + 0x60) + 0x18))();
    create(pAVar1,*(float *)(this + 0x4c));
    return;
  }
  return;
}

