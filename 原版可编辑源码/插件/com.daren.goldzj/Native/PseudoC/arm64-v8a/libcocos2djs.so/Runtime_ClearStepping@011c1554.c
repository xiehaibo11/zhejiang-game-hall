
/* v8::internal::Runtime_ClearStepping(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ClearStepping(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_011c1614(param_1,param_2,param_3);
    return uVar2;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((*(Debug **)(param_3 + 0xb6c8))[8] != (Debug)0x0) {
    Debug::ClearStepping(*(Debug **)(param_3 + 0xb6c8));
    uVar3 = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate->debug()->is_active()");
}

