
/* covariant return thunk to cocos2d::Speed::clone() const */

long __thiscall cocos2d::Speed::clone(Speed *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x28) + 0x18))();
    lVar3 = create(pAVar2,*(float *)(this + 0x24));
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

