
/* int v8::internal::wasm::Decoder::read_leb_tail<int, (v8::internal::wasm::Decoder::ValidateFlag)1,
   (v8::internal::wasm::Decoder::AdvancePCFlag)0, (v8::internal::wasm::Decoder::TraceFlag)0,
   2>(unsigned char const*, unsigned int*, char const*, int) */

int __thiscall
v8::internal::wasm::Decoder::
read_leb_tail<int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,2>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = *(byte **)(this + 0x18);
  if (pbVar3 <= param_1) {
    *param_2 = 2;
LAB_01339060:
    errorf((uchar *)this,(char *)param_1,"expected %s");
    return 0;
  }
  uVar2 = param_4 | ((int)(char)*param_1 & 0x7fU) << 0xe;
  if (-1 < (char)*param_1) {
    *param_2 = 3;
    return (int)(uVar2 << 0xb) >> 0xb;
  }
  pbVar1 = param_1 + 1;
  if (pbVar3 <= pbVar1) {
    *param_2 = 3;
    param_1 = pbVar1;
    goto LAB_01339060;
  }
  uVar2 = uVar2 | ((int)(char)*pbVar1 & 0x7fU) << 0x15;
  if (-1 < (char)*pbVar1) {
    *param_2 = 4;
    return (int)(uVar2 << 4) >> 4;
  }
  pbVar1 = param_1 + 2;
  if (pbVar1 < pbVar3) {
    bVar4 = *pbVar1;
    *param_2 = 5;
    if (-1 < (char)bVar4) {
      uVar2 = uVar2 | (uint)bVar4 << 0x1c;
      goto joined_r0x01339114;
    }
  }
  else {
    bVar4 = 0;
    *param_2 = 4;
  }
  errorf((uchar *)this,(char *)pbVar1,"expected %s");
  uVar2 = 0;
joined_r0x01339114:
  if ((bVar4 & 0xf8) == 0) {
    return uVar2;
  }
  if ((bVar4 & 0xf8) != 0x78) {
    error(this,pbVar1,"extra bits in varint");
    return 0;
  }
  return uVar2;
}

