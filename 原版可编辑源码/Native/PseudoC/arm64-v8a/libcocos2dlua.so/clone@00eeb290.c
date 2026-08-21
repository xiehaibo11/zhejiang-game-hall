
/* covariant return thunk to cocos2d::SplitCols::clone() const */

long __thiscall cocos2d::SplitCols::clone(SplitCols *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),*(uint *)(this + 0x40));
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

