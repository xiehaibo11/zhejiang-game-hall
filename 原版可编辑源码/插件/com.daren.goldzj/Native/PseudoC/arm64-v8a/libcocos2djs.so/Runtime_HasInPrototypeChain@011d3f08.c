
/* v8::internal::Runtime_HasInPrototypeChain(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_HasInPrototypeChain(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_011d3ffc(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if (((uVar4 & 1) == 0) ||
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
    pIVar5 = param_3 + 0xc0;
  }
  else {
    uVar2 = JSReceiver::HasInPrototypeChain(param_3,param_2,param_2 + -1);
    if ((uVar2 & 0xff) == 0) {
      pIVar5 = param_3 + 0x180;
    }
    else {
      pIVar5 = param_3 + 0xb8;
      if (uVar2 < 0x100) {
        pIVar5 = param_3 + 0xc0;
      }
    }
  }
  uVar6 = *(undefined8 *)pIVar5;
  *(undefined8 *)(param_3 + 0x95a0) = uVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar1) {
    *(long *)(param_3 + 0x95a8) = lVar1;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

