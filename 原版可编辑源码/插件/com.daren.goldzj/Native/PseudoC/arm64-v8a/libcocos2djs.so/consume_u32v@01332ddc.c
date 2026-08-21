
/* v8::internal::wasm::Decoder::consume_u32v(char const*) */

uint __thiscall v8::internal::wasm::Decoder::consume_u32v(Decoder *this,char *param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint local_14;
  
  local_14 = 0;
  pbVar3 = *(byte **)(this + 0x10);
  if (pbVar3 < *(byte **)(this + 0x18)) {
    pbVar2 = pbVar3 + 1;
    uVar1 = *pbVar3 & 0x7f;
    if ((char)*pbVar3 < '\0') {
      if (*(byte **)(this + 0x18) <= pbVar2) {
        *(byte **)(this + 0x10) = pbVar2;
        local_14 = 1;
        pbVar3 = pbVar2;
        goto LAB_01332e30;
      }
      pbVar2 = pbVar3 + 2;
      uVar1 = uVar1 | ((int)(char)pbVar3[1] & 0x7fU) << 7;
      if ((char)pbVar3[1] < 0) {
        uVar1 = read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)1,(v8::internal::wasm::Decoder::TraceFlag)1,2>
                          (this,pbVar2,&local_14,param_1,uVar1);
        return uVar1;
      }
    }
    *(byte **)(this + 0x10) = pbVar2;
  }
  else {
    local_14 = 0;
LAB_01332e30:
    errorf((uchar *)this,(char *)pbVar3,"expected %s");
    uVar1 = 0;
  }
  return uVar1;
}

