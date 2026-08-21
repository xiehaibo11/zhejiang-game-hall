
/* v8::internal::Runtime_AllowDynamicFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_AllowDynamicFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_0156d0ec(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x439)) {
    local_48 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xf);
    uVar7 = Context::global_proxy((Context *)&local_48);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    bVar4 = Builtins::AllowDynamicFunction(param_3,param_2,puVar5);
    puVar6 = (undefined8 *)Factory::ToBoolean((Factory *)param_3,(bool)(bVar4 & 1));
    uVar8 = *puVar6;
    *(long *)pIVar1 = lVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

