
/* v8::internal::Bignum::MultiplyByUInt32(unsigned int) */

void __thiscall v8::internal::Bignum::MultiplyByUInt32(Bignum *this,uint param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_1 != 1) {
    if (param_1 == 0) {
      if (0 < *(int *)(this + 0x210)) {
        lVar1 = 0;
        do {
          *(undefined4 *)(*(long *)(this + 0x200) + lVar1 * 4) = 0;
          lVar1 = lVar1 + 1;
        } while (lVar1 < *(int *)(this + 0x210));
      }
      *(undefined8 *)(this + 0x210) = 0;
      return;
    }
    if (0 < *(int *)(this + 0x210)) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        lVar4 = lVar1 * 4;
        lVar1 = lVar1 + 1;
        uVar2 = uVar2 + (ulong)*(uint *)(*(long *)(this + 0x200) + lVar4) * (ulong)param_1;
        *(uint *)(*(long *)(this + 0x200) + lVar4) = (uint)uVar2 & 0xfffffff;
        uVar3 = (ulong)*(int *)(this + 0x210);
        uVar2 = uVar2 >> 0x1c;
      } while (lVar1 < (long)uVar3);
      for (; uVar2 != 0; uVar2 = uVar2 >> 0x1c) {
        if (0x7f < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        *(uint *)(*(long *)(this + 0x200) + (long)(int)uVar3 * 4) = (uint)uVar2 & 0xfffffff;
        uVar3 = (ulong)(*(int *)(this + 0x210) + 1U);
        *(uint *)(this + 0x210) = *(int *)(this + 0x210) + 1U;
      }
    }
  }
  return;
}

