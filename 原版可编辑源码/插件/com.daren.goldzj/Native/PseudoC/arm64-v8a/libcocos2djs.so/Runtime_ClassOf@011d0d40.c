
/* v8::internal::Runtime_ClassOf(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_ClassOf(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong local_18;
  
  if (TracingFlags::runtime_stats == 0) {
    local_18 = *param_2;
    if (((local_18 & 1) == 0) ||
       (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0xa9)) {
      uVar1 = *(undefined8 *)(param_3 + 0xb0);
    }
    else {
      uVar1 = JSReceiver::class_name((JSReceiver *)&local_18);
    }
    return uVar1;
  }
  uVar1 = FUN_011d0da8(param_1);
  return uVar1;
}

