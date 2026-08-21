
/* cocos2d::EaseQuadraticActionInOut::clone() const */

void __thiscall cocos2d::EaseQuadraticActionInOut::clone(EaseQuadraticActionInOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed02a8 to 00fd02eb has its CatchHandler @ 00ed0184 */
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1);
    return;
  }
  return;
}

