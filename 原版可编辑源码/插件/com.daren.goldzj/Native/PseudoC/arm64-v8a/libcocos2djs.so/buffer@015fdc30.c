
/* v8::internal::wasm::StreamingDecoder::DecodeSectionPayload::buffer() */

undefined1  [16] __thiscall
v8::internal::wasm::StreamingDecoder::DecodeSectionPayload::buffer(DecodeSectionPayload *this)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(this + 0x10);
  auVar2._8_8_ = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x20);
  auVar2._0_8_ = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x20);
  return auVar2;
}

