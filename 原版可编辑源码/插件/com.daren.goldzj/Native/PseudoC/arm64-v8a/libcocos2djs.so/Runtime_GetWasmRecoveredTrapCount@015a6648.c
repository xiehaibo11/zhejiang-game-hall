
/* v8::internal::Runtime_GetWasmRecoveredTrapCount(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_GetWasmRecoveredTrapCount(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x95a0;
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = trap_handler::GetRecoveredTrapCount();
    if (uVar4 >> 0x1e == 0) {
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar1;
        if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar5 + 1;
        *puVar5 = uVar4 << 1;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar4 << 1);
      }
    }
    else {
      puVar5 = (ulong *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)param_3);
      *(double *)(*puVar5 + 3) = (double)uVar4;
    }
    uVar4 = *puVar5;
    *(long *)pIVar1 = lVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar4;
  }
  uVar4 = FUN_015a6750(param_1,param_2,param_3);
  return uVar4;
}

