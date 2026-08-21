
/* btConvexHullInternal::DMul<btConvexHullInternal::Int128, unsigned
   long>::mul(btConvexHullInternal::Int128, btConvexHullInternal::Int128,
   btConvexHullInternal::Int128&, btConvexHullInternal::Int128&) */

void btConvexHullInternal::DMul<btConvexHullInternal::Int128,unsigned_long>::mul
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,long *param_5,long *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar6 = param_1 & 0xffffffff;
  uVar10 = param_3 >> 0x20;
  param_1 = param_1 >> 0x20;
  param_3 = param_3 & 0xffffffff;
  uVar11 = param_4 & 0xffffffff;
  param_4 = param_4 >> 0x20;
  uVar12 = param_2 & 0xffffffff;
  param_2 = param_2 >> 0x20;
  uVar1 = (uVar10 * uVar6 & 0xffffffff) + (param_3 * param_1 & 0xffffffff);
  uVar2 = (uVar10 * uVar12 & 0xffffffff) + (param_3 * param_2 & 0xffffffff);
  uVar3 = (param_4 * uVar6 & 0xffffffff) + (uVar11 * param_1 & 0xffffffff);
  uVar4 = (param_4 * uVar12 & 0xffffffff) + (uVar11 * param_2 & 0xffffffff);
  uVar5 = uVar10 * param_2 + (uVar10 * uVar12 >> 0x20) + (param_3 * param_2 >> 0x20) +
          (uVar2 >> 0x20);
  uVar2 = uVar2 << 0x20;
  uVar7 = param_3 * uVar12 + uVar2;
  lVar9 = param_4 * param_2 + (param_4 * uVar12 >> 0x20) + (uVar11 * param_2 >> 0x20) +
          (uVar4 >> 0x20);
  if (CARRY8(param_3 * uVar12,uVar2)) {
    uVar5 = uVar5 + 1;
  }
  uVar4 = uVar4 << 0x20;
  uVar2 = uVar11 * uVar12 + uVar4;
  if (CARRY8(uVar11 * uVar12,uVar4)) {
    lVar9 = lVar9 + 1;
  }
  uVar4 = uVar3 << 0x20;
  uVar12 = uVar11 * uVar6 + uVar4;
  uVar3 = param_4 * param_1 + (param_4 * uVar6 >> 0x20) + (uVar11 * param_1 >> 0x20) +
          (uVar3 >> 0x20) + uVar2;
  if (CARRY8(uVar11 * uVar6,uVar4)) {
    uVar3 = uVar3 + 1;
  }
  uVar4 = uVar7 + uVar12;
  uVar7 = (ulong)CARRY8(uVar7,uVar12);
  if (uVar3 < uVar2) {
    lVar9 = lVar9 + 1;
  }
  if (CARRY8(uVar5,uVar3)) {
    lVar9 = lVar9 + 1;
  }
  lVar8 = uVar5 + uVar3 + uVar7;
  if (CARRY8(uVar5 + uVar3,uVar7)) {
    lVar9 = lVar9 + 1;
  }
  uVar2 = uVar1 << 0x20;
  uVar1 = uVar10 * param_1 + (uVar10 * uVar6 >> 0x20) + (param_3 * param_1 >> 0x20) +
          (uVar1 >> 0x20) + uVar4;
  if (CARRY8(param_3 * uVar6,uVar2)) {
    uVar1 = uVar1 + 1;
  }
  if ((uVar1 < uVar4) && (lVar8 = lVar8 + 1, lVar8 == 0)) {
    lVar9 = lVar9 + 1;
  }
  *param_5 = param_3 * uVar6 + uVar2;
  param_5[1] = uVar1;
  *param_6 = lVar8;
  param_6[1] = lVar9;
  return;
}

