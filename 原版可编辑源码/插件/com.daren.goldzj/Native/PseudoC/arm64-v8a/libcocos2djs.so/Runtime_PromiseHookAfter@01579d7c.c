
/* v8::internal::Runtime_PromiseHookAfter(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_PromiseHookAfter(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_01579eac(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (uVar3 = uVar4 & 0xffffffff00000000 | 7, 0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar4 - 1)))) {
    puVar5 = (uint *)(uVar4 - 1);
    if (*(short *)(uVar3 + *puVar5) == 0x42d) {
      if (*(char *)(*(long *)(param_3 + 0xb6c8) + 8) != '\0') {
        Isolate::PopPromise(param_3);
        puVar5 = (uint *)(*param_2 - 1);
        uVar3 = *param_2 & 0xffffffff00000000 | 7;
      }
      if (*(short *)(uVar3 + *puVar5) == 0x42d) {
        Isolate::RunPromiseHook(param_3,3,param_2,param_3 + 0xa0);
      }
    }
    uVar6 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

