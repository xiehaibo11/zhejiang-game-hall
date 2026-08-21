
/* btConvexHullInternal::Rational128::compare(long) const */

int __thiscall btConvexHullInternal::Rational128::compare(Rational128 *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (this[0x24] != (Rational128)0x0) {
    lVar7 = *(long *)this * (long)*(int *)(this + 0x20);
    iVar4 = -(uint)(lVar7 < param_1);
    if (lVar7 - param_1 != 0 && param_1 <= lVar7) {
      iVar4 = 1;
    }
    return iVar4;
  }
  if (param_1 < 1) {
    iVar4 = *(int *)(this + 0x20);
    if (-1 < param_1) {
      return iVar4;
    }
    if (-1 < iVar4) {
      return 1;
    }
    param_1 = -param_1;
    uVar10 = *(ulong *)(this + 0x10);
    uVar5 = *(ulong *)(this + 0x18);
  }
  else {
    iVar4 = *(int *)(this + 0x20);
    if (iVar4 < 1) {
      return -1;
    }
    uVar10 = *(ulong *)(this + 0x10);
    uVar5 = *(ulong *)(this + 0x18);
  }
  uVar9 = uVar5;
  if ((long)uVar5 < 0) {
    bVar6 = uVar10 == 0;
    uVar10 = -uVar10;
    uVar9 = ~uVar5;
    if (bVar6) {
      uVar9 = ~uVar5 + 1;
    }
  }
  uVar3 = -param_1;
  if (param_1 >= 0) {
    uVar3 = param_1;
  }
  uVar12 = (uVar10 & 0xffffffff) * (uVar3 & 0xffffffff);
  uVar11 = (uVar10 & 0xffffffff) * (uVar3 >> 0x20);
  uVar13 = (uVar10 >> 0x20) * (uVar3 & 0xffffffff);
  uVar2 = (uVar11 & 0xffffffff) + (uVar13 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  uVar8 = uVar12 + uVar1;
  uVar10 = uVar9 * uVar3 + (uVar10 >> 0x20) * (uVar3 >> 0x20) + (uVar11 >> 0x20) + (uVar13 >> 0x20)
           + (uVar2 >> 0x20);
  if (CARRY8(uVar12,uVar1)) {
    uVar10 = uVar10 + 1;
  }
  if (param_1 < 0 != (long)uVar5 < 0) {
    bVar6 = uVar8 == 0;
    uVar10 = ~uVar10;
    uVar8 = -uVar8;
    if (bVar6) {
      uVar10 = uVar10 + 1;
    }
  }
  if (*(ulong *)(this + 8) < uVar10) {
    return -iVar4;
  }
  if (*(ulong *)(this + 8) != uVar10) {
    return iVar4;
  }
  if (*(ulong *)this < uVar8) {
    return -iVar4;
  }
  return iVar4 * (uint)(uVar8 < *(ulong *)this);
}

