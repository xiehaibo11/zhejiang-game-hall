
/* long v8::internal::wasm::Decoder::read_leb_tail<long,
   (v8::internal::wasm::Decoder::ValidateFlag)1, (v8::internal::wasm::Decoder::AdvancePCFlag)0,
   (v8::internal::wasm::Decoder::TraceFlag)0, 8>(unsigned char const*, unsigned int*, char const*,
   long) */

long __thiscall
v8::internal::wasm::Decoder::
read_leb_tail<long,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,8>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3,long param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  
  if (*(byte **)(this + 0x18) <= param_1) {
    *param_2 = 8;
    errorf((uchar *)this,(char *)param_1,"expected %s");
    return 0;
  }
  uVar2 = param_4 | (ulong)((int)(char)*param_1 & 0x7f) << 0x38;
  if (-1 < (char)*param_1) {
    *param_2 = 9;
    return (long)(uVar2 << 1) >> 1;
  }
  pbVar1 = param_1 + 1;
  if (pbVar1 < *(byte **)(this + 0x18)) {
    bVar3 = *pbVar1;
    *param_2 = 10;
    if (-1 < (char)bVar3) {
      uVar2 = uVar2 | (ulong)bVar3 << 0x3f;
      goto joined_r0x01339c14;
    }
  }
  else {
    bVar3 = 0;
    *param_2 = 9;
  }
  errorf((uchar *)this,(char *)pbVar1,"expected %s");
  uVar2 = 0;
joined_r0x01339c14:
  if (bVar3 == 0) {
    return uVar2;
  }
  if (bVar3 != 0x7f) {
    error(this,pbVar1,"extra bits in varint");
    return 0;
  }
  return uVar2;
}

