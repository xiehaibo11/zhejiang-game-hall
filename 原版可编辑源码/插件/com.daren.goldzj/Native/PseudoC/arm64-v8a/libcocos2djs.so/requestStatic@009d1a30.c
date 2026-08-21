
/* cocos2d::renderer::MeshBuffer::requestStatic(unsigned int, unsigned int) */

MeshBuffer * __thiscall
cocos2d::renderer::MeshBuffer::requestStatic(MeshBuffer *this,uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  
  if (*(int *)(this + 0x2c) + param_1 >> 0x10 != 0) {
    VertexBuffer::update
              (*(VertexBuffer **)(this + 0x88),0,*(void **)this,(ulong)*(uint *)(this + 0x1c));
    IndexBuffer::update(*(IndexBuffer **)(this + 0x90),0,*(void **)(this + 8),
                        (ulong)(uint)(*(int *)(this + 0x24) << 1));
    this[0x44] = (MeshBuffer)0x0;
    ModelBatcher::flush(*(ModelBatcher **)(this + 0x48));
    switchBuffer((uint)this);
  }
  uVar6 = *(uint *)(this + 0x34);
  uVar7 = (ulong)uVar6;
  iVar2 = *(int *)(this + 0x24);
  uVar4 = *(int *)(this + 0x1c) + *(int *)(this + 0x30) * param_1;
  if (uVar6 * 4 < uVar4) {
    *(uint *)(this + 0x3c) = uVar6;
    do {
      uVar1 = uVar6 * 8;
      uVar6 = uVar6 << 1;
    } while (uVar1 < uVar4);
    pvVar8 = *(void **)this;
    *(uint *)(this + 0x34) = uVar6;
    pvVar5 = operator_new__((ulong)uVar6 << 2);
    *(void **)this = pvVar5;
    if (pvVar8 != (void *)0x0) {
      memcpy(pvVar5,pvVar8,uVar7 << 2);
      operator_delete__(pvVar8);
    }
  }
  uVar6 = *(uint *)(this + 0x38);
  if (uVar6 < iVar2 + param_2) {
    *(uint *)(this + 0x40) = uVar6;
    uVar7 = (ulong)uVar6;
    do {
      uVar1 = (int)uVar7 << 1;
      uVar7 = (ulong)uVar1;
    } while (uVar1 < iVar2 + param_2);
    pvVar8 = *(void **)(this + 8);
    *(uint *)(this + 0x38) = uVar1;
    pvVar5 = operator_new__(uVar7 << 1);
    *(void **)(this + 8) = pvVar5;
    if (pvVar8 != (void *)0x0) {
      memcpy(pvVar5,pvVar8,(ulong)uVar6 << 1);
      operator_delete__(pvVar8);
    }
  }
  uVar3 = *(undefined4 *)(this + 0x1c);
  *(uint *)(this + 0x1c) = uVar4;
  *(undefined4 *)(this + 0x98) = uVar3;
  *(int *)(this + 0x9c) = *(int *)(this + 0x24);
  *(int *)(this + 0xa0) = *(int *)(this + 0x2c);
  *(uint *)(this + 0x2c) = *(int *)(this + 0x2c) + param_1;
  *(uint *)(this + 0x24) = *(int *)(this + 0x24) + param_2;
  this[0x44] = (MeshBuffer)0x1;
  return this + 0x98;
}

