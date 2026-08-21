
/* v8::internal::Deserializer::~Deserializer() */

void __thiscall v8::internal::Deserializer::~Deserializer(Deserializer *this)

{
  ~Deserializer(this);
  operator_delete(this);
  return;
}

