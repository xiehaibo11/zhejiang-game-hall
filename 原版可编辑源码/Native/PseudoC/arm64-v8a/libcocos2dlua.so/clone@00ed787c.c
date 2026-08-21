
/* covariant return thunk to cocos2d::Liquid::clone() const */

long __thiscall cocos2d::Liquid::clone(Liquid *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
                    /* try { // try from 00ed788c to 00fd795f has its CatchHandler @ 00ed788c
                       catch() { ... } // from try @ 00ed788c with catch @ 00ed788c
                       catch() { ... } // from try @ 00ed7c0c with catch @ 00ed788c
                       catch() { ... } // from try @ 00ed7d78 with catch @ 00ed788c
                       catch() { ... } // from try @ 00ed85b0 with catch @ 00ed788c */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

