
/* cocos2d::FontAtlas::reset() */

void __thiscall cocos2d::FontAtlas::reset(FontAtlas *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x38); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    Ref::release((Ref *)plVar4[3]);
  }
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = *(void **)(this + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
                    /* try { // try from 00efce68 to 00ffce73 has its CatchHandler @ 00efcf4c */
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
                    /* try { // try from 00efce9c to 00ffceaf has its CatchHandler @ 00efcf34 */
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  if (*(long *)(this + 0x68) != 0) {
    puVar1 = *(void **)(this + 0x60);
                    /* try { // try from 00efceb0 to 00ffcfbb has its CatchHandler @ 00efcc64 */
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 0x58);
    *(undefined8 *)(this + 0x60) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x50) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x68) = 0;
  }
  reinit(this);
  return;
}

