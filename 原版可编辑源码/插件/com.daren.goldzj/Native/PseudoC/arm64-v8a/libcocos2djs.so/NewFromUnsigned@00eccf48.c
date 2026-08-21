
/* v8::BigInt::NewFromUnsigned(v8::Isolate*, unsigned long) */

void v8::BigInt::NewFromUnsigned(Isolate *param_1,ulong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::BigInt::FromUint64((Isolate *)param_1,param_2);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

