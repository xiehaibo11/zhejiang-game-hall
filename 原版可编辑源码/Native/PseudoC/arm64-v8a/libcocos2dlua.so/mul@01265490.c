
/* btConvexHullInternal::Int128::mul(long, long) */

undefined1  [16] btConvexHullInternal::Int128::mul(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar5 = -param_1;
  if (param_1 >= 0) {
    uVar5 = param_1;
  }
  uVar2 = -param_2;
  if (param_2 >= 0) {
    uVar2 = param_2;
  }
  uVar8 = (uVar2 & 0xffffffff) * (uVar5 & 0xffffffff);
  uVar6 = (uVar2 >> 0x20) * (uVar5 & 0xffffffff);
  uVar7 = (uVar2 & 0xffffffff) * (uVar5 >> 0x20);
  uVar1 = (uVar6 & 0xffffffff) + (uVar7 & 0xffffffff);
  uVar5 = (uVar2 >> 0x20) * (uVar5 >> 0x20) + (uVar6 >> 0x20) + (uVar7 >> 0x20) + (uVar1 >> 0x20);
  uVar1 = uVar1 << 0x20;
  lVar4 = uVar8 + uVar1;
  if (CARRY8(uVar8,uVar1)) {
    uVar5 = uVar5 + 1;
  }
  if (param_1 < 0 != param_2 < 0) {
    bVar3 = lVar4 == 0;
    uVar5 = ~uVar5;
    lVar4 = -lVar4;
    if (bVar3) {
      uVar5 = uVar5 + 1;
    }
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = lVar4;
  return auVar9;
}

