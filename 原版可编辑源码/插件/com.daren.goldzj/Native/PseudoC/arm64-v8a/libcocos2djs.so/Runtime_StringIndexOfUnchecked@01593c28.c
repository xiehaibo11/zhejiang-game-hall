
/* v8::internal::Runtime_StringIndexOfUnchecked(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_StringIndexOfUnchecked(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar4 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar1 = (int)param_2[-2] >> 1 & ((int)param_2[-2] >> 0x1f ^ 0xffffffffU);
    uVar2 = *(uint *)(*param_2 + 7);
    if ((int)uVar1 <= (int)*(uint *)(*param_2 + 7)) {
      uVar2 = uVar1;
    }
    uVar5 = String::IndexOf(param_3,param_2,param_2 + -1,uVar2);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar4) {
        *(long *)(param_3 + 0x95a8) = lVar4;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return -(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1;
  }
  uVar5 = FUN_01593cf0(param_1,param_2,param_3);
  return uVar5;
}

