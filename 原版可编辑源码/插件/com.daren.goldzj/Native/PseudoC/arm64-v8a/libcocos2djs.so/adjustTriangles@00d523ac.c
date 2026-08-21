
/* dragonBones::CCSlot::adjustTriangles(unsigned int, unsigned int) */

void __thiscall dragonBones::CCSlot::adjustTriangles(CCSlot *this,uint param_1,uint param_2)

{
  ulong uVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong *puVar5;
  
  uVar4 = (ulong)param_1;
  if (*(uint *)(this + 0x1e0) < param_1) {
    if (*(long *)(this + 0x1d0) != 0) {
      operator_delete__((void *)(*(long *)(this + 0x1d0) + -8));
    }
    uVar1 = uVar4 * 0x14 + 8;
    puVar2 = operator_new__(uVar1);
    puVar5 = puVar2 + 1;
    *puVar2 = uVar4;
    puVar2 = puVar5;
    do {
      *puVar2 = 0;
      cocos2d::Color4B::Color4B((Color4B *)(puVar2 + 2));
      puVar2 = (ulong *)((long)puVar2 + 0x14);
    } while (puVar2 != (ulong *)((long)puVar5 + uVar4 * 0x14));
    *(ulong **)(this + 0x1d0) = puVar5;
    if (*(long *)(this + 0x1e8) != 0) {
      operator_delete__((void *)(*(long *)(this + 0x1e8) + -8));
    }
    puVar2 = operator_new__(uVar1);
    puVar5 = puVar2 + 1;
    *puVar2 = uVar4;
    puVar2 = puVar5;
    do {
      *puVar2 = 0;
      cocos2d::Color4B::Color4B((Color4B *)(puVar2 + 2));
      puVar2 = (ulong *)((long)puVar2 + 0x14);
    } while (puVar2 != (ulong *)((long)puVar5 + uVar4 * 0x14));
    *(ulong **)(this + 0x1e8) = puVar5;
  }
  *(uint *)(this + 0x1e0) = param_1;
  if (*(uint *)(this + 0x1e4) < param_2) {
    if (*(void **)(this + 0x1d8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x1d8));
    }
    pvVar3 = operator_new__((ulong)param_2 << 1);
    *(void **)(this + 0x1d8) = pvVar3;
  }
  *(uint *)(this + 0x1e4) = param_2;
  return;
}

