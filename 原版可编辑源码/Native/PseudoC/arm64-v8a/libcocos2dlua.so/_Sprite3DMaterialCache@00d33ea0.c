
/* cocos2d::Sprite3DMaterialCache::~Sprite3DMaterialCache() */

void __thiscall cocos2d::Sprite3DMaterialCache::~Sprite3DMaterialCache(Sprite3DMaterialCache *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  removeAllSprite3DMaterial(this);
  puVar1 = *(void **)(this + 0x10);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d34000 with catch @ 00d33ec4
                        */
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

