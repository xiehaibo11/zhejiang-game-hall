
/* covariant return thunk to cocos2d::ShakyTiles3D::clone() const */

long __thiscall cocos2d::ShakyTiles3D::clone(ShakyTiles3D *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = create(*(float *)(this + 0x24),(Size *)(this + 0x30),*(int *)(this + 0x40),
                 (bool)this[0x44]);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x28;
  }
  return lVar1;
}

