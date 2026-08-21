
/* cocos2d::ObjectFactory::~ObjectFactory() */

void __thiscall cocos2d::ObjectFactory::~ObjectFactory(ObjectFactory *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__ObjectFactory_017239c0;
  if (*(long *)(this + 0x20) != 0) {
    puVar1 = *(void **)(this + 0x18);
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      TInfo::~TInfo((TInfo *)(puVar1 + 6));
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    lVar3 = *(long *)(this + 0x10);
    *(undefined8 *)(this + 0x18) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 8) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    TInfo::~TInfo((TInfo *)(puVar1 + 6));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}

