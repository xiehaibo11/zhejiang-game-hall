
/* cocos2d::EaseCubicActionInOut::clone() const */

void __thiscall cocos2d::EaseCubicActionInOut::clone(EaseCubicActionInOut *this)

{
  ActionInterval *pAVar1;
  
                    /* try { // try from 00ed1324 to 00fd1343 has its CatchHandler @ 00ed141c */
  if (*(long **)(this + 0x58) != (long *)0x0) {
    pAVar1 = (ActionInterval *)(**(code **)(**(long **)(this + 0x58) + 0x18))();
    create(pAVar1);
    return;
  }
                    /* try { // try from 00ed1344 to 00fd13b7 has its CatchHandler @ 00ed12a8 */
  return;
}

