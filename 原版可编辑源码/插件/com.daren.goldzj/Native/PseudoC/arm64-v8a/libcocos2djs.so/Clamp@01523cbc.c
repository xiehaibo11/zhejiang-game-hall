
/* v8::internal::Bignum::Clamp() */

void __thiscall v8::internal::Bignum::Clamp(Bignum *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(this + 0x210);
  if (0 < (int)uVar1) {
    uVar2 = (ulong)uVar1;
    do {
      if (*(int *)(*(long *)(this + 0x200) + -4 + uVar2 * 4) != 0) {
        return;
      }
      uVar3 = uVar2 - 1;
      *(int *)(this + 0x210) = (int)uVar2 + -1;
      uVar2 = uVar3;
    } while (0 < (long)uVar3);
    uVar1 = (uint)uVar3;
  }
  if (uVar1 != 0) {
    return;
  }
  *(undefined4 *)(this + 0x214) = 0;
  return;
}

