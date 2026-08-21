
/* cocos2d::renderer::MeshBuffer::~MeshBuffer() */

void __thiscall cocos2d::renderer::MeshBuffer::~MeshBuffer(MeshBuffer *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  MeshBuffer *pMVar4;
  ulong uVar5;
  MeshBuffer *pMVar6;
  undefined8 *puVar7;
  
  pMVar4 = this + 0x58;
  puVar7 = *(undefined8 **)pMVar4;
  puVar2 = *(undefined8 **)(this + 0x60);
  lVar1 = (long)puVar2 - (long)puVar7;
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      VertexBuffer::destroy((VertexBuffer *)puVar7[uVar5]);
      puVar7 = *(undefined8 **)pMVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar1 >> 3));
    puVar2 = *(undefined8 **)(this + 0x60);
  }
  if (puVar7 != puVar2) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined8 **)(this + 0x60));
    puVar7 = *(undefined8 **)pMVar4;
  }
  pMVar6 = this + 0x70;
  puVar2 = *(undefined8 **)pMVar6;
  puVar3 = *(undefined8 **)(this + 0x78);
  *(undefined8 **)(this + 0x60) = puVar7;
  lVar1 = (long)puVar3 - (long)puVar2;
  if (lVar1 != 0) {
    uVar5 = 0;
    do {
      IndexBuffer::destroy((IndexBuffer *)puVar2[uVar5]);
      puVar2 = *(undefined8 **)pMVar6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar1 >> 3));
    puVar3 = *(undefined8 **)(this + 0x78);
  }
  if (puVar2 != puVar3) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(this + 0x78));
    puVar2 = *(undefined8 **)pMVar6;
  }
  *(undefined8 **)(this + 0x78) = puVar2;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    *(undefined8 *)this = 0;
  }
  puVar7 = *(undefined8 **)(this + 0x70);
  if (puVar7 != *(undefined8 **)(this + 0x78)) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined8 **)(this + 0x78));
    puVar7 = *(undefined8 **)pMVar6;
  }
  *(undefined8 **)(this + 0x78) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x78) = puVar7;
    operator_delete(puVar7);
  }
  puVar7 = *(undefined8 **)(this + 0x58);
  if (puVar7 != *(undefined8 **)(this + 0x60)) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar7 != *(undefined8 **)(this + 0x60));
    puVar7 = *(undefined8 **)pMVar4;
  }
  *(undefined8 **)(this + 0x60) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x60) = puVar7;
    operator_delete(puVar7);
    return;
  }
  return;
}

