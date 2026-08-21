
/* btConvexHullInternal::Rational64::compare(btConvexHullInternal::Rational64 const&) const */

int __thiscall btConvexHullInternal::Rational64::compare(Rational64 *this,Rational64 *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 - *(int *)(param_1 + 0x10) != 0) {
    return iVar1 - *(int *)(param_1 + 0x10);
  }
  if (iVar1 == 0) {
    return 0;
  }
  uVar17 = *(ulong *)this & 0xffffffff;
  uVar18 = *(ulong *)(this + 8) & 0xffffffff;
  uVar7 = *(ulong *)this >> 0x20;
  uVar9 = *(ulong *)(this + 8) >> 0x20;
  uVar8 = *(ulong *)(param_1 + 8) & 0xffffffff;
  uVar10 = *(ulong *)param_1 & 0xffffffff;
  uVar11 = *(ulong *)(param_1 + 8) >> 0x20;
  uVar14 = *(ulong *)param_1 >> 0x20;
  uVar4 = uVar11 * uVar17;
  uVar6 = uVar8 * uVar7;
  uVar3 = uVar14 * uVar18;
  uVar5 = uVar10 * uVar9;
  uVar12 = (uVar4 & 0xffffffff) + (uVar6 & 0xffffffff);
  uVar15 = (uVar3 & 0xffffffff) + (uVar5 & 0xffffffff);
  uVar13 = uVar12 << 0x20;
  uVar16 = uVar15 << 0x20;
  uVar8 = uVar13 + uVar8 * uVar17;
  uVar10 = uVar16 + uVar10 * uVar18;
  uVar4 = uVar11 * uVar7 + (uVar4 >> 0x20) + (uVar6 >> 0x20) + (uVar12 >> 0x20) +
          (ulong)(uVar8 < uVar13);
  uVar3 = uVar14 * uVar9 + (uVar3 >> 0x20) + (uVar5 >> 0x20) + (uVar15 >> 0x20) +
          (ulong)(uVar10 < uVar16);
  if (uVar3 <= uVar4) {
    if (uVar3 < uVar4) {
      uVar2 = 1;
      goto LAB_012655f8;
    }
    if (uVar10 <= uVar8) {
      uVar2 = (uint)(uVar10 < uVar8);
      goto LAB_012655f8;
    }
  }
  uVar2 = 0xffffffff;
LAB_012655f8:
  return uVar2 * iVar1;
}

