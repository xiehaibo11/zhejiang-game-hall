
/* covariant return thunk to cocos2d::Shaky3D::clone() const */

long __thiscall cocos2d::Shaky3D::clone(Shaky3D *this)

{
  long lVar1;
  long lVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed70bc with catch @ 00ed74c0
                        */
  lVar2 = clone(this + -0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed7200 with catch @ 00ed74cc
                        */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

