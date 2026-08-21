
/* v8::internal::BigInt::UnsignedRightShift(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

undefined8 v8::internal::BigInt::UnsignedRightShift(Factory *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)Factory::NewTypeError(param_1,0x16,0,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar1,0);
  return 0;
}

