
/* v8::internal::WasmScript::RemoveBreakpointFromInfo(v8::internal::Handle<v8::internal::Script>,
   int, v8::internal::Handle<v8::internal::BreakPoint>) */

undefined8
v8::internal::WasmScript::RemoveBreakpointFromInfo(ulong *param_1,int param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  CanonicalHandleScope *pCVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  Isolate *pIVar16;
  ulong uVar17;
  long lVar18;
  ulong local_68;
  
  uVar10 = *param_1;
  if ((*(uint *)(uVar10 + 0x17) & 0xfffffffe) == 6) {
    pIVar16 = (Isolate *)(uVar10 & 0xffffffff00000000);
    uVar10 = (ulong)pIVar16 | (ulong)*(uint *)(uVar10 + 0x23);
    if (1 < *(int *)(uVar10 + 3)) {
      pCVar7 = *(CanonicalHandleScope **)(pIVar16 + 0x95b8);
      if (pCVar7 == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar16 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar16 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar16);
        }
        *(ulong **)(pIVar16 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar10;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup(pCVar7,uVar10);
        uVar10 = *puVar8;
      }
      uVar11 = uVar10 & 0xffffffff00000000;
      uVar13 = 0;
      uVar3 = *(int *)(uVar10 + 3) >> 1;
      lVar18 = uVar10 + 7;
      uVar5 = uVar3;
      uVar4 = uVar3;
      if (3 < *(int *)(uVar10 + 3)) {
        do {
          uVar2 = uVar13 + (uVar4 >> 1);
          uVar4 = *(uint *)(lVar18 + (int)(uVar2 * 4));
          if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(pIVar16 + 0xa0))) {
            iVar15 = *(int *)((uVar11 | uVar4) + 3) >> 1;
          }
          else {
            iVar15 = 0x7fffffff;
          }
          if (iVar15 <= param_2) {
            uVar13 = uVar2;
            uVar2 = uVar5;
          }
          uVar5 = uVar2;
          uVar4 = uVar2 - uVar13;
        } while (1 < (int)(uVar2 - uVar13));
      }
      iVar15 = uVar13 << 2;
      uVar5 = *(uint *)(lVar18 + iVar15);
      if (((uVar5 & 1) == 0) || (uVar5 != *(uint *)(pIVar16 + 0xa0))) {
        iVar14 = *(int *)((uVar11 | uVar5) + 3) >> 1;
      }
      else {
        iVar14 = 0x7fffffff;
      }
      if (iVar14 < param_2) {
        uVar13 = uVar13 + 1;
      }
      if (uVar13 != uVar3) {
        pCVar7 = *(CanonicalHandleScope **)(pIVar16 + 0x95b8);
        uVar11 = uVar11 | *(uint *)(lVar18 + (int)(uVar13 << 2));
        if (pCVar7 == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)(pIVar16 + 0x95a0);
          if (puVar9 == *(ulong **)(pIVar16 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(pIVar16);
          }
          *(ulong **)(pIVar16 + 0x95a0) = puVar9 + 1;
          *puVar9 = uVar11;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup(pCVar7,uVar11);
        }
        BreakPointInfo::ClearBreakPoint(pIVar16,puVar9,param_3);
        local_68 = *puVar9;
        iVar6 = BreakPointInfo::GetBreakPointCount((BreakPointInfo *)&local_68,pIVar16);
        if (iVar6 == 0) {
          uVar10 = *puVar8;
          if ((int)uVar13 < (*(int *)(uVar10 + 3) >> 1) + -1) {
            lVar18 = (long)(int)uVar13;
            do {
              iVar6 = (uint)(iVar14 < param_2) * 4 + iVar15;
              uVar3 = *(uint *)(uVar10 + 7 + (long)(iVar6 + 4));
              puVar1 = (uint *)(uVar10 + 7 + (long)iVar6);
              *puVar1 = uVar3;
              if ((uVar3 & 1) != 0) {
                uVar17 = uVar10 & 0xffffffff00000000 | (ulong)uVar3;
                uVar12 = uVar10 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
                uVar11 = *(ulong *)(uVar12 + 8);
                if (((uint)uVar11 >> 0x12 & 1) != 0) {
                  Heap_MarkingBarrierSlow(uVar10,puVar1,uVar17);
                  uVar11 = *(ulong *)(uVar12 | 8);
                }
                if (((uVar11 & 0x18) != 0) &&
                   ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                  Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar17);
                }
                if (uVar3 == *(uint *)(pIVar16 + 0xa0)) {
                  uVar10 = *puVar8;
                  break;
                }
              }
              uVar10 = *puVar8;
              lVar18 = lVar18 + 1;
              iVar15 = iVar15 + 4;
            } while (lVar18 < (*(int *)(uVar10 + 3) >> 1) + -1);
          }
          *(undefined4 *)(uVar10 + (long)(int)((*(uint *)(uVar10 + 3) & 0x7ffffffe) * 2 + -4) + 7) =
               *(undefined4 *)((uVar10 & 0xffffffff00000000) + 0xa0);
        }
        return 1;
      }
    }
  }
  return 0;
}

