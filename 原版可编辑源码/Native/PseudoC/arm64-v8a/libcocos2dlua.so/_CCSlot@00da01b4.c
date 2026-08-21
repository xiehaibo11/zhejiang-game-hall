
/* dragonBones::CCSlot::~CCSlot() */

void __thiscall dragonBones::CCSlot::~CCSlot(CCSlot *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__CCSlot_016d7ec0;
  Slot::_onClear((Slot *)this);
  *(undefined4 *)(this + 0x188) = 0x3f800000;
  *(undefined8 *)(this + 400) = 0;
  pvVar1 = *(void **)(this + 0x140);
  *(undefined ***)this = &PTR__Slot_016d6888;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x148) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x128);
                    /* try { // try from 00da0208 to 00ea0223 has its CatchHandler @ 00da0600 */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[0x78] & 1) == 0) {
    return;
  }
                    /* try { // try from 00da0228 to 00ea0237 has its CatchHandler @ 00da0604 */
  operator_delete(*(void **)(this + 0x88));
  return;
}

