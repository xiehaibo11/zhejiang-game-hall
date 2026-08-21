
/* v8::internal::PartialDeserializer::~PartialDeserializer() */

void __thiscall v8::internal::PartialDeserializer::~PartialDeserializer(PartialDeserializer *this)

{
  Deserializer::~Deserializer((Deserializer *)this);
  operator_delete(this);
  return;
}

