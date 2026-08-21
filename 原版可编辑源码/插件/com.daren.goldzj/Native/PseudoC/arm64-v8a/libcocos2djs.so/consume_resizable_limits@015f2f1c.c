
/* v8::internal::wasm::ModuleDecoderImpl::consume_resizable_limits(char const*, char const*,
   unsigned int, unsigned int*, bool*, unsigned int, unsigned int*, unsigned char) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::consume_resizable_limits
          (ModuleDecoderImpl *this,char *param_1,char *param_2,uint param_3,uint *param_4,
          bool *param_5,uint param_6,uint *param_7,uchar param_8)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(this + 0x10);
  uVar1 = Decoder::consume_u32v((Decoder *)this,"initial size");
  *param_4 = uVar1;
  *param_5 = false;
  if (param_3 < *param_4) {
    Decoder::errorf((uchar *)this,pcVar3,
                    "initial %s size (%u %s) is larger than implementation limit (%u)",param_1,
                    (ulong)*param_4,param_2,(ulong)param_3);
  }
  if ((param_8 & 1) == 0) {
    *param_5 = false;
    *param_7 = param_3;
  }
  else {
    *param_5 = true;
    pcVar3 = *(char **)(this + 0x10);
    uVar1 = Decoder::consume_u32v((Decoder *)this,"maximum size");
    uVar2 = (ulong)uVar1;
    *param_7 = uVar1;
    if (param_6 < uVar1) {
      Decoder::errorf((uchar *)this,pcVar3,
                      "maximum %s size (%u %s) is larger than implementation limit (%u)",param_1,
                      uVar2,param_2,(ulong)param_6);
      uVar2 = (ulong)*param_7;
    }
    if ((uint)uVar2 < *param_4) {
      Decoder::errorf((uchar *)this,pcVar3,"maximum %s size (%u %s) is less than initial (%u %s)",
                      param_1,uVar2,param_2,(ulong)*param_4,param_2);
      return;
    }
  }
  return;
}

