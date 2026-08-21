
/* v8::internal::wasm::ModuleDecoderImpl::consume_value_type() */

int __thiscall v8::internal::wasm::ModuleDecoderImpl::consume_value_type(ModuleDecoderImpl *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  
  pbVar1 = *(byte **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)pbVar1) {
    Decoder::errorf((uchar *)this,(char *)pbVar1,"expected %u bytes, fell off end",1);
    pbVar2 = *(byte **)(this + 0x18);
    bVar3 = 0;
    *(byte **)(this + 0x10) = pbVar2;
  }
  else {
    pbVar2 = pbVar1 + 1;
    bVar3 = *pbVar1;
    *(byte **)(this + 0x10) = pbVar2;
    if ((bVar3 & 0xfc) == 0x7c) {
      return -0x80 - (uint)bVar3;
    }
  }
  if (this[0x90] == (ModuleDecoderImpl)0x0) {
    switch(bVar3) {
    case 0x68:
      if (((byte)this[0x48] & 1) != 0) {
        return 9;
      }
      break;
    case 0x6f:
      if (((byte)this[0x48] >> 5 & 1) != 0) {
        return 6;
      }
      break;
    case 0x70:
      if (((byte)this[0x48] >> 5 & 1) != 0) {
        return 7;
      }
      break;
    case 0x7b:
      if (((byte)this[0x48] >> 2 & 1) != 0) {
        return 5;
      }
    }
  }
  Decoder::error((Decoder *)this,pbVar2 + -1,"invalid local type");
  return 0;
}

