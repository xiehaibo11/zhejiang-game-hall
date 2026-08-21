
/* v8::internal::wasm::ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>::ImmI64Immediate(v8::internal::wasm::Decoder*,
   unsigned char const*) */

void __thiscall
v8::internal::wasm::ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>::ImmI64Immediate
          (ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0> *this,Decoder *param_1,
          uchar *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  
  bVar2 = param_2[1];
  if ((char)bVar2 < '\0') {
    uVar1 = (ulong)bVar2 & 0x7f | (ulong)((int)(char)param_2[2] & 0x7f) << 7;
    if ((char)param_2[2] < 0) {
      uVar1 = uVar1 | (ulong)((int)(char)param_2[3] & 0x7f) << 0xe;
      if ((char)param_2[3] < 0) {
        uVar1 = uVar1 | (ulong)((int)(char)param_2[4] & 0x7f) << 0x15;
        if ((char)param_2[4] < 0) {
          uVar1 = uVar1 | (ulong)((int)(char)param_2[5] & 0x7f) << 0x1c;
          if ((char)param_2[5] < 0) {
            uVar1 = uVar1 | (ulong)((int)(char)param_2[6] & 0x7f) << 0x23;
            if ((char)param_2[6] < 0) {
              uVar1 = uVar1 | (ulong)((int)(char)param_2[7] & 0x7f) << 0x2a;
              if ((char)param_2[7] < 0) {
                uVar1 = uVar1 | (ulong)((int)(char)param_2[8] & 0x7f) << 0x31;
                if ((char)param_2[8] < 0) {
                  uVar1 = uVar1 | (ulong)((int)(char)param_2[9] & 0x7f) << 0x38;
                  if ((char)param_2[9] < 0) {
                    bVar2 = param_2[10];
                    *(undefined4 *)(this + 8) = 10;
                    *(ulong *)this = uVar1 | (ulong)bVar2 << 0x3f;
                    return;
                  }
                  uVar4 = 9;
                  lVar3 = (long)(uVar1 << 1) >> 1;
                }
                else {
                  uVar4 = 8;
                  lVar3 = (long)(uVar1 << 8) >> 8;
                }
              }
              else {
                uVar4 = 7;
                lVar3 = (long)(uVar1 << 0xf) >> 0xf;
              }
            }
            else {
              uVar4 = 6;
              lVar3 = (long)(uVar1 << 0x16) >> 0x16;
            }
          }
          else {
            uVar4 = 5;
            lVar3 = (long)(uVar1 << 0x1d) >> 0x1d;
          }
        }
        else {
          uVar4 = 4;
          lVar3 = (long)(uVar1 << 0x24) >> 0x24;
        }
      }
      else {
        uVar4 = 3;
        lVar3 = (long)(uVar1 << 0x2b) >> 0x2b;
      }
    }
    else {
      uVar4 = 2;
      lVar3 = (long)(uVar1 << 0x32) >> 0x32;
    }
  }
  else {
    uVar4 = 1;
    lVar3 = (long)((ulong)bVar2 << 0x39) >> 0x39;
  }
  *(undefined4 *)(this + 8) = uVar4;
  *(long *)this = lVar3;
  return;
}

