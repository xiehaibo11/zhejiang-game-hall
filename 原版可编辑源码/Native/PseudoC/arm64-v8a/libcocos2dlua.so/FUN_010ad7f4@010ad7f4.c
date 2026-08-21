
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_010ad7f4(uint *param_1,char param_2)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong **ppuVar8;
  ulong **ppuVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong **ppuVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ushort uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  long lVar30;
  long *plVar31;
  uint uVar32;
  byte *pbVar33;
  byte *pbVar34;
  uint uVar35;
  short sVar36;
  long lVar37;
  long *plVar38;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  short local_68 [2];
  ushort local_64 [2];
  
  uVar35 = param_1[0x1e4];
joined_r0x010ad81c:
  if ((int)uVar35 < 0) {
    uVar6 = 0;
  }
  else {
    *(long *)(param_1 + 0x20) =
         (long)(int)param_1[1] * (long)*(short *)((long)param_1 + (long)(int)uVar35 * 4 + 0x752);
    uVar35 = param_1[(long)(int)uVar35 + 0x1d4];
    uVar14 = *(ulong *)(param_1 + 8);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(undefined2 *)((long)param_1 + 0x8a) = 0;
    uVar16 = *(long *)(param_1 + 10) - 0x40;
    *(ulong *)(param_1 + 0xc) = uVar16;
    *(ulong *)(param_1 + 0xe) = uVar14;
    *(ulong *)(param_1 + 0x24) = uVar14;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(long *)(param_1 + 0x1e) = (long)(int)param_1[1] * (long)(short)uVar35;
    *(ulong *)(uVar14 + 0x10) = uVar14;
    *(undefined2 *)(param_1 + 0x22) = 0;
    if (0 < (short)param_1[0x36]) {
      lVar10 = *(long *)(param_1 + 0x3c);
      uVar35 = param_1[2];
      lVar37 = 0;
      uVar19 = 0;
      do {
        param_1[0x2a] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        lVar17 = (long)(int)uVar35;
        uVar16 = (ulong)*(ushort *)(lVar10 + lVar37 * 2);
        uVar14 = (ulong)param_1[6];
        plVar7 = (long *)(*(long *)(param_1 + 0x38) + (ulong)uVar19 * 0x10);
        pbVar34 = (byte *)(*(long *)(param_1 + 0x3a) + (ulong)uVar19);
        plVar38 = (long *)(*(long *)(param_1 + 0x38) + uVar16 * 0x10);
        bVar2 = *pbVar34;
        lVar30 = (*plVar7 << (uVar14 & 0x3f)) - lVar17;
        lVar24 = (plVar7[1] << (uVar14 & 0x3f)) - lVar17;
        lVar27 = (*plVar38 << (uVar14 & 0x3f)) - lVar17;
        lVar17 = (plVar38[1] << (uVar14 & 0x3f)) - lVar17;
        lVar10 = lVar27;
        lVar23 = lVar30;
        if (param_2 == '\0') {
          lVar10 = lVar17;
          lVar17 = lVar27;
          lVar23 = lVar24;
          lVar24 = lVar30;
        }
        if ((bVar2 >> 2 & 1) != 0) {
          *(byte *)(param_1 + 0x4e) = bVar2 >> 5;
          bVar2 = *pbVar34;
        }
        if ((bVar2 & 3) != 0) {
          if ((bVar2 & 3) != 2) goto LAB_010ade80;
switchD_010adff4_caseD_6:
          uVar35 = 0x14;
LAB_010ae724:
          param_1[0x10] = uVar35;
          goto LAB_010ae728;
        }
        if ((*(byte *)(*(long *)(param_1 + 0x3a) + uVar16) & 3) == 1) {
          plVar38 = plVar38 + -2;
        }
        else {
          lVar17 = lVar17 + lVar24;
          lVar10 = lVar10 + lVar23;
          if (lVar17 < 0) {
            lVar17 = lVar17 + 1;
          }
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          lVar17 = lVar17 >> 1;
          lVar10 = lVar10 >> 1;
        }
        plVar7 = plVar7 + -2;
        pbVar34 = pbVar34 + -1;
        lVar23 = lVar10;
        lVar24 = lVar17;
LAB_010ade80:
        *(long *)(param_1 + 0x1a) = lVar24;
        *(long *)(param_1 + 0x1c) = lVar23;
        if (plVar7 < plVar38) {
LAB_010ade9c:
          pbVar33 = pbVar34 + 1;
          plVar31 = plVar7 + 2;
          if ((*pbVar33 & 3) == 0) {
            lVar27 = (plVar7[2] << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
            lVar10 = (plVar7[3] << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
            lVar17 = lVar10;
            if (param_2 == '\0') {
switchD_010ae0d0_caseD_f:
              lVar10 = lVar27;
              if (plVar38 <= plVar31) goto LAB_010ae1e0;
              plVar7 = plVar31 + 2;
              pbVar33 = pbVar33 + 1;
                    /* try { // try from 010ae01c to 011ae02b has its CatchHandler @ 010ae618 */
              lVar27 = (*plVar7 << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
              lVar30 = (plVar31[3] << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
              if ((*pbVar33 & 3) == 0) {
                lVar18 = lVar27 + lVar10;
                lVar20 = lVar30 + lVar17;
                if (lVar18 < 0) {
                  lVar18 = lVar18 + 1;
                }
                if (lVar20 < 0) {
                  lVar20 = lVar20 + 1;
                }
                    /* try { // try from 010ae080 to 011ae08b has its CatchHandler @ 010ae640 */
                    /* try { // try from 010ae08c to 011ae0ab has its CatchHandler @ 010ae628 */
                cVar4 = FUN_010aede0(param_1,lVar10,lVar17,lVar18 >> 1,lVar20 >> 1);
                iVar21 = 0xf;
                if (cVar4 != '\0') {
                  iVar21 = 0xc;
                  lVar30 = lVar17;
                  lVar27 = lVar10;
                }
              }
              else {
                if ((*pbVar33 & 3) != 1) goto switchD_010adff4_caseD_6;
                cVar4 = FUN_010aede0(param_1,lVar10,lVar17,lVar27,lVar30);
                iVar21 = 7;
                lVar30 = lVar17;
                lVar27 = lVar10;
                if (cVar4 != '\0') {
                  iVar21 = 0xc;
                }
              }
                    /* try { // try from 010ae0ac to 011ae177 has its CatchHandler @ 010ad644 */
              if (9 < iVar21 - 6U) goto switchD_010adff4_caseD_8;
              plVar31 = plVar31 + 2;
              lVar17 = lVar30;
              switch(iVar21) {
              case 6:
                goto switchD_010adff4_caseD_6;
              case 7:
                goto switchD_010adff4_caseD_7;
              default:
                goto switchD_010adff4_caseD_8;
              case 0xc:
                goto switchD_010adff4_caseD_c;
              case 0xf:
                goto switchD_010ae0d0_caseD_f;
              }
            }
switchD_010adff4_caseD_f:
            lVar17 = lVar27;
            if (plVar38 <= plVar31) goto LAB_010ae1e0;
            plVar7 = plVar31 + 2;
            pbVar33 = pbVar33 + 1;
            lVar27 = (*plVar7 << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
            lVar30 = (plVar31[3] << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
            if ((*pbVar33 & 3) == 1) {
              cVar4 = FUN_010aede0(param_1,lVar10,lVar17,lVar30,lVar27);
              iVar21 = 7;
              lVar30 = lVar10;
              lVar27 = lVar17;
              if (cVar4 != '\0') {
                iVar21 = 0xc;
              }
            }
            else {
              if ((*pbVar33 & 3) != 0) goto switchD_010adff4_caseD_6;
              lVar18 = lVar30 + lVar10;
              lVar20 = lVar27 + lVar17;
              if (lVar18 < 0) {
                lVar18 = lVar18 + 1;
              }
                    /* try { // try from 010adf74 to 011adf7f has its CatchHandler @ 010ae600 */
              if (lVar20 < 0) {
                lVar20 = lVar20 + 1;
              }
                    /* try { // try from 010adf80 to 011adf9f has its CatchHandler @ 010ae5e8 */
              cVar4 = FUN_010aede0(param_1,lVar10,lVar17,lVar18 >> 1,lVar20 >> 1);
              iVar21 = 0xf;
              if (cVar4 != '\0') {
                iVar21 = 0xc;
                    /* try { // try from 010adfa0 to 011adfe7 has its CatchHandler @ 010ad644 */
                lVar30 = lVar10;
                lVar27 = lVar17;
              }
            }
            if (9 < iVar21 - 6U) goto switchD_010adff4_caseD_8;
                    /* try { // try from 010adfe8 to 011adff3 has its CatchHandler @ 010ae61c */
            plVar31 = plVar31 + 2;
            lVar10 = lVar30;
                    /* try { // try from 010adff4 to 011ae01b has its CatchHandler @ 010ad644 */
            switch(iVar21) {
            case 6:
              goto switchD_010adff4_caseD_6;
            case 7:
              goto switchD_010adff4_caseD_7;
            default:
              goto switchD_010adff4_caseD_8;
            case 0xc:
              goto switchD_010adff4_caseD_c;
            case 0xf:
              goto switchD_010adff4_caseD_f;
            }
          }
          if ((*pbVar33 & 3) != 1) {
            if ((plVar38 < plVar7 + 4) || ((pbVar34[2] & 3) != 2)) goto switchD_010adff4_caseD_6;
            uVar14 = (ulong)param_1[6];
            lVar18 = (long)(int)param_1[2];
            lVar20 = (plVar7[2] << (uVar14 & 0x3f)) - lVar18;
            lVar30 = (plVar7[3] << (uVar14 & 0x3f)) - lVar18;
            lVar22 = (plVar7[4] << (uVar14 & 0x3f)) - lVar18;
            lVar17 = (plVar7[5] << (uVar14 & 0x3f)) - lVar18;
            lVar10 = lVar22;
            lVar27 = lVar20;
            if (param_2 == '\0') {
              lVar10 = lVar17;
              lVar17 = lVar22;
              lVar27 = lVar30;
              lVar30 = lVar20;
            }
            if (plVar38 < plVar7 + 6) {
              cVar4 = FUN_010af13c(param_1,lVar30,lVar27,lVar17,lVar10,lVar24,lVar23);
              iVar21 = 0x12;
            }
            else {
              lVar22 = (plVar7[6] << (uVar14 & 0x3f)) - lVar18;
                    /* try { // try from 010ae178 to 011ae183 has its CatchHandler @ 010ae624 */
              lVar18 = (plVar7[7] << (uVar14 & 0x3f)) - lVar18;
              lVar20 = lVar22;
              if (param_2 == '\0') {
                lVar20 = lVar18;
                lVar18 = lVar22;
              }
                    /* try { // try from 010ae184 to 011ae1a3 has its CatchHandler @ 010ae620 */
              cVar4 = FUN_010af13c(param_1,lVar30,lVar27,lVar17,lVar10,lVar18,lVar20);
              iVar21 = 7;
            }
            if (cVar4 != '\0') {
              iVar21 = 0xc;
            }
            if (iVar21 == 7) {
                    /* try { // try from 010ae1a4 to 011ae247 has its CatchHandler @ 010ad644 */
              pbVar33 = pbVar34 + 3;
              plVar7 = plVar7 + 6;
              goto LAB_010ae1a8;
            }
            if (iVar21 == 6) goto switchD_010adff4_caseD_6;
            if (iVar21 == 0xc) goto switchD_010adff4_caseD_c;
            goto switchD_010adff4_caseD_8;
          }
          lVar27 = (plVar7[2] << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
          lVar17 = (plVar7[3] << ((ulong)param_1[6] & 0x3f)) - (long)(int)param_1[2];
          lVar10 = lVar27;
          if (param_2 == '\0') {
            lVar10 = lVar17;
            lVar17 = lVar27;
          }
          cVar4 = FUN_010ae9c4(param_1,lVar17,lVar10);
          plVar7 = plVar31;
          if (cVar4 != '\0') goto switchD_010adff4_caseD_c;
          goto LAB_010ae1a8;
        }
LAB_010ae1b8:
        cVar4 = FUN_010ae9c4(param_1,lVar24,lVar23);
joined_r0x010ae1f4:
        if (cVar4 != '\0') goto switchD_010adff4_caseD_c;
switchD_010adff4_caseD_8:
        lVar10 = *(long *)(param_1 + 0x3c);
        lVar17 = (long)(int)param_1[1];
        uVar16 = *(ulong *)(param_1 + 0x1c);
        sVar36 = *(short *)(lVar10 + lVar37 * 2);
        if (((((uVar16 & lVar17 - 1U) == 0) && (*(long *)(param_1 + 0x1e) <= (long)uVar16)) &&
            ((long)uVar16 <= *(long *)(param_1 + 0x20))) &&
           ((*(long *)(param_1 + 0x28) != 0 &&
            (((*(uint *)(*(long *)(param_1 + 0x24) + 0x18) ^
              *(uint *)(*(long *)(param_1 + 0x28) + 0x18)) >> 3 & 1) == 0)))) {
                    /* try { // try from 010ae248 to 011ae24f has its CatchHandler @ 010ae5e0 */
                    /* try { // try from 010ae250 to 011ae2cf has its CatchHandler @ 010ad644 */
          *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0xe) + -8;
        }
        lVar23 = *(long *)(param_1 + 0x24);
        uVar32 = *(uint *)(lVar23 + 0x18);
        if ((uVar32 >> 3 & 1) == 0) {
          uVar16 = ((uVar16 + lVar17) - 1 & (long)(int)-param_1[1]) - uVar16;
        }
        else {
          uVar16 = uVar16 & (-lVar17 ^ 0xffffffffffffffffU);
        }
        uVar14 = *(ulong *)(param_1 + 0xe);
        lVar17 = uVar14 - *(long *)(lVar23 + 0x10);
        if (lVar17 < 0) {
          uVar35 = 99;
          goto LAB_010ae724;
        }
        uVar35 = param_1[2];
        if (lVar17 != 0) {
          *(long *)(lVar23 + 0x20) = lVar17 >> 3;
          if ((long)(int)uVar35 <= (long)uVar16) {
            *(uint *)(lVar23 + 0x18) = ((uVar32 << 1 ^ 0xffffffff) & 0x10) + 0x10 | uVar32;
          }
          uVar16 = uVar14 + 0x40;
          *(ulong *)(param_1 + 0x24) = uVar14;
                    /* try { // try from 010ae2d0 to 011ae2d7 has its CatchHandler @ 010ae5dc */
          *(ulong *)(param_1 + 0xe) = uVar16;
          *(undefined8 *)(uVar14 + 0x20) = 0;
                    /* try { // try from 010ae2d8 to 011ae36f has its CatchHandler @ 010ad644 */
          *(ulong *)(uVar14 + 0x10) = uVar16;
          *(ulong *)(lVar23 + 0x38) = uVar14;
          *(short *)(param_1 + 0x22) = (short)param_1[0x22] + 1;
          uVar14 = uVar16;
        }
        uVar16 = *(ulong *)(param_1 + 0xc);
        if (uVar16 <= uVar14) goto LAB_010ad828;
        uVar19 = sVar36 + 1;
        *(undefined1 *)((long)param_1 + 0x8b) = 0;
        if (*(long *)(param_1 + 0x28) != 0) {
          *(long *)(lVar23 + 0x38) = *(long *)(param_1 + 0x28);
        }
        lVar37 = lVar37 + 1;
      } while (lVar37 < (short)param_1[0x36]);
      uVar19 = (ushort)param_1[0x22];
      if ((1 < uVar19) &&
         (puVar11 = *(ulong **)(param_1 + 0x26), puVar12 = puVar11, puVar11 != (ulong *)0x0)) {
        do {
          if (uVar19 == 1) {
            uVar28 = puVar12[4];
            puVar25 = (ulong *)0x0;
          }
          else {
            if (uVar19 == 0) goto LAB_010ae364;
            uVar28 = puVar12[4];
            puVar25 = (ulong *)(puVar12[2] + uVar28 * 8);
          }
          uVar26 = puVar12[5];
          iVar21 = (int)uVar26;
          puVar12[1] = (ulong)puVar25;
          if (((byte)puVar12[3] >> 3 & 1) == 0) {
            uVar26 = (uVar26 - uVar28) + 1;
            puVar12[5] = (long)(int)uVar26;
            puVar12[2] = (puVar12[2] + uVar28 * 8) - 8;
          }
          else {
            iVar21 = (int)uVar28 + iVar21 + -1;
                    /* try { // try from 010ae588 to 011ae58f has its CatchHandler @ 010ae5d0 */
          }
                    /* try { // try from 010ae590 to 011ae597 has its CatchHandler @ 010ae5cc */
          lVar17 = *(long *)(param_1 + 10);
          uVar35 = param_1[0x11];
          iVar29 = (int)uVar26;
                    /* try { // try from 010ae598 to 011ae59f has its CatchHandler @ 010ae5c8 */
                    /* try { // try from 010ae5a0 to 011ae5a7 has its CatchHandler @ 010ae5c4 */
          lVar23 = lVar17 + (long)(int)uVar35 * -8;
                    /* try { // try from 010ae5a8 to 011ae5af has its CatchHandler @ 010ae5c0 */
          lVar37 = (ulong)uVar35 << 0x20;
          lVar10 = (long)(int)uVar35;
          plVar7 = (long *)(lVar17 + -8);
          do {
                    /* try { // try from 010ae5b0 to 011ae5b7 has its CatchHandler @ 010ae5bc */
            lVar24 = lVar10 + -1;
            if (lVar10 < 1) goto LAB_010ae5fc;
                    /* try { // try from 010ae5b8 to 011ae6f7 has its CatchHandler @ 010ad644 */
            lVar27 = *plVar7;
                    /* catch() { ... } // from try @ 010ae5b0 with catch @ 010ae5bc */
            lVar37 = lVar37 + -0x100000000;
                    /* catch() { ... } // from try @ 010ae5a8 with catch @ 010ae5c0 */
                    /* catch() { ... } // from try @ 010ae5a0 with catch @ 010ae5c4 */
            lVar10 = lVar24;
            plVar7 = plVar7 + -1;
          } while (iVar29 < lVar27);
                    /* catch() { ... } // from try @ 010ae598 with catch @ 010ae5c8 */
          if (lVar27 < iVar29) {
                    /* catch() { ... } // from try @ 010ae590 with catch @ 010ae5cc */
            lVar37 = lVar37 >> 0x20;
            do {
                    /* catch() { ... } // from try @ 010ae588 with catch @ 010ae5d0 */
                    /* catch() { ... } // from try @ 010ae464 with catch @ 010ae5d4 */
              uVar28 = *(ulong *)(lVar23 + lVar37 * 8);
              iVar29 = (int)uVar28;
                    /* catch() { ... } // from try @ 010ae3dc with catch @ 010ae5d8 */
                    /* catch() { ... } // from try @ 010ae2d0 with catch @ 010ae5dc */
              lVar10 = lVar37 + -1;
                    /* catch() { ... } // from try @ 010ae248 with catch @ 010ae5e0 */
                    /* catch() { ... } // from try @ 010ae504 with catch @ 010ae5e4 */
              *(long *)(lVar23 + lVar37 * 8) = (long)(int)uVar26;
                    /* catch() { ... } // from try @ 010adf80 with catch @ 010ae5e8 */
              bVar1 = 0 < lVar37;
              lVar37 = lVar10;
              uVar26 = uVar28;
            } while (bVar1);
            iVar5 = (int)lVar10;
          }
          else {
LAB_010ae5fc:
            iVar5 = (int)lVar24;
          }
                    /* catch() { ... } // from try @ 010adf74 with catch @ 010ae600 */
          if (iVar5 < 0) {
            uVar16 = uVar16 - 8;
            *(ulong *)(param_1 + 0xc) = uVar16;
            if (uVar16 <= uVar14) goto LAB_010ad828;
                    /* catch() { ... } // from try @ 010ae370 with catch @ 010ae614 */
            uVar32 = ~uVar35;
                    /* catch() { ... } // from try @ 010ae01c with catch @ 010ae618 */
            uVar35 = uVar35 + 1;
                    /* catch() { ... } // from try @ 010adfe8 with catch @ 010ae61c */
                    /* catch() { ... } // from try @ 010ae184 with catch @ 010ae620 */
                    /* catch() { ... } // from try @ 010ae178 with catch @ 010ae624 */
            param_1[0x11] = uVar35;
                    /* catch() { ... } // from try @ 010ae08c with catch @ 010ae628 */
            *(long *)(lVar17 + (long)(int)uVar32 * 8) = (long)iVar29;
          }
          iVar21 = iVar21 + 1;
          lVar23 = lVar17 + (long)(int)uVar35 * -8;
          lVar37 = (ulong)uVar35 << 0x20;
                    /* catch() { ... } // from try @ 010ae080 with catch @ 010ae640 */
          plVar7 = (long *)(lVar17 + -8);
          lVar10 = (long)(int)uVar35;
          do {
            lVar24 = lVar10 + -1;
            if (lVar10 < 1) goto LAB_010ae690;
            lVar27 = *plVar7;
            lVar37 = lVar37 + -0x100000000;
            plVar7 = plVar7 + -1;
            lVar10 = lVar24;
          } while (iVar21 < lVar27);
                    /* catch() { ... } // from try @ 010adc50 with catch @ 010ae65c */
          if (lVar27 < iVar21) {
            lVar37 = lVar37 >> 0x20;
            iVar29 = iVar21;
            do {
              iVar21 = *(int *)(lVar23 + lVar37 * 8);
              lVar10 = lVar37 + -1;
              *(long *)(lVar23 + lVar37 * 8) = (long)iVar29;
              bVar1 = 0 < lVar37;
              lVar37 = lVar10;
              iVar29 = iVar21;
            } while (bVar1);
            iVar29 = (int)lVar10;
          }
          else {
LAB_010ae690:
            iVar29 = (int)lVar24;
          }
          if (iVar29 < 0) {
            uVar16 = uVar16 - 8;
                    /* catch() { ... } // from try @ 010adcf0 with catch @ 010ae69c */
            *(ulong *)(param_1 + 0xc) = uVar16;
            if (uVar16 <= uVar14) goto LAB_010ad828;
            param_1[0x11] = uVar35 + 1;
            *(long *)(lVar17 + (long)(int)~uVar35 * 8) = (long)iVar21;
          }
          uVar19 = uVar19 - 1;
          puVar12 = puVar25;
        } while( true );
      }
    }
    puVar11 = (ulong *)0x0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
LAB_010ae364:
    if (uVar14 < uVar16) {
      if (puVar11 != (ulong *)0x0) {
                    /* try { // try from 010ae370 to 011ae37b has its CatchHandler @ 010ae614 */
        local_78 = (ulong *)0x0;
        local_70 = (ulong *)0x0;
        local_80 = (ulong *)0x0;
                    /* try { // try from 010ae37c to 011ae3db has its CatchHandler @ 010ad644 */
        uVar14 = *(long *)(param_1 + 0x1e) >> ((ulong)*param_1 & 0x3f);
        uVar16 = *(long *)(param_1 + 0x20) >> ((ulong)*param_1 & 0x3f);
        local_68[0] = (short)uVar14;
        local_64[0] = (ushort)uVar16;
        do {
          puVar12 = (ulong *)puVar11[1];
          uVar19 = (ushort)(int)puVar11[5];
          sVar36 = uVar19 + (short)(int)puVar11[4] + -1;
          if ((int)(short)uVar19 < (int)(short)uVar16) {
            uVar16 = (ulong)(uint)(int)(short)uVar19;
            local_64[0] = uVar19;
          }
          if ((int)(short)uVar14 < (int)sVar36) {
            uVar14 = (ulong)(uint)(int)sVar36;
                    /* try { // try from 010ae3dc to 011ae3e3 has its CatchHandler @ 010ae5d8 */
            local_68[0] = sVar36;
          }
          *puVar11 = 0;
                    /* try { // try from 010ae3e4 to 011ae463 has its CatchHandler @ 010ad644 */
          puVar25 = local_70;
          if (local_70 == (ulong *)0x0) {
            ppuVar8 = &local_70;
          }
          else {
            ppuVar8 = &local_70;
            do {
              if (0 < (long)*puVar25) break;
              ppuVar8 = (ulong **)(puVar25 + 1);
              puVar25 = *ppuVar8;
            } while (puVar25 != (ulong *)0x0);
          }
          puVar11[1] = (ulong)puVar25;
          *ppuVar8 = puVar11;
          puVar11 = puVar12;
        } while (puVar12 != (ulong *)0x0);
        if (param_1[0x11] == 0) goto LAB_010ae758;
        (**(code **)(param_1 + 0x46))(param_1,local_64,local_68);
        uVar35 = (uint)local_64[0];
        for (puVar11 = local_70; puVar11 != (ulong *)0x0; puVar11 = (ulong *)puVar11[1]) {
          *(uint *)(puVar11 + 6) = (int)puVar11[5] - uVar35 & 0xffff;
        }
        uVar32 = param_1[0x11];
                    /* try { // try from 010ae464 to 011ae46b has its CatchHandler @ 010ae5d4 */
        if ((int)uVar32 < 1) {
          iVar21 = 0;
        }
        else {
                    /* try { // try from 010ae46c to 011ae503 has its CatchHandler @ 010ad644 */
          iVar21 = 0;
          if (*(long *)(*(long *)(param_1 + 10) + (long)(int)-uVar32 * 8) !=
              (long)(short)local_64[0]) goto LAB_010ad838;
          iVar21 = 0;
          param_1[0x11] = uVar32 - 1;
          uVar32 = uVar32 - 1;
        }
joined_r0x010ae498:
        if (0 < (int)uVar32) {
          if (local_70 != (ulong *)0x0) {
            puVar11 = local_70;
            do {
              while( true ) {
                puVar12 = (ulong *)puVar11[1];
                iVar29 = (int)puVar11[6] - (int)(short)iVar21;
                *(int *)(puVar11 + 6) = iVar29;
                if (iVar29 == 0) break;
                puVar11 = puVar12;
                if (puVar12 == (ulong *)0x0) goto LAB_010ad918;
              }
              ppuVar8 = &local_70;
              do {
                ppuVar15 = ppuVar8;
                puVar25 = *ppuVar15;
                if (puVar25 == (ulong *)0x0) goto LAB_010ad898;
                ppuVar8 = (ulong **)(puVar25 + 1);
              } while (puVar25 != puVar11);
              *ppuVar15 = (ulong *)puVar25[1];
LAB_010ad898:
              if (((byte)puVar11[3] >> 3 & 1) == 0) {
                puVar25 = local_80;
                if (local_80 == (ulong *)0x0) {
                  ppuVar8 = &local_80;
                }
                else {
                  ppuVar8 = &local_80;
                  do {
                    if ((long)*puVar11 < (long)*puVar25) break;
                    ppuVar8 = (ulong **)(puVar25 + 1);
                    puVar25 = *ppuVar8;
                  } while (puVar25 != (ulong *)0x0);
                }
              }
              else {
                puVar25 = local_78;
                if (local_78 == (ulong *)0x0) {
                  ppuVar8 = &local_78;
                }
                else {
                  ppuVar8 = &local_78;
                  do {
                    if ((long)*puVar11 < (long)*puVar25) break;
                    ppuVar8 = (ulong **)(puVar25 + 1);
                    puVar25 = *ppuVar8;
                  } while (puVar25 != (ulong *)0x0);
                }
              }
              puVar11[1] = (ulong)puVar25;
              *ppuVar8 = puVar11;
              puVar11 = puVar12;
            } while (puVar12 != (ulong *)0x0);
          }
LAB_010ad918:
          puVar11 = local_78;
          if (local_78 != (ulong *)0x0) {
            do {
              uVar14 = *(ulong *)puVar11[2];
              puVar11[4] = puVar11[4] - 1;
              *puVar11 = uVar14;
              puVar11[2] = (ulong)((ulong *)puVar11[2] + (int)(((uint)puVar11[3] >> 2 & 2) - 1));
              puVar12 = puVar11 + 1;
              puVar11 = (ulong *)*puVar12;
            } while ((ulong *)*puVar12 != (ulong *)0x0);
            ppuVar8 = (ulong **)(local_78 + 1);
            puVar11 = *ppuVar8;
            if (puVar11 != (ulong *)0x0) {
              puVar12 = local_78;
              ppuVar15 = &local_78;
              do {
                ppuVar9 = ppuVar8;
                if ((long)*puVar11 < (long)*puVar12) {
                  *ppuVar15 = puVar11;
                  *ppuVar8 = (ulong *)puVar11[1];
                    /* try { // try from 010ad988 to 011ad993 has its CatchHandler @ 010ae6dc */
                  puVar11[1] = (ulong)puVar12;
                  ppuVar9 = &local_78;
                  puVar11 = local_78;
                }
                    /* try { // try from 010ad994 to 011adbc7 has its CatchHandler @ 010ad644 */
                puVar12 = puVar11;
                ppuVar8 = (ulong **)(puVar12 + 1);
                puVar11 = *ppuVar8;
                ppuVar15 = ppuVar9;
              } while (puVar11 != (ulong *)0x0);
            }
          }
          puVar11 = local_80;
          puVar12 = local_80;
          if (local_80 != (ulong *)0x0) {
            do {
              uVar14 = *(ulong *)puVar11[2];
              puVar11[4] = puVar11[4] - 1;
              *puVar11 = uVar14;
              puVar11[2] = (ulong)((ulong *)puVar11[2] + (int)(((uint)puVar11[3] >> 2 & 2) - 1));
              puVar25 = puVar11 + 1;
              puVar11 = (ulong *)*puVar25;
            } while ((ulong *)*puVar25 != (ulong *)0x0);
            ppuVar8 = (ulong **)(local_80 + 1);
            puVar11 = *ppuVar8;
            if (puVar11 != (ulong *)0x0) {
              ppuVar15 = &local_80;
              puVar25 = local_80;
              do {
                ppuVar9 = ppuVar8;
                puVar13 = puVar11;
                if ((long)*puVar11 < (long)*puVar25) {
                  *ppuVar15 = puVar11;
                  *ppuVar8 = (ulong *)puVar11[1];
                  puVar11[1] = (ulong)puVar25;
                  ppuVar9 = &local_80;
                  puVar13 = local_80;
                  puVar12 = local_80;
                }
                ppuVar8 = (ulong **)(puVar13 + 1);
                puVar11 = *ppuVar8;
                ppuVar15 = ppuVar9;
                puVar25 = puVar13;
              } while (puVar11 != (ulong *)0x0);
            }
          }
          param_1[0x11] = uVar32 - 1;
          sVar36 = *(short *)(*(long *)(param_1 + 10) +
                             (-(ulong)(-uVar32 >> 0x1f) & 0xfffffff800000000 | (ulong)-uVar32 << 3))
          ;
          iVar21 = (int)sVar36;
          uVar32 = uVar35;
          if ((short)uVar35 < sVar36) {
LAB_010adba0:
            puVar11 = local_78;
            if (local_78 != (ulong *)0x0) {
              sVar36 = 0;
              puVar25 = local_78;
              do {
                uVar28 = *puVar25;
                uVar16 = *puVar12;
                lVar37 = (long)(int)param_1[1];
                    /* try { // try from 010adbc8 to 011adbcf has its CatchHandler @ 010ae68c */
                uVar14 = uVar28;
                if ((long)uVar28 <= (long)uVar16) {
                  uVar14 = uVar16;
                  uVar16 = uVar28;
                }
                    /* try { // try from 010adbd0 to 011adc4f has its CatchHandler @ 010ad644 */
                if (lVar37 < (long)(uVar14 - uVar16)) {
LAB_010adc14:
                  (**(code **)(param_1 + 0x48))(param_1,uVar32,uVar16,uVar14,puVar25,puVar12);
LAB_010adc2c:
                  puVar25 = (ulong *)puVar25[1];
                }
                else {
                  uVar28 = uVar16 & -lVar37;
                  if (((uVar28 == uVar16) ||
                      (uVar26 = (lVar37 + uVar14) - 1 & -lVar37, uVar26 == uVar14)) ||
                     (((long)uVar28 <= (long)uVar26 && (uVar26 != uVar28 + lVar37))))
                  goto LAB_010adc14;
                  if ((puVar25[3] & 7) == 2) goto LAB_010adc2c;
                  *puVar25 = uVar16;
                  *puVar12 = uVar14;
                    /* try { // try from 010adc50 to 011adc57 has its CatchHandler @ 010ae65c */
                  *(undefined4 *)(puVar25 + 6) = 1;
                  sVar36 = sVar36 + 1;
                    /* try { // try from 010adc58 to 011adcef has its CatchHandler @ 010ad644 */
                  puVar25 = (ulong *)puVar25[1];
                }
                if (puVar25 == (ulong *)0x0) goto LAB_010adc60;
                puVar12 = (ulong *)puVar12[1];
              } while( true );
            }
            goto LAB_010adcb0;
          }
          iVar21 = iVar21 - (uVar35 & 0xffff);
          puVar11 = local_78;
          goto joined_r0x010ada70;
        }
                    /* catch() { ... } // from try @ 010ad988 with catch @ 010ae6dc */
        if ((short)uVar35 <= local_68[0]) {
          do {
            (**(code **)(param_1 + 0x4c))(param_1);
            uVar35 = (uint)(short)((short)uVar35 + 1);
                    /* try { // try from 010ae6f8 to 011ae773 has its CatchHandler @ 010ae6f8
                       catch() { ... } // from try @ 010ae6f8 with catch @ 010ae6f8
                       catch() { ... } // from try @ 010ae7a4 with catch @ 010ae6f8 */
          } while ((int)uVar35 <= (int)local_68[0]);
        }
      }
      iVar21 = -1;
      goto LAB_010ae704;
    }
switchD_010adff4_caseD_c:
    if (param_1[0x10] == 0x62) goto LAB_010ae4ac;
LAB_010ae728:
    uVar6 = 1;
  }
  return uVar6;
LAB_010ae1e0:
  cVar4 = FUN_010aede0(param_1,lVar10,lVar17,lVar24,lVar23);
  goto joined_r0x010ae1f4;
switchD_010adff4_caseD_7:
LAB_010ae1a8:
  pbVar34 = pbVar33;
  if (plVar38 <= plVar7) goto LAB_010ae1b8;
  goto LAB_010ade9c;
LAB_010ad828:
  param_1[0x10] = 0x62;
LAB_010ae4ac:
  uVar35 = param_1[0x1e4];
  param_1[0x10] = 0;
  sVar36 = *(short *)((long)param_1 + (long)(int)uVar35 * 4 + 0x752);
  iVar21 = (int)sVar36 + (int)(short)param_1[(long)(int)uVar35 + 0x1d4];
  if (iVar21 < 0) {
    iVar21 = iVar21 + 1;
  }
  if ((6 < (int)uVar35) || (iVar21 >> 1 < (int)(short)param_1[(long)(int)uVar35 + 0x1d4])) {
    param_1[0x1e4] = 0;
LAB_010ae758:
    param_1[0x10] = 0x14;
    return 0x14;
  }
  sVar3 = (short)(iVar21 >> 1);
  *(short *)((long)param_1 +
            (-(ulong)(uVar35 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar35 + 1) << 2) + 0x750)
       = sVar3;
  *(short *)((long)param_1 + (long)(int)param_1[0x1e4] * 4 + 0x756) = sVar36;
                    /* try { // try from 010ae504 to 011ae50f has its CatchHandler @ 010ae5e4 */
  *(short *)((long)param_1 + (long)(int)param_1[0x1e4] * 4 + 0x752) = sVar3 + -1;
  iVar21 = 1;
LAB_010ae704:
  uVar35 = param_1[0x1e4] + iVar21;
  param_1[0x1e4] = uVar35;
  goto joined_r0x010ad81c;
LAB_010adc60:
  if (0 < sVar36) {
    ppuVar8 = &local_80;
    puVar12 = puVar11;
    do {
      puVar25 = *ppuVar8;
      if ((int)puVar12[6] != 0) {
        *(undefined4 *)(puVar12 + 6) = 0;
        (**(code **)(param_1 + 0x4a))(param_1,uVar32,*puVar12,*puVar25,puVar12,puVar25);
      }
      puVar12 = (ulong *)puVar12[1];
      ppuVar8 = (ulong **)(puVar25 + 1);
    } while (puVar12 != (ulong *)0x0);
  }
LAB_010adcb0:
  (**(code **)(param_1 + 0x4c))(param_1);
  uVar32 = uVar32 + 1;
  if ((short)uVar32 < iVar21) {
    puVar12 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      do {
        uVar14 = *(ulong *)puVar12[2];
        puVar12[4] = puVar12[4] - 1;
        *puVar12 = uVar14;
        puVar12[2] = (ulong)((ulong *)puVar12[2] + (int)(((uint)puVar12[3] >> 2 & 2) - 1));
        puVar25 = puVar12 + 1;
        puVar12 = (ulong *)*puVar25;
      } while ((ulong *)*puVar25 != (ulong *)0x0);
      ppuVar8 = (ulong **)(puVar11 + 1);
      puVar12 = *ppuVar8;
      if (puVar12 != (ulong *)0x0) {
        ppuVar15 = &local_78;
        do {
          ppuVar9 = ppuVar8;
          puVar25 = puVar12;
          if ((long)*puVar12 < (long)*puVar11) {
            *ppuVar15 = puVar12;
            *ppuVar8 = (ulong *)puVar12[1];
            puVar12[1] = (ulong)puVar11;
            ppuVar9 = &local_78;
            puVar25 = local_78;
          }
          ppuVar8 = (ulong **)(puVar25 + 1);
          puVar12 = *ppuVar8;
          ppuVar15 = ppuVar9;
          puVar11 = puVar25;
        } while (puVar12 != (ulong *)0x0);
      }
    }
    puVar11 = local_80;
    puVar12 = (ulong *)0x0;
    if (local_80 != (ulong *)0x0) {
      do {
        uVar14 = *(ulong *)puVar11[2];
        puVar11[4] = puVar11[4] - 1;
        *puVar11 = uVar14;
        puVar11[2] = (ulong)((ulong *)puVar11[2] + (int)(((uint)puVar11[3] >> 2 & 2) - 1));
        puVar12 = puVar11 + 1;
        puVar11 = (ulong *)*puVar12;
      } while ((ulong *)*puVar12 != (ulong *)0x0);
      ppuVar8 = (ulong **)(local_80 + 1);
      puVar11 = *ppuVar8;
      puVar12 = local_80;
      if (puVar11 != (ulong *)0x0) {
        ppuVar15 = &local_80;
        puVar25 = local_80;
        do {
          ppuVar9 = ppuVar8;
          puVar13 = puVar11;
          if ((long)*puVar11 < (long)*puVar25) {
            *ppuVar15 = puVar11;
            *ppuVar8 = (ulong *)puVar11[1];
            puVar11[1] = (ulong)puVar25;
            ppuVar9 = &local_80;
            puVar13 = local_80;
            puVar12 = local_80;
          }
          ppuVar8 = (ulong **)(puVar13 + 1);
          puVar11 = *ppuVar8;
          ppuVar15 = ppuVar9;
          puVar25 = puVar13;
        } while (puVar11 != (ulong *)0x0);
      }
    }
    goto LAB_010adba0;
  }
  iVar21 = iVar21 - (uVar35 & 0xffff);
  uVar35 = uVar32;
joined_r0x010ada70:
  puVar12 = puVar11;
  puVar11 = local_80;
  if (puVar12 != (ulong *)0x0) {
    puVar11 = (ulong *)puVar12[1];
    if (puVar12[4] == 0) {
      ppuVar8 = &local_78;
      do {
        ppuVar15 = ppuVar8;
        puVar25 = *ppuVar15;
        if (puVar25 == (ulong *)0x0) goto joined_r0x010ada70;
                    /* try { // try from 010adcf0 to 011adcfb has its CatchHandler @ 010ae69c */
        ppuVar8 = (ulong **)(puVar25 + 1);
      } while (puVar25 != puVar12);
      *ppuVar15 = (ulong *)puVar25[1];
    }
    goto joined_r0x010ada70;
  }
joined_r0x010add0c:
  puVar12 = puVar11;
  if (puVar12 != (ulong *)0x0) {
    puVar11 = (ulong *)puVar12[1];
    if (puVar12[4] == 0) {
      ppuVar8 = &local_80;
      do {
        ppuVar15 = ppuVar8;
        puVar25 = *ppuVar15;
        if (puVar25 == (ulong *)0x0) goto joined_r0x010add0c;
        ppuVar8 = (ulong **)(puVar25 + 1);
      } while (puVar25 != puVar12);
      *ppuVar15 = (ulong *)puVar25[1];
    }
    goto joined_r0x010add0c;
  }
LAB_010ad838:
  uVar32 = param_1[0x11];
  goto joined_r0x010ae498;
}

