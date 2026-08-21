
/* v8::internal::ReadOnlySerializer::~ReadOnlySerializer() */

void __thiscall v8::internal::ReadOnlySerializer::~ReadOnlySerializer(ReadOnlySerializer *this)

{
  *(undefined ***)this = &PTR__ReadOnlySerializer_01cbb940;
  Serializer::OutputStatistics((char *)this);
  *(undefined ***)this = &PTR__RootsSerializer_01cbb988;
  free(*(void **)(this + 0x218));
  Serializer::~Serializer((Serializer *)this);
  return;
}

