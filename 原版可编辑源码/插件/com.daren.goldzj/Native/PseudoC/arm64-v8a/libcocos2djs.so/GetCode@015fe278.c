
/* v8::internal::wasm::StreamingDecoder::SectionBuffer::GetCode(v8::internal::wasm::WireBytesRef)
   const */

undefined1  [16] __thiscall
v8::internal::wasm::StreamingDecoder::SectionBuffer::GetCode(SectionBuffer *this,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 >> 0x20;
  auVar1._0_8_ = *(long *)(this + 0x10) + (ulong)(uint)((int)param_2 - *(int *)(this + 8));
  return auVar1;
}

