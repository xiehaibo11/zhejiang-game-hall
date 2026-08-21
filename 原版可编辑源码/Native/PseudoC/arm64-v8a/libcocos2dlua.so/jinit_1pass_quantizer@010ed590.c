
void jinit_1pass_quantizer(long *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 auVar25 [16];
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
                    /* try { // try from 010ed598 to 011ed59b has its CatchHandler @ 010ed6c4 */
  puVar7 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x98);
  param_1[0x52] = (long)puVar7;
  puVar7[0xe] = 0;
  *puVar7 = FUN_010eda6c;
  puVar7[3] = FUN_010edd20;
  puVar7[2] = FUN_010edd1c;
  puVar7[10] = 0;
                    /* try { // try from 010ed5f0 to 011ed5f7 has its CatchHandler @ 010ed6c0 */
                    /* try { // try from 010ed5f8 to 011ed6d7 has its CatchHandler @ 010ed478 */
  if (4 < (int)param_1[0x12]) {
    puVar7 = (undefined8 *)*param_1;
    puVar7[5] = 0x400000039;
    (*(code *)*puVar7)(param_1);
  }
  iVar29 = (int)param_1[0xf];
  if (0x100 < iVar29) {
    puVar7 = (undefined8 *)*param_1;
    puVar7[5] = 0x1000000003b;
    (*(code *)*puVar7)(param_1);
    iVar29 = (int)param_1[0xf];
  }
  uVar2 = *(uint *)(param_1 + 0x12);
  lVar22 = param_1[0x52];
  lVar23 = (long)iVar29;
  if ((int)uVar2 < 2) {
    lVar12 = lVar23;
    if (lVar23 < 2) {
      lVar12 = 1;
    }
    lVar18 = lVar12 + 1;
    iVar29 = (int)lVar12;
  }
  else {
    uVar13 = uVar2 - 1;
    uVar1 = uVar13 & 0xfffffffc;
    lVar9 = 1;
    do {
      lVar12 = lVar9;
      lVar9 = lVar12 + 1;
      lVar18 = lVar9;
      uVar16 = 1;
      if ((uVar13 < 4) || (uVar1 == 0)) {
LAB_010ed708:
        iVar29 = uVar2 - uVar16;
        do {
          iVar29 = iVar29 + -1;
          lVar18 = lVar18 * lVar9;
        } while (iVar29 != 0);
      }
      else {
        lVar19 = 1;
        lVar17 = 1;
        lVar18 = 1;
        lVar20 = lVar9;
        uVar16 = uVar1;
        do {
          lVar20 = lVar20 * lVar9;
          lVar19 = lVar19 * lVar9;
                    /* catch() { ... } // from try @ 010ed5f0 with catch @ 010ed6c0 */
          lVar18 = lVar18 * lVar9;
                    /* catch() { ... } // from try @ 010ed598 with catch @ 010ed6c4 */
          lVar17 = lVar17 * lVar9;
          uVar16 = uVar16 - 4;
        } while (uVar16 != 0);
        lVar18 = lVar19 * lVar20 * lVar17 * lVar18;
        uVar16 = uVar1 | 1;
        if (uVar13 != uVar1) goto LAB_010ed708;
      }
    } while (lVar18 <= lVar23);
    iVar29 = (int)lVar12;
  }
  iVar14 = (int)lVar12;
  if (iVar29 < 2) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x3a;
    *(int *)((long)puVar7 + 0x2c) = (int)lVar18;
    (*(code *)*puVar7)(param_1);
  }
  if ((int)uVar2 < 1) {
    uVar21 = 1;
LAB_010ed8a8:
    lVar23 = *param_1;
    iVar29 = (int)uVar21;
    if ((int)param_1[0x12] == 3) {
      *(int *)(lVar23 + 0x2c) = iVar29;
      *(undefined4 *)(lVar23 + 0x30) = *(undefined4 *)(lVar22 + 0x3c);
      *(undefined4 *)(lVar23 + 0x34) = *(undefined4 *)(lVar22 + 0x40);
      uVar3 = *(undefined4 *)(lVar22 + 0x44);
      *(undefined4 *)(lVar23 + 0x28) = 0x60;
      *(undefined4 *)(lVar23 + 0x38) = uVar3;
      (**(code **)(lVar23 + 8))(param_1,1);
    }
    else {
      *(undefined4 *)(lVar23 + 0x28) = 0x61;
      *(int *)(lVar23 + 0x2c) = iVar29;
      (**(code **)(lVar23 + 8))(param_1,1);
    }
    lVar23 = (**(code **)(param_1[1] + 0x10))(param_1,1,uVar21,(int)param_1[0x12]);
    iVar14 = (int)param_1[0x12];
    if (0 < iVar14) {
      lVar12 = 0;
      do {
        uVar2 = *(uint *)(lVar22 + lVar12 * 4 + 0x3c);
                    /* try { // try from 010ed944 to 011eda5f has its CatchHandler @ 010ed944
                       catch() { ... } // from try @ 010ed944 with catch @ 010ed944
                       catch() { ... } // from try @ 010edac4 with catch @ 010ed944 */
        uVar1 = 0;
        if (uVar2 != 0) {
          uVar1 = (int)uVar21 / (int)uVar2;
        }
        if (0 < (int)uVar2) {
          lVar18 = (long)(int)uVar2 + -1;
          uVar13 = (uint)lVar18;
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + 1;
          }
          if (0 < (int)uVar1) {
            uVar11 = 0;
            iVar14 = 0;
            do {
              if ((long)(uVar11 * (long)(int)uVar1) < (long)iVar29) {
                lVar9 = (long)iVar14;
                uVar4 = 0;
                if (lVar18 != 0) {
                  uVar4 = (undefined1)
                          ((long)(uVar11 * 0xff + ((long)((ulong)uVar13 << 0x20) >> 0x21)) / lVar18)
                  ;
                }
                do {
                  uVar10 = 0;
                  do {
                    *(undefined1 *)(*(long *)(lVar23 + lVar12 * 8) + lVar9 + uVar10) = uVar4;
                    uVar10 = uVar10 + 1;
                  } while (uVar1 != uVar10);
                  lVar9 = lVar9 + (int)uVar21;
                } while (lVar9 < iVar29);
              }
              uVar11 = uVar11 + 1;
              iVar14 = iVar14 + uVar1;
            } while (uVar11 != uVar2);
            iVar14 = (int)param_1[0x12];
          }
        }
        lVar12 = lVar12 + 1;
        uVar21 = (ulong)uVar1;
      } while (lVar12 < iVar14);
    }
    *(long *)(lVar22 + 0x20) = lVar23;
    *(int *)(lVar22 + 0x28) = iVar29;
    FUN_010edd34(param_1);
    if (((int)param_1[0xe] == 2) && (0 < (int)param_1[0x12])) {
      lVar23 = param_1[0x11];
      lVar12 = param_1[0x52];
      lVar22 = 0;
      do {
        uVar8 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)((int)lVar23 + 2) << 1);
        *(undefined8 *)(lVar12 + 0x70 + lVar22 * 8) = uVar8;
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)param_1[0x12]);
    }
                    /* try { // try from 010eda60 to 011eda67 has its CatchHandler @ 010edb90 */
    return;
  }
  if (uVar2 < 8) {
    lVar12 = 0;
LAB_010ed7cc:
    uVar11 = 1;
  }
  else {
    lVar12 = (ulong)uVar2 - (ulong)(uVar2 & 7);
    if (lVar12 == 0) goto LAB_010ed7cc;
    iVar29 = 1;
    iVar30 = 1;
    iVar28 = 1;
    iVar24 = 1;
    iVar26 = 1;
    iVar27 = 1;
    puVar7 = (undefined8 *)(lVar22 + 0x4c);
    iVar31 = 1;
    iVar32 = 1;
    lVar18 = lVar12;
    do {
      puVar7[-1] = CONCAT44(iVar14,iVar14);
      puVar7[-2] = CONCAT44(iVar14,iVar14);
      puVar7[1] = CONCAT44(iVar14,iVar14);
      *puVar7 = CONCAT44(iVar14,iVar14);
      iVar24 = iVar24 * iVar14;
      iVar26 = iVar26 * iVar14;
      iVar27 = iVar27 * iVar14;
      iVar28 = iVar28 * iVar14;
      iVar29 = iVar29 * iVar14;
      iVar30 = iVar30 * iVar14;
      iVar31 = iVar31 * iVar14;
      iVar32 = iVar32 * iVar14;
      lVar18 = lVar18 + -8;
      puVar7 = puVar7 + 4;
    } while (lVar18 != 0);
    iVar29 = iVar29 * iVar24;
    iVar30 = iVar30 * iVar26;
    auVar25._4_4_ = iVar30;
    auVar25._0_4_ = iVar29;
    auVar25._8_4_ = iVar31 * iVar27;
    auVar25._12_4_ = iVar32 * iVar28;
    auVar5._4_4_ = iVar30;
    auVar5._0_4_ = iVar29;
    auVar5._8_4_ = iVar31 * iVar27;
    auVar5._12_4_ = iVar32 * iVar28;
    auVar25 = NEON_ext(auVar25,auVar5,8,1);
    uVar11 = (ulong)(uint)(iVar29 * auVar25._0_4_ * iVar30 * auVar25._4_4_);
    if ((uVar2 & 7) == 0) goto LAB_010ed7ec;
  }
  lVar18 = (ulong)uVar2 - lVar12;
  piVar15 = (int *)(lVar22 + lVar12 * 4 + 0x3c);
  do {
    *piVar15 = iVar14;
    lVar18 = lVar18 + -1;
    uVar11 = (ulong)(uint)((int)uVar11 * iVar14);
    piVar15 = piVar15 + 1;
  } while (lVar18 != 0);
LAB_010ed7ec:
  if ((int)param_1[8] != 2) {
    do {
      lVar12 = 0;
      bVar6 = false;
      do {
        uVar21 = uVar11 & 0xffffffff;
        iVar29 = *(int *)(lVar22 + 0x3c + lVar12 * 4);
        iVar14 = 0;
        if (iVar29 != 0) {
          iVar14 = (int)uVar11 / iVar29;
        }
        uVar11 = (long)iVar14 * ((long)iVar29 + 1);
        if (uVar11 - lVar23 != 0 && lVar23 <= (long)uVar11) {
          uVar11 = uVar21;
          if (!bVar6) goto LAB_010ed8a8;
          break;
        }
        *(int *)(lVar22 + 0x3c + lVar12 * 4) = (int)((long)iVar29 + 1);
        lVar12 = lVar12 + 1;
        bVar6 = true;
      } while (lVar12 < (int)uVar2);
    } while( true );
  }
  do {
    lVar12 = 0;
    bVar6 = false;
    do {
      uVar21 = uVar11 & 0xffffffff;
      piVar15 = (int *)(lVar22 + (long)(int)(&DAT_01478520)[lVar12] * 4 + 0x3c);
      iVar29 = *piVar15;
      iVar14 = 0;
      if (iVar29 != 0) {
        iVar14 = (int)uVar11 / iVar29;
      }
      uVar11 = (long)iVar14 * ((long)iVar29 + 1);
      if (uVar11 - lVar23 != 0 && lVar23 <= (long)uVar11) {
        uVar11 = uVar21;
        if (!bVar6) goto LAB_010ed8a8;
        break;
      }
      lVar12 = lVar12 + 1;
      bVar6 = true;
      *piVar15 = (int)((long)iVar29 + 1);
    } while (lVar12 < (int)uVar2);
  } while( true );
}

