
/* cocos2d::AutoPolygon::~AutoPolygon() */

void __thiscall cocos2d::AutoPolygon::~AutoPolygon(AutoPolygon *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  if (((byte)this[0x10] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x20));
  return;
}

