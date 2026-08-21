
/* cocos2d::FileUtils::purgeCachedEntries() */

void __thiscall cocos2d::FileUtils::purgeCachedEntries(FileUtils *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  if (*(long *)(this + 0xd0) != 0) {
    puVar1 = *(void **)(this + 200);
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
    lVar2 = *(long *)(this + 0xc0);
    *(undefined8 *)(this + 200) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xb8) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0xd0) = 0;
  }
  if (*(long *)(this + 0xf8) != 0) {
    puVar1 = *(void **)(this + 0xf0);
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
    lVar2 = *(long *)(this + 0xe8);
    *(undefined8 *)(this + 0xf0) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xe0) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0xf8) = 0;
  }
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  return;
}

