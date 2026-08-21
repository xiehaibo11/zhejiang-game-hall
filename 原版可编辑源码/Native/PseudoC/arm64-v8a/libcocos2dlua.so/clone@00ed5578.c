
/* covariant return thunk to cocos2d::DeccelAmplitude::clone() const */

long __thiscall cocos2d::DeccelAmplitude::clone(DeccelAmplitude *this)

{
  long lVar1;
  Action *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    pAVar2 = (Action *)(**(code **)(**(long **)(this + 0x38) + 0x18))();
    lVar3 = create(pAVar2,*(float *)(this + 0x24));
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

