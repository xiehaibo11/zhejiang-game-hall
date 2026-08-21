
/* cocos2d::CatmullRomTo::reverse() const */

void __thiscall cocos2d::CatmullRomTo::reverse(CatmullRomTo *this)

{
  PointArray *pPVar1;
  
  pPVar1 = (PointArray *)PointArray::reverse(*(PointArray **)(this + 0x58));
  create(*(float *)(this + 0x4c),pPVar1);
  return;
}

