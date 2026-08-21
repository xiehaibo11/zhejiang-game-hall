
/* covariant return thunk to cocos2d::ResizeBy::clone() const */

long __thiscall cocos2d::ResizeBy::clone(ResizeBy *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = clone(this + -0x28);
                    /* try { // try from 00ee0afc to 00fe0b03 has its CatchHandler @ 00ee0b48 */
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
                    /* try { // try from 00ee0b04 to 00fe0b63 has its CatchHandler @ 00ee0ad8 */
  return lVar1;
}

