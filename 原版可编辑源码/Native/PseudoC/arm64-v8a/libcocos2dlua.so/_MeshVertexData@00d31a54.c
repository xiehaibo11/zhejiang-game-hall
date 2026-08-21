
/* cocos2d::MeshVertexData::~MeshVertexData() */

void __thiscall cocos2d::MeshVertexData::~MeshVertexData(MeshVertexData *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  MeshVertexData *pMVar3;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR__MeshVertexData_016d35c0;
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x28));
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  pMVar3 = this + 0x38;
  puVar2 = *(undefined8 **)pMVar3;
  puVar4 = *(undefined8 **)(this + 0x40);
  if (puVar2 != puVar4) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar4 != puVar2);
    puVar2 = *(undefined8 **)pMVar3;
  }
  pvVar1 = *(void **)(this + 0x50);
  *(undefined8 **)(this + 0x40) = puVar2;
  puVar4 = puVar2;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar1;
    operator_delete(pvVar1);
    puVar4 = *(undefined8 **)(this + 0x38);
    puVar2 = *(undefined8 **)(this + 0x40);
  }
  if (puVar4 != puVar2) {
    do {
      Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)pMVar3;
    puVar4 = puVar2;
  }
  *(undefined8 **)(this + 0x40) = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x40) = puVar2;
    operator_delete(puVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

