
/* long 
   v8::internal::wasm::Decoder::read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>(unsigned
   char const*, unsigned int*, char const*) */

long __thiscall
v8::internal::wasm::Decoder::read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3)

{
  uchar *puVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  
  if (param_1 < *(uchar **)(this + 0x18)) {
    bVar3 = *param_1;
    if (-1 < (char)bVar3) {
      *param_2 = 1;
      return (long)((ulong)bVar3 << 0x39) >> 0x39;
    }
    puVar1 = param_1 + 1;
    if (puVar1 < *(uchar **)(this + 0x18)) {
      uVar2 = (ulong)bVar3 & 0x7f | (ulong)((int)(char)*puVar1 & 0x7f) << 7;
      if (-1 < (char)*puVar1) {
        *param_2 = 2;
        return (long)(uVar2 << 0x32) >> 0x32;
      }
      lVar4 = read_leb_tail<long,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,2>
                        (this,param_1 + 2,param_2,param_3,uVar2);
      return lVar4;
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

