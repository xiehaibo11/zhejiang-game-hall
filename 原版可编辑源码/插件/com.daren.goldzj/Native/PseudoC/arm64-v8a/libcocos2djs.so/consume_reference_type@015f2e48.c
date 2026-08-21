
/* v8::internal::wasm::ModuleDecoderImpl::consume_reference_type() */

undefined8 __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_reference_type(ModuleDecoderImpl *this)

{
  uchar uVar1;
  uchar *puVar2;
  uchar *puVar3;
  
  puVar2 = *(uchar **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)puVar2) {
    Decoder::errorf((uchar *)this,(char *)puVar2,"expected %u bytes, fell off end",1);
    puVar3 = *(uchar **)(this + 0x18);
    *(uchar **)(this + 0x10) = puVar3;
  }
  else {
    puVar3 = puVar2 + 1;
    uVar1 = *puVar2;
    *(uchar **)(this + 0x10) = puVar3;
    if (uVar1 == 'h') {
      if (((byte)this[0x48] & 1) == 0) {
        Decoder::error((Decoder *)this,puVar2,
                       "Invalid type. Set --experimental-wasm-eh to use \'ExnRef\'");
      }
      return 9;
    }
    if (uVar1 == 'p') {
      return 7;
    }
    if (uVar1 == 'o') {
      if (((byte)this[0x48] >> 5 & 1) == 0) {
        Decoder::error((Decoder *)this,puVar2,
                       "Invalid type. Set --experimental-wasm-anyref to use \'AnyRef\'");
        return 6;
      }
      return 6;
    }
  }
  Decoder::error((Decoder *)this,puVar3 + -1,"invalid reference type");
  return 0;
}

