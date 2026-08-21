
/* covariant return thunk to cocos2d::EaseSineIn::clone() const */

long __thiscall cocos2d::EaseSineIn::clone(EaseSineIn *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 00ecf3c0 to 00fcf3cf has its CatchHandler @ 00ecf4c8 */
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
                    /* try { // try from 00ecf3d8 to 00fcf3e3 has its CatchHandler @ 00ecf498 */
  return lVar1;
}

