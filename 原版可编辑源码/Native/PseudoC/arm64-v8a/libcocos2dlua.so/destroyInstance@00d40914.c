
/* cocos2d::Sprite3DCache::destroyInstance() */

void cocos2d::Sprite3DCache::destroyInstance(void)

{
  undefined8 *puVar1;
  Sprite3DCache *pSVar2;
  void *pvVar3;
  
  pSVar2 = _cacheInstance;
  if (_cacheInstance != (Sprite3DCache *)0x0) {
    removeAllSprite3DData(_cacheInstance);
    puVar1 = *(void **)(pSVar2 + 0x10);
    while (puVar1 != (void *)0x0) {
      pvVar3 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar3;
    }
    pvVar3 = *(void **)pSVar2;
    *(undefined8 *)pSVar2 = 0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    operator_delete(pSVar2);
    _cacheInstance = (Sprite3DCache *)0x0;
  }
  return;
}

