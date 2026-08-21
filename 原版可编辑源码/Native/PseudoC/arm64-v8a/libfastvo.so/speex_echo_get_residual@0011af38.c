
void speex_echo_get_residual(int *param_1,int *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  short sVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  short *psVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar4 = param_1[1];
  uVar14 = (ulong)uVar4;
  if ((int)uVar4 < 1) {
    uVar6 = *(ulong *)(param_1 + 0x16);
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x3c);
    uVar6 = *(ulong *)(param_1 + 0x16);
    uVar3 = *(ulong *)(param_1 + 0x18);
    if (uVar4 < 0x10) {
      uVar10 = 0;
    }
    else {
      lVar11 = uVar14 * 2;
      uVar10 = 0;
      if ((uVar8 + lVar11 <= uVar6 || uVar6 + lVar11 <= uVar8) &&
         (uVar3 + lVar11 <= uVar6 || uVar6 + lVar11 <= uVar3)) {
        uVar10 = uVar14 & 0xfffffff0;
        lVar11 = 0;
        uVar12 = uVar10;
        do {
          puVar2 = (undefined8 *)(uVar8 + lVar11);
          uVar16 = puVar2[1];
          uVar15 = *puVar2;
          uVar18 = puVar2[3];
          uVar17 = puVar2[2];
          puVar2 = (undefined8 *)(uVar3 + lVar11);
          uVar20 = puVar2[1];
          uVar19 = *puVar2;
          uVar22 = puVar2[3];
          uVar21 = puVar2[2];
          puVar2 = (undefined8 *)(uVar6 + lVar11);
          uVar12 = uVar12 - 0x10;
          lVar11 = lVar11 + 0x20;
          puVar2[1] = CONCAT26((short)((uint)((int)(short)((ulong)uVar20 >> 0x30) *
                                             (int)(short)((ulong)uVar16 >> 0x30)) >> 0xf),
                               CONCAT24((short)((uint)((int)(short)((ulong)uVar20 >> 0x20) *
                                                      (int)(short)((ulong)uVar16 >> 0x20)) >> 0xf),
                                        CONCAT22((short)((uint)((int)(short)((ulong)uVar20 >> 0x10)
                                                               * (int)(short)((ulong)uVar16 >> 0x10)
                                                               ) >> 0xf),
                                                 (short)((uint)((int)(short)uVar20 *
                                                               (int)(short)uVar16) >> 0xf))));
          *puVar2 = CONCAT26((short)((uint)((int)(short)((ulong)uVar19 >> 0x30) *
                                           (int)(short)((ulong)uVar15 >> 0x30)) >> 0xf),
                             CONCAT24((short)((uint)((int)(short)((ulong)uVar19 >> 0x20) *
                                                    (int)(short)((ulong)uVar15 >> 0x20)) >> 0xf),
                                      CONCAT22((short)((uint)((int)(short)((ulong)uVar19 >> 0x10) *
                                                             (int)(short)((ulong)uVar15 >> 0x10)) >>
                                                      0xf),
                                               (short)((uint)((int)(short)uVar19 *
                                                             (int)(short)uVar15) >> 0xf))));
          puVar2[3] = CONCAT26((short)((uint)((int)(short)((ulong)uVar22 >> 0x30) *
                                             (int)(short)((ulong)uVar18 >> 0x30)) >> 0xf),
                               CONCAT24((short)((uint)((int)(short)((ulong)uVar22 >> 0x20) *
                                                      (int)(short)((ulong)uVar18 >> 0x20)) >> 0xf),
                                        CONCAT22((short)((uint)((int)(short)((ulong)uVar22 >> 0x10)
                                                               * (int)(short)((ulong)uVar18 >> 0x10)
                                                               ) >> 0xf),
                                                 (short)((uint)((int)(short)uVar22 *
                                                               (int)(short)uVar18) >> 0xf))));
          puVar2[2] = CONCAT26((short)((uint)((int)(short)((ulong)uVar21 >> 0x30) *
                                             (int)(short)((ulong)uVar17 >> 0x30)) >> 0xf),
                               CONCAT24((short)((uint)((int)(short)((ulong)uVar21 >> 0x20) *
                                                      (int)(short)((ulong)uVar17 >> 0x20)) >> 0xf),
                                        CONCAT22((short)((uint)((int)(short)((ulong)uVar21 >> 0x10)
                                                               * (int)(short)((ulong)uVar17 >> 0x10)
                                                               ) >> 0xf),
                                                 (short)((uint)((int)(short)uVar21 *
                                                               (int)(short)uVar17) >> 0xf))));
        } while (uVar12 != 0);
        if (uVar10 == uVar14) goto LAB_0011b03c;
      }
    }
    do {
      lVar11 = uVar10 * 2;
      uVar10 = uVar10 + 1;
      *(short *)(uVar6 + lVar11) =
           (short)((uint)((int)*(short *)(uVar3 + lVar11) * (int)*(short *)(uVar8 + lVar11)) >> 0xf)
      ;
    } while (uVar14 != uVar10);
  }
LAB_0011b03c:
  spx_fft(*(undefined8 *)(param_1 + 0x40),uVar6,*(undefined8 *)(param_1 + 0x1a));
  psVar9 = *(short **)(param_1 + 0x1a);
  *param_2 = (int)*psVar9 * (int)*psVar9;
  iVar7 = (int)psVar9[1] * (int)psVar9[1];
  if ((int)uVar4 < 3) {
    uVar14 = 1;
  }
  else {
    psVar9 = psVar9 + 3;
    uVar14 = (ulong)((uVar4 - 3 >> 1) + 2);
    lVar11 = uVar14 - 1;
    piVar13 = param_2;
    do {
      piVar13 = piVar13 + 1;
      lVar11 = lVar11 + -1;
      *piVar13 = iVar7 + (int)psVar9[-1] * (int)psVar9[-1];
      sVar5 = *psVar9;
      psVar9 = psVar9 + 2;
      iVar7 = (int)sVar5 * (int)sVar5;
    } while (lVar11 != 0);
  }
  param_2[uVar14] = iVar7;
  sVar5 = 0x7fff;
  if ((short)param_1[0xd] < 0x4000) {
    sVar5 = (short)((int)(short)param_1[0xd] << 1);
  }
  if (-1 < *param_1) {
    lVar11 = 0;
    do {
      param_2[lVar11] =
           ((param_2[lVar11] << 1) >> 0x10) * (int)sVar5 +
           ((int)((param_2[lVar11] & 0x7fffU) * (int)sVar5) >> 0xf);
      bVar1 = lVar11 < *param_1;
      lVar11 = lVar11 + 1;
    } while (bVar1);
  }
  return;
}

