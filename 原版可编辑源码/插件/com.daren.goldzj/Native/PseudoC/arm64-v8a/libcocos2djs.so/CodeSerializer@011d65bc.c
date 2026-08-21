
/* v8::internal::CodeSerializer::CodeSerializer(v8::internal::Isolate*, unsigned int) */

void __thiscall
v8::internal::CodeSerializer::CodeSerializer(CodeSerializer *this,Isolate *param_1,uint param_2)

{
  Serializer::Serializer((Serializer *)this,param_1);
  *(uint *)(this + 0x1c8) = param_2;
  *(undefined ***)this = &PTR__CodeSerializer_01cbb850;
  SerializerAllocator::UseCustomChunkSize
            ((SerializerAllocator *)(this + 0xd8),FLAG_serialization_chunk_size);
  return;
}

