
/* cocos2d::FileUtils::purgeCachedEntries() */

void __thiscall cocos2d::FileUtils::purgeCachedEntries(FileUtils *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0xa8) != 0) {
    puVar1 = *(void **)(this + 0xa0);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 5) & 1) != 0) {
        operator_delete((void *)puVar1[7]);
      }
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x98);
    *(undefined8 *)(this + 0xa0) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x90) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0xa8) = 0;
  }
  return;
}

