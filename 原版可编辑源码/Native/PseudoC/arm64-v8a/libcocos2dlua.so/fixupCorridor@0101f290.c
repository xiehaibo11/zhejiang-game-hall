
/* cocos2d::fixupCorridor(unsigned int*, int, int, unsigned int const*, int) */

int cocos2d::fixupCorridor(uint *param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  lVar15 = (long)param_2;
  uVar4 = param_5 - 1;
  uVar19 = (ulong)uVar4;
  iVar9 = -1;
                    /* try { // try from 0101f2c4 to 0111f2db has its CatchHandler @ 0101f35c */
  iVar11 = -1;
  do {
    if (lVar15 < 1) break;
    lVar15 = lVar15 + -1;
    if (param_5 < 1) {
      bVar6 = false;
    }
    else {
      bVar6 = false;
      uVar10 = uVar19;
      lVar18 = (long)param_5;
      iVar12 = iVar11;
      do {
        lVar7 = lVar18 + -1;
        lVar18 = lVar18 + -1;
        iVar11 = (int)lVar15;
        iVar8 = (int)uVar10;
        if (param_1[lVar15] != param_4[lVar7]) {
          iVar11 = iVar12;
          iVar8 = iVar9;
        }
        iVar9 = iVar8;
        bVar6 = (bool)(bVar6 | param_1[lVar15] == param_4[lVar7]);
        uVar10 = (ulong)((int)uVar10 - 1);
        iVar12 = iVar11;
      } while (0 < lVar18);
    }
  } while (!bVar6);
  if (iVar9 == -1) {
    return param_2;
  }
  if (iVar11 == -1) {
    return param_2;
  }
  uVar5 = param_5 - iVar9;
                    /* catch() { ... } // from try @ 0101f27c with catch @ 0101f340 */
  iVar9 = param_2;
  if (iVar11 + 1 < param_2) {
    iVar9 = iVar11 + 1;
  }
  uVar13 = param_2 - iVar9 & (param_2 - iVar9 >> 0x1f ^ 0xffffffffU);
                    /* catch() { ... } // from try @ 0101f2c4 with catch @ 0101f35c */
  uVar1 = param_3 - uVar5;
  if ((int)(uVar13 + uVar5) <= param_3) {
    uVar1 = uVar13;
  }
  if (uVar1 != 0) {
    memmove(param_1 + (int)uVar5,param_1 + iVar9,
            -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  if ((int)uVar5 < 1) goto LAB_0101f3b4;
  uVar10 = (ulong)uVar5;
  if (uVar5 < 4) {
LAB_0101f388:
    uVar14 = 0;
    uVar13 = 0;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    if (((int)(uVar4 - (int)(uVar10 - 1)) <= (int)uVar4) && (uVar13 = 0, uVar10 - 1 >> 0x20 == 0)) {
      if ((param_1 < param_4 + (long)(int)uVar4 + 1) &&
         (param_4 + (((long)(int)uVar4 + 1) - uVar10) < param_1 + uVar10)) goto LAB_0101f388;
      uVar14 = uVar10 & 0xfffffffc;
      uVar17 = uVar14;
      puVar16 = param_1;
      do {
        uVar2 = uVar19 << 2;
        uVar3 = uVar19 >> 0x1f;
        uVar17 = uVar17 - 4;
        uVar19 = (ulong)((int)uVar19 - 4);
        auVar20 = NEON_rev64(*(undefined1 (*) [16])
                              ((long)param_4 + ((-uVar3 & 0xfffffffc00000000 | uVar2) - 0xc)),4);
        auVar20 = NEON_ext(auVar20,auVar20,8,1);
        *(long *)(puVar16 + 2) = auVar20._8_8_;
        *(long *)puVar16 = auVar20._0_8_;
        puVar16 = puVar16 + 4;
      } while (uVar17 != 0);
      uVar13 = (uint)uVar14;
      if (uVar14 == uVar10) goto LAB_0101f3b4;
    }
  }
  lVar15 = uVar10 - uVar14;
  iVar11 = ~uVar13 + param_5;
  puVar16 = param_1 + uVar14;
  do {
    lVar18 = (long)iVar11;
    lVar15 = lVar15 + -1;
    iVar11 = iVar11 + -1;
    *puVar16 = param_4[lVar18];
    puVar16 = puVar16 + 1;
  } while (lVar15 != 0);
LAB_0101f3b4:
  return uVar1 + uVar5;
}

