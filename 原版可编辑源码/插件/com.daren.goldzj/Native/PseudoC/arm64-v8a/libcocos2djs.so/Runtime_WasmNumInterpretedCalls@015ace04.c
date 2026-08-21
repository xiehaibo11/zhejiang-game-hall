
/* v8::internal::Runtime_WasmNumInterpretedCalls(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_WasmNumInterpretedCalls(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_015acf78(param_1,param_2,param_3);
    return uVar6;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar4 = *(int *)(param_3 + 0x95b0);
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar4 + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (local_48 = uVar6 & 0xffffffff00000000,
     *(short *)((local_48 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x434)) {
    if (*(uint *)(uVar6 + 0x8b) == *(uint *)(local_48 + 0xa0)) {
      uVar6 = 0;
      *(long *)pIVar1 = lVar2;
      *(int *)(param_3 + 0x95b0) = iVar4;
    }
    else {
      local_48 = local_48 | *(uint *)(uVar6 + 0x8b);
      uVar6 = WasmDebugInfo::NumInterpretedCalls((WasmDebugInfo *)&local_48);
      if (uVar6 >> 0x1e == 0) {
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar6 << 1;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6 << 1);
        }
      }
      else {
        puVar5 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                                    ((Factory *)param_3);
        *(double *)(*puVar5 + 3) = (double)uVar6;
      }
      uVar6 = *puVar5;
      *(long *)pIVar1 = lVar2;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsWasmInstanceObject()");
}

