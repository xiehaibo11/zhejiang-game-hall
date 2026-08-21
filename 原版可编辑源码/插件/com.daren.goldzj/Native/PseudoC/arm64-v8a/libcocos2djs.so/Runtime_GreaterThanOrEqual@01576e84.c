
/* v8::internal::Runtime_GreaterThanOrEqual(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GreaterThanOrEqual(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x95a0);
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    uVar5 = Object::Compare(param_3,param_2,param_2 + -1);
    if (((uVar5 & 0xff) == 0) || (3 < (uint)(uVar5 >> 0x20))) {
      bVar4 = true;
      uVar7 = 1;
    }
    else {
      bVar4 = false;
      uVar7 = 9U >> (uVar5 >> 0x20 & 0xf) & 1;
    }
    pIVar1 = param_3 + 0xc0;
    if (uVar7 == 0) {
      pIVar1 = param_3 + 0xb8;
    }
    pIVar2 = param_3 + 0x180;
    if (!bVar4) {
      pIVar2 = pIVar1;
    }
    uVar8 = *(undefined8 *)pIVar2;
    *(undefined8 *)(param_3 + 0x95a0) = uVar6;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar8;
  }
  uVar6 = FUN_01576f7c(param_1,param_2,param_3);
  return uVar6;
}

