
/* covariant return thunk to cocos2d::EaseElasticOut::clone() const */

long __thiscall cocos2d::EaseElasticOut::clone(EaseElasticOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
                    /* try { // try from 00ed1bec to 00fd1bfb has its CatchHandler @ 00ed27f8 */
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 00ed1c00 to 00fd1c1f has its CatchHandler @ 00ed2824 */
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2,*(float *)(this + 0x38));
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

