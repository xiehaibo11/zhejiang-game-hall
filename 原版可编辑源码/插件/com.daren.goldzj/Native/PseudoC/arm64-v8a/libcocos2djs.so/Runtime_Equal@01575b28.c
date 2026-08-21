
/* v8::internal::Runtime_Equal(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_Equal(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x95a0);
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar4 = Object::Equals(param_3,param_2,param_2 + -1);
    pIVar1 = param_3 + 0xb8;
    if (uVar4 < 0x100) {
      pIVar1 = param_3 + 0xc0;
    }
    pIVar2 = param_3 + 0x180;
    if ((uVar4 & 0xff) != 0) {
      pIVar2 = pIVar1;
    }
    uVar6 = *(undefined8 *)pIVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar5;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar6;
  }
  uVar5 = FUN_01575bf0(param_1,param_2,param_3);
  return uVar5;
}

