
undefined8 FUN_014af630(int param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong uVar5;
  Isolate *pIVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if (param_1 + -4 < 2) {
    pIVar6 = param_3 + 0xa0;
    pIVar4 = param_3 + 0xa0;
  }
  else {
    pIVar6 = (Isolate *)(param_2 + -8);
    if (param_1 + -4 == 2) {
      pIVar4 = param_3 + 0xa0;
    }
    else {
      pIVar4 = (Isolate *)(param_2 + -0x10);
    }
  }
  if ((*(uint *)pIVar6 & 0x80000001) != 0) {
    pIVar6 = (Isolate *)v8::internal::Object::ConvertToIndex(param_3,pIVar6,0xc6);
  }
  if ((pIVar6 == (Isolate *)0x0) ||
     (lVar3 = v8::internal::BigInt::FromObject(param_3,pIVar4), lVar3 == 0)) {
    pIVar4 = param_3 + 0x180;
  }
  else {
    uVar5 = *(ulong *)pIVar6;
    if ((uVar5 & 1) == 0) {
      dVar8 = (double)((int)uVar5 >> 1);
    }
    else {
      dVar8 = *(double *)(uVar5 + 3);
    }
    pIVar4 = (Isolate *)v8::internal::BigInt::AsIntN(param_3,(long)dVar8,lVar3);
  }
  uVar7 = *(undefined8 *)pIVar4;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

