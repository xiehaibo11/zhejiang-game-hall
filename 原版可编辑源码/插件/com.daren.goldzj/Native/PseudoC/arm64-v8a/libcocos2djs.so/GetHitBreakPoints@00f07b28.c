
/* v8::internal::Debug::GetHitBreakPoints(v8::internal::Handle<v8::internal::DebugInfo>, int) */

ulong * __thiscall
v8::internal::Debug::GetHitBreakPoints(Debug *this,undefined8 *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong local_68;
  
  local_68 = *param_2;
  puVar5 = (ulong *)DebugInfo::GetBreakPoints
                              ((DebugInfo *)&local_68,*(Isolate **)(this + 0x88),param_3);
  local_68 = *param_2;
  uVar4 = DebugInfo::BreakAtEntry((DebugInfo *)&local_68);
  uVar11 = *puVar5;
  if (((uVar11 & 1) == 0) ||
     (0xe < *(ushort *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) - 0x76)) {
    uVar11 = CheckBreakPoint(this,puVar5,uVar4 & 1);
    if ((uVar11 & 1) != 0) {
      puVar7 = (ulong *)Factory::NewFixedArray(*(Factory **)(this + 0x88),1,0);
      uVar12 = *puVar7;
      uVar11 = *puVar5;
      *(int *)(uVar12 + 7) = (int)uVar11;
      if ((uVar11 & 1) == 0) {
        return puVar7;
      }
      uVar9 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar9 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar11);
        uVar9 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar9 & 0x18) == 0) {
        return puVar7;
      }
      if ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
        return puVar7;
      }
      Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar11);
      return puVar7;
    }
  }
  else {
    pIVar6 = *(Isolate **)(this + 0x88);
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar11;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar11);
      uVar11 = *puVar5;
    }
    iVar13 = *(int *)(uVar11 + 3);
    iVar2 = iVar13 >> 1;
    puVar7 = (ulong *)Factory::NewFixedArray(*(Factory **)(this + 0x88),iVar2,0);
    if (1 < iVar13) {
      iVar13 = 0;
      lVar14 = 0;
      iVar10 = 0;
      do {
        pIVar6 = *(Isolate **)(this + 0x88);
        uVar11 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + (long)iVar13 + 7);
        if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar8 = *(ulong **)(pIVar6 + 0x95a0);
          if (puVar8 == *(ulong **)(pIVar6 + 0x95a8)) {
            puVar8 = (ulong *)HandleScope::Extend(pIVar6);
          }
          *(ulong **)(pIVar6 + 0x95a0) = puVar8 + 1;
          *puVar8 = uVar11;
        }
        else {
          puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar11);
        }
        uVar11 = CheckBreakPoint(this,puVar8,uVar4 & 1);
        if ((uVar11 & 1) != 0) {
          uVar11 = *puVar7;
          uVar12 = *puVar8;
          iVar3 = iVar10 << 2;
          iVar10 = iVar10 + 1;
          lVar1 = uVar11 + (long)iVar3;
          *(int *)(lVar1 + 7) = (int)uVar12;
          if ((uVar12 & 1) != 0) {
            uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar9 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar11,lVar1,uVar12);
              uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar9 & 0x18) != 0) &&
               ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar11,lVar1,uVar12);
            }
          }
        }
        lVar14 = lVar14 + 1;
        iVar13 = iVar13 + 4;
      } while (lVar14 < iVar2);
      if (iVar10 != 0) {
        local_68 = *puVar7;
        FixedArray::Shrink((FixedArray *)&local_68,*(Isolate **)(this + 0x88),iVar10);
        return puVar7;
      }
    }
  }
  return (ulong *)0x0;
}

