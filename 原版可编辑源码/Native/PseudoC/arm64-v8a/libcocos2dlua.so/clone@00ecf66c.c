
/* covariant return thunk to cocos2d::EaseSineInOut::clone() const */

long __thiscall cocos2d::EaseSineInOut::clone(EaseSineInOut *this)

{
  long lVar1;
  ActionInterval *pAVar2;
  long lVar3;
  
                    /* try { // try from 00ecf66c to 00fcf6a3 has its CatchHandler @ 00ecf66c
                       catch() { ... } // from try @ 00ecf66c with catch @ 00ecf66c
                       catch() { ... } // from try @ 00ecf6b0 with catch @ 00ecf66c */
  lVar3 = 0;
  if (*(long **)(this + 0x30) != (long *)0x0) {
    pAVar2 = (ActionInterval *)(**(code **)(**(long **)(this + 0x30) + 0x18))();
    lVar3 = create(pAVar2);
  }
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x28;
  }
  return lVar1;
}

