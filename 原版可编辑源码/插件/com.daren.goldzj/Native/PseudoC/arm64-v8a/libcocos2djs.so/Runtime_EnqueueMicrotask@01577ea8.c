
/* v8::internal::Runtime_EnqueueMicrotask(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_EnqueueMicrotask(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  MicrotaskQueue *pMVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_01578018(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) != 0) &&
     (uVar6 = uVar8 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x439)) {
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(uVar8 + 0xf)) - 1)) + 0x13);
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
    puVar5 = (undefined8 *)Factory::NewCallableTask((Factory *)param_3,param_2,puVar4);
    uVar8 = *param_2 & 0xffffffff00000000;
    pMVar7 = *(MicrotaskQueue **)
              ((uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*param_2 + 0xf)) - 1)) +
                                 0x13)) + 0x423);
    if (pMVar7 != (MicrotaskQueue *)0x0) {
      MicrotaskQueue::EnqueueMicrotask(pMVar7,*puVar5);
    }
    uVar9 = *(undefined8 *)(param_3 + 0xa0);
    *(ulong **)pIVar1 = puVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
      *(ulong **)(param_3 + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
}

