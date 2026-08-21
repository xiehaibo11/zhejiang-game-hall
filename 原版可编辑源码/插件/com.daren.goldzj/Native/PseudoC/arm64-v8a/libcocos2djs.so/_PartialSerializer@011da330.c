
/* v8::internal::PartialSerializer::~PartialSerializer() */

void __thiscall v8::internal::PartialSerializer::~PartialSerializer(PartialSerializer *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__PartialSerializer_01cbb8f8;
  Serializer::OutputStatistics((char *)this);
  pvVar1 = *(void **)(this + 0x1f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1f8) = pvVar1;
    operator_delete(pvVar1);
  }
  Serializer::~Serializer((Serializer *)this);
  operator_delete(this);
  return;
}

