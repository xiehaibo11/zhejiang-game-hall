
/* v8::internal::Runtime_PromiseRejectEventFromStack(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_PromiseRejectEventFromStack(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_01577300(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42d)) {
    puVar2 = param_2;
    if (*(char *)(*(long *)(param_3 + 0xb6c8) + 8) != '\0') {
      puVar2 = (ulong *)Isolate::GetPromiseOnStackOnThrow(param_3);
    }
    Isolate::RunPromiseHook(param_3,1,param_2,param_3 + 0xa0);
    Debug::OnPromiseReject(*(Debug **)(param_3 + 0xb6c8),puVar2,param_2 + -1);
    if ((*(byte *)(*param_2 + 0xf) >> 3 & 1) == 0) {
      Isolate::ReportPromiseReject(param_3,param_2,param_2 + -1,0);
    }
    uVar5 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSPromise()");
}

