
/* v8::internal::Runtime_SetIteratorProtector(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_SetIteratorProtector(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (TracingFlags::runtime_stats == 0) {
    lVar1 = 0xb8;
    if (*(int *)(*(long *)(param_3 + 0xf08) + 0xb) != 2) {
      lVar1 = 0xc0;
    }
    return *(undefined8 *)(param_3 + lVar1);
  }
  uVar2 = FUN_015ab3bc(param_1);
  return uVar2;
}

