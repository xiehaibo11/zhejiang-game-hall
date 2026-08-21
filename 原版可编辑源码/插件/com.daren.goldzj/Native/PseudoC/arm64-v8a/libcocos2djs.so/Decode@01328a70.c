
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::Decode() */

bool __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
Decode(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
       *this)

{
  WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
  WVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(ulong *)(this + 0x10) <= *(ulong *)(this + 0x18)) {
    WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
              ((WasmFeatures *)(this + 0x50),(Decoder *)this,*(Signature **)(this + 0x60),
               *(ZoneVector **)(this + 0x68));
    DecodeFunctionBody(this);
    lVar3 = *(long *)(this + 200) - *(long *)(this + 0xc0);
    if ((ulong)((lVar3 >> 3) * 0x2e8ba2e8ba2e8ba3) < 2) {
      if (lVar3 == 0x58) {
        Decoder::error((Decoder *)this,"function body must end with \"end\" opcode");
      }
      WVar1 = this[0x30];
    }
    else {
      Decoder::error((Decoder *)this,*(uchar **)(*(long *)(this + 200) + -0x50),
                     "unterminated control structure");
      WVar1 = this[0x30];
    }
    if (((byte)WVar1 & 1) == 0) {
      uVar2 = (ulong)((byte)WVar1 >> 1);
    }
    else {
      uVar2 = *(ulong *)(this + 0x38);
    }
    return uVar2 == 0;
  }
  Decoder::error((Decoder *)this,"function body end < start");
  return false;
}

