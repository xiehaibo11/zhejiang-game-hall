
/* v8::internal::Runtime_ToNumeric(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_ToNumeric(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar5 = FUN_011d33c0(param_1,param_2,param_3);
    return uVar5;
  }
  uVar2 = *(undefined8 *)(param_3 + 0x95a0);
  lVar3 = *(long *)(param_3 + 0x95a8);
  iVar4 = *(int *)(param_3 + 0x95b0) + 1;
  *(int *)(param_3 + 0x95b0) = iVar4;
  uVar5 = *param_2;
  lVar6 = lVar3;
  if ((((uVar5 & 1) != 0) &&
      (uVar7 = uVar5 & 0xffffffff00000000 | 7, *(short *)(uVar7 + *(uint *)(uVar5 - 1)) != 0x42)) &&
     (*(short *)(uVar7 + *(uint *)(uVar5 - 1)) != 0x41)) {
    param_2 = (ulong *)Object::ConvertToNumberOrNumeric(param_3,param_2,1);
    iVar4 = *(int *)(param_3 + 0x95b0);
    lVar6 = *(long *)(param_3 + 0x95a8);
  }
  pIVar1 = param_3 + 0x180;
  if ((Isolate *)param_2 != (Isolate *)0x0) {
    pIVar1 = (Isolate *)param_2;
  }
  uVar5 = *(ulong *)pIVar1;
  *(undefined8 *)(param_3 + 0x95a0) = uVar2;
  *(int *)(param_3 + 0x95b0) = iVar4 + -1;
  if (lVar6 != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

