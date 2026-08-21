
/* v8::internal::Runtime_StrictEqual(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_StrictEqual(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_8;
  
  if (TracingFlags::runtime_stats == 0) {
    local_8 = *param_2;
    uVar2 = Object::StrictEquals((Object *)&local_8,param_2[-1]);
    lVar1 = 0xb8;
    if ((uVar2 & 1) == 0) {
      lVar1 = 0xc0;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
  uVar3 = FUN_01576124(param_1,param_2,param_3);
  return uVar3;
}

