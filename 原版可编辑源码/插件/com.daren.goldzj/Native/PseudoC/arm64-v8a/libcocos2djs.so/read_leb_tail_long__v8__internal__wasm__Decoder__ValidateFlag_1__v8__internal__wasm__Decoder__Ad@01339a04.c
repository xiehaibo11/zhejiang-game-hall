
/* long v8::internal::wasm::Decoder::read_leb_tail<long,
   (v8::internal::wasm::Decoder::ValidateFlag)1, (v8::internal::wasm::Decoder::AdvancePCFlag)0,
   (v8::internal::wasm::Decoder::TraceFlag)0, 4>(unsigned char const*, unsigned int*, char const*,
   long) */

long __thiscall
v8::internal::wasm::Decoder::
read_leb_tail<long,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,4>
          (Decoder *this,uchar *param_1,uint *param_2,char *param_3,long param_4)

{
  uchar *puVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 < *(uchar **)(this + 0x18)) {
    uVar3 = param_4 | (ulong)((int)(char)*param_1 & 0x7f) << 0x1c;
    if (-1 < (char)*param_1) {
      *param_2 = 5;
      return (long)(uVar3 << 0x1d) >> 0x1d;
    }
    puVar1 = param_1 + 1;
    if (puVar1 < *(uchar **)(this + 0x18)) {
      uVar3 = uVar3 | (ulong)((int)(char)*puVar1 & 0x7f) << 0x23;
      if (-1 < (char)*puVar1) {
        *param_2 = 6;
        return (long)(uVar3 << 0x16) >> 0x16;
      }
      lVar2 = read_leb_tail<long,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,6>
                        (this,param_1 + 2,param_2,param_3,uVar3);
      return lVar2;
    }
    *param_2 = 5;
    param_1 = puVar1;
  }
  else {
    *param_2 = 4;
  }
  errorf((uchar *)this,(char *)param_1,"expected %s");
  return 0;
}

