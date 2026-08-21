
/* v8::internal::Runtime_PushCatchContext(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_PushCatchContext(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_0158ece0(param_1,param_2,param_3);
    return uVar7;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = param_2[-1];
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x83)) {
    uVar6 = *(ulong *)(param_3 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = puVar2;
      if (puVar3 == puVar2) {
        puVar4 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
    }
    puVar5 = (undefined8 *)Factory::NewCatchContext((Factory *)param_3,puVar4,param_2 + -1,param_2);
    *(undefined8 *)(param_3 + 0x2bc8) = *puVar5;
    uVar7 = *puVar5;
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[1].IsScopeInfo()");
}

