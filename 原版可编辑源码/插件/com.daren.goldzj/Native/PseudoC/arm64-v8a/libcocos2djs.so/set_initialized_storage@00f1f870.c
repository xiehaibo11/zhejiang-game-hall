
/* v8::internal::TranslatedValue::set_initialized_storage(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::TranslatedValue::set_initialized_storage(TranslatedValue *this,undefined8 param_2)

{
  *(undefined8 *)(this + 0x10) = param_2;
  this[1] = (TranslatedValue)0x2;
  return;
}

