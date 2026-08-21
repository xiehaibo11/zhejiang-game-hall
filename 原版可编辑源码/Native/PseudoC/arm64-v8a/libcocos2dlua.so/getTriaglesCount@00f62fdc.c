
/* cocos2d::PolygonInfo::getTriaglesCount() const */

ulong __thiscall cocos2d::PolygonInfo::getTriaglesCount(PolygonInfo *this)

{
                    /* try { // try from 00f62ff0 to 01062ff7 has its CatchHandler @ 00f63020 */
  return (ulong)*(uint *)(this + 0x14) / 3;
}

