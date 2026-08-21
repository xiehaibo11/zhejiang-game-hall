
/* v8::internal::Runtime_IsJSReceiver(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_IsJSReceiver(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar2 = FUN_011d0b58(param_1);
    return uVar2;
  }
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    return *(undefined8 *)(param_3 + 0xc0);
  }
  pIVar1 = param_3 + 0xb8;
  if (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9) {
    pIVar1 = param_3 + 0xc0;
  }
  return *(undefined8 *)pIVar1;
}

