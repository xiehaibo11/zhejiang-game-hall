
/* cocos2d::EaseQuinticActionIn::reverse() const */

void __thiscall cocos2d::EaseQuinticActionIn::reverse(EaseQuinticActionIn *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed08c0 to 00fd08c7 has its CatchHandler @ 00ed0940 */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

