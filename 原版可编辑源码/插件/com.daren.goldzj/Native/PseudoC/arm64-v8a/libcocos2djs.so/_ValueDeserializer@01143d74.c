
/* v8::internal::ValueDeserializer::~ValueDeserializer() */

void __thiscall v8::internal::ValueDeserializer::~ValueDeserializer(ValueDeserializer *this)

{
  GlobalHandles::Destroy(*(ulong **)(this + 0x30));
  if (*(ulong **)(this + 0x38) != (ulong *)0x0) {
    GlobalHandles::Destroy(*(ulong **)(this + 0x38));
    return;
  }
  return;
}

