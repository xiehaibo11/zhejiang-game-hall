
/* cocos2d::PUSimpleSpline::getNumPoints() const */

int __thiscall cocos2d::PUSimpleSpline::getNumPoints(PUSimpleSpline *this)

{
  return (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 2) * -0x55555555;
}

