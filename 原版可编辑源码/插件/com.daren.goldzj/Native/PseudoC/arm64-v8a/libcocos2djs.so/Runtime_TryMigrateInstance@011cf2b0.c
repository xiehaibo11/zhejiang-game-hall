
/* v8::internal::Runtime_TryMigrateInstance(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_TryMigrateInstance(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar3 = *param_2;
    if (((((uVar3 & 1) == 0) ||
         (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xaa)) ||
        ((*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 0xb) >> 0x18 & 1)
         == 0)) || (uVar3 = JSObject::TryMigrateInstance(param_3,param_2), (uVar3 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *param_2;
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar1;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
  uVar3 = FUN_011cf39c(param_1,param_2,param_3);
  return uVar3;
}

