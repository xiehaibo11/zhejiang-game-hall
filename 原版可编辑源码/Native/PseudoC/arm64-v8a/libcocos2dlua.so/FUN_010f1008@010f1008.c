
void FUN_010f1008(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar5 = param_1[1];
                    /* catch() { ... } // from try @ 010f0fe8 with catch @ 010f102c */
                    /* catch() { ... } // from try @ 010f0ed0 with catch @ 010f1034 */
  plVar6 = *(long **)(lVar5 + 0x88);
                    /* catch() { ... } // from try @ 010f0edc with catch @ 010f1038 */
  if (plVar6 == (long *)0x0) {
    lVar11 = 0;
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    do {
      while (*plVar6 == 0) {
        lVar10 = lVar10 + (ulong)*(uint *)((long)plVar6 + 0xc) * (ulong)*(uint *)(plVar6 + 2);
        lVar11 = lVar11 + (ulong)*(uint *)(plVar6 + 1) * (ulong)*(uint *)((long)plVar6 + 0xc);
        plVar6 = (long *)plVar6[6];
        if (plVar6 == (long *)0x0) goto LAB_010f1080;
      }
      plVar6 = (long *)plVar6[6];
    } while (plVar6 != (long *)0x0);
  }
LAB_010f1080:
  for (plVar6 = *(long **)(lVar5 + 0x90); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[6]) {
    while (*plVar6 != 0) {
      plVar6 = (long *)plVar6[6];
      if (plVar6 == (long *)0x0) goto LAB_010f10c0;
    }
    lVar10 = lVar10 + (ulong)*(uint *)(plVar6 + 2) * (ulong)*(uint *)((long)plVar6 + 0xc) * 0x80;
    lVar11 = lVar11 + (ulong)*(uint *)((long)plVar6 + 0xc) * (ulong)*(uint *)(plVar6 + 1) * 0x80;
  }
LAB_010f10c0:
  if (0 < lVar10) {
    lVar4 = jpeg_mem_available(param_1,lVar10,lVar11,*(undefined8 *)(lVar5 + 0x98));
    if (lVar4 < lVar11) {
                    /* try { // try from 010f10f0 to 011f112b has its CatchHandler @ 010f10f0
                       catch() { ... } // from try @ 010f10f0 with catch @ 010f10f0
                       catch() { ... } // from try @ 010f1218 with catch @ 010f10f0 */
      lVar11 = 0;
      if (lVar10 != 0) {
        lVar11 = lVar4 / lVar10;
      }
      if (lVar11 < 2) {
        lVar11 = 1;
      }
    }
    else {
      lVar11 = 1000000000;
    }
    for (plVar6 = *(long **)(lVar5 + 0x88); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[6]) {
      if (*plVar6 == 0) {
        uVar16 = (ulong)*(uint *)(plVar6 + 1);
        uVar13 = *(uint *)(plVar6 + 2);
                    /* try { // try from 010f112c to 011f1137 has its CatchHandler @ 010f12d8 */
        lVar10 = 0;
        if ((ulong)uVar13 != 0) {
          lVar10 = (long)(uVar16 - 1) / (long)(ulong)uVar13;
        }
        if (lVar10 < lVar11) {
          *(uint *)((long)plVar6 + 0x14) = *(uint *)(plVar6 + 1);
                    /* try { // try from 010f1140 to 011f1157 has its CatchHandler @ 010f12d4 */
        }
        else {
          *(uint *)((long)plVar6 + 0x14) = (int)lVar11 * uVar13;
          jpeg_open_backing_store(param_1,plVar6 + 7,*(uint *)((long)plVar6 + 0xc) * uVar16);
          uVar16 = (ulong)*(uint *)((long)plVar6 + 0x14);
          *(undefined4 *)((long)plVar6 + 0x2c) = 1;
        }
        uVar12 = (ulong)*(uint *)((long)plVar6 + 0xc);
        lVar10 = param_1[1];
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0x3b9ac9e8 / uVar12;
        }
        if (0x3b9ac9e8 < *(uint *)((long)plVar6 + 0xc)) {
          puVar7 = (undefined8 *)*param_1;
                    /* try { // try from 010f1198 to 011f11a3 has its CatchHandler @ 010f12b0 */
          *(undefined4 *)(puVar7 + 5) = 0x48;
          (*(code *)*puVar7)(param_1);
        }
                    /* try { // try from 010f11ac to 011f11c3 has its CatchHandler @ 010f12fc */
        uVar15 = (uint)uVar16;
        uVar13 = (uint)uVar18;
        if (uVar16 <= uVar18) {
          uVar13 = uVar15;
        }
        uVar18 = (ulong)uVar13;
        *(uint *)(lVar10 + 0xa0) = uVar13;
        lVar10 = FUN_010f0a10(param_1,1,uVar16 << 3);
        if (uVar15 != 0) {
          uVar13 = 0;
          do {
                    /* try { // try from 010f11e4 to 011f11e7 has its CatchHandler @ 010f12b4 */
                    /* try { // try from 010f11e8 to 011f1217 has its CatchHandler @ 010f12dc */
            uVar17 = (uint)uVar18;
            lVar4 = param_1[1];
            uVar14 = uVar17;
            if (uVar15 - uVar13 <= uVar17) {
              uVar14 = uVar15 - uVar13;
            }
            uVar18 = (ulong)uVar14;
            uVar16 = uVar18 * uVar12;
            if (0x3b9ac9e8 < uVar16) {
              puVar7 = (undefined8 *)*param_1;
                    /* try { // try from 010f1218 to 011f131f has its CatchHandler @ 010f10f0 */
              puVar7[5] = 0x300000038;
              (*(code *)*puVar7)(param_1);
            }
            lVar2 = 0;
            if ((uVar16 & 7) != 0) {
              lVar2 = 8 - (uVar16 & 7);
            }
            lVar1 = lVar2 + uVar16 + 0x18;
            puVar7 = (undefined8 *)jpeg_get_large(param_1,lVar1);
            if (puVar7 == (undefined8 *)0x0) {
              puVar8 = (undefined8 *)*param_1;
              puVar8[5] = 0x400000038;
              (*(code *)*puVar8)();
            }
            *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) + lVar1;
            *puVar7 = *(undefined8 *)(lVar4 + 0x80);
            puVar7[1] = lVar2 + uVar16;
            puVar7[2] = 0;
            *(undefined8 **)(lVar4 + 0x80) = puVar7;
            if (uVar14 != 0) {
              uVar14 = ~uVar15 + uVar13;
              if (uVar14 <= ~uVar17) {
                uVar14 = ~uVar17;
              }
              puVar7 = puVar7 + 3;
              iVar9 = uVar14 + 1;
                    /* catch() { ... } // from try @ 010f1198 with catch @ 010f12b0 */
              uVar14 = uVar13;
              do {
                    /* catch() { ... } // from try @ 010f11e4 with catch @ 010f12b4 */
                uVar13 = uVar14 + 1;
                *(undefined8 **)(lVar10 + (ulong)uVar14 * 8) = puVar7;
                iVar9 = iVar9 + 1;
                puVar7 = (undefined8 *)((long)puVar7 + uVar12);
                uVar14 = uVar13;
              } while (iVar9 != 0);
            }
          } while (uVar13 < uVar15);
        }
        *plVar6 = lVar10;
                    /* catch() { ... } // from try @ 010f11ac with catch @ 010f12fc */
        uVar3 = *(undefined4 *)(lVar5 + 0xa0);
        *(undefined8 *)((long)plVar6 + 0x1c) = 0;
        *(undefined4 *)(plVar6 + 5) = 0;
        *(undefined4 *)(plVar6 + 3) = uVar3;
      }
    }
    for (plVar6 = *(long **)(lVar5 + 0x90); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[6]) {
      while (*plVar6 != 0) {
        plVar6 = (long *)plVar6[6];
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      uVar16 = (ulong)*(uint *)(plVar6 + 1);
      uVar13 = *(uint *)(plVar6 + 2);
      lVar10 = 0;
      if ((ulong)uVar13 != 0) {
        lVar10 = (long)(uVar16 - 1) / (long)(ulong)uVar13;
      }
      if (lVar10 < lVar11) {
        *(uint *)((long)plVar6 + 0x14) = *(uint *)(plVar6 + 1);
      }
      else {
        *(uint *)((long)plVar6 + 0x14) = (int)lVar11 * uVar13;
                    /* try { // try from 010f137c to 011f13cf has its CatchHandler @ 010f137c
                       catch() { ... } // from try @ 010f137c with catch @ 010f137c
                       catch() { ... } // from try @ 010f1434 with catch @ 010f137c */
        jpeg_open_backing_store(param_1,plVar6 + 7,uVar16 * *(uint *)((long)plVar6 + 0xc) * 0x80);
        uVar16 = (ulong)*(uint *)((long)plVar6 + 0x14);
        *(undefined4 *)((long)plVar6 + 0x2c) = 1;
      }
      uVar12 = (ulong)*(uint *)((long)plVar6 + 0xc);
      lVar10 = param_1[1];
      uVar18 = 0;
      if (uVar12 != 0) {
        uVar18 = 0x3b9ac9e8 / (uVar12 * 0x80);
      }
      if (0x773593 < *(uint *)((long)plVar6 + 0xc)) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 0x48;
                    /* try { // try from 010f13d0 to 011f13db has its CatchHandler @ 010f1488 */
        (*(code *)*puVar7)(param_1);
      }
      uVar15 = (uint)uVar16;
      uVar13 = (uint)uVar18;
      if (uVar16 <= uVar18) {
        uVar13 = uVar15;
      }
      uVar18 = (ulong)uVar13;
      *(uint *)(lVar10 + 0xa0) = uVar13;
      lVar10 = FUN_010f0a10(param_1,1,uVar16 << 3);
      if (uVar15 != 0) {
                    /* try { // try from 010f1400 to 011f1433 has its CatchHandler @ 010f1498 */
        uVar13 = 0;
        do {
          uVar17 = (uint)uVar18;
          lVar4 = param_1[1];
          uVar14 = uVar17;
          if (uVar15 - uVar13 <= uVar17) {
            uVar14 = uVar15 - uVar13;
          }
          uVar18 = (ulong)uVar14;
          uVar16 = uVar12 * 0x80 * uVar18;
          if (0x3b9ac9e8 < uVar16) {
            puVar7 = (undefined8 *)*param_1;
                    /* try { // try from 010f1434 to 011f14eb has its CatchHandler @ 010f137c */
            puVar7[5] = 0x300000038;
            (*(code *)*puVar7)(param_1);
          }
          puVar7 = (undefined8 *)jpeg_get_large(param_1,uVar16 | 0x18);
          if (puVar7 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)*param_1;
            puVar8[5] = 0x400000038;
            (*(code *)*puVar8)();
          }
                    /* catch() { ... } // from try @ 010f13d0 with catch @ 010f1488 */
          *(ulong *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) + (uVar16 | 0x18);
          *puVar7 = *(undefined8 *)(lVar4 + 0x80);
          puVar7[1] = uVar16;
          puVar7[2] = 0;
                    /* catch() { ... } // from try @ 010f1400 with catch @ 010f1498 */
          *(undefined8 **)(lVar4 + 0x80) = puVar7;
          if (uVar14 != 0) {
            puVar7 = puVar7 + 3;
            uVar14 = ~uVar15 + uVar13;
            if (uVar14 <= ~uVar17) {
              uVar14 = ~uVar17;
            }
            iVar9 = uVar14 + 1;
            uVar14 = uVar13;
            do {
              uVar13 = uVar14 + 1;
              *(undefined8 **)(lVar10 + (ulong)uVar14 * 8) = puVar7;
              iVar9 = iVar9 + 1;
              puVar7 = puVar7 + uVar12 * 0x10;
              uVar14 = uVar13;
            } while (iVar9 != 0);
          }
                    /* try { // try from 010f1504 to 011f1507 has its CatchHandler @ 010f155c */
        } while (uVar13 < uVar15);
      }
      *plVar6 = lVar10;
      uVar3 = *(undefined4 *)(lVar5 + 0xa0);
      *(undefined8 *)((long)plVar6 + 0x1c) = 0;
      *(undefined4 *)(plVar6 + 5) = 0;
      *(undefined4 *)(plVar6 + 3) = uVar3;
    }
  }
  return;
}

