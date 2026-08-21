
undefined8 FUN_014aff58(undefined8 param_1,ulong *param_2,Factory *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  double dVar6;
  
  lVar1 = FUN_014b0054(param_3,param_1,param_4);
  if (lVar1 == 0) goto LAB_014b000c;
  if ((*param_2 & 1) == 0) {
LAB_014affb4:
    if (param_2 == (ulong *)0x0) goto LAB_014b000c;
    uVar5 = *param_2;
    if ((uVar5 & 1) == 0) {
      dVar6 = (double)((int)uVar5 >> 1);
    }
    else {
      dVar6 = *(double *)(uVar5 + 3);
    }
    if ((dVar6 < 2.0) || (36.0 < dVar6)) {
      puVar2 = (undefined8 *)v8::internal::Factory::NewRangeError(param_3,0xdb,0,0,0);
      uVar3 = v8::internal::Isolate::Throw((Isolate *)param_3,*puVar2,0);
      return uVar3;
    }
    iVar4 = (int)dVar6;
  }
  else {
    if ((int)*param_2 != *(int *)(param_3 + 0xa0)) {
      param_2 = (ulong *)v8::internal::Object::ConvertToInteger(param_3,param_2);
      goto LAB_014affb4;
    }
    iVar4 = 10;
  }
  puVar2 = (undefined8 *)v8::internal::BigInt::ToString(param_3,lVar1,iVar4,0);
  if (puVar2 != (undefined8 *)0x0) {
    return *puVar2;
  }
LAB_014b000c:
  return *(undefined8 *)(param_3 + 0x180);
}

