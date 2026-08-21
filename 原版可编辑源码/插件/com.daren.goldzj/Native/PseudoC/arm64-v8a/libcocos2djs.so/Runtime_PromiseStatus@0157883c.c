
/* v8::internal::Runtime_PromiseStatus(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_PromiseStatus(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong local_28;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_01578918(param_1,param_2,param_3);
    return uVar3;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_28 = *param_2;
  if (((local_28 & 1) != 0) &&
     (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x42d)) {
    uVar3 = JSPromise::status((JSPromise *)&local_28);
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return -(uVar3 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar3 & 0xffffffff) << 1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSPromise()");
}

