
/* v8::internal::Runtime_RejectPromise(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_RejectPromise(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar4 = FUN_0157a248(param_1,param_2,param_3);
    return uVar4;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar5 = *param_2;
  if (((uVar5 & 1) != 0) &&
     (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x42d)) {
    local_48 = param_2[-2];
    if (((local_48 & 1) != 0) &&
       (*(short *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) == 0x43)) {
      uVar2 = Object::BooleanValue((Object *)&local_48,param_3);
      puVar3 = (undefined8 *)JSPromise::Reject(param_2,param_2 + -1,uVar2 & 1);
      uVar6 = *puVar3;
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsOddball()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSPromise()");
}

