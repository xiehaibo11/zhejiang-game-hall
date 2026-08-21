
/* v8::internal::Bignum::SubtractTimes(v8::internal::Bignum const&, int) */

void __thiscall v8::internal::Bignum::SubtractTimes(Bignum *this,Bignum *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar11 = (ulong)(uint)param_2;
  if (param_2 < 3) {
    if (0 < param_2) {
      do {
        SubtractBignum(this,param_1);
        uVar5 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar5;
      } while (uVar5 != 0);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x214);
    iVar9 = *(int *)(param_1 + 0x210);
    iVar2 = *(int *)(this + 0x214);
    iVar3 = iVar4 - iVar2;
    if (iVar9 < 1) {
      uVar5 = 0;
    }
    else {
      lVar8 = 0;
      uVar5 = 0;
      do {
        uVar7 = iVar3 + (int)lVar8;
        uVar10 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
        lVar6 = lVar8 * 4;
        lVar8 = lVar8 + 1;
        uVar1 = *(uint *)(*(long *)(param_1 + 0x200) + lVar6) * uVar11 + (ulong)uVar5;
        uVar5 = *(int *)(*(long *)(this + 0x200) + uVar10) - ((uint)uVar1 & 0xfffffff);
        *(uint *)(*(long *)(this + 0x200) + uVar10) = uVar5 & 0xfffffff;
        iVar9 = *(int *)(param_1 + 0x210);
        uVar5 = (int)(uVar1 >> 0x1c) - ((int)uVar5 >> 0x1f);
      } while (lVar8 < iVar9);
    }
    uVar7 = *(uint *)(this + 0x210);
    if (iVar9 + iVar3 < (int)uVar7) {
      lVar8 = (long)((iVar9 + iVar4) - iVar2);
      do {
        if (uVar5 == 0) {
          return;
        }
        lVar6 = lVar8 * 4;
        lVar8 = lVar8 + 1;
        uVar5 = *(int *)(*(long *)(this + 0x200) + lVar6) - uVar5;
        *(uint *)(*(long *)(this + 0x200) + lVar6) = uVar5 & 0xfffffff;
        uVar7 = *(uint *)(this + 0x210);
        uVar5 = uVar5 >> 0x1f;
      } while (lVar8 < (int)uVar7);
    }
    if ((int)uVar7 < 1) {
      if (uVar7 != 0) {
        return;
      }
    }
    else {
      uVar11 = (ulong)uVar7;
      do {
        if (*(int *)(*(long *)(this + 0x200) + -4 + uVar11 * 4) != 0) {
          return;
        }
        iVar4 = (int)uVar11;
        uVar11 = uVar11 - 1;
        *(int *)(this + 0x210) = iVar4 + -1;
      } while (0 < (long)uVar11);
    }
    *(undefined4 *)(this + 0x214) = 0;
  }
  return;
}

