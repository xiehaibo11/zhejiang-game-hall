
undefined8 FUN_015afa44(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  
  lVar1 = *(long *)(*param_1 + 8);
  if ((int)param_1[2] < 1) {
    uVar2 = FUN_015afadc(lVar1,lVar1 + 0xa0);
  }
  else {
    uVar2 = FUN_015afadc(lVar1,param_1[1]);
  }
  if ((uVar2 & 1) == 0) {
    pIVar4 = *(Isolate **)(*param_1 + 8);
    lVar1 = v8::String::NewFromOneByte(pIVar4,"Sync compile not allowed",0,0xffffffff);
    if (lVar1 == 0) {
      v8::V8::ToLocalEmpty();
    }
    uVar3 = v8::Exception::RangeError(lVar1);
    v8::Isolate::ThrowException(pIVar4,uVar3);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

