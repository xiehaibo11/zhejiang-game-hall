
/* covariant return thunk to cocos2d::EaseElasticIn::clone() const */

long __thiscall cocos2d::EaseElasticIn::clone(EaseElasticIn *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
                    /* try { // try from 00ed1a38 to 00fd1a47 has its CatchHandler @ 00ed2810 */
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2,*(float *)(this + 0x38));
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

