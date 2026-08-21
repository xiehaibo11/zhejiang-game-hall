
/* btConvexHullInternal::Int128::TEMPNAMEPLACEHOLDERVALUE(long) const */

undefined1  [16] __thiscall btConvexHullInternal::Int128::operator*(Int128 *this,long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar7 = *(ulong *)this;
  uVar4 = *(ulong *)(this + 8);
  uVar8 = uVar4;
  if ((long)uVar4 < 0) {
    bVar5 = uVar7 == 0;
    uVar7 = -uVar7;
    uVar8 = ~uVar4;
    if (bVar5) {
      uVar8 = ~uVar4 + 1;
    }
  }
  uVar3 = -param_1;
  if (param_1 >= 0) {
    uVar3 = param_1;
  }
  uVar10 = (uVar7 & 0xffffffff) * (uVar3 & 0xffffffff);
  uVar9 = (uVar7 & 0xffffffff) * (uVar3 >> 0x20);
  uVar11 = (uVar7 >> 0x20) * (uVar3 & 0xffffffff);
  uVar2 = (uVar9 & 0xffffffff) + (uVar11 & 0xffffffff);
  uVar1 = uVar2 << 0x20;
  lVar6 = uVar10 + uVar1;
  uVar7 = uVar8 * uVar3 + (uVar7 >> 0x20) * (uVar3 >> 0x20) + (uVar9 >> 0x20) + (uVar11 >> 0x20) +
          (uVar2 >> 0x20);
  if (CARRY8(uVar10,uVar1)) {
    uVar7 = uVar7 + 1;
  }
  if (param_1 < 0 != (long)uVar4 < 0) {
    bVar5 = lVar6 == 0;
    uVar7 = ~uVar7;
    lVar6 = -lVar6;
    if (bVar5) {
      uVar7 = uVar7 + 1;
    }
  }
  auVar12._8_8_ = uVar7;
  auVar12._0_8_ = lVar6;
  return auVar12;
}

