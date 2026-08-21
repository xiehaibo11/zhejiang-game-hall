
/* cocos2d::PointArray::count() const */

long __thiscall cocos2d::PointArray::count(PointArray *this)

{
  return *(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3;
}

