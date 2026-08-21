
/* dragonBones::CCSlot::_onClear() */

void __thiscall dragonBones::CCSlot::_onClear(CCSlot *this)

{
                    /* catch() { ... } // from try @ 00d9d9f4 with catch @ 00d9f3b4 */
  Slot::_onClear((Slot *)this);
  *(undefined4 *)(this + 0x188) = 0x3f800000;
  *(undefined8 *)(this + 400) = 0;
  return;
}

