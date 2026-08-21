
/* v8::internal::Bignum::SubtractBignum(v8::internal::Bignum const&) */

void __thiscall v8::internal::Bignum::SubtractBignum(Bignum *this,Bignum *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  iVar3 = *(int *)(this + 0x214);
  iVar6 = *(int *)(param_1 + 0x214);
  uVar5 = iVar3 - iVar6;
  if (uVar5 != 0 && iVar6 <= iVar3) {
    uVar2 = *(uint *)(this + 0x210);
    uVar4 = (ulong)uVar2;
    if (0x80 < (int)(uVar2 + uVar5)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (0 < (int)uVar2) {
      do {
        lVar8 = uVar4 * 4;
        uVar4 = uVar4 - 1;
        *(undefined4 *)
         (*(long *)(this + 0x200) +
          ((-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2) - 4) + lVar8) =
             *(undefined4 *)(*(long *)(this + 0x200) + lVar8 + -4);
      } while (0 < (long)uVar4);
    }
    if (0 < (int)uVar5) {
      lVar8 = 0;
      do {
        *(undefined4 *)(*(long *)(this + 0x200) + lVar8) = 0;
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar5 * 4 - lVar8 != 0);
    }
    iVar3 = *(int *)(this + 0x214) - uVar5;
    *(uint *)(this + 0x210) = *(int *)(this + 0x210) + uVar5;
    *(int *)(this + 0x214) = iVar3;
    iVar6 = *(int *)(param_1 + 0x214);
  }
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar8 = 0;
    uVar5 = 0;
    do {
      uVar2 = (iVar6 - iVar3) + (int)lVar8;
      uVar4 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      lVar1 = lVar8 * 4;
      lVar8 = lVar8 + 1;
      uVar2 = (*(int *)(*(long *)(this + 0x200) + uVar4) -
              *(int *)(*(long *)(param_1 + 0x200) + lVar1)) - uVar5;
      *(uint *)(*(long *)(this + 0x200) + uVar4) = uVar2 & 0xfffffff;
      uVar5 = uVar2 >> 0x1f;
    } while (lVar8 < *(int *)(param_1 + 0x210));
    if ((int)uVar2 < 0) {
      uVar4 = (ulong)(uint)(iVar6 - iVar3) + lVar8;
      uVar5 = 1;
      do {
        uVar7 = -(uVar4 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar4 & 0xffffffff) << 2;
        uVar4 = (ulong)((int)uVar4 + 1);
        uVar2 = *(int *)(*(long *)(this + 0x200) + uVar7) - uVar5;
        uVar5 = uVar2 >> 0x1f;
        *(uint *)(*(long *)(this + 0x200) + uVar7) = uVar2 & 0xfffffff;
      } while ((int)uVar2 < 0);
    }
  }
  uVar5 = *(uint *)(this + 0x210);
  uVar4 = (ulong)uVar5;
  if ((int)uVar5 < 1) {
    if (uVar5 != 0) {
      return;
    }
  }
  else {
    do {
      if (*(int *)(*(long *)(this + 0x200) + -4 + uVar4 * 4) != 0) {
        return;
      }
      iVar3 = (int)uVar4;
      uVar4 = uVar4 - 1;
      *(int *)(this + 0x210) = iVar3 + -1;
    } while (0 < (long)uVar4);
  }
  *(undefined4 *)(this + 0x214) = 0;
  return;
}

