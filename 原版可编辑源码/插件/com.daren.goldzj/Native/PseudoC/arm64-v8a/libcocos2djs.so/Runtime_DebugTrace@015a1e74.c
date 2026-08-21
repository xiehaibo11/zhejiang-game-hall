
/* v8::internal::Runtime_DebugTrace(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DebugTrace(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  
  if (TracingFlags::runtime_stats == 0) {
    Isolate::PrintStack(param_3,waitpid,1);
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_015a1ecc(param_1,param_2,param_3);
  return uVar1;
}

