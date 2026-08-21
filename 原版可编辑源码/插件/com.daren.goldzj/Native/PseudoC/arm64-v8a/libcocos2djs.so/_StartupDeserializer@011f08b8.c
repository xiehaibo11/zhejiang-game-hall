
/* v8::internal::StartupDeserializer::~StartupDeserializer() */

void __thiscall v8::internal::StartupDeserializer::~StartupDeserializer(StartupDeserializer *this)

{
  Deserializer::~Deserializer((Deserializer *)this);
  operator_delete(this);
  return;
}

