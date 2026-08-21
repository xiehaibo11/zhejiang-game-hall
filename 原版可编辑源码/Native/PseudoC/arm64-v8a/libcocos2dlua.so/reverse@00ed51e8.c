
/* cocos2d::AccelAmplitude::reverse() const */

void __thiscall cocos2d::AccelAmplitude::reverse(AccelAmplitude *this)

{
  Action *pAVar1;
  
  if (*(long **)(this + 0x60) != (long *)0x0) {
                    /* try { // try from 00ed5204 to 00fd531b has its CatchHandler @ 00ed4ef8 */
    pAVar1 = (Action *)(**(code **)(**(long **)(this + 0x60) + 0x20))();
    create(pAVar1,*(float *)(this + 0x4c));
    return;
  }
  return;
}

