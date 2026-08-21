
/* v8::internal::Runtime_SetWasmThreadsEnabled(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SetWasmThreadsEnabled(int param_1,ulong *param_2,Isolate *param_3)

{
  _func_bool_Local *p_Var1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_015a72a8(param_1,param_2,param_3);
    return uVar2;
  }
  uVar3 = *param_2;
  if ((((uVar3 & 1) != 0) &&
      (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x43)) &&
     ((*(uint *)(uVar3 + 0x17) >> 1 & 0xff) < 2)) {
    p_Var1 = FUN_015affec;
    if ((int)uVar3 != *(int *)(param_3 + 0xb8)) {
      p_Var1 = FUN_015afff4;
    }
    v8::Isolate::SetWasmThreadsEnabledCallback((Isolate *)param_3,p_Var1);
    return *(undefined8 *)(param_3 + 0xa0);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsBoolean()");
}

