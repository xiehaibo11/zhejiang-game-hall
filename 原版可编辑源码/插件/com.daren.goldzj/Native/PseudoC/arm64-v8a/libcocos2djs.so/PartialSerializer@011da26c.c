
/* v8::internal::PartialSerializer::PartialSerializer(v8::internal::Isolate*,
   v8::internal::StartupSerializer*, v8::SerializeInternalFieldsCallback) */

void __thiscall
v8::internal::PartialSerializer::PartialSerializer
          (PartialSerializer *this,Isolate *param_1,undefined8 param_2,undefined8 param_4,
          undefined8 param_5)

{
  Serializer::Serializer((Serializer *)this,param_1);
  *(undefined8 *)(this + 0x1c8) = param_2;
  *(undefined8 *)(this + 0x1d0) = param_4;
  *(undefined8 *)(this + 0x1d8) = param_5;
  this[0x1e0] = (PartialSerializer)0x1;
  *(undefined ***)this = &PTR__PartialSerializer_01cbb8f8;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  Serializer::InitializeCodeAddressMap((Serializer *)this);
  SerializerAllocator::UseCustomChunkSize
            ((SerializerAllocator *)(this + 0xd8),FLAG_serialization_chunk_size);
  return;
}

