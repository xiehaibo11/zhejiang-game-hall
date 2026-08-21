
/* v8::internal::Serializer::SerializeRootObject(v8::internal::Object) */

void __thiscall v8::internal::Serializer::SerializeRootObject(Serializer *this,uint param_2)

{
  if ((param_2 & 1) == 0) {
    PutSmi();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011ec24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))();
  return;
}

