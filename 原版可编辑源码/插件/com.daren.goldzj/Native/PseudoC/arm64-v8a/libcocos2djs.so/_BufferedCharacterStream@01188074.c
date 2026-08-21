
/* v8::internal::BufferedCharacterStream<v8::internal::ChunkedStream>::~BufferedCharacterStream() */

void __thiscall
v8::internal::BufferedCharacterStream<v8::internal::ChunkedStream>::~BufferedCharacterStream
          (BufferedCharacterStream<v8::internal::ChunkedStream> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x448);
  puVar2 = *(undefined8 **)(this + 0x450);
  *(undefined ***)this = &PTR__BufferedCharacterStream_01cb5758;
  *(undefined ***)(this + 0x438) = &PTR_ProcessChunk_01cb5798;
  if (puVar1 != puVar2) {
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete__((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x448);
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x450) = puVar1;
    operator_delete(puVar1);
  }
  operator_delete(this);
  return;
}

