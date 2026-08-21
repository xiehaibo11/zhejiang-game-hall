
/* v8::internal::wasm::Decoder::consume_i32v(char const*) */

int __thiscall v8::internal::wasm::Decoder::consume_i32v(Decoder *this,char *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint local_14;
  
  local_14 = 0;
  pbVar5 = *(byte **)(this + 0x10);
  if (pbVar5 < *(byte **)(this + 0x18)) {
    pbVar4 = pbVar5 + 1;
    bVar2 = *pbVar5;
    if (-1 < (char)bVar2) {
      *(byte **)(this + 0x10) = pbVar4;
      return (int)((uint)bVar2 << 0x19) >> 0x19;
    }
    if (pbVar4 < *(byte **)(this + 0x18)) {
      uVar1 = bVar2 & 0x7f | ((int)(char)pbVar5[1] & 0x7fU) << 7;
      if (-1 < (char)pbVar5[1]) {
        *(byte **)(this + 0x10) = pbVar5 + 2;
        return (int)(uVar1 << 0x12) >> 0x12;
      }
      iVar3 = read_leb_tail<int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)1,(v8::internal::wasm::Decoder::TraceFlag)1,2>
                        (this,pbVar5 + 2,&local_14,param_1,uVar1);
      return iVar3;
    }
    *(byte **)(this + 0x10) = pbVar4;
    local_14 = 1;
    pbVar5 = pbVar4;
  }
  else {
    local_14 = 0;
  }
  errorf((uchar *)this,(char *)pbVar5,"expected %s");
  return 0;
}

