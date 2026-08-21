
/* btCollisionDispatcher::~btCollisionDispatcher() */

void __thiscall btCollisionDispatcher::~btCollisionDispatcher(btCollisionDispatcher *this)

{
  *(undefined ***)this = &PTR__btCollisionDispatcher_01731940;
  if (*(void **)(this + 0x20) != (void *)0x0) {
    if (this[0x28] != (btCollisionDispatcher)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x20));
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined8 *)(this + 0x20) = 0;
  this[0x28] = (btCollisionDispatcher)0x1;
  *(undefined8 *)(this + 0x14) = 0;
  btDispatcher::~btDispatcher((btDispatcher *)this);
  return;
}

