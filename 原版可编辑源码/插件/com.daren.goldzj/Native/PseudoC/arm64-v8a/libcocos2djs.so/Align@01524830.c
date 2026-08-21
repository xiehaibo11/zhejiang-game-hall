
/* v8::internal::Bignum::Align(v8::internal::Bignum const&) */

void __thiscall v8::internal::Bignum::Align(Bignum *this,Bignum *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 0x214);
  uVar1 = *(uint *)(param_1 + 0x214);
  uVar3 = iVar6 - uVar1;
  if (uVar3 != 0 && (int)uVar1 <= iVar6) {
    uVar2 = *(uint *)(this + 0x210);
    uVar4 = (ulong)uVar2;
    if (0x80 < (int)(uVar2 + uVar3)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (0 < (int)uVar2) {
      iVar6 = ~uVar1 + uVar2 + iVar6;
      do {
        lVar5 = uVar4 * 4;
        uVar4 = uVar4 - 1;
        *(undefined4 *)(*(long *)(this + 0x200) + (long)iVar6 * 4) =
             *(undefined4 *)(*(long *)(this + 0x200) + lVar5 + -4);
        iVar6 = iVar6 + -1;
      } while (0 < (long)uVar4);
    }
    if (0 < (int)uVar3) {
      lVar5 = 0;
      do {
        *(undefined4 *)(*(long *)(this + 0x200) + lVar5) = 0;
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar3 * 4 - lVar5 != 0);
    }
    *(uint *)(this + 0x210) = *(int *)(this + 0x210) + uVar3;
    *(uint *)(this + 0x214) = *(int *)(this + 0x214) - uVar3;
  }
  return;
}

