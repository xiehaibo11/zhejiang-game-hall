
/* int v8::internal::wasm::Decoder::read_leb_tail<int, (v8::internal::wasm::Decoder::ValidateFlag)1,
   (v8::internal::wasm::Decoder::AdvancePCFlag)1, (v8::internal::wasm::Decoder::TraceFlag)1,
   2>(unsigned char const*, unsigned int*, char const*, int) */

int __thiscall
v8::internal::wasm::Decoder::
read_leb_tail<int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)1,(v8::internal::wasm::Decoder::TraceFlag)1,2>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3,int param_4)

{
  byte *pbVar1;
  uchar *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar5 = *(byte **)(this + 0x18);
  if ((pbVar5 <= param_1) ||
     (param_4 = param_4 | ((int)(char)*param_1 & 0x7fU) << 0xe, -1 < (char)*param_1)) {
    puVar2 = param_1;
    if (param_1 < pbVar5) {
      puVar2 = param_1 + 1;
    }
    uVar6 = 2;
    if (param_1 < pbVar5) {
      uVar6 = 3;
    }
    *(uchar **)(this + 0x10) = puVar2;
    *param_2 = uVar6;
    if (pbVar5 <= param_1) {
      errorf((uchar *)this,(char *)param_1,"expected %s");
      param_4 = 0;
    }
    return (param_4 << 0xb) >> 0xb;
  }
  pbVar1 = param_1 + 1;
  if ((pbVar1 < pbVar5) &&
     (param_4 = param_4 | ((int)(char)*pbVar1 & 0x7fU) << 0x15, (char)*pbVar1 < 0)) {
    pbVar1 = param_1 + 2;
    if (pbVar1 < pbVar5) {
      uVar6 = (uint)*pbVar1;
      param_4 = param_4 | uVar6 << 0x1c;
    }
    else {
      uVar6 = 0;
    }
    pbVar3 = pbVar1;
    if (pbVar1 < pbVar5) {
      pbVar3 = param_1 + 3;
    }
    uVar4 = 4;
    if (pbVar1 < pbVar5) {
      uVar4 = 5;
    }
    *(byte **)(this + 0x10) = pbVar3;
    *param_2 = uVar4;
    if ((uVar6 >> 7 != 0) || (pbVar5 <= pbVar1)) {
      errorf((uchar *)this,(char *)pbVar1,"expected %s");
      param_4 = 0;
    }
    if ((uVar6 & 0xf8) == 0) {
      return param_4;
    }
    if ((uVar6 & 0xf8) == 0x78) {
      return param_4;
    }
    error(this,pbVar1,"extra bits in varint");
    return 0;
  }
  pbVar3 = pbVar1;
  if (pbVar1 < pbVar5) {
    pbVar3 = param_1 + 2;
  }
  uVar6 = 3;
  if (pbVar1 < pbVar5) {
    uVar6 = 4;
  }
  *(byte **)(this + 0x10) = pbVar3;
  *param_2 = uVar6;
  if (pbVar5 <= pbVar1) {
    errorf((uchar *)this,(char *)pbVar1,"expected %s");
    param_4 = 0;
  }
  return (param_4 << 4) >> 4;
}

