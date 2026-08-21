
/* v8::internal::Runtime_SetForceSlowPath(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SetForceSlowPath(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  Isolate IVar2;
  
  if (TracingFlags::runtime_stats == 0) {
    if (((*param_2 & 1) == 0) || ((int)*param_2 != *(int *)(param_3 + 0xb8))) {
      IVar2 = (Isolate)0x0;
    }
    else {
      IVar2 = (Isolate)0x1;
    }
    param_3[0xc61c] = IVar2;
    return *(undefined8 *)(param_3 + 0xa0);
  }
  uVar1 = FUN_015a2f4c(param_1);
  return uVar1;
}

