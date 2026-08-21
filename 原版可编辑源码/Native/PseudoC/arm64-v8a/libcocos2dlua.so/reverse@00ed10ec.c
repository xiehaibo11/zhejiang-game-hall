
/* cocos2d::EaseCubicActionIn::reverse() const */

void __thiscall cocos2d::EaseCubicActionIn::reverse(EaseCubicActionIn *this)

{
  ActionInterval *pAVar1;
  
                    /* catch() { ... } // from try @ 00ed1088 with catch @ 00ed1100 */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
                    /* catch() { ... } // from try @ 00ed1064 with catch @ 00ed1108 */
  create(pAVar1);
  return;
}

