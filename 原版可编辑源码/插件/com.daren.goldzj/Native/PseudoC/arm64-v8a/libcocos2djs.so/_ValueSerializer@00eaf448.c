
/* v8::ValueSerializer::~ValueSerializer() */

void __thiscall v8::ValueSerializer::~ValueSerializer(ValueSerializer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    internal::ValueSerializer::~ValueSerializer((ValueSerializer *)((long)pvVar1 + 8));
    operator_delete(pvVar1);
    return;
  }
  return;
}

