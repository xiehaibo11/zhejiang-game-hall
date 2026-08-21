
/* v8::internal::CodeSerializer::~CodeSerializer() */

void __thiscall v8::internal::CodeSerializer::~CodeSerializer(CodeSerializer *this)

{
  *(undefined ***)this = &PTR__CodeSerializer_01cbb850;
  Serializer::OutputStatistics((char *)this);
  Serializer::~Serializer((Serializer *)this);
  return;
}

