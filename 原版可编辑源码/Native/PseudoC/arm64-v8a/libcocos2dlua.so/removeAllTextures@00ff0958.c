
/* cocos2d::TextureCache::removeAllTextures() */

void __thiscall cocos2d::TextureCache::removeAllTextures(TextureCache *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
                    /* try { // try from 00ff0960 to 010f09b7 has its CatchHandler @ 00ff0960
                       catch() { ... } // from try @ 00ff0960 with catch @ 00ff0960
                       catch() { ... } // from try @ 00ff09c0 with catch @ 00ff0960 */
  for (plVar4 = *(long **)(this + 0x158); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    Ref::release((Ref *)plVar4[5]);
  }
  if (*(long *)(this + 0x160) != 0) {
    puVar1 = *(void **)(this + 0x158);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
                    /* try { // try from 00ff09b8 to 010f09bf has its CatchHandler @ 00ff0a4c */
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
                    /* try { // try from 00ff09c0 to 010f0a67 has its CatchHandler @ 00ff0960 */
    lVar2 = *(long *)(this + 0x150);
    *(undefined8 *)(this + 0x158) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x148) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x160) = 0;
  }
  return;
}

