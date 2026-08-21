
/* cocos2d::Sprite3DCache::removeAllSprite3DData() */

void __thiscall cocos2d::Sprite3DCache::removeAllSprite3DData(Sprite3DCache *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  Sprite3DData *this_00;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    this_00 = (Sprite3DData *)plVar4[5];
    if (this_00 != (Sprite3DData *)0x0) {
      Sprite3DData::~Sprite3DData(this_00);
      operator_delete(this_00);
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
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)this + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

