
/* v8::internal::ObjectDeserializer::~ObjectDeserializer() */

void __thiscall v8::internal::ObjectDeserializer::~ObjectDeserializer(ObjectDeserializer *this)

{
  Deserializer::~Deserializer((Deserializer *)this);
  operator_delete(this);
  return;
}

