
undefined1  [16] FUN_014c290c(double param_1,double param_2,double param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  dVar8 = NAN;
  if (((((ABS(param_3) != INFINITY) && (!NAN(ABS(param_3)))) && (param_2 <= 10000000.0)) &&
      ((-1000000.0 <= param_1 && (param_1 <= 1000000.0)))) && (-10000000.0 <= param_2)) {
    uVar5 = (int)param_2 % 0xc;
    uVar1 = (int)param_2 / 0xc + (int)param_1 + ((int)uVar5 >> 0x1f);
    uVar3 = uVar5 + 0xc;
    if (-1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    iVar2 = uVar1 + 399999;
    iVar4 = uVar1 + 0x61a82;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    iVar6 = (int)((ulong)((long)iVar2 * -0x51eb851f) >> 0x20);
    puVar7 = &DAT_01a40588;
    if (((uVar1 & 3) == 0) &&
       (uVar5 = uVar1 * -0x3d70a3d7 + 0x51eb850, puVar7 = &DAT_01a405b8,
       0xa3d70a < (uVar5 >> 4 | uVar1 * -0x70000000) &&
       (uVar5 >> 2 | uVar1 * 0x40000000) < 0x28f5c29)) {
      puVar7 = &DAT_01a40588;
    }
    if (NAN(param_3)) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = param_3;
      if (param_3 != 0.0) {
        dVar8 = (double)(long)param_3;
        if (param_3 < 0.0) {
          dVar8 = (double)(long)param_3;
        }
      }
    }
    dVar8 = dVar8 + (double)((iVar4 >> 2) + iVar2 * 0x16d + ((iVar6 >> 5) - (iVar6 >> 0x1f)) +
                             iVar2 / 400 + *(int *)(puVar7 + (ulong)uVar3 * 4) + -0x8c03ca3);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar8;
  return auVar9;
}

