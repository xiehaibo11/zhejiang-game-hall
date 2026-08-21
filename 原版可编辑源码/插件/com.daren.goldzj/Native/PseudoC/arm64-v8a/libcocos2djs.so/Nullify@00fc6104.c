
/* v8::internal::WeakCell::Nullify(v8::internal::Isolate*, std::__ndk1::function<void
   (v8::internal::HeapObject, v8::internal::CompressedObjectSlot, v8::internal::Object)>) */

void __thiscall v8::internal::WeakCell::Nullify(WeakCell *this,long param_1,long param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_78;
  uint *local_70;
  ulong local_68;
  
  uVar10 = *(ulong *)(param_1 + 0xa0);
  *(int *)(*(long *)this + 7) = (int)uVar10;
  uVar3 = *(ulong *)this;
  if ((uVar10 & 1) != 0) {
    uVar8 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar3 + 7;
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar5,uVar10);
      uVar3 = *(ulong *)this;
      uVar8 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar3 + 7;
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar5,uVar10);
      uVar3 = *(ulong *)this;
    }
  }
  uVar7 = *(uint *)(uVar3 + 0xf);
  uVar15 = uVar3 & 0xffffffff00000000;
  uVar10 = (ulong)*(uint *)(uVar3 + 3);
  uVar13 = uVar15 | uVar7;
  uVar8 = uVar15 | uVar10;
  uVar1 = *(uint *)(uVar3 + 0x13);
  uVar3 = (ulong)uVar1;
  uVar12 = uVar15 | uVar3;
  if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xa8) {
    puVar11 = (uint *)(uVar13 + 0x13);
    *(uint *)(uVar13 + 0x13) = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar9 = uVar15 | uVar3 & 0xfffffffffffc0000;
      uVar3 = *(ulong *)(uVar9 + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,puVar11,uVar12);
        uVar3 = *(ulong *)(uVar9 | 8);
      }
      if (((uVar3 & 0x18) != 0) &&
         ((*(byte *)((uVar15 | (ulong)uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,puVar11,uVar12);
      }
    }
    uVar3 = *(ulong *)this;
    uVar7 = *(uint *)(uVar3 + 0x13);
    local_70 = puVar11;
    local_68 = uVar13;
  }
  else {
    puVar11 = (uint *)(uVar8 + 0x13);
    *(uint *)(uVar8 + 0x13) = uVar1;
    if ((uVar1 & 1) != 0) {
      uVar13 = uVar15 | uVar3 & 0xfffffffffffc0000;
      uVar3 = *(ulong *)(uVar13 + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,puVar11,uVar12);
        uVar3 = *(ulong *)(uVar13 | 8);
      }
      if (((uVar3 & 0x18) != 0) &&
         ((*(byte *)((uVar15 | uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,puVar11,uVar12);
      }
    }
    uVar3 = *(ulong *)this;
    uVar7 = *(uint *)(uVar3 + 0x13);
    local_70 = puVar11;
    local_68 = uVar8;
  }
  local_78 = uVar3 & 0xffffffff00000000 | (ulong)uVar7;
  plVar4 = *(long **)(param_3 + 0x20);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_68,&local_70,&local_78);
    uVar3 = *(ulong *)this;
    uVar7 = *(uint *)(uVar3 + 0x13);
    uVar12 = uVar3 & 0xffffffff00000000;
    uVar13 = uVar12 | uVar7;
    if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xa8) {
      uVar1 = *(uint *)(uVar3 + 0xf);
      puVar11 = (uint *)(uVar13 + 0xf);
      *(uint *)(uVar13 + 0xf) = uVar1;
      if ((uVar1 & 1) != 0) {
        uVar14 = uVar12 | uVar1;
        uVar9 = uVar12 | (ulong)uVar1 & 0xfffffffffffc0000;
        uVar3 = *(ulong *)(uVar9 + 8);
        if (((uint)uVar3 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar13,puVar11,uVar14);
          uVar3 = *(ulong *)(uVar9 | 8);
        }
        if (((uVar3 & 0x18) != 0) &&
           ((*(byte *)((uVar12 | (ulong)uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar13,puVar11,uVar14);
        }
      }
      local_78 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
      plVar4 = *(long **)(param_3 + 0x20);
      local_70 = puVar11;
      local_68 = uVar13;
      if (plVar4 == (long *)0x0) goto LAB_00fc65dc;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_68,&local_70,&local_78);
      uVar3 = *(ulong *)this;
    }
    uVar12 = *(ulong *)(param_1 + 0xa0);
    *(int *)(uVar3 + 0xf) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar3 = *(ulong *)this;
      uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      lVar5 = uVar3 + 0xf;
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar3,lVar5,uVar12);
        uVar3 = *(ulong *)this;
        uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        lVar5 = uVar3 + 0xf;
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar3,lVar5,uVar12);
      }
    }
    puVar11 = (uint *)(uVar8 + 0x17);
    uVar7 = *puVar11;
    uVar3 = uVar15 | uVar7;
    if ((uVar7 & 1) == 0) {
      bVar2 = true;
    }
    else if (*(short *)((uVar15 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0xa8) {
      uVar12 = *(ulong *)this;
      puVar6 = (uint *)(uVar3 + 0xf);
      *(int *)(uVar3 + 0xf) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar13 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar3,puVar6,uVar12);
          uVar13 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) &&
           ((*(byte *)((uVar15 | (ulong)uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar3,puVar6,uVar12);
        }
      }
      local_78 = *(ulong *)this;
      plVar4 = *(long **)(param_3 + 0x20);
      local_70 = puVar6;
      local_68 = uVar3;
      if (plVar4 == (long *)0x0) goto LAB_00fc65dc;
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_68,&local_70,&local_78);
      uVar7 = *puVar11;
      bVar2 = (uVar7 & 1) == 0;
      uVar3 = uVar15 | uVar7;
    }
    else {
      bVar2 = false;
    }
    *(uint *)(*(long *)this + 0x13) = uVar7;
    uVar12 = *(ulong *)this;
    puVar6 = (uint *)(uVar12 + 0x13);
    if (!bVar2) {
      uVar13 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar13 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,puVar6,uVar3);
        uVar12 = *(ulong *)this;
        uVar13 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        puVar6 = (uint *)(uVar12 + 0x13);
      }
      if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar12,puVar6,uVar3);
        uVar12 = *(ulong *)this;
        puVar6 = (uint *)(uVar12 + 0x13);
      }
    }
    local_78 = uVar12 & 0xffffffff00000000 | (ulong)*puVar6;
    plVar4 = *(long **)(param_3 + 0x20);
    local_70 = puVar6;
    local_68 = uVar12;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_68,&local_70,&local_78);
      uVar3 = *(ulong *)this;
      *puVar11 = (uint)uVar3;
      if ((uVar3 & 1) != 0) {
        uVar12 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar11,uVar3);
          uVar12 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) &&
           ((*(byte *)((uVar15 | uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar11,uVar3);
        }
      }
      local_78 = *(ulong *)this;
      plVar4 = *(long **)(param_3 + 0x20);
      local_70 = puVar11;
      local_68 = uVar8;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_68,&local_70,&local_78);
        return;
      }
    }
  }
LAB_00fc65dc:
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

