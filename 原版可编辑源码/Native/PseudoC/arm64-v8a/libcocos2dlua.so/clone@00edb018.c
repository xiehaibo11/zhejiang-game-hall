
/* covariant return thunk to cocos2d::CallFuncN::clone() const */

long __thiscall cocos2d::CallFuncN::clone(CallFuncN *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00edb018 to 00fdb023 has its CatchHandler @ 00edb21c */
  lVar2 = clone(this + -0x28);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

