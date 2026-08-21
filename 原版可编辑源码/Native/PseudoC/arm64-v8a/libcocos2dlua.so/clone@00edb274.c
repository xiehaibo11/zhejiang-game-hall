
/* covariant return thunk to cocos2d::__CCCallFuncND::clone() const */

long __thiscall cocos2d::__CCCallFuncND::clone(__CCCallFuncND *this)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00edaf1c with catch @ 00edb274
                       catch() { ... } // from try @ 00edb1cc with catch @ 00edb274 */
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

