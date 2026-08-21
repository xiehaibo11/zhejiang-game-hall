
/* v8::internal::Runtime_AwaitPromisesInit(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_AwaitPromisesInit(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0157921c(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = param_2[-1];
  if (((uVar4 & 1) == 0) ||
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42d)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSPromise()");
  }
  uVar4 = param_2[-2];
  if (((uVar4 & 1) == 0) ||
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42d)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsJSPromise()");
  }
  uVar4 = param_2[-3];
  if (((uVar4 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x439)) {
    uVar4 = param_2[-4];
    if ((((uVar4 & 1) != 0) &&
        (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x43)) &&
       ((*(uint *)(uVar4 + 0x17) >> 1 & 0xff) < 2)) {
      puVar2 = (undefined8 *)FUN_0157a7b4(param_3);
      uVar5 = *puVar2;
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsBoolean()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[3].IsJSFunction()");
}

