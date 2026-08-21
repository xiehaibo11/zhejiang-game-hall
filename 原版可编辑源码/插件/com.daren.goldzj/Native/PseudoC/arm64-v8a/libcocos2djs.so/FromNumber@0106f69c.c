
/* v8::internal::BigInt::FromNumber(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::BigInt::FromNumber(Isolate *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  double dVar4;
  
  uVar3 = *param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = MutableBigInt::NewFromInt(param_1,(int)uVar3 >> 1);
    return uVar1;
  }
  dVar4 = *(double *)(uVar3 + 3);
  if ((ABS(dVar4) != INFINITY) && (!NAN(ABS(dVar4)))) {
    if (NAN(dVar4)) {
      if (dVar4 == 0.0) {
LAB_0106f750:
        uVar1 = MutableBigInt::NewFromDouble(param_1,dVar4);
        return uVar1;
      }
    }
    else if ((dVar4 == 0.0) || ((double)(long)dVar4 == dVar4)) goto LAB_0106f750;
  }
  puVar2 = (undefined8 *)Factory::NewRangeError((Factory *)param_1,0x12,param_2,0,0);
  Isolate::Throw(param_1,*puVar2,0);
  return 0;
}

