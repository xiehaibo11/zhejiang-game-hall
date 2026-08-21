
/* v8::internal::NEONFormatDecoder::Mnemonic(char const*) */

NEONFormatDecoder * __thiscall
v8::internal::NEONFormatDecoder::Mnemonic(NEONFormatDecoder *this,char *param_1)

{
  if (((byte)this[3] >> 6 & 1) != 0) {
    param_1 = (char *)(this + 0x60);
    FUN_0126c46c(param_1,0xffffffffffffffff,0x10,&DAT_019f3948);
  }
  return (NEONFormatDecoder *)param_1;
}

