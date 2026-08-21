
/* cocos2d::PolygonInfo::~PolygonInfo() */

void __thiscall cocos2d::PolygonInfo::~PolygonInfo(PolygonInfo *this)

{
  if (this[0x18] != (PolygonInfo)0x0) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
                    /* catch() { ... } // from try @ 00f62b08 with catch @ 00f62e50 */
      *(undefined8 *)this = 0;
    }
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  if (((byte)this[0x30] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x40));
  return;
}

