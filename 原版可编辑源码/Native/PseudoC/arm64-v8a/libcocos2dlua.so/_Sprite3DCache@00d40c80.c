
/* cocos2d::Sprite3DCache::~Sprite3DCache() */

void __thiscall cocos2d::Sprite3DCache::~Sprite3DCache(Sprite3DCache *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  removeAllSprite3DData(this);
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this;
  *(undefined8 *)this = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}

