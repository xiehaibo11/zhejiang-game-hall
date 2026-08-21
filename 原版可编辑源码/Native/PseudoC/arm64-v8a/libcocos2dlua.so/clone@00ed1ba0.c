
/* cocos2d::EaseElasticOut::clone() const */

void __thiscall cocos2d::EaseElasticOut::clone(EaseElasticOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed1bb4 to 00fd1bc3 has its CatchHandler @ 00ed2800 */
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
                    /* try { // try from 00ed1bd0 to 00fd1bdf has its CatchHandler @ 00ed27fc */
    create(pAVar1,*(float *)(this + 0x60));
    return;
  }
  return;
}

