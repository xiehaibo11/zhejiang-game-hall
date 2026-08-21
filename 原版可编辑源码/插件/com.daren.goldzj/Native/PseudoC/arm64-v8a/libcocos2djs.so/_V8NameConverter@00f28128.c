
/* v8::internal::V8NameConverter::~V8NameConverter() */

void __thiscall v8::internal::V8NameConverter::~V8NameConverter(V8NameConverter *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__V8NameConverter_01ca4b00;
  puVar1 = *(void **)(this + 0x150);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x140);
  *(undefined8 *)(this + 0x140) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(this);
  return;
}

