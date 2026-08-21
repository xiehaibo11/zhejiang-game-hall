
/* v8::base::ieee754::exp(double) */

undefined1  [16] v8::base::ieee754::exp(double param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  uVar2 = uVar1 & 0x7fffffff;
  if (uVar2 < 0x40862e42) {
    if (uVar2 < 0x3fd62e43) {
      dVar16 = 0.0;
      if ((uVar2 >> 0x14 < 0x3e3) && (1.0 < DAT_01d358c0 + param_1)) {
        auVar10._0_8_ = param_1 + 1.0;
        auVar10._8_8_ = 0;
        return auVar10;
      }
      iVar4 = 0;
      dVar17 = 0.0;
      goto LAB_01471334;
    }
    if (0x3ff0a2b1 < uVar2) goto LAB_014712f0;
    if (param_1 == 1.0) {
      return ZEXT816(0x4005bf0a8b145769);
    }
    lVar7 = ((long)param_1 >> 0x3f) * -8;
    dVar17 = *(double *)(&DAT_01a3d628 + lVar7);
    dVar16 = *(double *)(&DAT_01a3d638 + lVar7);
    iVar4 = (int)uVar1 >> 0x1f;
    iVar4 = (-iVar4 ^ 1U) + iVar4;
  }
  else {
    if (0x7fe < uVar2 >> 0x14) {
      uVar3 = (ulong)param_1 & 0xfffff00000000;
      iVar4 = SUB84(param_1,0);
      dVar16 = param_1 + param_1;
      if ((long)param_1 < 0) {
        param_1 = 0.0;
      }
      if (uVar3 != 0 || iVar4 != 0) {
        param_1 = dVar16;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_1;
      return auVar8;
    }
    if (709.782712893384 < param_1) {
      auVar9._0_8_ = DAT_01d358c0 * DAT_01d358c0;
      auVar9._8_8_ = 0;
      return auVar9;
    }
    if (param_1 < -745.1332191019411) {
      auVar11._0_8_ = DAT_01d358c8 * DAT_01d358c8;
      auVar11._8_8_ = 0;
      return auVar11;
    }
LAB_014712f0:
    iVar4 = (int)(param_1 * 1.4426950408889634 +
                 *(double *)(&DAT_01a3d618 + ((long)param_1 >> 0x3f) * -8));
    dVar17 = (double)iVar4 * 0.6931471803691238;
    dVar16 = (double)iVar4 * 1.9082149292705877e-10;
  }
  dVar17 = param_1 - dVar17;
  param_1 = dVar17 - dVar16;
LAB_01471334:
  dVar18 = param_1 * param_1;
  iVar5 = 0x3ff00000;
  if (iVar4 < -0x3fd) {
    iVar5 = 0x7e700000;
  }
  dVar18 = param_1 - dVar18 * (dVar18 * (dVar18 * (dVar18 * (dVar18 * 4.1381367970572385e-08 +
                                                            -1.6533902205465252e-06) +
                                                  6.613756321437934e-05) + -0.0027777777777015593) +
                              0.16666666666666602);
  if (iVar4 == 0) {
    auVar13._0_8_ = (param_1 - (param_1 * dVar18) / (dVar18 + -2.0)) + 1.0;
    auVar13._8_8_ = 0;
    return auVar13;
  }
  dVar6 = (double)((ulong)(uint)(iVar5 + iVar4 * 0x100000) << 0x20);
  dVar16 = (dVar17 - (dVar16 - (param_1 * dVar18) / (2.0 - dVar18))) + 1.0;
  if (iVar4 < -0x3fd) {
    auVar14._0_8_ = dVar16 * dVar6 * DAT_01d358c8;
    auVar14._8_8_ = 0;
    return auVar14;
  }
  if (iVar4 == 0x400) {
    auVar12._0_8_ = (dVar16 + dVar16) * DAT_01d358d0;
    auVar12._8_8_ = 0;
    return auVar12;
  }
  auVar15._0_8_ = dVar16 * dVar6;
  auVar15._8_8_ = 0;
  return auVar15;
}

