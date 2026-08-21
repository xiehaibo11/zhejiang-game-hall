
/* v8::internal::StartupSerializer::~StartupSerializer() */

void __thiscall v8::internal::StartupSerializer::~StartupSerializer(StartupSerializer *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__StartupSerializer_01cbbbf8;
  SerializerDeserializer::RestoreExternalReferenceRedirectors
            ((SerializerDeserializer *)this,(vector *)(this + 0x248));
  SerializerDeserializer::RestoreExternalReferenceRedirectors
            ((SerializerDeserializer *)this,(vector *)(this + 0x260));
  Serializer::OutputStatistics((char *)this);
  pvVar1 = *(void **)(this + 0x260);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x268) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x248);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x250) = pvVar1;
    operator_delete(pvVar1);
  }
  *(undefined ***)this = &PTR__RootsSerializer_01cbb988;
  free(*(void **)(this + 0x218));
  Serializer::~Serializer((Serializer *)this);
  return;
}

