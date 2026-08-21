
/* v8::internal::Bignum::ShiftLeft(int) */

void __thiscall v8::internal::Bignum::ShiftLeft(Bignum *this,int param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  iVar1 = *(int *)(this + 0x210);
  if (iVar1 != 0) {
    *(int *)(this + 0x214) = *(int *)(this + 0x214) + param_1 / 0x1c;
    if (0x7f < iVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (0 < iVar1) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        lVar5 = lVar3 * 4;
        lVar3 = lVar3 + 1;
        uVar2 = *(uint *)(*(long *)(this + 0x200) + lVar5);
        *(uint *)(*(long *)(this + 0x200) + lVar5) =
             (uVar2 << (ulong)(param_1 % 0x1c & 0x1f)) + uVar4 & 0xfffffff;
        uVar4 = uVar2 >> (ulong)(0x1cU - param_1 % 0x1c & 0x1f);
      } while (lVar3 < *(int *)(this + 0x210));
      if (uVar4 != 0) {
        *(uint *)(*(long *)(this + 0x200) + (long)*(int *)(this + 0x210) * 4) = uVar4;
        *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
      }
    }
  }
  return;
}

