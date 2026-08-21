
/* v8::ValueDeserializer::~ValueDeserializer() */

void __thiscall v8::ValueDeserializer::~ValueDeserializer(ValueDeserializer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    internal::ValueDeserializer::~ValueDeserializer((ValueDeserializer *)((long)pvVar1 + 8));
    operator_delete(pvVar1);
    return;
  }
  return;
}

