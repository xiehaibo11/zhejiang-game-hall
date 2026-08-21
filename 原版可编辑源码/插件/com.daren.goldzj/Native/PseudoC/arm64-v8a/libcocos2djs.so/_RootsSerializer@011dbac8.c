
/* v8::internal::RootsSerializer::~RootsSerializer() */

void __thiscall v8::internal::RootsSerializer::~RootsSerializer(RootsSerializer *this)

{
  *(undefined ***)this = &PTR__RootsSerializer_01cbb988;
  free(*(void **)(this + 0x218));
  Serializer::~Serializer((Serializer *)this);
  return;
}

