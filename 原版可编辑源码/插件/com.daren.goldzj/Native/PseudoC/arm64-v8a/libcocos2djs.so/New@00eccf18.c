
/* v8::BigInt::New(v8::Isolate*, long) */

void v8::BigInt::New(Isolate *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::BigInt::FromInt64((Isolate *)param_1,param_2);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

