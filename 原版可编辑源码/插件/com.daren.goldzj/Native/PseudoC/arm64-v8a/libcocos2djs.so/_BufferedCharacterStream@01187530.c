
/* v8::internal::BufferedCharacterStream<v8::internal::ExternalStringStream>::~BufferedCharacterStream()
    */

void __thiscall
v8::internal::BufferedCharacterStream<v8::internal::ExternalStringStream>::~BufferedCharacterStream
          (BufferedCharacterStream<v8::internal::ExternalStringStream> *this)

{
  *(undefined ***)this = &PTR__BufferedCharacterStream_01cb55c0;
  (**(code **)(**(long **)(this + 0x438) + 0x28))();
  operator_delete(this);
  return;
}

