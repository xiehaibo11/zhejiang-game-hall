
undefined8 FUN_014d2c40(int param_1,long param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  Factory *pFVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  
  pFVar3 = (Factory *)(param_2 + -8);
  if (param_1 < 6) {
    pFVar3 = param_3 + 0xa0;
  }
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *(ulong *)pFVar3;
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  if (((uVar4 & 1) != 0) &&
     (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42)) {
    pFVar3 = (Factory *)v8::internal::Object::ConvertToNumberOrNumeric(param_3,pFVar3,0);
  }
  if (pFVar3 == (Factory *)0x0) {
    pFVar3 = param_3 + 0x180;
  }
  else {
    uVar4 = *(ulong *)pFVar3;
    if ((uVar4 & 1) == 0) {
      dVar6 = (double)((int)uVar4 >> 1);
    }
    else {
      dVar6 = *(double *)(uVar4 + 3);
    }
    pFVar3 = (Factory *)
             v8::internal::Factory::ToBoolean
                       (param_3,dVar6 == 4.0 || (dVar6 == 1.0 || dVar6 == 2.0));
  }
  uVar5 = *(undefined8 *)pFVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar5;
}

