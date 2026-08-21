
/* cocos2d::PolygonInfo::getTrianglesCount() const */

ulong __thiscall cocos2d::PolygonInfo::getTrianglesCount(PolygonInfo *this)

{
                    /* catch() { ... } // from try @ 00f62ff8 with catch @ 00f62fcc */
  return (ulong)*(uint *)(this + 0x14) / 3;
}

