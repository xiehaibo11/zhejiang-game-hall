
/* int v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>(unsigned
   char const*, unsigned int*, char const*) */

int __thiscall
v8::internal::wasm::Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3)

{
  uchar *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  if (param_1 < *(uchar **)(this + 0x18)) {
    bVar3 = *param_1;
    if (-1 < (char)bVar3) {
      *param_2 = 1;
      return (int)((uint)bVar3 << 0x19) >> 0x19;
    }
    puVar1 = param_1 + 1;
    if (puVar1 < *(uchar **)(this + 0x18)) {
      uVar2 = bVar3 & 0x7f | ((int)(char)*puVar1 & 0x7fU) << 7;
      if (-1 < (char)*puVar1) {
        *param_2 = 2;
        return (int)(uVar2 << 0x12) >> 0x12;
      }
      iVar4 = read_leb_tail<int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,2>
                        (this,param_1 + 2,param_2,param_3,uVar2);
      return iVar4;
    }
    *param_2 = 1;
    param_1 = puVar1;
  }
  else {
    *param_2 = 0;
  }
  errorf((uchar *)this,(char *)param_1,"expected %s");
  return 0;
}

