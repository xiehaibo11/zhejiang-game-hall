
void FUN_010ef0e4(long *param_1)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ushort *puVar17;
  long lVar18;
  ushort *puVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  ulong uVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  long lVar45;
  ushort *puVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined8 uVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  int iVar63;
  int iVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  ulong uVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  ulong uVar78;
  int iVar79;
  int iVar80;
  
  lVar25 = param_1[0x52];
  uVar39 = 1;
  param_1[0x14] = *(long *)(lVar25 + 0x20);
  iVar38 = *(int *)(lVar25 + 0x28);
  piVar10 = (int *)(**(code **)param_1[1])(param_1,1,(long)iVar38 * 0x28);
  piVar10[2] = 0;
  piVar10[3] = 0x3f;
  piVar10[0] = 0;
  piVar10[1] = 0x1f;
  piVar10[4] = 0;
  piVar10[5] = 0x1f;
  FUN_010efa98(param_1,piVar10);
  if (1 < iVar38) {
    uVar39 = 1;
    do {
                    /* try { // try from 010ef180 to 011ef183 has its CatchHandler @ 010ef230 */
      if (iVar38 < (int)uVar39 * 2) {
        uVar20 = 0;
        lVar22 = 0;
        piVar12 = (int *)0x0;
        piVar26 = piVar10;
        do {
          uVar20 = uVar20 + 1;
          piVar13 = piVar26;
          lVar23 = *(long *)(piVar26 + 6);
          if (*(long *)(piVar26 + 6) <= lVar22) {
            piVar13 = piVar12;
            lVar23 = lVar22;
          }
          lVar22 = lVar23;
          piVar26 = piVar26 + 10;
          piVar12 = piVar13;
        } while (uVar39 != uVar20);
      }
      else {
        uVar20 = 0;
        piVar12 = (int *)0x0;
        lVar22 = 0;
        piVar26 = piVar10;
        do {
          piVar13 = piVar12;
          lVar23 = lVar22;
          if ((lVar22 < *(long *)(piVar26 + 8)) &&
             (piVar13 = piVar26, lVar23 = *(long *)(piVar26 + 8), *(long *)(piVar26 + 6) < 1)) {
            piVar13 = piVar12;
            lVar23 = lVar22;
          }
          uVar20 = uVar20 + 1;
          piVar26 = piVar26 + 10;
          piVar12 = piVar13;
          lVar22 = lVar23;
        } while (uVar39 != uVar20);
      }
      if (piVar13 == (int *)0x0) break;
      piVar26 = piVar10 + uVar39 * 10;
      piVar26[5] = piVar13[5];
      uVar50 = *(undefined8 *)piVar13;
      *(undefined8 *)(piVar26 + 2) = *(undefined8 *)(piVar13 + 2);
      *(undefined8 *)piVar26 = uVar50;
      piVar26[4] = piVar13[4];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010ef180 with catch @ 010ef230
                        */
      iVar5 = (piVar13[1] - *piVar13) * 0x10;
      iVar63 = (piVar13[3] - piVar13[2]) * 0xc;
      iVar21 = iVar5;
      if (iVar5 <= iVar63) {
        iVar21 = iVar63;
      }
      cVar2 = '\x02';
      if ((piVar13[5] - piVar13[4]) * 8 <= iVar21) {
        cVar2 = iVar5 <= iVar63;
      }
      if (cVar2 == '\x02') {
        iVar21 = piVar13[4] + piVar13[5];
        if (iVar21 < 0) {
          iVar21 = iVar21 + 1;
        }
        piVar12 = piVar26 + 4;
        iVar21 = iVar21 >> 1;
        piVar13[5] = iVar21;
LAB_010ef2c4:
        *piVar12 = iVar21 + 1;
      }
      else {
        if (cVar2 == '\x01') {
          iVar21 = piVar13[2] + piVar13[3];
          if (iVar21 < 0) {
            iVar21 = iVar21 + 1;
          }
          iVar21 = iVar21 >> 1;
          piVar12 = piVar10 + uVar39 * 10 + 2;
          piVar13[3] = iVar21;
          goto LAB_010ef2c4;
        }
        if (cVar2 == '\0') {
          iVar21 = *piVar13 + piVar13[1];
          if (iVar21 < 0) {
            iVar21 = iVar21 + 1;
          }
          iVar21 = iVar21 >> 1;
          piVar13[1] = iVar21;
          piVar12 = piVar26;
          goto LAB_010ef2c4;
        }
      }
      FUN_010efa98(param_1);
      FUN_010efa98(param_1,piVar26);
      uVar39 = uVar39 + 1;
    } while ((long)uVar39 < (long)iVar38);
    iVar38 = (int)uVar39;
    if (iVar38 < 1) goto LAB_010ef660;
  }
  iVar38 = (int)uVar39;
  uVar20 = 0;
  do {
    piVar26 = piVar10 + uVar20 * 10;
                    /* try { // try from 010ef5d8 to 011ef5eb has its CatchHandler @ 010ef6e0 */
    if (piVar26[1] < *piVar26) {
LAB_010ef5fc:
      lVar41 = 0;
      lVar47 = 0;
      lVar45 = 0;
      lVar43 = 0;
    }
    else {
      iVar21 = piVar26[2];
      if (piVar26[3] < iVar21) goto LAB_010ef5fc;
      iVar5 = piVar26[4];
      lVar22 = (long)iVar5;
      lVar23 = (long)piVar26[5];
      if (piVar26[5] < iVar5) goto LAB_010ef5fc;
      lVar41 = lVar22;
      if (lVar22 <= lVar23) {
        lVar41 = lVar23;
      }
      uVar32 = (lVar41 + 1) - lVar22;
      uVar11 = uVar32 & 0xfffffffffffffffc;
      lVar43 = 0;
      lVar45 = 0;
      lVar47 = 0;
      lVar41 = 0;
      lVar29 = (long)*piVar26;
      do {
        lVar16 = (long)(int)((int)lVar29 << 3 | 4);
        lVar15 = *(long *)(*(long *)(param_1[0x52] + 0x30) + lVar29 * 8);
        puVar17 = (ushort *)(lVar15 + (lVar22 + (long)iVar21 * 0x20) * 2 + 4);
        lVar18 = (long)iVar21;
        do {
          puVar19 = (ushort *)(lVar15 + lVar18 * 0x40 + lVar22 * 2);
          lVar37 = (long)(int)((int)lVar18 << 2 | 2);
          lVar51 = lVar22;
          if ((uVar32 < 4) || (uVar11 == 0)) {
LAB_010ef574:
                    /* try { // try from 010ef574 to 011ef583 has its CatchHandler @ 010ef6c0 */
            lVar52 = lVar51 + -1;
            uVar30 = (int)lVar51 << 3 | 4;
            do {
              uVar40 = (ulong)*puVar19;
              if (uVar40 != 0) {
                lVar41 = lVar41 + uVar40;
                    /* try { // try from 010ef590 to 011ef5b3 has its CatchHandler @ 010ef704 */
                lVar47 = lVar47 + uVar40 * lVar16;
                lVar45 = lVar45 + uVar40 * lVar37;
                lVar43 = lVar43 + uVar40 * (long)(int)uVar30;
              }
              lVar52 = lVar52 + 1;
              uVar30 = uVar30 + 8;
              puVar19 = puVar19 + 1;
            } while (lVar52 < lVar23);
          }
          else {
            lVar56 = 0;
            lVar55 = 0;
            lVar54 = 0;
            lVar53 = 0;
            puVar19 = puVar19 + uVar11;
            lVar51 = 0;
            lVar52 = 0;
            lVar57 = 0;
            lVar58 = 0;
            lVar59 = 0;
            lVar60 = 0;
            lVar61 = 0;
            lVar62 = 0;
            uVar40 = uVar11;
            puVar46 = puVar17;
            iVar63 = iVar5;
            iVar64 = iVar5 + 1;
            do {
              uVar4 = puVar46[-1];
              uVar3 = puVar46[1];
              uVar30 = (uint)puVar46[-2];
              uVar44 = (uint)*puVar46;
                    /* try { // try from 010ef424 to 011ef473 has its CatchHandler @ 010ef424
                       catch() { ... } // from try @ 010ef424 with catch @ 010ef424
                       catch() { ... } // from try @ 010ef678 with catch @ 010ef424 */
              uVar71 = (ulong)CONCAT24(uVar4,uVar30) & 0xffffffff;
              uVar8 = (ulong)uVar4;
              uVar78 = (ulong)CONCAT24(uVar3,uVar44) & 0xffffffff;
              uVar9 = (ulong)uVar3;
              lVar33 = lVar16 * uVar71;
              lVar35 = uVar71 * (long)(int)(iVar63 * 8 | 4);
              lVar48 = lVar37 * uVar71;
              lVar27 = lVar37 * uVar78;
              iVar79 = -(uint)(uVar4 == 0);
              iVar80 = -(uint)(uVar3 == 0);
              lVar49 = lVar16 * uVar78;
              lVar14 = uVar78 * (long)(int)(iVar63 * 8 + 0x10U | 4);
                    /* try { // try from 010ef474 to 011ef507 has its CatchHandler @ 010ef704 */
              lVar41 = lVar41 + (ulong)uVar30;
              lVar56 = lVar56 + (ulong)(uint)uVar4;
              lVar61 = lVar61 + (ulong)uVar44;
              lVar62 = lVar62 + (ulong)(uint)uVar3;
              lVar36 = lVar16 * uVar8;
              lVar34 = lVar16 * uVar9;
              lVar24 = uVar8 * (long)(int)(iVar64 * 8 | 4);
              lVar42 = lVar37 * uVar8;
              lVar28 = lVar37 * uVar9;
              lVar31 = uVar9 * (long)(int)(iVar64 * 8 + 0x10U | 4);
              bVar65 = (byte)-(uint)(uVar30 == 0);
              bVar66 = (byte)(-(uint)(uVar30 == 0) >> 8);
              bVar67 = (char)bVar66 >> 7;
              bVar68 = (byte)iVar79;
              bVar69 = (byte)((uint)iVar79 >> 8);
              bVar70 = (char)bVar69 >> 7;
              bVar72 = (byte)-(uint)(uVar44 == 0);
              bVar73 = (byte)(-(uint)(uVar44 == 0) >> 8);
              bVar74 = (char)bVar73 >> 7;
              bVar75 = (byte)iVar80;
              bVar76 = (byte)((uint)iVar80 >> 8);
              bVar77 = (char)bVar76 >> 7;
              iVar63 = iVar63 + 4;
              iVar64 = iVar64 + 4;
              uVar40 = uVar40 - 4;
              lVar47 = lVar47 + CONCAT17((byte)((ulong)lVar33 >> 0x38) & ~bVar67,
                                         CONCAT16((byte)((ulong)lVar33 >> 0x30) & ~bVar67,
                                                  CONCAT15((byte)((ulong)lVar33 >> 0x28) & ~bVar67,
                                                           CONCAT14((byte)((ulong)lVar33 >> 0x20) &
                                                                    ~bVar67,CONCAT13((byte)((ulong)
                                                  lVar33 >> 0x18) & ~bVar67,
                                                  CONCAT12((byte)((ulong)lVar33 >> 0x10) & ~bVar67,
                                                           CONCAT11((byte)((ulong)lVar33 >> 8) &
                                                                    ~bVar66,(byte)lVar33 & ~bVar65))
                                                  )))));
              lVar55 = lVar55 + CONCAT17((byte)((ulong)lVar36 >> 0x38) & ~bVar70,
                                         CONCAT16((byte)((ulong)lVar36 >> 0x30) & ~bVar70,
                                                  CONCAT15((byte)((ulong)lVar36 >> 0x28) & ~bVar70,
                                                           CONCAT14((byte)((ulong)lVar36 >> 0x20) &
                                                                    ~bVar70,CONCAT13((byte)((ulong)
                                                  lVar36 >> 0x18) & ~bVar70,
                                                  CONCAT12((byte)((ulong)lVar36 >> 0x10) & ~bVar70,
                                                           CONCAT11((byte)((ulong)lVar36 >> 8) &
                                                                    ~bVar69,(byte)lVar36 & ~bVar68))
                                                  )))));
              lVar59 = lVar59 + CONCAT17((byte)((ulong)lVar49 >> 0x38) & ~bVar74,
                                         CONCAT16((byte)((ulong)lVar49 >> 0x30) & ~bVar74,
                                                  CONCAT15((byte)((ulong)lVar49 >> 0x28) & ~bVar74,
                                                           CONCAT14((byte)((ulong)lVar49 >> 0x20) &
                                                                    ~bVar74,CONCAT13((byte)((ulong)
                                                  lVar49 >> 0x18) & ~bVar74,
                                                  CONCAT12((byte)((ulong)lVar49 >> 0x10) & ~bVar74,
                                                           CONCAT11((byte)((ulong)lVar49 >> 8) &
                                                                    ~bVar73,(byte)lVar49 & ~bVar72))
                                                  )))));
              lVar60 = lVar60 + CONCAT17((byte)((ulong)lVar34 >> 0x38) & ~bVar77,
                                         CONCAT16((byte)((ulong)lVar34 >> 0x30) & ~bVar77,
                                                  CONCAT15((byte)((ulong)lVar34 >> 0x28) & ~bVar77,
                                                           CONCAT14((byte)((ulong)lVar34 >> 0x20) &
                                                                    ~bVar77,CONCAT13((byte)((ulong)
                                                  lVar34 >> 0x18) & ~bVar77,
                                                  CONCAT12((byte)((ulong)lVar34 >> 0x10) & ~bVar77,
                                                           CONCAT11((byte)((ulong)lVar34 >> 8) &
                                                                    ~bVar76,(byte)lVar34 & ~bVar75))
                                                  )))));
              lVar45 = lVar45 + CONCAT17((byte)((ulong)lVar48 >> 0x38) & ~bVar67,
                                         CONCAT16((byte)((ulong)lVar48 >> 0x30) & ~bVar67,
                                                  CONCAT15((byte)((ulong)lVar48 >> 0x28) & ~bVar67,
                                                           CONCAT14((byte)((ulong)lVar48 >> 0x20) &
                                                                    ~bVar67,CONCAT13((byte)((ulong)
                                                  lVar48 >> 0x18) & ~bVar67,
                                                  CONCAT12((byte)((ulong)lVar48 >> 0x10) & ~bVar67,
                                                           CONCAT11((byte)((ulong)lVar48 >> 8) &
                                                                    ~bVar66,(byte)lVar48 & ~bVar65))
                                                  )))));
              lVar54 = lVar54 + CONCAT17((byte)((ulong)lVar42 >> 0x38) & ~bVar70,
                                         CONCAT16((byte)((ulong)lVar42 >> 0x30) & ~bVar70,
                                                  CONCAT15((byte)((ulong)lVar42 >> 0x28) & ~bVar70,
                                                           CONCAT14((byte)((ulong)lVar42 >> 0x20) &
                                                                    ~bVar70,CONCAT13((byte)((ulong)
                                                  lVar42 >> 0x18) & ~bVar70,
                                                  CONCAT12((byte)((ulong)lVar42 >> 0x10) & ~bVar70,
                                                           CONCAT11((byte)((ulong)lVar42 >> 8) &
                                                                    ~bVar69,(byte)lVar42 & ~bVar68))
                                                  )))));
              lVar57 = lVar57 + CONCAT17((byte)((ulong)lVar27 >> 0x38) & ~bVar74,
                                         CONCAT16((byte)((ulong)lVar27 >> 0x30) & ~bVar74,
                                                  CONCAT15((byte)((ulong)lVar27 >> 0x28) & ~bVar74,
                                                           CONCAT14((byte)((ulong)lVar27 >> 0x20) &
                                                                    ~bVar74,CONCAT13((byte)((ulong)
                                                  lVar27 >> 0x18) & ~bVar74,
                                                  CONCAT12((byte)((ulong)lVar27 >> 0x10) & ~bVar74,
                                                           CONCAT11((byte)((ulong)lVar27 >> 8) &
                                                                    ~bVar73,(byte)lVar27 & ~bVar72))
                                                  )))));
              lVar58 = lVar58 + CONCAT17((byte)((ulong)lVar28 >> 0x38) & ~bVar77,
                                         CONCAT16((byte)((ulong)lVar28 >> 0x30) & ~bVar77,
                                                  CONCAT15((byte)((ulong)lVar28 >> 0x28) & ~bVar77,
                                                           CONCAT14((byte)((ulong)lVar28 >> 0x20) &
                                                                    ~bVar77,CONCAT13((byte)((ulong)
                                                  lVar28 >> 0x18) & ~bVar77,
                                                  CONCAT12((byte)((ulong)lVar28 >> 0x10) & ~bVar77,
                                                           CONCAT11((byte)((ulong)lVar28 >> 8) &
                                                                    ~bVar76,(byte)lVar28 & ~bVar75))
                                                  )))));
              lVar43 = lVar43 + CONCAT17((byte)((ulong)lVar35 >> 0x38) & ~bVar67,
                                         CONCAT16((byte)((ulong)lVar35 >> 0x30) & ~bVar67,
                                                  CONCAT15((byte)((ulong)lVar35 >> 0x28) & ~bVar67,
                                                           CONCAT14((byte)((ulong)lVar35 >> 0x20) &
                                                                    ~bVar67,CONCAT13((byte)((ulong)
                                                  lVar35 >> 0x18) & ~bVar67,
                                                  CONCAT12((byte)((ulong)lVar35 >> 0x10) & ~bVar67,
                                                           CONCAT11((byte)((ulong)lVar35 >> 8) &
                                                                    ~bVar66,(byte)lVar35 & ~bVar65))
                                                  )))));
              lVar53 = lVar53 + CONCAT17((byte)((ulong)lVar24 >> 0x38) & ~bVar70,
                                         CONCAT16((byte)((ulong)lVar24 >> 0x30) & ~bVar70,
                                                  CONCAT15((byte)((ulong)lVar24 >> 0x28) & ~bVar70,
                                                           CONCAT14((byte)((ulong)lVar24 >> 0x20) &
                                                                    ~bVar70,CONCAT13((byte)((ulong)
                                                  lVar24 >> 0x18) & ~bVar70,
                                                  CONCAT12((byte)((ulong)lVar24 >> 0x10) & ~bVar70,
                                                           CONCAT11((byte)((ulong)lVar24 >> 8) &
                                                                    ~bVar69,(byte)lVar24 & ~bVar68))
                                                  )))));
              lVar51 = lVar51 + CONCAT17((byte)((ulong)lVar14 >> 0x38) & ~bVar74,
                                         CONCAT16((byte)((ulong)lVar14 >> 0x30) & ~bVar74,
                                                  CONCAT15((byte)((ulong)lVar14 >> 0x28) & ~bVar74,
                                                           CONCAT14((byte)((ulong)lVar14 >> 0x20) &
                                                                    ~bVar74,CONCAT13((byte)((ulong)
                                                  lVar14 >> 0x18) & ~bVar74,
                                                  CONCAT12((byte)((ulong)lVar14 >> 0x10) & ~bVar74,
                                                           CONCAT11((byte)((ulong)lVar14 >> 8) &
                                                                    ~bVar73,(byte)lVar14 & ~bVar72))
                                                  )))));
              lVar52 = lVar52 + CONCAT17((byte)((ulong)lVar31 >> 0x38) & ~bVar77,
                                         CONCAT16((byte)((ulong)lVar31 >> 0x30) & ~bVar77,
                                                  CONCAT15((byte)((ulong)lVar31 >> 0x28) & ~bVar77,
                                                           CONCAT14((byte)((ulong)lVar31 >> 0x20) &
                                                                    ~bVar77,CONCAT13((byte)((ulong)
                                                  lVar31 >> 0x18) & ~bVar77,
                                                  CONCAT12((byte)((ulong)lVar31 >> 0x10) & ~bVar77,
                                                           CONCAT11((byte)((ulong)lVar31 >> 8) &
                                                                    ~bVar76,(byte)lVar31 & ~bVar75))
                                                  )))));
              puVar46 = puVar46 + 4;
            } while (uVar40 != 0);
            lVar41 = lVar61 + lVar41 + lVar62 + lVar56;
            lVar47 = lVar59 + lVar47 + lVar60 + lVar55;
            lVar45 = lVar57 + lVar45 + lVar58 + lVar54;
            lVar43 = lVar51 + lVar43 + lVar52 + lVar53;
            lVar51 = uVar11 + lVar22;
            if (uVar32 != uVar11) goto LAB_010ef574;
          }
          puVar17 = puVar17 + 0x20;
          bVar1 = lVar18 < piVar26[3];
          lVar18 = lVar18 + 1;
        } while (bVar1);
        bVar1 = lVar29 < piVar26[1];
        lVar29 = lVar29 + 1;
      } while (bVar1);
    }
    lVar22 = lVar41 >> 1;
                    /* try { // try from 010ef614 to 011ef617 has its CatchHandler @ 010ef6dc */
    uVar6 = 0;
    if (lVar41 != 0) {
      uVar6 = (undefined1)((lVar47 + lVar22) / lVar41);
    }
    *(undefined1 *)(*(long *)param_1[0x14] + uVar20) = uVar6;
    uVar6 = 0;
    if (lVar41 != 0) {
      uVar6 = (undefined1)((lVar45 + lVar22) / lVar41);
    }
    uVar7 = 0;
    if (lVar41 != 0) {
      uVar7 = (undefined1)((lVar43 + lVar22) / lVar41);
    }
    *(undefined1 *)(*(long *)(param_1[0x14] + 8) + uVar20) = uVar6;
                    /* try { // try from 010ef644 to 011ef64b has its CatchHandler @ 010ef700 */
    *(undefined1 *)(*(long *)(param_1[0x14] + 0x10) + uVar20) = uVar7;
    uVar20 = uVar20 + 1;
  } while (uVar20 != (uVar39 & 0xffffffff));
LAB_010ef660:
  lVar22 = *param_1;
                    /* try { // try from 010ef674 to 011ef677 has its CatchHandler @ 010ef6c4 */
  *(int *)((long)param_1 + 0x9c) = iVar38;
                    /* try { // try from 010ef678 to 011ef71f has its CatchHandler @ 010ef424 */
  *(undefined4 *)(lVar22 + 0x28) = 0x62;
  *(int *)(lVar22 + 0x2c) = iVar38;
  (**(code **)(lVar22 + 8))(param_1,1);
  *(undefined4 *)(lVar25 + 0x38) = 1;
  return;
}

