
/* cocos2d::Sprite3DCache::Sprite3DData::~Sprite3DData() */

void __thiscall cocos2d::Sprite3DCache::Sprite3DData::~Sprite3DData(Sprite3DData *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  puVar3 = *(undefined8 **)(this + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar3;
    if (pvVar6 != (void *)0x0) {
      pvVar5 = (void *)puVar3[1];
      pvVar2 = pvVar6;
      if (pvVar5 != pvVar6) {
        do {
          pvVar5 = (void *)((long)pvVar5 + -0x30);
          FUN_0090b07c(puVar3 + 2,pvVar5);
        } while (pvVar6 != pvVar5);
        pvVar2 = (void *)*puVar3;
      }
      puVar3[1] = pvVar6;
      operator_delete(pvVar2);
    }
    operator_delete(puVar3);
  }
  puVar3 = *(undefined8 **)this;
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)this;
  }
  puVar4 = *(undefined8 **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x20);
  *(undefined8 **)(this + 8) = puVar3;
  if (puVar4 != puVar1) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x20) = puVar4;
    operator_delete(puVar4);
  }
  puVar3 = *(undefined8 **)this;
  puVar4 = *(undefined8 **)(this + 8);
  if (puVar3 != puVar4) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  *(undefined8 **)(this + 8) = puVar3;
  operator_delete(puVar3);
  return;
}

