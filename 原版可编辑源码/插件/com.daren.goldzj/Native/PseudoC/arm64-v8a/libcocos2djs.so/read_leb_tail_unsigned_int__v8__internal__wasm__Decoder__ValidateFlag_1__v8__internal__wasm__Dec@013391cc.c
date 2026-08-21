
/* unsigned int v8::internal::wasm::Decoder::read_leb_tail<unsigned int,
   (v8::internal::wasm::Decoder::ValidateFlag)1, (v8::internal::wasm::Decoder::AdvancePCFlag)0,
   (v8::internal::wasm::Decoder::TraceFlag)0, 1>(unsigned char const*, unsigned int*, char const*,
   unsigned int) */

uint __thiscall
v8::internal::wasm::Decoder::
read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = *(byte **)(this + 0x18);
  if (param_1 < pbVar3) {
    uVar2 = param_4 | ((int)(char)*param_1 & 0x7fU) << 7;
    if (-1 < (char)*param_1) {
      *param_2 = 2;
      return uVar2;
    }
    pbVar1 = param_1 + 1;
    if (pbVar1 < pbVar3) {
      uVar2 = uVar2 | ((int)(char)*pbVar1 & 0x7fU) << 0xe;
      if (-1 < (char)*pbVar1) {
        *param_2 = 3;
        return uVar2;
      }
      pbVar1 = param_1 + 2;
      if (pbVar1 < pbVar3) {
        uVar2 = uVar2 | ((int)(char)*pbVar1 & 0x7fU) << 0x15;
        if (-1 < (char)*pbVar1) {
          *param_2 = 4;
          return uVar2;
        }
        pbVar1 = param_1 + 3;
        if (pbVar1 < pbVar3) {
          bVar4 = *pbVar1;
          *param_2 = 5;
          if (-1 < (char)bVar4) {
            uVar2 = uVar2 | (uint)bVar4 << 0x1c;
            goto joined_r0x013392fc;
          }
        }
        else {
          bVar4 = 0;
          *param_2 = 4;
        }
        errorf((uchar *)this,(char *)pbVar1,"expected %s");
        uVar2 = 0;
joined_r0x013392fc:
        if ((bVar4 & 0xf0) != 0) {
          error(this,pbVar1,"extra bits in varint");
          return 0;
        }
        return uVar2;
      }
      uVar2 = 3;
      param_1 = pbVar1;
    }
    else {
      uVar2 = 2;
      param_1 = pbVar1;
    }
    *param_2 = uVar2;
  }
  else {
    *param_2 = 1;
  }
  errorf((uchar *)this,(char *)param_1,"expected %s");
  return 0;
}

