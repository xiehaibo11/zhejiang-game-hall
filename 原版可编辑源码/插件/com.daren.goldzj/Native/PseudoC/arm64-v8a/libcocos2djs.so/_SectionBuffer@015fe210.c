
/* v8::internal::wasm::StreamingDecoder::SectionBuffer::~SectionBuffer() */

void __thiscall
v8::internal::wasm::StreamingDecoder::SectionBuffer::~SectionBuffer(SectionBuffer *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__SectionBuffer_01cca320;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
    return;
  }
  return;
}

