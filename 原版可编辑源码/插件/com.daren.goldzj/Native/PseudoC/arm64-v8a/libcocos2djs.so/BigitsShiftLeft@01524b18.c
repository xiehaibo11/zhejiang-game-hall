
/* v8::internal::Bignum::BigitsShiftLeft(int) */

void __thiscall v8::internal::Bignum::BigitsShiftLeft(Bignum *this,int param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  if (0 < *(int *)(this + 0x210)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar4 = lVar2 * 4;
      lVar2 = lVar2 + 1;
      uVar1 = *(uint *)(*(long *)(this + 0x200) + lVar4);
      *(uint *)(*(long *)(this + 0x200) + lVar4) =
           (uVar1 << (ulong)(param_1 & 0x1f)) + uVar3 & 0xfffffff;
      uVar3 = uVar1 >> (ulong)(0x1cU - param_1 & 0x1f);
    } while (lVar2 < *(int *)(this + 0x210));
    if (uVar3 != 0) {
      *(uint *)(*(long *)(this + 0x200) + (long)*(int *)(this + 0x210) * 4) = uVar3;
      *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
    }
  }
  return;
}

