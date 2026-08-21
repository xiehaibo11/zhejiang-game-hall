
/* v8::internal::UnbufferedCharacterStream<v8::internal::ChunkedStream>::~UnbufferedCharacterStream()
    */

void __thiscall
v8::internal::UnbufferedCharacterStream<v8::internal::ChunkedStream>::~UnbufferedCharacterStream
          (UnbufferedCharacterStream<v8::internal::ChunkedStream> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x48);
  puVar1 = *(undefined8 **)(this + 0x50);
  *(undefined ***)this = &PTR__UnbufferedCharacterStream_01cb5700;
  *(undefined ***)(this + 0x38) = &PTR_ProcessChunk_01cb5740;
  if (puVar2 != puVar1) {
    do {
      if ((void *)*puVar2 != (void *)0x0) {
        operator_delete__((void *)*puVar2);
      }
      puVar2 = puVar2 + 3;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x48);
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x50) = puVar2;
    operator_delete(puVar2);
  }
  operator_delete(this);
  return;
}

