
/* v8::internal::RelocatingCharacterStream::~RelocatingCharacterStream() */

void __thiscall
v8::internal::RelocatingCharacterStream::~RelocatingCharacterStream(RelocatingCharacterStream *this)

{
  *(undefined ***)this = &PTR__RelocatingCharacterStream_01cb5680;
  Heap::RemoveGCEpilogueCallback
            ((Heap *)(*(long *)(this + 0x50) + 0x8850),UpdateBufferPointersCallback,this);
  operator_delete(this);
  return;
}

