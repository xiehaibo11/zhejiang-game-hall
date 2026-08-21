
/* v8::internal::BreakPointInfo::SetBreakPoint(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BreakPointInfo>,
   v8::internal::Handle<v8::internal::BreakPoint>) */

void v8::internal::BreakPointInfo::SetBreakPoint(Isolate *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  
  uVar8 = *param_2;
  puVar9 = (uint *)(uVar8 + 7);
  uVar2 = *puVar9;
  if (((uVar2 & 1) != 0) && (uVar2 == *(uint *)(param_1 + 0xa0))) {
    uVar7 = *param_3;
    *puVar9 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar9,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar5 & 0x18) == 0) {
      return;
    }
    if ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
      return;
    }
    goto LAB_01077f58;
  }
  if (uVar2 == (uint)*param_3) {
    return;
  }
  if (((uVar2 & 1) == 0) ||
     (uVar7 = uVar8 & 0xffffffff00000000 | (ulong)uVar2,
     0xe < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) - 0x76)) {
    puVar4 = (ulong *)Factory::NewFixedArray((Factory *)param_1,2,0);
    uVar8 = *param_2;
    uVar7 = *puVar4;
    uVar2 = *(uint *)(uVar8 + 7);
    *(uint *)(uVar7 + 7) = uVar2;
    if ((uVar2 & 1) != 0) {
      uVar8 = uVar8 & 0xffffffff00000000;
      uVar10 = uVar8 | uVar2;
      uVar8 = uVar8 | (ulong)uVar2 & 0xfffffffffffc0000;
      uVar5 = *(ulong *)(uVar8 + 8);
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar10);
        uVar5 = *(ulong *)(uVar8 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar10);
      }
    }
    uVar8 = *puVar4;
    uVar7 = *param_3;
    *(int *)(uVar8 + 0xb) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar12 = uVar8 + 0xb;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,lVar12,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      goto joined_r0x01077d64;
    }
  }
  else {
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_1 + 0x95a0);
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar7;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      uVar7 = *puVar3;
    }
    puVar4 = (ulong *)Factory::NewFixedArray((Factory *)param_1,(*(int *)(uVar7 + 3) >> 1) + 1,0);
    uVar8 = *puVar3;
    if (*(int *)(uVar8 + 3) < 2) {
      iVar6 = *(int *)(uVar8 + 3) >> 1;
    }
    else {
      iVar11 = 0;
      lVar12 = 0;
      do {
        lVar1 = (long)iVar11 + 7;
        uVar7 = uVar8 & 0xffffffff00000000;
        if ((*(uint *)(*param_3 + 3) ^ *(uint *)((uVar7 | *(uint *)(lVar1 + uVar8)) + 3)) < 2) {
          return;
        }
        uVar5 = *puVar4;
        uVar2 = *(uint *)(uVar8 + lVar1);
        puVar9 = (uint *)(uVar5 + lVar1);
        *puVar9 = uVar2;
        if ((uVar2 & 1) != 0) {
          uVar10 = uVar7 | uVar2;
          uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
          uVar8 = *(ulong *)(uVar7 + 8);
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar5,puVar9,uVar10);
            uVar8 = *(ulong *)(uVar7 | 8);
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar5,puVar9,uVar10);
          }
        }
        uVar8 = *puVar3;
        lVar12 = lVar12 + 1;
        iVar11 = iVar11 + 4;
        iVar6 = *(int *)(uVar8 + 3) >> 1;
      } while (lVar12 < iVar6);
    }
    uVar8 = *puVar4;
    uVar7 = *param_3;
    lVar12 = uVar8 + (long)(iVar6 << 2);
    *(int *)(lVar12 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar12 = lVar12 + 7;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar8,lVar12,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
joined_r0x01077d64:
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar8,lVar12,uVar7);
      }
    }
  }
  uVar8 = *param_2;
  uVar7 = *puVar4;
  *(int *)(uVar8 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    puVar9 = (uint *)(uVar8 + 7);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,puVar9,uVar7);
      uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
LAB_01077f58:
      Heap_GenerationalBarrierSlow(uVar8,puVar9,uVar7);
      return;
    }
  }
  return;
}

