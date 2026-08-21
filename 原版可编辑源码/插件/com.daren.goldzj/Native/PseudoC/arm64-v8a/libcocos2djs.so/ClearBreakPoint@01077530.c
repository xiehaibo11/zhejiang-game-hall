
/* v8::internal::BreakPointInfo::ClearBreakPoint(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BreakPointInfo>,
   v8::internal::Handle<v8::internal::BreakPoint>) */

void v8::internal::BreakPointInfo::ClearBreakPoint(Isolate *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  
  uVar5 = *param_2;
  puVar6 = (uint *)(uVar5 + 7);
  uVar2 = *puVar6;
  uVar8 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    if (uVar2 == *(uint *)(param_1 + 0xa0)) {
      return;
    }
    if (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) - 0x76 < 0xf) {
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(param_1 + 0x95a0);
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar8;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar8);
        uVar8 = *puVar3;
      }
      puVar4 = (ulong *)Factory::NewFixedArray((Factory *)param_1,(*(int *)(uVar8 + 3) >> 1) + -1,0)
      ;
      uVar5 = *puVar3;
      if (*(int *)(uVar5 + 3) < 2) {
        return;
      }
      iVar10 = 0;
      lVar11 = 0;
      iVar12 = 0;
      do {
        uVar8 = uVar5 & 0xffffffff00000000;
        if ((*(uint *)(*param_3 + 3) ^ *(uint *)((uVar8 | *(uint *)((long)iVar10 + 7 + uVar5)) + 3))
            < 2) {
          iVar12 = iVar12 + 1;
        }
        else {
          uVar7 = *puVar4;
          uVar2 = *(uint *)(uVar5 + (long)iVar10 + 7);
          lVar1 = uVar7 + (long)(iVar10 + iVar12 * -4);
          *(uint *)(lVar1 + 7) = uVar2;
          if ((uVar2 & 1) != 0) {
            uVar9 = uVar8 | uVar2;
            uVar8 = uVar8 | (ulong)uVar2 & 0xfffffffffffc0000;
            uVar5 = *(ulong *)(uVar8 + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar5 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar7,lVar1,uVar9);
              uVar5 = *(ulong *)(uVar8 | 8);
            }
            if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar9);
            }
          }
        }
        uVar5 = *puVar3;
        lVar11 = lVar11 + 1;
        iVar10 = iVar10 + 4;
      } while (lVar11 < *(int *)(uVar5 + 3) >> 1);
      if (iVar12 < 1) {
        return;
      }
      uVar5 = *param_2;
      uVar8 = *puVar4;
      *(int *)(uVar5 + 7) = (int)uVar8;
      if ((uVar8 & 1) == 0) {
        return;
      }
      uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      puVar6 = (uint *)(uVar5 + 7);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,puVar6,uVar8);
        uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar7 & 0x18) == 0) {
        return;
      }
      if ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        return;
      }
      goto LAB_01077624;
    }
  }
  if ((*(uint *)(*param_3 + 3) ^ *(uint *)(uVar8 + 3)) < 2) {
    uVar8 = *(ulong *)(param_1 + 0xa0);
    *puVar6 = (uint)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar7 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,puVar6,uVar8);
        uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
LAB_01077624:
        Heap_GenerationalBarrierSlow(uVar5,puVar6,uVar8);
        return;
      }
    }
  }
  return;
}

