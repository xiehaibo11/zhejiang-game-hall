
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::TMXMapInfo::~TMXMapInfo() */

void __thiscall cocos2d::TMXMapInfo::~TMXMapInfo(TMXMapInfo *this)

{
  TMXMapInfo TVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR__TMXMapInfo_01711d40;
  *(undefined ***)(this + 0x28) = &PTR__TMXMapInfo_01711d78;
  if (((byte)this[0x168] & 1) == 0) {
    TVar1 = this[0x150];
  }
  else {
    operator_delete(*(void **)(this + 0x178));
    TVar1 = this[0x150];
  }
  if (((byte)TVar1 & 1) == 0) {
    puVar2 = *(void **)(this + 0x130);
  }
  else {
    operator_delete(*(void **)(this + 0x160));
    puVar2 = *(void **)(this + 0x130);
  }
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    cocos2d::Value::~Value((Value *)(puVar2 + 3));
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x120);
  *(undefined8 *)(this + 0x120) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (((byte)this[0x108] & 1) == 0) {
    TVar1 = this[0xf0];
  }
  else {
    operator_delete(*(void **)(this + 0x118));
    TVar1 = this[0xf0];
  }
  if (((byte)TVar1 & 1) == 0) {
    TVar1 = this[0xd8];
  }
  else {
    operator_delete(*(void **)(this + 0x100));
    TVar1 = this[0xd8];
  }
  if (((byte)TVar1 & 1) == 0) {
    puVar2 = *(undefined8 **)(this + 0xb8);
  }
  else {
    operator_delete(*(void **)(this + 0xe8));
    puVar2 = *(undefined8 **)(this + 0xb8);
  }
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    cocos2d::Value::~Value((Value *)(puVar2 + 5));
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar2 = *(undefined8 **)(this + 0x80);
  puVar4 = *(undefined8 **)(this + 0x88);
  if (puVar2 != puVar4) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar4 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x80);
  }
  *(undefined8 **)(this + 0x88) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x88) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x68);
  puVar4 = *(undefined8 **)(this + 0x70);
  if (puVar2 != puVar4) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar4 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x68);
  }
  *(undefined8 **)(this + 0x70) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x70) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x50);
  puVar4 = *(undefined8 **)(this + 0x58);
  if (puVar2 != puVar4) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar4 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x50);
  }
  *(undefined8 **)(this + 0x58) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x58) = puVar2;
    operator_delete(puVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

