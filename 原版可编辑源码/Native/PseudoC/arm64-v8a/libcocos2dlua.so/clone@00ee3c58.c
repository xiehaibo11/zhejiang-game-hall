
/* cocos2d::ReverseTime::clone() const */

void __thiscall cocos2d::ReverseTime::clone(ReverseTime *this)

{
  FiniteTimeAction *pFVar1;
  
                    /* try { // try from 00ee3c58 to 00fe3d3f has its CatchHandler @ 00ee3c08 */
                    /* catch() { ... } // from try @ 00ee3c50 with catch @ 00ee3c68 */
  pFVar1 = (FiniteTimeAction *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
  create(pFVar1);
  return;
}

