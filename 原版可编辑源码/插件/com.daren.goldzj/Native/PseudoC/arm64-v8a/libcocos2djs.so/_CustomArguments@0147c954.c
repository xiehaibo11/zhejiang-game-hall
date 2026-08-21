
/* v8::internal::CustomArguments<v8::PropertyCallbackInfo<v8::Value> >::~CustomArguments() */

void __thiscall
v8::internal::CustomArguments<v8::PropertyCallbackInfo<v8::Value>>::~CustomArguments
          (CustomArguments<v8::PropertyCallbackInfo<v8::Value>> *this)

{
  *(undefined8 *)(this + 0x38) = 0x1baddead0baddeaf;
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(*(long *)(this + 8) + 0xb790) = *(undefined8 *)(this + 0x10);
  return;
}

