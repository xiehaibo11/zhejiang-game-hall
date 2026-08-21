
/* covariant return thunk to cocos2d::Ripple3D::clone() const */

long __thiscall cocos2d::Ripple3D::clone(Ripple3D *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00ed70dc to 00fd71ff has its CatchHandler @ 00ed6e68 */
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

