
/* v8::internal::StartupSerializer::~StartupSerializer() */

void __thiscall v8::internal::StartupSerializer::~StartupSerializer(StartupSerializer *this)

{
  ~StartupSerializer(this);
  operator_delete(this);
  return;
}

