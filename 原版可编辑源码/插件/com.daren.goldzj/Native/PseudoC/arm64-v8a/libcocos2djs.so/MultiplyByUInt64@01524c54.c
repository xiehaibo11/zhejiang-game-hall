
/* v8::internal::Bignum::MultiplyByUInt64(unsigned long) */

void __thiscall v8::internal::Bignum::MultiplyByUInt64(Bignum *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
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
        uVar5 = (ulong)*(uint *)(*(long *)(this + 0x200) + lVar4);
        uVar6 = (uVar2 & 0xfffffff) + (param_1 & 0xffffffff) * uVar5;
        *(uint *)(*(long *)(this + 0x200) + lVar4) = (uint)uVar6 & 0xfffffff;
        uVar3 = (ulong)*(int *)(this + 0x210);
        uVar2 = (param_1 >> 0x1c & 0xffffffff0) * uVar5 + (uVar2 >> 0x1c) + (uVar6 >> 0x1c);
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

