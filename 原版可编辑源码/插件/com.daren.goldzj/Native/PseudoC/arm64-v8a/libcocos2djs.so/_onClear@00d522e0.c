
/* dragonBones::CCSlot::_onClear() */

void __thiscall dragonBones::CCSlot::_onClear(CCSlot *this)

{
  Slot::_onClear((Slot *)this);
  if (*(long *)(this + 0x1e8) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x1e8) + -8));
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  if (*(long *)(this + 0x1d0) != 0) {
    operator_delete__((void *)(*(long *)(this + 0x1d0) + -8));
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  if (*(void **)(this + 0x1d8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1d8));
    *(undefined8 *)(this + 0x1d8) = 0;
  }
  *(undefined8 *)(this + 0x1e0) = 0;
  cocos2d::Mat4::setIdentity((Mat4 *)(this + 0x204));
  cocos2d::Mat4::setIdentity((Mat4 *)(this + 0x188));
  this[0x1c8] = (CCSlot)0x1;
  return;
}

