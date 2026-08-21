
/* covariant return thunk to cocos2d::TintTo::clone() const */

long __thiscall cocos2d::TintTo::clone(TintTo *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),(uchar)this[0x2e],(uchar)this[0x2f],(uchar)this[0x30]);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

