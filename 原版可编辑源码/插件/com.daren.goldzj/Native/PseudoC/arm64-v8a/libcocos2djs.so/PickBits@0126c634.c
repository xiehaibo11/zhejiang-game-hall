
/* v8::internal::NEONFormatDecoder::PickBits(unsigned char const*) */

uint __thiscall v8::internal::NEONFormatDecoder::PickBits(NEONFormatDecoder *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)this;
  uVar2 = 1 << (ulong)(*param_1 & 0x1f);
  uVar3 = (uint)((uVar1 & uVar2) != 0);
  if (param_1[1] != 0) {
    uVar3 = uVar1 >> (ulong)(param_1[1] & 0x1f) & 1 | (uint)((uVar1 & uVar2) != 0) << 1;
    if (param_1[2] != 0) {
      uVar3 = uVar1 >> (ulong)(param_1[2] & 0x1f) & 1 | uVar3 << 1;
      if (param_1[3] == 0) {
        return uVar3;
      }
      uVar3 = uVar1 >> (ulong)(param_1[3] & 0x1f) & 1 | uVar3 << 1;
      if (param_1[4] != 0) {
        uVar3 = uVar1 >> (ulong)(param_1[4] & 0x1f) & 1 | uVar3 << 1;
        if (param_1[5] == 0) {
          return uVar3;
        }
        uVar3 = uVar1 >> (ulong)(param_1[5] & 0x1f) & 1 | uVar3 << 1;
      }
    }
  }
  return uVar3;
}

