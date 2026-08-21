
/* v8::internal::Builtin_IsPromise(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Builtin_IsPromise(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_014cebd0();
    return uVar2;
  }
  pIVar1 = (Isolate *)(param_2 + -1);
  if (param_1 < 6) {
    pIVar1 = param_3 + 0xa0;
  }
  uVar3 = *(ulong *)pIVar1;
  if ((uVar3 & 1) == 0) {
    return *(undefined8 *)(param_3 + 0xc0);
  }
  pIVar1 = param_3 + 0xb8;
  if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x42d) {
    pIVar1 = param_3 + 0xc0;
  }
  return *(undefined8 *)pIVar1;
}

