
/* cocos2d::PUDynamicAttributeCurved::getNumControlPoints() const */

long __thiscall
cocos2d::PUDynamicAttributeCurved::getNumControlPoints(PUDynamicAttributeCurved *this)

{
  return *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 3;
}

