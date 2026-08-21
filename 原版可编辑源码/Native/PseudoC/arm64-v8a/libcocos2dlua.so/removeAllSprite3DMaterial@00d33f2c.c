
/* cocos2d::Sprite3DMaterialCache::removeAllSprite3DMaterial() */

void __thiscall
cocos2d::Sprite3DMaterialCache::removeAllSprite3DMaterial(Sprite3DMaterialCache *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
                    /* try { // try from 00d33f38 to 00e33f3b has its CatchHandler @ 00d340c0 */
  for (plVar4 = *(long **)(this + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if ((Ref *)plVar4[5] != (Ref *)0x0) {
      Ref::release((Ref *)plVar4[5]);
      plVar4[5] = 0;
    }
  }
  if (*(long *)(this + 0x18) != 0) {
    puVar1 = *(void **)(this + 0x10);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 8);
    *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00d33fa8 to 00e33fab has its CatchHandler @ 00d340bc */
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
                    /* try { // try from 00d33fc8 to 00e33fcb has its CatchHandler @ 00d340dc */
  return;
}

