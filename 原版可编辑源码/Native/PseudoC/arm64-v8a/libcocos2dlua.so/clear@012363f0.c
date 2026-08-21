
/* btDbvt::clear() */

void __thiscall btDbvt::clear(btDbvt *this)

{
  if (*(long *)this != 0) {
    FUN_0123645c(this);
  }
  btAlignedFreeInternal(*(void **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (this[0x38] != (btDbvt)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x30));
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x38] = (btDbvt)0x1;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

