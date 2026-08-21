
/* v8::internal::Utf8ExternalStreamingStream::~Utf8ExternalStreamingStream() */

void __thiscall
v8::internal::Utf8ExternalStreamingStream::~Utf8ExternalStreamingStream
          (Utf8ExternalStreamingStream *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x438);
  puVar2 = *(undefined8 **)(this + 0x440);
  *(undefined ***)this = &PTR__Utf8ExternalStreamingStream_01cb5578;
  if (puVar1 != puVar2) {
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        operator_delete__((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x438);
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *(undefined8 **)(this + 0x440) = puVar1;
  operator_delete(puVar1);
  return;
}

