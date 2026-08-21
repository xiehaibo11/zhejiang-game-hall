
/* v8::internal::ReadOnlyDeserializer::~ReadOnlyDeserializer() */

void __thiscall
v8::internal::ReadOnlyDeserializer::~ReadOnlyDeserializer(ReadOnlyDeserializer *this)

{
  Deserializer::~Deserializer((Deserializer *)this);
  operator_delete(this);
  return;
}

