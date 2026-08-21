
/* v8::internal::Debug::GetSourceBreakLocations(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

Isolate * v8::internal::Debug::GetSourceBreakLocations(Isolate *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong local_28;
  
  local_28 = *param_2;
  uVar6 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_28);
  if ((uVar6 & 1) != 0) {
    uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xf);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(param_1 + 0x95a0);
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar6;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
      uVar6 = *puVar7;
    }
    local_28 = uVar6;
    iVar3 = DebugInfo::GetBreakPointCount((DebugInfo *)&local_28,param_1);
    if (iVar3 != 0) {
      local_28 = *puVar7;
      uVar4 = DebugInfo::GetBreakPointCount((DebugInfo *)&local_28,param_1);
      pIVar8 = (Isolate *)Factory::NewFixedArray((Factory *)param_1,uVar4,0);
      uVar6 = *puVar7;
      uVar10 = (ulong)*(uint *)(uVar6 + 0x17);
      uVar11 = uVar6 & 0xffffffff00000000 | uVar10;
      if (*(int *)(uVar11 + 3) < 2) {
        return pIVar8;
      }
      lVar12 = 0;
      iVar3 = 0;
      do {
        lVar1 = (long)((int)lVar12 << 2) + 7;
        uVar2 = *(uint *)(uVar11 + lVar1);
        if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
          local_28 = uVar6 & 0xffffffff00000000 |
                     (ulong)*(uint *)((uVar6 & 0xffffffff00000000 | uVar10) + lVar1);
          iVar5 = BreakPointInfo::GetBreakPointCount((BreakPointInfo *)&local_28,param_1);
          if (0 < iVar5) {
            iVar9 = iVar3 << 2;
            do {
              iVar5 = iVar5 + -1;
              iVar3 = iVar3 + 1;
              lVar1 = (long)iVar9;
              iVar9 = iVar9 + 4;
              *(uint *)(*(long *)pIVar8 + lVar1 + 7) = *(uint *)(local_28 + 3) & 0xfffffffe;
            } while (iVar5 != 0);
          }
          uVar6 = *puVar7;
        }
        uVar10 = (ulong)*(uint *)(uVar6 + 0x17);
        lVar12 = lVar12 + 1;
        uVar11 = uVar6 & 0xffffffff00000000 | uVar10;
      } while (lVar12 < *(int *)(uVar11 + 3) >> 1);
      return pIVar8;
    }
  }
  return param_1 + 0xa0;
}

