
/* v8::internal::Runtime_DynamicImportCall(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DynamicImportCall(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar10 = FUN_0157335c(param_1,param_2,param_3);
    return uVar10;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if ((uVar9 & 1) != 0) {
    uVar8 = uVar9 & 0xffffffff00000000;
    if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x439) {
      uVar9 = uVar8 | *(uint *)((uVar8 | *(uint *)(uVar9 + 0xb)) + 0xf);
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) == 0x5b) {
        uVar9 = uVar8 | *(uint *)(uVar9 + 0xb);
      }
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = puVar3;
        if (puVar4 == puVar3) {
          puVar6 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar9;
        uVar5 = *(uint *)(uVar9 + 0x23);
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
        uVar9 = *puVar6;
        uVar5 = *(uint *)(uVar9 + 0x23);
      }
      while ((uVar5 & 1) != 0) {
        uVar9 = uVar9 & 0xffffffff00000000;
        if (*(short *)((uVar9 | 7) + (ulong)*(uint *)((uVar9 | uVar5) - 1)) != 0xa6) break;
        uVar8 = uVar9 | *(uint *)((uVar9 | uVar5) + 0xf);
        if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x5b) {
          uVar8 = uVar9 | *(uint *)(uVar8 + 0xb);
        }
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar8;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
        }
        uVar9 = *puVar6;
        uVar5 = *(uint *)(uVar9 + 0x23);
      }
      pIVar7 = (Isolate *)
               Isolate::RunHostImportModuleDynamicallyCallback(param_3,puVar6,param_2 + -1);
      pIVar2 = param_3 + 0x180;
      if (pIVar7 != (Isolate *)0x0) {
        pIVar2 = pIVar7;
      }
      uVar10 = *(undefined8 *)pIVar2;
      *(ulong **)pIVar1 = puVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
        *(ulong **)(param_3 + 0x95a8) = puVar4;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

