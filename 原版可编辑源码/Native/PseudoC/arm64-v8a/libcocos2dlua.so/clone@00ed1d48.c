
/* cocos2d::EaseElasticInOut::clone() const */

void __thiscall cocos2d::EaseElasticInOut::clone(EaseElasticInOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed1d58 to 00fd1d67 has its CatchHandler @ 00ed27f4 */
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* try { // try from 00ed1d6c to 00fd1d8b has its CatchHandler @ 00ed2820 */
    create(pAVar1,*(float *)(this + 0x60));
    return;
  }
  return;
}

