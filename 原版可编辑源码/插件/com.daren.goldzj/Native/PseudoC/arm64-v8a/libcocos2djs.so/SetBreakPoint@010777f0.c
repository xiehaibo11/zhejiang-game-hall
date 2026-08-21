
/* v8::internal::DebugInfo::SetBreakPoint(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DebugInfo>, int,
   v8::internal::Handle<v8::internal::BreakPoint>) */

void v8::internal::DebugInfo::SetBreakPoint
               (Isolate *param_1,ulong *param_2,int param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  
  uVar6 = *param_2 & 0xffffffff00000000;
  uVar8 = uVar6 | *(uint *)(*param_2 + 0x17);
  uVar2 = *(uint *)(uVar8 + 3);
  pIVar1 = param_1 + 0x95a0;
  if (1 < (int)uVar2) {
    iVar9 = 0;
    uVar7 = 0;
    lVar10 = uVar8 + 7;
    do {
      uVar3 = *(uint *)(lVar10 + iVar9);
      if ((((uVar3 & 1) == 0) || (uVar3 != *(uint *)(param_1 + 0xa0))) &&
         (uVar8 = uVar6 | *(uint *)(iVar9 + lVar10), param_3 == *(int *)(uVar8 + 3) >> 1))
      goto LAB_0107789c;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar7 < uVar2 >> 1);
  }
  uVar8 = *(ulong *)(param_1 + 0xa0);
LAB_0107789c:
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  if (((uVar8 & 1) == 0) || ((uint)uVar8 != *(uint *)(param_1 + 0xa0))) {
    BreakPointInfo::SetBreakPoint(param_1,puVar4,param_4);
    return;
  }
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  puVar13 = (uint *)(uVar6 + 3);
  if (1 < (int)*puVar13) {
    iVar9 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(uint *)(uVar6 + (long)iVar9 + 7);
      if (((uVar2 & 1) != 0) && (uVar2 == (uint)uVar8)) goto LAB_01077aec;
      uVar7 = uVar7 + 1;
      iVar9 = iVar9 + 4;
    } while ((long)uVar7 < (long)((ulong)*puVar13 << 0x20) >> 0x21);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    puVar13 = (uint *)(*puVar4 + 3);
  }
  puVar5 = (ulong *)Factory::NewFixedArray((Factory *)param_1,((int)*puVar13 >> 1) + 4,0);
  uVar8 = *param_2;
  uVar6 = *puVar5;
  *(int *)(uVar8 + 0x17) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x17,uVar6);
      uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x17,uVar6);
    }
  }
  uVar6 = *puVar4;
  if (*(int *)(uVar6 + 3) < 2) {
    uVar7 = (ulong)(uint)(*(int *)(uVar6 + 3) >> 1);
  }
  else {
    iVar9 = 0;
    lVar10 = 0;
    do {
      uVar8 = *puVar5;
      uVar2 = *(uint *)((long)iVar9 + 7 + uVar6);
      puVar13 = (uint *)(uVar8 + (long)iVar9 + 7);
      *puVar13 = uVar2;
      if ((uVar2 & 1) != 0) {
        uVar11 = uVar6 & 0xffffffff00000000 | (ulong)uVar2;
        uVar7 = uVar6 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
        uVar6 = *(ulong *)(uVar7 + 8);
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar8,puVar13,uVar11);
          uVar6 = *(ulong *)(uVar7 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,puVar13,uVar11);
        }
      }
      uVar6 = *puVar4;
      lVar10 = lVar10 + 1;
      iVar9 = iVar9 + 4;
      uVar2 = *(int *)(uVar6 + 3) >> 1;
      uVar7 = (ulong)uVar2;
    } while (lVar10 < (int)uVar2);
  }
LAB_01077aec:
  puVar4 = (ulong *)Factory::NewBreakPointInfo((Factory *)param_1,param_3);
  BreakPointInfo::SetBreakPoint(param_1,puVar4,param_4);
  uVar11 = *puVar4;
  uVar8 = (ulong)*(uint *)(*param_2 + 0x17);
  uVar6 = *param_2 & 0xffffffff00000000;
  uVar12 = uVar6 | uVar8;
  lVar10 = uVar12 + (long)((int)uVar7 << 2);
  *(int *)(lVar10 + 7) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar7 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    lVar10 = lVar10 + 7;
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,lVar10,uVar11);
      uVar7 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 | uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      Heap_GenerationalBarrierSlow(uVar12,lVar10,uVar11);
      return;
    }
  }
  return;
}

