
/* v8::internal::wasm::ModuleDecoderImpl::validate_memory_flags(bool*) */

byte __thiscall
v8::internal::wasm::ModuleDecoderImpl::validate_memory_flags(ModuleDecoderImpl *this,bool *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar2 = *(byte **)(this + 0x10);
  if (*(int *)(this + 0x18) == (int)pbVar2) {
    Decoder::errorf((uchar *)this,(char *)pbVar2,"expected %u bytes, fell off end",1);
    pbVar3 = *(byte **)(this + 0x18);
    bVar4 = 0;
  }
  else {
    pbVar3 = pbVar2 + 1;
    bVar4 = *pbVar2;
  }
  *(byte **)(this + 0x10) = pbVar3;
  *param_1 = false;
  if (((byte)this[0x48] >> 1 & 1) == 0) {
    if ((bVar4 & 0xfe) == 0) {
      return bVar4;
    }
  }
  else if ((bVar4 & 0xfc) == 0) {
    if (bVar4 != 2) {
      if (bVar4 != 3) {
        return bVar4;
      }
      *param_1 = true;
      return 3;
    }
    pcVar1 = "memory limits flags should have maximum defined if shared is true";
    goto LAB_015f30bc;
  }
  pcVar1 = "invalid memory limits flags";
LAB_015f30bc:
  Decoder::errorf((uchar *)this,(char *)(pbVar3 + -1),pcVar1);
  return bVar4;
}

