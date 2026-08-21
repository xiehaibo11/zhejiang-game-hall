
/* v8::internal::Runtime_GetWasmExceptionId(int, unsigned long*, v8::internal::Isolate*) */

long v8::internal::Runtime_GetWasmExceptionId(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    lVar5 = FUN_015a6b64(param_1,param_2,param_3);
    return lVar5;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar5 = *(long *)pIVar1;
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsWasmExceptionPackage()");
  }
  uVar7 = param_2[-1];
  if (((uVar7 & 1) == 0) ||
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsWasmInstanceObject()");
  }
  puVar3 = (ulong *)WasmExceptionPackage::GetExceptionTag(param_3,param_2);
  uVar7 = *puVar3;
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x72)) {
    uVar7 = param_2[-1] & 0xffffffff00000000 | (ulong)*(uint *)(param_2[-1] + 0x9b);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
      uVar7 = *puVar4;
    }
    if (1 < (int)*(uint *)(uVar7 + 3)) {
      iVar6 = 0;
      lVar9 = 0;
      uVar8 = 0;
      do {
        if (*(int *)(uVar7 + 7 + (long)iVar6) == (int)*puVar3) {
          if (param_3 == (Isolate *)0x0) {
            return lVar9;
          }
          goto LAB_015a6ad0;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 2;
        iVar6 = iVar6 + 4;
      } while (uVar8 < *(uint *)(uVar7 + 3) >> 1);
    }
  }
  lVar9 = *(long *)(param_3 + 0xa0);
LAB_015a6ad0:
  *(long *)pIVar1 = lVar5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return lVar9;
}

