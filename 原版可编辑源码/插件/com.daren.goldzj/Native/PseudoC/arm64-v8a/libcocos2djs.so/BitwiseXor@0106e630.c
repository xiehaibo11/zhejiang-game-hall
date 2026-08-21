
/* v8::internal::BigInt::BitwiseXor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigInt>, v8::internal::Handle<v8::internal::BigInt>) */

undefined8 * v8::internal::BigInt::BitwiseXor(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)MutableBigInt::BitwiseXor();
  if (puVar1 != (undefined8 *)0x0) {
    MutableBigInt::Canonicalize(*puVar1);
  }
  return puVar1;
}

