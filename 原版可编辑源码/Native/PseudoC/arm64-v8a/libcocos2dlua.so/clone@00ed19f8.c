
/* cocos2d::EaseElasticIn::clone() const */

void __thiscall cocos2d::EaseElasticIn::clone(EaseElasticIn *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed19fc to 00fd1a03 has its CatchHandler @ 00ed2818 */
                    /* try { // try from 00ed1a04 to 00fd1a13 has its CatchHandler @ 00ed2814 */
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* try { // try from 00ed1a18 to 00fd1a33 has its CatchHandler @ 00ed2874 */
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1,*(float *)(this + 0x60));
    return;
  }
  return;
}

