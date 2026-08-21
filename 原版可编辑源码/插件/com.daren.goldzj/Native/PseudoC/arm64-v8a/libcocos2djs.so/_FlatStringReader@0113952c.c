
/* v8::internal::FlatStringReader::~FlatStringReader() */

void __thiscall v8::internal::FlatStringReader::~FlatStringReader(FlatStringReader *this)

{
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(*(long *)(this + 8) + 0xb790) = *(undefined8 *)(this + 0x10);
  operator_delete(this);
  return;
}

