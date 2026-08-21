
/* v8::internal::Bignum::AddBignum(v8::internal::Bignum const&) */

void __thiscall v8::internal::Bignum::AddBignum(Bignum *this,Bignum *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  iVar5 = *(int *)(this + 0x214);
  iVar8 = *(int *)(param_1 + 0x214);
  uVar4 = iVar5 - iVar8;
  if (uVar4 == 0 || iVar5 < iVar8) {
    iVar9 = *(int *)(this + 0x210);
  }
  else {
    uVar6 = *(uint *)(this + 0x210);
    uVar7 = (ulong)uVar6;
    if (0x80 < (int)(uVar6 + uVar4)) goto LAB_01524824;
    if (0 < (int)uVar6) {
      do {
        lVar10 = uVar7 * 4;
        uVar7 = uVar7 - 1;
        *(undefined4 *)
         (*(long *)(this + 0x200) +
          ((-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2) - 4) + lVar10) =
             *(undefined4 *)(*(long *)(this + 0x200) + lVar10 + -4);
      } while (0 < (long)uVar7);
    }
    if (0 < (int)uVar4) {
      lVar10 = 0;
      do {
        *(undefined4 *)(*(long *)(this + 0x200) + lVar10) = 0;
        lVar10 = lVar10 + 4;
      } while ((ulong)uVar4 * 4 - lVar10 != 0);
    }
    iVar9 = *(int *)(this + 0x210) + uVar4;
    iVar5 = *(int *)(this + 0x214) - uVar4;
    *(int *)(this + 0x210) = iVar9;
    *(int *)(this + 0x214) = iVar5;
    iVar8 = *(int *)(param_1 + 0x214);
  }
  iVar1 = iVar8 + *(int *)(param_1 + 0x210);
  if (iVar1 <= iVar5 + iVar9) {
    iVar1 = iVar5 + iVar9;
  }
  if ((iVar1 - iVar5) + 1 < 0x81) {
    uVar4 = iVar8 - iVar5;
    if (0 < *(int *)(param_1 + 0x210)) {
      lVar10 = 0;
      uVar6 = 0;
      do {
        lVar11 = lVar10 * 4;
        lVar10 = lVar10 + 1;
        lVar3 = *(long *)(this + 0x200) +
                (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
        uVar6 = *(int *)(lVar3 + lVar11) + uVar6 + *(int *)(*(long *)(param_1 + 0x200) + lVar11);
        *(uint *)(lVar3 + lVar11) = uVar6 & 0xfffffff;
        uVar6 = uVar6 >> 0x1c;
      } while (lVar10 < *(int *)(param_1 + 0x210));
      uVar7 = lVar10 + (ulong)uVar4;
      uVar4 = (uint)uVar7;
      if (uVar6 != 0) {
        lVar10 = (long)(int)uVar4 << 2;
        do {
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar4;
          uVar2 = *(int *)(*(long *)(this + 0x200) + lVar10) + uVar6;
          uVar6 = uVar2 >> 0x1c;
          *(uint *)(*(long *)(this + 0x200) + lVar10) = uVar2 & 0xfffffff;
          lVar10 = lVar10 + 4;
        } while (uVar6 != 0);
      }
    }
    uVar6 = *(uint *)(this + 0x210);
    if ((int)*(uint *)(this + 0x210) <= (int)uVar4) {
      uVar6 = uVar4;
    }
    *(uint *)(this + 0x210) = uVar6;
    return;
  }
LAB_01524824:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

