
/* v8::Number::New(v8::Isolate*, double) */

void v8::Number::New(Isolate *param_1,double param_2)

{
  undefined4 uVar1;
  double dVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  dVar2 = NAN;
  if (!NAN(param_2)) {
    dVar2 = param_2;
  }
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::Factory::NewNumber<(v8::internal::AllocationType)0>((Factory *)param_1,dVar2);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

