
/* cocos2d::PUObserver::~PUObserver() */

void __thiscall cocos2d::PUObserver::~PUObserver(PUObserver *this)

{
  undefined8 *puVar1;
  
  *(undefined ***)this = &PTR__PUObserver_016f24a0;
  puVar1 = *(undefined8 **)(this + 0x80);
  if (puVar1 != *(undefined8 **)(this + 0x88)) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 0x88));
    puVar1 = *(undefined8 **)(this + 0x80);
  }
  *(undefined8 **)(this + 0x88) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x88) = puVar1;
    operator_delete(puVar1);
  }
                    /* catch() { ... } // from try @ 00e4d9a0 with catch @ 00e4da20 */
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
                    /* catch() { ... } // from try @ 00e4d970 with catch @ 00e4da30 */
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Ref::~Ref((Ref *)this);
  return;
}

