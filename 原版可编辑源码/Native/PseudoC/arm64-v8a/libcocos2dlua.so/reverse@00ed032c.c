
/* cocos2d::EaseQuadraticActionInOut::reverse() const */

void __thiscall cocos2d::EaseQuadraticActionInOut::reverse(EaseQuadraticActionInOut *this)

{
  ActionInterval *pAVar1;
  
                    /* catch() { ... } // from try @ 00ed039c with catch @ 00ed0334 */
  pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  create(pAVar1);
  return;
}

