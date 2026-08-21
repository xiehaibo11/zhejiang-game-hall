
/* cocos2d::PUObserver::destroyAllEventHandlers() */

void __thiscall cocos2d::PUObserver::destroyAllEventHandlers(PUObserver *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x80);
                    /* try { // try from 00e4da90 to 00f4dad3 has its CatchHandler @ 00e4da90
                       catch() { ... } // from try @ 00e4da90 with catch @ 00e4da90
                       catch() { ... } // from try @ 00e4dad8 with catch @ 00e4da90 */
  if (puVar2 != *(undefined8 **)(this + 0x88)) {
    do {
      puVar1 = puVar2 + 1;
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar1;
    } while (puVar1 != *(undefined8 **)(this + 0x88));
    puVar2 = *(undefined8 **)(this + 0x80);
  }
  *(undefined8 **)(this + 0x88) = puVar2;
  return;
}

