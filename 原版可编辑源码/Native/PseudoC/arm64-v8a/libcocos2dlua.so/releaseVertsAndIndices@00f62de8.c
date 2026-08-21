
/* cocos2d::PolygonInfo::releaseVertsAndIndices() */

void __thiscall cocos2d::PolygonInfo::releaseVertsAndIndices(PolygonInfo *this)

{
  if (this[0x18] != (PolygonInfo)0x0) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
      *(undefined8 *)this = 0;
    }
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  return;
}

