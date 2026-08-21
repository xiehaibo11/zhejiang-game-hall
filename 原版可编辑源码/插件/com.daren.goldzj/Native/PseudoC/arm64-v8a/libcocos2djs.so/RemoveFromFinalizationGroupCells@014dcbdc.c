
/* v8::internal::WeakCell::RemoveFromFinalizationGroupCells(v8::internal::Isolate*) */

void __thiscall
v8::internal::WeakCell::RemoveFromFinalizationGroupCells(WeakCell *this,Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  
  uVar9 = *(ulong *)(param_1 + 0xa0);
  *(int *)(*(long *)this + 7) = (int)uVar9;
  uVar4 = *(ulong *)this;
  if ((uVar9 & 1) != 0) {
    uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar4 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar5,uVar9);
      uVar4 = *(ulong *)this;
      uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar4 + 7;
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar5,uVar9);
      uVar4 = *(ulong *)this;
    }
  }
  uVar1 = *(uint *)(uVar4 + 3);
  uVar6 = uVar4 & 0xffffffff00000000;
  uVar9 = uVar6 | uVar1;
  puVar10 = (uint *)(uVar9 + 0x13);
  if ((*puVar10 == (uint)uVar4) || (puVar10 = (uint *)(uVar9 + 0x17), *puVar10 == (uint)uVar4)) {
    uVar2 = *(uint *)(uVar4 + 0x13);
    *puVar10 = uVar2;
    if ((uVar2 & 1) == 0) goto LAB_014dcd48;
    uVar4 = uVar6 | uVar2;
    uVar8 = uVar6 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar7 = *(ulong *)(uVar8 + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar10,uVar4);
      uVar7 = *(ulong *)(uVar8 | 8);
    }
    if ((uVar7 & 0x18) == 0) goto LAB_014dcd48;
    bVar3 = *(byte *)((uVar6 | (ulong)uVar1 & 0xfffffffffffc0000) + 8);
  }
  else {
    uVar1 = *(uint *)(uVar4 + 0xf);
    uVar2 = *(uint *)(uVar4 + 0x13);
    uVar9 = uVar6 | uVar1;
    *(uint *)(uVar9 + 0x13) = uVar2;
    if ((uVar2 & 1) == 0) goto LAB_014dcd48;
    uVar4 = uVar6 | uVar2;
    uVar8 = uVar6 | (ulong)uVar2 & 0xfffffffffffc0000;
    uVar7 = *(ulong *)(uVar8 + 8);
    puVar10 = (uint *)(uVar9 + 0x13);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,puVar10,uVar4);
      uVar7 = *(ulong *)(uVar8 | 8);
    }
    if ((uVar7 & 0x18) == 0) goto LAB_014dcd48;
    bVar3 = *(byte *)((uVar6 | (ulong)uVar1 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar3 & 0x18) == 0) {
    Heap_GenerationalBarrierSlow(uVar9,puVar10,uVar4);
  }
LAB_014dcd48:
  uVar9 = *(ulong *)this;
  uVar1 = *(uint *)(uVar9 + 0x13);
  uVar4 = uVar9 & 0xffffffff00000000;
  uVar6 = uVar4 | uVar1;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa8) {
    uVar2 = *(uint *)(uVar9 + 0xf);
    *(uint *)(uVar6 + 0xf) = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar8 = uVar4 | uVar2;
      uVar7 = uVar4 | (ulong)uVar2 & 0xfffffffffffc0000;
      uVar9 = *(ulong *)(uVar7 + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0xf,uVar8);
        uVar9 = *(ulong *)(uVar7 | 8);
      }
      if (((uVar9 & 0x18) != 0) &&
         ((*(byte *)((uVar4 | (ulong)uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0xf,uVar8);
      }
    }
  }
  uVar9 = *(ulong *)(param_1 + 0xa0);
  *(int *)(*(long *)this + 0xf) = (int)uVar9;
  uVar4 = *(ulong *)this;
  if ((uVar9 & 1) != 0) {
    uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar4 + 0xf;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar5,uVar9);
      uVar4 = *(ulong *)this;
      uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar4 + 0xf;
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar5,uVar9);
      uVar4 = *(ulong *)this;
    }
  }
  uVar9 = *(ulong *)(param_1 + 0xa0);
  *(int *)(uVar4 + 0x13) = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar4 = *(ulong *)this;
    uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar4 + 0x13;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar5,uVar9);
      uVar4 = *(ulong *)this;
      uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar4 + 0x13;
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar5,uVar9);
      return;
    }
  }
  return;
}

