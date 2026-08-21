
void png_write_find_filter(long param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint3 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  long lVar27;
  byte *pbVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  undefined1 (*pauVar32) [16];
  undefined8 *puVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 uVar38;
  uint uVar39;
  byte *pbVar40;
  char *pcVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  byte *pbVar45;
  uint uVar46;
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  byte *pbVar50;
  char *pcVar51;
  int iVar52;
  ulong uVar53;
  long lVar54;
  ulong uVar55;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  ushort uVar56;
  byte bVar61;
  ushort uVar60;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  ushort uVar63;
  byte bVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  int iVar95;
  ushort uVar99;
  ushort uVar101;
  int iVar100;
  int iVar102;
  undefined1 auVar96 [16];
  int iVar103;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  uint uVar104;
  int iVar105;
  int iVar107;
  int iVar108;
  int iVar109;
  undefined1 auVar106 [16];
  ushort uVar112;
  int iVar110;
  ushort uVar113;
  undefined8 uVar111;
  ushort uVar115;
  int iVar114;
  int iVar116;
  undefined8 uVar117;
  int iVar119;
  undefined8 uVar118;
  int iVar120;
  int iVar121;
  uint uVar122;
  int iVar123;
  int iVar124;
  uint uVar125;
  int iVar126;
  uint uVar127;
  int iVar128;
  uint uVar129;
  int iVar130;
  int iVar131;
  int iVar132;
  int iVar133;
  int iVar134;
  int iVar135;
  int iVar136;
  int iVar137;
  int iVar138;
  int iVar139;
  int iVar140;
  int iVar141;
  int iVar142;
  int iVar143;
  int iVar144;
  int iVar145;
  int iVar146;
  int iVar147;
  int iVar148;
  int iVar149;
  int iVar150;
  int iVar151;
  int iVar152;
  int iVar153;
  int iVar154;
  int iVar155;
  
  pbVar40 = *(byte **)(param_1 + 0x260);
  bVar57 = *(byte *)(param_1 + 0x2ae);
  uVar36 = *(ulong *)(param_2 + 8);
  bVar2 = *(byte *)(param_1 + 0x3d1);
  uVar55 = (ulong)bVar2;
  pcVar41 = *(char **)(param_1 + 600);
  uVar46 = *(byte *)(param_2 + 0x13) + 7;
  uVar30 = uVar46 >> 3;
  uVar37 = (ulong)uVar30;
  uVar104 = 0x7fffffff;
  if ((bVar57 == 8) || ((bVar57 >> 3 & 1) == 0)) {
LAB_010dd268:
    if (bVar57 != 0x10) goto LAB_010dd528;
LAB_010dd270:
    lVar48 = *(long *)(param_1 + 0x268);
    pbVar50 = pbVar40 + 1;
    pbVar44 = (byte *)(lVar48 + 1);
    if (uVar30 == 0) {
      uVar47 = 0;
      pbVar26 = pbVar50;
      uVar49 = uVar36;
      if (uVar36 != 0) goto LAB_010dd2e4;
    }
    else {
      pbVar26 = pbVar50;
      if (uVar46 < 0x100) {
LAB_010dd2b8:
        lVar31 = 0;
LAB_010dd2c0:
        lVar31 = uVar37 - lVar31;
        do {
          lVar31 = lVar31 + -1;
          *pbVar44 = *pbVar26;
          pbVar26 = pbVar26 + 1;
          pbVar44 = pbVar44 + 1;
        } while (lVar31 != 0);
      }
      else {
        uVar39 = uVar46 >> 3 & 0x1f;
        lVar31 = uVar37 - uVar39;
        if (lVar31 == 0) goto LAB_010dd2c0;
        if ((pbVar44 < pbVar40 + uVar37 + 1) && (pbVar50 < (byte *)(lVar48 + uVar37 + 1)))
        goto LAB_010dd2b8;
        pbVar44 = pbVar44 + lVar31;
        pbVar26 = pbVar40 + 0x11;
        puVar33 = (undefined8 *)(lVar48 + 0x11);
        lVar54 = lVar31;
        do {
          pbVar28 = pbVar26 + -8;
          uVar38 = *(undefined8 *)(pbVar26 + -0x10);
          uVar7 = *(undefined8 *)(pbVar26 + 8);
          uVar118 = *(undefined8 *)pbVar26;
          pbVar26 = pbVar26 + 0x20;
          lVar54 = lVar54 + -0x20;
          puVar33[-1] = *(undefined8 *)pbVar28;
          puVar33[-2] = uVar38;
          puVar33[1] = uVar7;
          *puVar33 = uVar118;
          puVar33 = puVar33 + 4;
        } while (lVar54 != 0);
        pbVar26 = pbVar50 + lVar31;
        if (uVar39 != 0) goto LAB_010dd2c0;
      }
      pbVar44 = (byte *)(lVar48 + uVar37 + 1);
      pbVar26 = pbVar40 + uVar37 + 1;
      uVar47 = uVar37;
      uVar49 = uVar36 - uVar37;
      if (uVar37 <= uVar36 && uVar36 - uVar37 != 0) {
LAB_010dd2e4:
        if ((0x1f < uVar49) && (uVar34 = uVar49 & 0xffffffffffffffe0, uVar34 != 0)) {
                    /* try { // try from 010dd328 to 011dd4a3 has its CatchHandler @ 010dd328
                       catch() { ... } // from try @ 010dd328 with catch @ 010dd328
                       catch() { ... } // from try @ 010dd4ac with catch @ 010dd328 */
          if ((pbVar40 + ((uVar36 + 1) - uVar47) <= pbVar44 || pbVar44 + uVar49 <= pbVar50) &&
             (pbVar26 + uVar49 <= pbVar44 || pbVar44 + uVar49 <= pbVar26)) {
            pbVar50 = pbVar50 + uVar34;
            uVar47 = uVar47 + uVar34;
            pbVar28 = pbVar44 + 0x10;
            pbVar24 = pbVar26 + 0x10;
            pauVar32 = (undefined1 (*) [16])(pbVar40 + 0x11);
            uVar53 = uVar34;
            do {
              uVar118 = *(undefined8 *)(pbVar24 + -8);
              uVar38 = *(undefined8 *)(pbVar24 + -0x10);
              uVar8 = *(undefined8 *)(pbVar24 + 8);
              uVar7 = *(undefined8 *)pbVar24;
              uVar11 = *(undefined8 *)(pauVar32[-1] + 8);
              uVar10 = *(undefined8 *)pauVar32[-1];
              auVar4 = *pauVar32;
              uVar53 = uVar53 - 0x20;
              pbVar24 = pbVar24 + 0x20;
              pauVar32 = pauVar32 + 2;
              *(ulong *)(pbVar28 + -8) =
                   CONCAT17((char)((ulong)uVar118 >> 0x38) - (char)((ulong)uVar11 >> 0x38),
                            CONCAT16((char)((ulong)uVar118 >> 0x30) - (char)((ulong)uVar11 >> 0x30),
                                     CONCAT15((char)((ulong)uVar118 >> 0x28) -
                                              (char)((ulong)uVar11 >> 0x28),
                                              CONCAT14((char)((ulong)uVar118 >> 0x20) -
                                                       (char)((ulong)uVar11 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar118 >> 0x18) -
                                                                (char)((ulong)uVar11 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar118 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar11 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar118 >> 8) - (char)((ulong)uVar11 >> 8),
                                                  (char)uVar118 - (char)uVar11)))))));
              *(ulong *)(pbVar28 + -0x10) =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                            CONCAT16((char)((ulong)uVar38 >> 0x30) - (char)((ulong)uVar10 >> 0x30),
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) -
                                              (char)((ulong)uVar10 >> 0x28),
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) -
                                                       (char)((ulong)uVar10 >> 0x20),
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) -
                                                                (char)((ulong)uVar10 >> 0x18),
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) -
                                                                         (char)((ulong)uVar10 >>
                                                                               0x10),
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) - (char)((ulong)uVar10 >> 8),
                                                  (char)uVar38 - (char)uVar10)))))));
              *(ulong *)(pbVar28 + 8) =
                   CONCAT17((char)((ulong)uVar8 >> 0x38) - auVar4[0xf],
                            CONCAT16((char)((ulong)uVar8 >> 0x30) - auVar4[0xe],
                                     CONCAT15((char)((ulong)uVar8 >> 0x28) - auVar4[0xd],
                                              CONCAT14((char)((ulong)uVar8 >> 0x20) - auVar4[0xc],
                                                       CONCAT13((char)((ulong)uVar8 >> 0x18) -
                                                                auVar4[0xb],
                                                                CONCAT12((char)((ulong)uVar8 >> 0x10
                                                                               ) - auVar4[10],
                                                                         CONCAT11((char)((ulong)
                                                  uVar8 >> 8) - auVar4[9],(char)uVar8 - auVar4[8])))
                                                  ))));
              *(ulong *)pbVar28 =
                   CONCAT17((char)((ulong)uVar7 >> 0x38) - auVar4[7],
                            CONCAT16((char)((ulong)uVar7 >> 0x30) - auVar4[6],
                                     CONCAT15((char)((ulong)uVar7 >> 0x28) - auVar4[5],
                                              CONCAT14((char)((ulong)uVar7 >> 0x20) - auVar4[4],
                                                       CONCAT13((char)((ulong)uVar7 >> 0x18) -
                                                                auVar4[3],
                                                                CONCAT12((char)((ulong)uVar7 >> 0x10
                                                                               ) - auVar4[2],
                                                                         CONCAT11((char)((ulong)
                                                  uVar7 >> 8) - auVar4[1],(char)uVar7 - auVar4[0])))
                                                  ))));
              pbVar28 = pbVar28 + 0x20;
            } while (uVar53 != 0);
            pbVar26 = pbVar26 + uVar34;
            pbVar44 = pbVar44 + uVar34;
            if (uVar49 == uVar34) goto LAB_010dd3c4;
          }
        }
        lVar48 = uVar36 - uVar47;
        do {
          lVar48 = lVar48 + -1;
          *pbVar44 = *pbVar26 - *pbVar50;
          pbVar26 = pbVar26 + 1;
          pbVar44 = pbVar44 + 1;
          pbVar50 = pbVar50 + 1;
        } while (lVar48 != 0);
      }
    }
LAB_010dd3c4:
    pbVar50 = *(byte **)(param_1 + 0x268);
joined_r0x010dd534:
    if (bVar57 != 0x20) goto LAB_010dd3d0;
LAB_010dd538:
    pbVar50 = *(byte **)(param_1 + 0x270);
    if (uVar36 != 0) {
      pcVar51 = pcVar41;
      pbVar44 = pbVar40;
      if ((uVar36 < 0x20) || (uVar47 = uVar36 & 0xffffffffffffffe0, uVar47 == 0)) {
LAB_010dd674:
        uVar49 = 0;
LAB_010dd678:
        lVar48 = uVar36 - uVar49;
        do {
          pcVar51 = pcVar51 + 1;
          pbVar44 = pbVar44 + 1;
          pbVar50 = pbVar50 + 1;
          lVar48 = lVar48 + -1;
          *pbVar50 = *pbVar44 - *pcVar51;
        } while (lVar48 != 0);
      }
      else {
        lVar48 = uVar36 + 1;
                    /* catch() { ... } // from try @ 010dd4a4 with catch @ 010dd578 */
        if (pbVar50 + 1 < pbVar40 + lVar48 && pbVar40 + 1 < pbVar50 + lVar48) goto LAB_010dd674;
        uVar49 = 0;
        if (pbVar50 + 1 < pcVar41 + lVar48 && pcVar41 + 1 < pbVar50 + lVar48) goto LAB_010dd678;
        pbVar44 = pbVar50 + 0x11;
        pauVar32 = (undefined1 (*) [16])(pcVar41 + 0x11);
        pbVar26 = pbVar40 + 0x11;
        uVar49 = uVar47;
        do {
          uVar118 = *(undefined8 *)(pbVar26 + -8);
          uVar38 = *(undefined8 *)(pbVar26 + -0x10);
          uVar8 = *(undefined8 *)(pbVar26 + 8);
          uVar7 = *(undefined8 *)pbVar26;
          uVar11 = *(undefined8 *)(pauVar32[-1] + 8);
          uVar10 = *(undefined8 *)pauVar32[-1];
          auVar4 = *pauVar32;
          uVar49 = uVar49 - 0x20;
          pauVar32 = pauVar32 + 2;
          pbVar26 = pbVar26 + 0x20;
          *(ulong *)(pbVar44 + -8) =
               CONCAT17((char)((ulong)uVar118 >> 0x38) - (char)((ulong)uVar11 >> 0x38),
                        CONCAT16((char)((ulong)uVar118 >> 0x30) - (char)((ulong)uVar11 >> 0x30),
                                 CONCAT15((char)((ulong)uVar118 >> 0x28) -
                                          (char)((ulong)uVar11 >> 0x28),
                                          CONCAT14((char)((ulong)uVar118 >> 0x20) -
                                                   (char)((ulong)uVar11 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar118 >> 0x18) -
                                                            (char)((ulong)uVar11 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar118 >> 0x10)
                                                                     - (char)((ulong)uVar11 >> 0x10)
                                                                     ,CONCAT11((char)((ulong)uVar118
                                                                                     >> 8) -
                                                                               (char)((ulong)uVar11
                                                                                     >> 8),
                                                                               (char)uVar118 -
                                                                               (char)uVar11)))))));
          *(ulong *)(pbVar44 + -0x10) =
               CONCAT17((char)((ulong)uVar38 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                        CONCAT16((char)((ulong)uVar38 >> 0x30) - (char)((ulong)uVar10 >> 0x30),
                                 CONCAT15((char)((ulong)uVar38 >> 0x28) -
                                          (char)((ulong)uVar10 >> 0x28),
                                          CONCAT14((char)((ulong)uVar38 >> 0x20) -
                                                   (char)((ulong)uVar10 >> 0x20),
                                                   CONCAT13((char)((ulong)uVar38 >> 0x18) -
                                                            (char)((ulong)uVar10 >> 0x18),
                                                            CONCAT12((char)((ulong)uVar38 >> 0x10) -
                                                                     (char)((ulong)uVar10 >> 0x10),
                                                                     CONCAT11((char)((ulong)uVar38
                                                                                    >> 8) -
                                                                              (char)((ulong)uVar10
                                                                                    >> 8),
                                                                              (char)uVar38 -
                                                                              (char)uVar10)))))));
          *(ulong *)(pbVar44 + 8) =
               CONCAT17((char)((ulong)uVar8 >> 0x38) - auVar4[0xf],
                        CONCAT16((char)((ulong)uVar8 >> 0x30) - auVar4[0xe],
                                 CONCAT15((char)((ulong)uVar8 >> 0x28) - auVar4[0xd],
                                          CONCAT14((char)((ulong)uVar8 >> 0x20) - auVar4[0xc],
                                                   CONCAT13((char)((ulong)uVar8 >> 0x18) -
                                                            auVar4[0xb],
                                                            CONCAT12((char)((ulong)uVar8 >> 0x10) -
                                                                     auVar4[10],
                                                                     CONCAT11((char)((ulong)uVar8 >>
                                                                                    8) - auVar4[9],
                                                                              (char)uVar8 -
                                                                              auVar4[8])))))));
          *(ulong *)pbVar44 =
               CONCAT17((char)((ulong)uVar7 >> 0x38) - auVar4[7],
                        CONCAT16((char)((ulong)uVar7 >> 0x30) - auVar4[6],
                                 CONCAT15((char)((ulong)uVar7 >> 0x28) - auVar4[5],
                                          CONCAT14((char)((ulong)uVar7 >> 0x20) - auVar4[4],
                                                   CONCAT13((char)((ulong)uVar7 >> 0x18) - auVar4[3]
                                                            ,CONCAT12((char)((ulong)uVar7 >> 0x10) -
                                                                      auVar4[2],
                                                                      CONCAT11((char)((ulong)uVar7
                                                                                     >> 8) -
                                                                               auVar4[1],
                                                                               (char)uVar7 -
                                                                               auVar4[0])))))));
          pbVar44 = pbVar44 + 0x20;
        } while (uVar49 != 0);
        pcVar51 = pcVar41 + uVar47;
        pbVar44 = pbVar40 + uVar47;
        uVar49 = uVar47;
        pbVar50 = pbVar50 + uVar47;
        if (uVar36 != uVar47) goto LAB_010dd678;
      }
      pbVar50 = *(byte **)(param_1 + 0x270);
      goto joined_r0x010dd508;
    }
LAB_010dd9e4:
    if ((bVar57 >> 6 & 1) != 0) {
      uVar39 = uVar104;
      if (*(char *)(param_1 + 0x3d0) == '\x02') {
        uVar39 = uVar104 & 0xffff;
        uVar29 = uVar104 >> 10 & 0x3fffc0;
        if (bVar2 != 0) {
          uVar47 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\x03') {
              uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 1000) + uVar47 * 2);
              uVar39 = uVar39 * uVar23 >> 8;
              uVar29 = uVar29 * uVar23 >> 8;
            }
            uVar47 = uVar47 + 1;
          } while (uVar55 != uVar47);
        }
        uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f8) + 6);
        uVar29 = uVar29 * uVar23;
        if (uVar29 < 0x1fffe08) {
          uVar39 = (uVar29 * 0x80 & 0xfffffc00) + (uVar39 * uVar23 >> 3);
        }
        else {
          uVar39 = 0x7fffffff;
        }
      }
      lVar48 = *(long *)(param_1 + 0x278);
      pbVar44 = pbVar40 + 1;
      pbVar26 = (byte *)(pcVar41 + 1);
      uVar29 = 0;
      pbVar28 = (byte *)(lVar48 + 1);
      pbVar24 = pbVar44;
      if (uVar30 == 0) {
        uVar47 = 0;
        if (uVar36 != 0) goto LAB_010ddaf4;
      }
      else {
        lVar31 = uVar37 + 1;
        uVar47 = uVar37;
        do {
          uVar47 = uVar47 - 1;
          bVar58 = *pbVar44 - (*pbVar26 >> 1);
          *pbVar28 = bVar58;
          uVar23 = (uint)bVar58;
          if (0x7f < uVar23) {
            uVar23 = 0x100 - uVar23;
          }
          uVar29 = uVar23 + uVar29;
          pbVar26 = pbVar26 + 1;
          pbVar28 = pbVar28 + 1;
          pbVar44 = pbVar44 + 1;
        } while (uVar47 != 0);
        pbVar26 = (byte *)(pcVar41 + lVar31);
        pbVar28 = (byte *)(lVar48 + lVar31);
        pbVar44 = pbVar40 + lVar31;
                    /* try { // try from 010ddad8 to 011ddb03 has its CatchHandler @ 010ddad8
                       catch() { ... } // from try @ 010ddad8 with catch @ 010ddad8
                       catch() { ... } // from try @ 010ddb1c with catch @ 010ddad8 */
        for (uVar47 = uVar37; uVar47 < uVar36; uVar47 = uVar47 + 1) {
LAB_010ddaf4:
                    /* try { // try from 010ddb04 to 011ddb1b has its CatchHandler @ 010ddb2c */
          uVar122 = (uint)*pbVar44 - ((uint)*pbVar24 + (uint)*pbVar26 >> 1);
          uVar23 = uVar122 & 0xff;
          if (0x7f < uVar23) {
            uVar23 = 0x100 - uVar23;
          }
          uVar29 = uVar23 + uVar29;
                    /* try { // try from 010ddb1c to 011ddb3f has its CatchHandler @ 010ddad8 */
          *pbVar28 = (byte)uVar122;
          if (uVar39 < uVar29) break;
                    /* catch() { ... } // from try @ 010ddb04 with catch @ 010ddb2c */
          pbVar28 = pbVar28 + 1;
          pbVar24 = pbVar24 + 1;
          pbVar26 = pbVar26 + 1;
          pbVar44 = pbVar44 + 1;
        }
      }
      if (*(char *)(param_1 + 0x3d0) == '\x02') {
        uVar39 = uVar29 & 0xffff;
        uVar29 = uVar29 >> 10 & 0x3fffc0;
        if (bVar2 != 0) {
          uVar47 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\0') {
              uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3e0) + uVar47 * 2);
              uVar39 = uVar39 * uVar23 >> 8;
              uVar29 = uVar29 * uVar23 >> 8;
            }
            uVar47 = uVar47 + 1;
          } while (uVar55 != uVar47);
        }
        uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f0) + 6);
        uVar29 = uVar29 * uVar23;
        if (uVar29 < 0x1fffe08) {
          uVar29 = (uVar29 * 0x80 & 0xfffffc00) + (uVar39 * uVar23 >> 3);
                    /* catch() { ... } // from try @ 010dde4c with catch @ 010ddf1c */
        }
        else {
          uVar29 = 0x7fffffff;
        }
      }
      if (uVar29 < uVar104) {
        pbVar50 = *(byte **)(param_1 + 0x278);
        uVar104 = uVar29;
      }
    }
    if (bVar57 != 0x80) goto LAB_010dd934;
    lVar48 = *(long *)(param_1 + 0x280);
    pbVar50 = pbVar40 + 1;
    pbVar44 = (byte *)(pcVar41 + 1);
    pbVar26 = (byte *)(lVar48 + 1);
    if (uVar30 == 0) {
      uVar37 = 0;
      uVar47 = uVar36;
      pbVar28 = pbVar50;
      pbVar24 = pbVar44;
      if (uVar36 != 0) goto LAB_010ddcc8;
    }
    else {
      lVar31 = uVar37 + 1;
      pbVar28 = pbVar50;
      pbVar24 = pbVar44;
      if (uVar46 < 0x100) {
LAB_010ddc94:
        lVar27 = 0;
LAB_010ddc9c:
        lVar27 = uVar37 - lVar27;
        do {
                    /* try { // try from 010ddca8 to 011ddceb has its CatchHandler @ 010ddc08 */
          lVar27 = lVar27 + -1;
          *pbVar26 = *pbVar28 - *pbVar24;
          pbVar28 = pbVar28 + 1;
          pbVar26 = pbVar26 + 1;
          pbVar24 = pbVar24 + 1;
        } while (lVar27 != 0);
      }
      else {
        uVar46 = uVar46 >> 3 & 0x1f;
        lVar54 = uVar37 - uVar46;
        if (lVar54 == 0) goto LAB_010ddc94;
        lVar35 = uVar37 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010ddca8 with catch @ 010ddc08
                        */
        if (pbVar26 < pbVar40 + lVar35 && pbVar50 < (byte *)(lVar48 + lVar35)) goto LAB_010ddc94;
        lVar27 = 0;
                    /* try { // try from 010ddc3c to 011ddca7 has its CatchHandler @ 010ddcd8 */
        if (pbVar26 < pcVar41 + lVar35 && pbVar44 < (byte *)(lVar48 + lVar35)) goto LAB_010ddc9c;
        pbVar26 = pbVar26 + lVar54;
        pbVar28 = pbVar40 + 0x11;
        puVar33 = (undefined8 *)(lVar48 + 0x11);
        pauVar32 = (undefined1 (*) [16])(pcVar41 + 0x11);
        lVar35 = lVar54;
        do {
          uVar118 = *(undefined8 *)(pbVar28 + -8);
          uVar38 = *(undefined8 *)(pbVar28 + -0x10);
          uVar8 = *(undefined8 *)(pbVar28 + 8);
          uVar7 = *(undefined8 *)pbVar28;
          uVar11 = *(undefined8 *)(pauVar32[-1] + 8);
          uVar10 = *(undefined8 *)pauVar32[-1];
          auVar4 = *pauVar32;
          lVar35 = lVar35 + -0x20;
          pbVar28 = pbVar28 + 0x20;
          pauVar32 = pauVar32 + 2;
          puVar33[-1] = CONCAT17((char)((ulong)uVar118 >> 0x38) - (char)((ulong)uVar11 >> 0x38),
                                 CONCAT16((char)((ulong)uVar118 >> 0x30) -
                                          (char)((ulong)uVar11 >> 0x30),
                                          CONCAT15((char)((ulong)uVar118 >> 0x28) -
                                                   (char)((ulong)uVar11 >> 0x28),
                                                   CONCAT14((char)((ulong)uVar118 >> 0x20) -
                                                            (char)((ulong)uVar11 >> 0x20),
                                                            CONCAT13((char)((ulong)uVar118 >> 0x18)
                                                                     - (char)((ulong)uVar11 >> 0x18)
                                                                     ,CONCAT12((char)((ulong)uVar118
                                                                                     >> 0x10) -
                                                                               (char)((ulong)uVar11
                                                                                     >> 0x10),
                                                                               CONCAT11((char)((
                                                  ulong)uVar118 >> 8) - (char)((ulong)uVar11 >> 8),
                                                  (char)uVar118 - (char)uVar11)))))));
          puVar33[-2] = CONCAT17((char)((ulong)uVar38 >> 0x38) - (char)((ulong)uVar10 >> 0x38),
                                 CONCAT16((char)((ulong)uVar38 >> 0x30) -
                                          (char)((ulong)uVar10 >> 0x30),
                                          CONCAT15((char)((ulong)uVar38 >> 0x28) -
                                                   (char)((ulong)uVar10 >> 0x28),
                                                   CONCAT14((char)((ulong)uVar38 >> 0x20) -
                                                            (char)((ulong)uVar10 >> 0x20),
                                                            CONCAT13((char)((ulong)uVar38 >> 0x18) -
                                                                     (char)((ulong)uVar10 >> 0x18),
                                                                     CONCAT12((char)((ulong)uVar38
                                                                                    >> 0x10) -
                                                                              (char)((ulong)uVar10
                                                                                    >> 0x10),
                                                                              CONCAT11((char)((ulong
                                                  )uVar38 >> 8) - (char)((ulong)uVar10 >> 8),
                                                  (char)uVar38 - (char)uVar10)))))));
          puVar33[1] = CONCAT17((char)((ulong)uVar8 >> 0x38) - auVar4[0xf],
                                CONCAT16((char)((ulong)uVar8 >> 0x30) - auVar4[0xe],
                                         CONCAT15((char)((ulong)uVar8 >> 0x28) - auVar4[0xd],
                                                  CONCAT14((char)((ulong)uVar8 >> 0x20) -
                                                           auVar4[0xc],
                                                           CONCAT13((char)((ulong)uVar8 >> 0x18) -
                                                                    auVar4[0xb],
                                                                    CONCAT12((char)((ulong)uVar8 >>
                                                                                   0x10) -
                                                                             auVar4[10],
                                                                             CONCAT11((char)((ulong)
                                                  uVar8 >> 8) - auVar4[9],(char)uVar8 - auVar4[8])))
                                                  ))));
          *puVar33 = CONCAT17((char)((ulong)uVar7 >> 0x38) - auVar4[7],
                              CONCAT16((char)((ulong)uVar7 >> 0x30) - auVar4[6],
                                       CONCAT15((char)((ulong)uVar7 >> 0x28) - auVar4[5],
                                                CONCAT14((char)((ulong)uVar7 >> 0x20) - auVar4[4],
                                                         CONCAT13((char)((ulong)uVar7 >> 0x18) -
                                                                  auVar4[3],
                                                                  CONCAT12((char)((ulong)uVar7 >>
                                                                                 0x10) - auVar4[2],
                                                                           CONCAT11((char)((ulong)
                                                  uVar7 >> 8) - auVar4[1],(char)uVar7 - auVar4[0])))
                                                  ))));
          puVar33 = puVar33 + 4;
        } while (lVar35 != 0);
        lVar27 = lVar54;
        pbVar28 = pbVar50 + lVar54;
        pbVar24 = pbVar44 + lVar54;
        if (uVar46 != 0) goto LAB_010ddc9c;
      }
      pbVar26 = (byte *)(lVar48 + lVar31);
      uVar47 = uVar36 - uVar37;
      pbVar28 = pbVar40 + lVar31;
      pbVar24 = (byte *)(pcVar41 + lVar31);
      if (uVar37 <= uVar36 && uVar36 - uVar37 != 0) {
LAB_010ddcc8:
        if ((0xf < uVar47) && (uVar49 = uVar47 & 0xfffffffffffffff0, uVar49 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010ddc3c with catch @ 010ddcd8
                        */
          lVar48 = (uVar36 + 1) - uVar37;
          pbVar42 = pbVar26 + uVar47;
                    /* try { // try from 010ddd10 to 011dde4b has its CatchHandler @ 010ddd10
                       catch() { ... } // from try @ 010ddd10 with catch @ 010ddd10
                       catch() { ... } // from try @ 010dde54 with catch @ 010ddd10 */
          if ((pcVar41 + lVar48 <= pbVar26 || pbVar42 <= pbVar44) &&
             (((pbVar24 + uVar47 <= pbVar26 || pbVar42 <= pbVar24 &&
               (pbVar28 + uVar47 <= pbVar26 || pbVar42 <= pbVar28)) &&
              (pbVar40 + lVar48 <= pbVar26 || pbVar42 <= pbVar50)))) {
            uVar37 = uVar37 + uVar49;
            uVar34 = uVar49;
            pbVar40 = pbVar26;
            pbVar42 = pbVar44;
            pbVar43 = pbVar28;
            pbVar25 = pbVar50;
            pbVar45 = pbVar24;
            do {
              uVar118 = *(undefined8 *)(pbVar45 + 8);
              bVar72 = (byte)((ulong)uVar118 >> 8);
              bVar73 = (byte)((ulong)uVar118 >> 0x10);
              bVar74 = (byte)((ulong)uVar118 >> 0x18);
              bVar75 = (byte)((ulong)uVar118 >> 0x20);
              bVar76 = (byte)((ulong)uVar118 >> 0x28);
              bVar77 = (byte)((ulong)uVar118 >> 0x30);
              bVar78 = (byte)((ulong)uVar118 >> 0x38);
              uVar38 = *(undefined8 *)pbVar45;
              bVar71 = (byte)((ulong)uVar38 >> 0x38);
              uVar8 = *(undefined8 *)(pbVar42 + 8);
              bVar80 = (byte)((ulong)uVar8 >> 8);
              bVar81 = (byte)((ulong)uVar8 >> 0x10);
              bVar82 = (byte)((ulong)uVar8 >> 0x18);
              bVar83 = (byte)((ulong)uVar8 >> 0x20);
              bVar84 = (byte)((ulong)uVar8 >> 0x28);
              bVar85 = (byte)((ulong)uVar8 >> 0x30);
              bVar86 = (byte)((ulong)uVar8 >> 0x38);
              uVar7 = *(undefined8 *)pbVar42;
              bVar79 = (byte)((ulong)uVar7 >> 0x38);
              uVar11 = *(undefined8 *)(pbVar25 + 8);
              bVar88 = (byte)((ulong)uVar11 >> 8);
              bVar89 = (byte)((ulong)uVar11 >> 0x10);
              bVar90 = (byte)((ulong)uVar11 >> 0x18);
              bVar91 = (byte)((ulong)uVar11 >> 0x20);
              bVar92 = (byte)((ulong)uVar11 >> 0x28);
              bVar93 = (byte)((ulong)uVar11 >> 0x30);
              bVar94 = (byte)((ulong)uVar11 >> 0x38);
              uVar10 = *(undefined8 *)pbVar25;
              bVar87 = (byte)((ulong)uVar10 >> 0x38);
              uVar34 = uVar34 - 0x10;
              bVar57 = (byte)((ulong)uVar38 >> 8);
              uVar46 = (uint)CONCAT12(bVar57,(ushort)(byte)uVar38);
              uVar104 = (uint)CONCAT12(bVar72,(ushort)(byte)uVar118);
              bVar58 = (byte)((ulong)uVar7 >> 8);
              uVar30 = (uint)CONCAT12(bVar58,(ushort)(byte)uVar7);
              bVar64 = (byte)((ulong)uVar7 >> 0x28);
              uVar39 = (uint)CONCAT12(bVar64,(ushort)(byte)((ulong)uVar7 >> 0x20));
              uVar29 = (uint)CONCAT12(bVar80,(ushort)(byte)uVar8);
              uVar23 = (uint)CONCAT12(bVar82,(ushort)bVar81);
              uVar122 = (uint)CONCAT12(bVar84,(ushort)bVar83);
              bVar59 = (byte)((ulong)uVar10 >> 8);
              uVar125 = (uint)CONCAT12(bVar59,(ushort)(byte)uVar10);
              bVar61 = (byte)((ulong)uVar10 >> 0x18);
              uVar127 = (uint)CONCAT12(bVar61,(ushort)(byte)((ulong)uVar10 >> 0x10));
              bVar62 = (byte)((ulong)uVar10 >> 0x20);
              bVar65 = (byte)((ulong)uVar10 >> 0x28);
              bVar66 = (byte)((ulong)uVar10 >> 0x30);
              uVar129 = (uint)CONCAT12(bVar88,(ushort)(byte)uVar11);
              uVar99 = (ushort)(byte)((ulong)uVar38 >> 0x10);
              uVar101 = (ushort)(byte)((ulong)uVar38 >> 0x18);
              uVar112 = (ushort)bVar58;
              uVar113 = (ushort)(byte)((ulong)uVar7 >> 0x10);
              uVar115 = (ushort)(byte)((ulong)uVar7 >> 0x18);
              uVar67 = (ushort)bVar84;
              uVar69 = (ushort)bVar85;
              uVar56 = (ushort)(byte)((ulong)uVar38 >> 0x20);
              uVar60 = (ushort)(byte)((ulong)uVar38 >> 0x28);
              uVar63 = (ushort)(byte)((ulong)uVar38 >> 0x30);
              uVar68 = (ushort)bVar64;
              uVar70 = (ushort)(byte)((ulong)uVar7 >> 0x30);
              iVar144 = MP_INT_ABS((uint)(ushort)bVar75 - (uVar122 & 0xffff));
              iVar145 = MP_INT_ABS((uint)(ushort)bVar76 - (uint)uVar67);
              iVar146 = MP_INT_ABS((uint)(ushort)bVar77 - (uint)uVar69);
              iVar147 = MP_INT_ABS((uint)bVar78 - (uint)bVar86);
              iVar105 = MP_INT_ABS((uVar104 & 0xffff) - (uVar29 & 0xffff));
              iVar107 = MP_INT_ABS((uint)(ushort)bVar72 - (uint)bVar80);
              iVar108 = MP_INT_ABS((uint)(ushort)bVar73 - (uVar23 & 0xffff));
              iVar109 = MP_INT_ABS((uint)(ushort)bVar74 - (uint)bVar82);
              iVar148 = MP_INT_ABS((uint)uVar56 - (uVar39 & 0xffff));
              iVar149 = MP_INT_ABS((uint)uVar60 - (uint)uVar68);
              iVar150 = MP_INT_ABS((uint)uVar63 - (uint)uVar70);
              iVar151 = MP_INT_ABS((uint)bVar71 - (uint)bVar79);
              iVar95 = MP_INT_ABS((uVar46 & 0xffff) - (uVar30 & 0xffff));
              iVar100 = MP_INT_ABS((uint)(ushort)bVar57 - (uint)uVar112);
              iVar102 = MP_INT_ABS((uint)uVar99 - (uint)uVar113);
              iVar103 = MP_INT_ABS((uint)uVar101 - (uint)uVar115);
              iVar152 = MP_INT_ABS((CONCAT12(bVar92,(ushort)bVar91) & 0xffff) - (uVar122 & 0xffff));
              iVar153 = MP_INT_ABS((uint)bVar92 - (uint)uVar67);
              iVar154 = MP_INT_ABS((uint)bVar93 - (uint)uVar69);
              iVar155 = MP_INT_ABS((uint)(ushort)bVar94 - (uint)bVar86);
              iVar120 = MP_INT_ABS((uVar129 & 0xffff) - (uVar29 & 0xffff));
              iVar121 = MP_INT_ABS((uint)bVar88 - (uint)bVar80);
              iVar123 = MP_INT_ABS((CONCAT12(bVar90,(ushort)bVar89) & 0xffff) - (uVar23 & 0xffff));
              iVar124 = MP_INT_ABS((uint)bVar90 - (uint)bVar82);
              iVar130 = MP_INT_ABS((CONCAT12(bVar65,(ushort)bVar62) & 0xffff) - (uVar39 & 0xffff));
              iVar131 = MP_INT_ABS((uint)bVar65 - (uint)uVar68);
              iVar3 = MP_INT_ABS((uint)bVar66 - (uint)uVar70);
              iVar12 = MP_INT_ABS((uint)bVar87 - (uint)bVar79);
              iVar110 = MP_INT_ABS((uVar125 & 0xffff) - (uVar30 & 0xffff));
              iVar114 = MP_INT_ABS((uint)bVar59 - (uint)uVar112);
              iVar116 = MP_INT_ABS((uVar127 & 0xffff) - (uint)uVar113);
              iVar119 = MP_INT_ABS((uint)bVar61 - (uint)uVar115);
              iVar136 = MP_INT_ABS(((uVar129 & 0xffff) - (uVar29 & 0xffff)) +
                                   ((uVar104 & 0xffff) - (uVar29 & 0xffff)));
              iVar137 = MP_INT_ABS(((uint)bVar88 - (uint)bVar80) +
                                   ((uint)(ushort)bVar72 - (uint)bVar80));
              iVar138 = MP_INT_ABS(((CONCAT12(bVar90,(ushort)bVar89) & 0xffff) - (uVar23 & 0xffff))
                                   + ((uint)(ushort)bVar73 - (uVar23 & 0xffff)));
              iVar139 = MP_INT_ABS(((uint)bVar90 - (uint)bVar82) +
                                   ((uint)(ushort)bVar74 - (uint)bVar82));
              iVar126 = MP_INT_ABS(((uVar125 & 0xffff) - (uVar30 & 0xffff)) +
                                   ((uVar46 & 0xffff) - (uVar30 & 0xffff)));
              iVar128 = MP_INT_ABS(((uint)bVar59 - (uint)uVar112) +
                                   ((uint)(ushort)bVar57 - (uint)uVar112));
              iVar52 = MP_INT_ABS(((uVar127 & 0xffff) - (uint)uVar113) +
                                  ((uint)uVar99 - (uint)uVar113));
              iVar22 = MP_INT_ABS(((uint)bVar61 - (uint)uVar115) + ((uint)uVar101 - (uint)uVar115));
              iVar132 = MP_INT_ABS(((CONCAT12(bVar92,(ushort)bVar91) & 0xffff) - (uVar122 & 0xffff))
                                   + ((uint)(ushort)bVar75 - (uVar122 & 0xffff)));
              iVar133 = MP_INT_ABS(((uint)bVar92 - (uint)uVar67) +
                                   ((uint)(ushort)bVar76 - (uint)uVar67));
              iVar134 = MP_INT_ABS(((uint)bVar93 - (uint)uVar69) +
                                   ((uint)(ushort)bVar77 - (uint)uVar69));
              iVar135 = MP_INT_ABS(((uint)(ushort)bVar94 - (uint)bVar86) +
                                   ((uint)bVar78 - (uint)bVar86));
              iVar140 = MP_INT_ABS(((CONCAT12(bVar65,(ushort)bVar62) & 0xffff) - (uVar39 & 0xffff))
                                   + ((uint)uVar56 - (uVar39 & 0xffff)));
              iVar141 = MP_INT_ABS(((uint)bVar65 - (uint)uVar68) + ((uint)uVar60 - (uint)uVar68));
              iVar142 = MP_INT_ABS(((uint)bVar66 - (uint)uVar70) + ((uint)uVar63 - (uint)uVar70));
              iVar143 = MP_INT_ABS(((uint)bVar87 - (uint)bVar79) + ((uint)bVar71 - (uint)bVar79));
              auVar97[0] = -(iVar110 < iVar95) | -(iVar126 < iVar95);
              auVar97[1] = -(iVar114 < iVar100) | -(iVar128 < iVar100);
                    /* try { // try from 010dde4c to 011dde53 has its CatchHandler @ 010ddf1c */
              auVar97[2] = -(iVar116 < iVar102) | -(iVar52 < iVar102);
              auVar97[3] = -(iVar119 < iVar103) | -(iVar22 < iVar103);
              auVar97[4] = -(iVar130 < iVar148) | -(iVar140 < iVar148);
              auVar97[5] = -(iVar131 < iVar149) | -(iVar141 < iVar149);
              auVar97[6] = -(iVar3 < iVar150) | -(iVar142 < iVar150);
              auVar97[7] = -(iVar12 < iVar151) | -(iVar143 < iVar151);
              auVar97[8] = -(iVar120 < iVar105) | -(iVar136 < iVar105);
                    /* try { // try from 010dde54 to 011ddf2f has its CatchHandler @ 010ddd10 */
              auVar97[9] = -(iVar121 < iVar107) | -(iVar137 < iVar107);
              auVar97[10] = -(iVar123 < iVar108) | -(iVar138 < iVar108);
              auVar97[0xb] = -(iVar124 < iVar109) | -(iVar139 < iVar109);
              auVar97[0xc] = -(iVar152 < iVar144) | -(iVar132 < iVar144);
              auVar97[0xd] = -(iVar153 < iVar145) | -(iVar133 < iVar145);
              auVar97[0xe] = -(iVar154 < iVar146) | -(iVar134 < iVar146);
              auVar97[0xf] = -(iVar155 < iVar147) | -(iVar135 < iVar147);
              auVar106[1] = -(iVar114 <= iVar128);
              auVar106[0] = -(iVar110 <= iVar126);
              auVar106[2] = -(iVar116 <= iVar52);
              auVar106[3] = -(iVar119 <= iVar22);
              auVar106[4] = -(iVar130 <= iVar140);
              auVar106[5] = -(iVar131 <= iVar141);
              auVar106[6] = -(iVar3 <= iVar142);
              auVar106[7] = -(iVar12 <= iVar143);
              auVar106[8] = -(iVar120 <= iVar136);
              auVar106[9] = -(iVar121 <= iVar137);
              auVar106[10] = -(iVar123 <= iVar138);
              auVar106[0xb] = -(iVar124 <= iVar139);
              auVar106[0xc] = -(iVar152 <= iVar132);
              auVar106[0xd] = -(iVar153 <= iVar133);
              auVar106[0xe] = -(iVar154 <= iVar134);
              auVar106[0xf] = -(iVar155 <= iVar135);
              uVar118 = *(undefined8 *)(pbVar43 + 8);
              uVar38 = *(undefined8 *)pbVar43;
              auVar4[9] = bVar72;
              auVar4._0_9_ = *(unkbyte9 *)pbVar45;
              auVar4[10] = bVar73;
              auVar4[0xb] = bVar74;
              auVar4[0xc] = bVar75;
              auVar4[0xd] = bVar76;
              auVar4[0xe] = bVar77;
              auVar4[0xf] = bVar78;
              auVar5[9] = bVar80;
              auVar5._0_9_ = *(unkbyte9 *)pbVar42;
              auVar5[10] = bVar81;
              auVar5[0xb] = bVar82;
              auVar5[0xc] = bVar83;
              auVar5[0xd] = bVar84;
              auVar5[0xe] = bVar85;
              auVar5[0xf] = bVar86;
              auVar6[9] = bVar80;
              auVar6._0_9_ = *(unkbyte9 *)pbVar42;
              auVar6[10] = bVar81;
              auVar6[0xb] = bVar82;
              auVar6[0xc] = bVar83;
              auVar6[0xd] = bVar84;
              auVar6[0xe] = bVar85;
              auVar6[0xf] = bVar86;
              auVar9[9] = bVar88;
              auVar9._0_9_ = *(unkbyte9 *)pbVar25;
              auVar9[10] = bVar89;
              auVar9[0xb] = bVar90;
              auVar9[0xc] = bVar91;
              auVar9[0xd] = bVar92;
              auVar9[0xe] = bVar93;
              auVar9[0xf] = bVar94;
              auVar98[9] = bVar88;
              auVar98._0_9_ = *(unkbyte9 *)pbVar25;
              auVar98[10] = bVar89;
              auVar98[0xb] = bVar90;
              auVar98[0xc] = bVar91;
              auVar98[0xd] = bVar92;
              auVar98[0xe] = bVar93;
              auVar98[0xf] = bVar94;
              auVar98 = auVar98 ^ (auVar9 ^ auVar6 ^ (auVar5 ^ auVar4) & auVar106) & auVar97;
              *(ulong *)(pbVar40 + 8) =
                   CONCAT17((char)((ulong)uVar118 >> 0x38) - auVar98[0xf],
                            CONCAT16((char)((ulong)uVar118 >> 0x30) - auVar98[0xe],
                                     CONCAT15((char)((ulong)uVar118 >> 0x28) - auVar98[0xd],
                                              CONCAT14((char)((ulong)uVar118 >> 0x20) - auVar98[0xc]
                                                       ,CONCAT13((char)((ulong)uVar118 >> 0x18) -
                                                                 auVar98[0xb],
                                                                 CONCAT12((char)((ulong)uVar118 >>
                                                                                0x10) - auVar98[10],
                                                                          CONCAT11((char)((ulong)
                                                  uVar118 >> 8) - auVar98[9],
                                                  (char)uVar118 - auVar98[8])))))));
              *(ulong *)pbVar40 =
                   CONCAT17((char)((ulong)uVar38 >> 0x38) - auVar98[7],
                            CONCAT16((char)((ulong)uVar38 >> 0x30) - auVar98[6],
                                     CONCAT15((char)((ulong)uVar38 >> 0x28) - auVar98[5],
                                              CONCAT14((char)((ulong)uVar38 >> 0x20) - auVar98[4],
                                                       CONCAT13((char)((ulong)uVar38 >> 0x18) -
                                                                auVar98[3],
                                                                CONCAT12((char)((ulong)uVar38 >>
                                                                               0x10) - auVar98[2],
                                                                         CONCAT11((char)((ulong)
                                                  uVar38 >> 8) - auVar98[1],
                                                  (char)uVar38 - auVar98[0])))))));
              pbVar40 = pbVar40 + 0x10;
              pbVar42 = pbVar42 + 0x10;
              pbVar43 = pbVar43 + 0x10;
              pbVar25 = pbVar25 + 0x10;
              pbVar45 = pbVar45 + 0x10;
            } while (uVar34 != 0);
            pbVar28 = pbVar28 + uVar49;
            pbVar50 = pbVar50 + uVar49;
            pbVar44 = pbVar44 + uVar49;
            pbVar24 = pbVar24 + uVar49;
            pbVar26 = pbVar26 + uVar49;
            if (uVar47 == uVar49) goto LAB_010de208;
          }
        }
        lVar48 = uVar36 - uVar37;
        do {
          bVar57 = *pbVar44;
          lVar48 = lVar48 + -1;
          iVar22 = (uint)*pbVar24 - (uint)bVar57;
          iVar52 = -iVar22;
          if (-1 < iVar22) {
            iVar52 = iVar22;
          }
          iVar3 = (uint)*pbVar50 - (uint)bVar57;
          iVar12 = -iVar3;
          if (-1 < iVar3) {
            iVar12 = iVar3;
          }
          iVar3 = iVar3 + iVar22;
          iVar22 = -iVar3;
          if (-1 < iVar3) {
            iVar22 = iVar3;
          }
          bVar58 = *pbVar24;
          if (iVar22 < iVar12) {
            bVar58 = bVar57;
          }
          if (iVar52 <= iVar22 && iVar52 <= iVar12) {
            bVar58 = *pbVar50;
          }
          *pbVar26 = *pbVar28 - bVar58;
          pbVar28 = pbVar28 + 1;
          pbVar50 = pbVar50 + 1;
          pbVar44 = pbVar44 + 1;
          pbVar24 = pbVar24 + 1;
          pbVar26 = pbVar26 + 1;
        } while (lVar48 != 0);
      }
    }
  }
  else {
    uVar104 = 0;
    if (uVar36 != 0) {
      if (uVar36 == 1) {
        uVar47 = 0;
LAB_010dd1d0:
        uVar104 = 0;
        pbVar50 = pbVar40;
      }
      else {
        iVar52 = 0;
        uVar47 = uVar36 & 0xfffffffffffffffe;
        if (uVar47 == 0) goto LAB_010dd1d0;
        iVar22 = 0;
        pbVar50 = pbVar40 + uVar47;
        uVar49 = uVar47;
        pbVar44 = pbVar40;
        do {
          bVar59 = pbVar44[1];
          bVar58 = pbVar44[2];
          uVar49 = uVar49 - 2;
          uVar104 = (uint)bVar59;
          if ((char)bVar59 < '\0') {
            uVar104 = 0x100 - bVar59;
          }
          uVar39 = (uint)bVar58;
          if ((char)bVar58 < '\0') {
            uVar39 = 0x100 - bVar58;
          }
          iVar52 = uVar104 + iVar52;
          iVar22 = uVar39 + iVar22;
          pbVar44 = pbVar44 + 2;
        } while (uVar49 != 0);
        uVar104 = iVar22 + iVar52;
        if (uVar36 == uVar47) goto LAB_010dd200;
      }
      lVar48 = uVar36 - uVar47;
      do {
        pbVar50 = pbVar50 + 1;
        bVar58 = *pbVar50;
        lVar48 = lVar48 + -1;
        uVar39 = (uint)bVar58;
        if ((char)bVar58 < '\0') {
          uVar39 = 0x100 - bVar58;
        }
        uVar104 = uVar39 + uVar104;
      } while (lVar48 != 0);
    }
LAB_010dd200:
    if (*(char *)(param_1 + 0x3d0) != '\x02') goto LAB_010dd268;
    uVar39 = uVar104 & 0xffff;
    uVar104 = uVar104 >> 10 & 0x3fffc0;
    if (bVar2 != 0) {
      uVar47 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\0') {
          uVar29 = (uint)*(ushort *)(*(long *)(param_1 + 0x3e0) + uVar47 * 2);
          uVar39 = uVar39 * uVar29 >> 8;
          uVar104 = uVar104 * uVar29 >> 8;
        }
        uVar47 = uVar47 + 1;
      } while (uVar55 != uVar47);
    }
    uVar104 = uVar104 * **(ushort **)(param_1 + 0x3f0);
    if (0x1fffe07 < uVar104) {
      uVar104 = 0x7fffffff;
      goto LAB_010dd268;
    }
    uVar104 = (uVar104 * 0x80 & 0xfffffc00) + (uVar39 * **(ushort **)(param_1 + 0x3f0) >> 3);
    if (bVar57 == 0x10) goto LAB_010dd270;
LAB_010dd528:
    pbVar50 = pbVar40;
    if ((bVar57 >> 4 & 1) == 0) goto joined_r0x010dd534;
    uVar39 = uVar104;
    if (*(char *)(param_1 + 0x3d0) == '\x02') {
      uVar39 = uVar104 & 0xffff;
      uVar29 = uVar104 >> 10 & 0x3fffc0;
      if (bVar2 != 0) {
        uVar47 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\x01') {
            uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 1000) + uVar47 * 2);
            uVar39 = uVar39 * uVar23 >> 8;
            uVar29 = uVar29 * uVar23 >> 8;
          }
          uVar47 = uVar47 + 1;
        } while (uVar55 != uVar47);
      }
      uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f8) + 2);
      uVar29 = uVar29 * uVar23;
      if (uVar29 < 0x1fffe08) {
        uVar39 = (uVar29 * 0x80 & 0xfffffc00) + (uVar39 * uVar23 >> 3);
      }
      else {
        uVar39 = 0x7fffffff;
      }
    }
    lVar48 = *(long *)(param_1 + 0x268);
    pbVar44 = pbVar40 + 1;
    uVar29 = 0;
    pbVar26 = (byte *)(lVar48 + 1);
    if (uVar30 == 0) {
      uVar47 = 0;
      pbVar28 = pbVar44;
      if (uVar36 != 0) goto LAB_010ddfc8;
    }
    else {
      pbVar28 = pbVar40 + uVar37 + 1;
      uVar47 = uVar37;
      pbVar24 = pbVar44;
      do {
        bVar58 = *pbVar24;
        uVar47 = uVar47 - 1;
        *pbVar26 = bVar58;
        uVar23 = (uint)bVar58;
        if ((char)bVar58 < '\0') {
          uVar23 = 0x100 - bVar58;
        }
        uVar29 = uVar23 + uVar29;
        pbVar26 = pbVar26 + 1;
        pbVar24 = pbVar24 + 1;
      } while (uVar47 != 0);
      pbVar26 = (byte *)(lVar48 + uVar37 + 1);
      for (uVar47 = uVar37; uVar47 < uVar36; uVar47 = uVar47 + 1) {
LAB_010ddfc8:
        uVar23 = (uint)(byte)(*pbVar28 - *pbVar44);
        if (0x7f < uVar23) {
          uVar23 = 0x100 - uVar23;
        }
        uVar29 = uVar23 + uVar29;
        *pbVar26 = *pbVar28 - *pbVar44;
        if (uVar39 < uVar29) break;
        pbVar28 = pbVar28 + 1;
        pbVar44 = pbVar44 + 1;
        pbVar26 = pbVar26 + 1;
      }
    }
    if (*(char *)(param_1 + 0x3d0) == '\x02') {
      uVar39 = uVar29 & 0xffff;
      uVar29 = uVar29 >> 10 & 0x3fffc0;
      if (bVar2 != 0) {
        uVar47 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\x01') {
            uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 1000) + uVar47 * 2);
            uVar39 = uVar39 * uVar23 >> 8;
            uVar29 = uVar29 * uVar23 >> 8;
          }
          uVar47 = uVar47 + 1;
        } while (uVar55 != uVar47);
      }
      uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f8) + 2);
      uVar29 = uVar29 * uVar23;
      if (uVar29 < 0x1fffe08) {
        uVar29 = (uVar29 * 0x80 & 0xfffffc00) + (uVar39 * uVar23 >> 3);
      }
      else {
        uVar29 = 0x7fffffff;
      }
    }
                    /* try { // try from 010de2d8 to 011de2df has its CatchHandler @ 010de3a8 */
    if (uVar29 < uVar104) {
      pbVar50 = *(byte **)(param_1 + 0x268);
                    /* try { // try from 010de2e0 to 011de3bb has its CatchHandler @ 010de19c */
      uVar104 = uVar29;
    }
    if (bVar57 == 0x20) goto LAB_010dd538;
LAB_010dd3d0:
    if ((bVar57 >> 5 & 1) != 0) {
      uVar39 = uVar104;
      if (*(char *)(param_1 + 0x3d0) == '\x02') {
        uVar39 = uVar104 & 0xffff;
        uVar29 = uVar104 >> 10 & 0x3fffc0;
        if (bVar2 != 0) {
          uVar47 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\x02') {
              uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 1000) + uVar47 * 2);
              uVar39 = uVar39 * uVar23 >> 8;
              uVar29 = uVar29 * uVar23 >> 8;
            }
            uVar47 = uVar47 + 1;
          } while (uVar55 != uVar47);
        }
        uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f8) + 4);
        uVar29 = uVar29 * uVar23;
        if (0x1fffe07 < uVar29) {
          uVar39 = 0x7fffffff;
          goto LAB_010dd444;
        }
        uVar39 = (uVar29 * 0x80 & 0xfffffc00) + (uVar39 * uVar23 >> 3);
        if (uVar36 == 0) goto LAB_010dd9c0;
LAB_010dd448:
        lVar48 = *(long *)(param_1 + 0x270);
        uVar29 = 0;
        uVar47 = 1;
        do {
          uVar23 = (uint)(byte)(pbVar40[uVar47] - pcVar41[uVar47]);
          if (0x7f < uVar23) {
            uVar23 = 0x100 - uVar23;
          }
          uVar29 = uVar23 + uVar29;
          *(byte *)(lVar48 + uVar47) = pbVar40[uVar47] - pcVar41[uVar47];
        } while ((uVar29 <= uVar39) && (bVar21 = uVar47 < uVar36, uVar47 = uVar47 + 1, bVar21));
        if (*(char *)(param_1 + 0x3d0) != '\x02') goto joined_r0x010dd9d0;
LAB_010dd49c:
        uVar39 = uVar29 & 0xffff;
                    /* try { // try from 010dd4a4 to 011dd4ab has its CatchHandler @ 010dd578 */
        uVar29 = uVar29 >> 10 & 0x3fffc0;
        if (bVar2 != 0) {
                    /* try { // try from 010dd4ac to 011dd58b has its CatchHandler @ 010dd328 */
          uVar47 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\x02') {
              uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3e0) + uVar47 * 2);
              uVar39 = uVar39 * uVar23 >> 8;
              uVar29 = uVar29 * uVar23 >> 8;
            }
            uVar47 = uVar47 + 1;
          } while (uVar55 != uVar47);
        }
        uVar23 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f0) + 4);
        uVar29 = uVar29 * uVar23;
        if (uVar29 < 0x1fffe08) {
          uVar29 = (uVar29 * 0x80 & 0xfffffc00) + (uVar39 * uVar23 >> 3);
          goto joined_r0x010dd9d0;
        }
        uVar29 = 0x7fffffff;
        if (uVar104 < 0x80000000) goto joined_r0x010dd508;
      }
      else {
LAB_010dd444:
        if (uVar36 != 0) goto LAB_010dd448;
LAB_010dd9c0:
        uVar29 = 0;
        if (*(char *)(param_1 + 0x3d0) == '\x02') goto LAB_010dd49c;
joined_r0x010dd9d0:
        if (uVar104 <= uVar29) goto joined_r0x010dd508;
      }
      pbVar50 = *(byte **)(param_1 + 0x270);
      uVar104 = uVar29;
    }
joined_r0x010dd508:
    if (bVar57 != 0x40) goto LAB_010dd9e4;
    lVar48 = *(long *)(param_1 + 0x278);
    pbVar50 = pbVar40 + 1;
    pbVar44 = (byte *)(pcVar41 + 1);
    pbVar26 = (byte *)(lVar48 + 1);
    if (uVar30 == 0) {
      uVar49 = 0;
      uVar47 = uVar36;
      pbVar28 = pbVar50;
      if (uVar36 != 0) goto LAB_010dd7a4;
    }
    else {
      uVar47 = (ulong)(uVar30 - 1);
      lVar31 = uVar47 + 2;
      if (uVar47 + 1 < 0x10) {
LAB_010dd764:
        iVar52 = 0;
        pbVar28 = pbVar50;
LAB_010dd770:
        iVar52 = uVar30 - iVar52;
        do {
          iVar52 = iVar52 + -1;
          *pbVar26 = *pbVar28 - (*pbVar44 >> 1);
          pbVar44 = pbVar44 + 1;
          pbVar26 = pbVar26 + 1;
          pbVar28 = pbVar28 + 1;
        } while (iVar52 != 0);
      }
      else {
        uVar46 = uVar46 >> 3 & 0xf;
        lVar54 = (uVar47 + 1) - (ulong)uVar46;
        if (lVar54 == 0) goto LAB_010dd764;
        lVar35 = uVar47 + 2;
        if ((pbVar26 < pbVar40 + lVar35 && pbVar50 < (byte *)(lVar48 + lVar35)) ||
           (pbVar26 < pcVar41 + lVar35 && pbVar44 < (byte *)(lVar48 + lVar35))) goto LAB_010dd764;
        pbVar24 = pbVar44 + lVar54;
        pbVar42 = pbVar26 + lVar54;
        iVar52 = (int)lVar54;
        pbVar28 = pbVar50 + lVar54;
        pbVar43 = pbVar50;
        do {
          uVar118 = *(undefined8 *)(pbVar43 + 8);
          uVar38 = *(undefined8 *)pbVar43;
          uVar8 = *(undefined8 *)(pbVar44 + 8);
          uVar7 = *(undefined8 *)pbVar44;
          lVar54 = lVar54 + -0x10;
          *(ulong *)(pbVar26 + 8) =
               CONCAT17((char)((ulong)uVar118 >> 0x38) - (byte)((ulong)uVar8 >> 0x39),
                        CONCAT16((char)((ulong)uVar118 >> 0x30) -
                                 ((byte)((ulong)uVar8 >> 0x30) >> 1),
                                 CONCAT15((char)((ulong)uVar118 >> 0x28) -
                                          ((byte)((ulong)uVar8 >> 0x28) >> 1),
                                          CONCAT14((char)((ulong)uVar118 >> 0x20) -
                                                   ((byte)((ulong)uVar8 >> 0x20) >> 1),
                                                   CONCAT13((char)((ulong)uVar118 >> 0x18) -
                                                            ((byte)((ulong)uVar8 >> 0x18) >> 1),
                                                            CONCAT12((char)((ulong)uVar118 >> 0x10)
                                                                     - ((byte)((ulong)uVar8 >> 0x10)
                                                                       >> 1),CONCAT11((char)((ulong)
                                                  uVar118 >> 8) - ((byte)((ulong)uVar8 >> 8) >> 1),
                                                  (char)uVar118 - ((byte)uVar8 >> 1))))))));
          *(ulong *)pbVar26 =
               CONCAT17((char)((ulong)uVar38 >> 0x38) - (byte)((ulong)uVar7 >> 0x39),
                        CONCAT16((char)((ulong)uVar38 >> 0x30) - ((byte)((ulong)uVar7 >> 0x30) >> 1)
                                 ,CONCAT15((char)((ulong)uVar38 >> 0x28) -
                                           ((byte)((ulong)uVar7 >> 0x28) >> 1),
                                           CONCAT14((char)((ulong)uVar38 >> 0x20) -
                                                    ((byte)((ulong)uVar7 >> 0x20) >> 1),
                                                    CONCAT13((char)((ulong)uVar38 >> 0x18) -
                                                             ((byte)((ulong)uVar7 >> 0x18) >> 1),
                                                             CONCAT12((char)((ulong)uVar38 >> 0x10)
                                                                      - ((byte)((ulong)uVar7 >> 0x10
                                                                               ) >> 1),
                                                                      CONCAT11((char)((ulong)uVar38
                                                                                     >> 8) -
                                                                               ((byte)((ulong)uVar7
                                                                                      >> 8) >> 1),
                                                                               (char)uVar38 -
                                                                               ((byte)uVar7 >> 1))))
                                                   ))));
          pbVar44 = pbVar44 + 0x10;
          pbVar26 = pbVar26 + 0x10;
          pbVar43 = pbVar43 + 0x10;
        } while (lVar54 != 0);
        pbVar44 = pbVar24;
        pbVar26 = pbVar42;
        if (uVar46 != 0) goto LAB_010dd770;
      }
      pbVar44 = (byte *)(pcVar41 + lVar31);
      uVar47 = uVar36 - uVar37;
      pbVar28 = pbVar40 + lVar31;
      uVar49 = uVar37;
      pbVar26 = (byte *)(lVar48 + lVar31);
      if (uVar37 <= uVar36 && uVar36 - uVar37 != 0) {
LAB_010dd7a4:
        if ((0x1f < uVar47) && (uVar34 = uVar47 & 0xffffffffffffffe0, uVar34 != 0)) {
          uVar53 = (uVar36 - 1) - uVar49;
          uVar46 = (uint)uVar49;
          if ((uVar46 < uVar46 + (int)uVar53 + 1) && (uVar53 >> 0x20 == 0)) {
            pbVar24 = pbVar26 + uVar47;
            if (((pbVar40 + ((uVar36 + 1) - uVar49) <= pbVar26 || pbVar24 <= pbVar50) &&
                (pbVar28 + uVar47 <= pbVar26 || pbVar24 <= pbVar28)) &&
               (pbVar44 + uVar47 <= pbVar26 || pbVar24 <= pbVar44)) {
              uVar49 = (ulong)(uVar46 + (int)uVar34);
              pbVar50 = pbVar50 + uVar34;
              pbVar24 = pbVar28 + 0x10;
              pbVar42 = pbVar40 + 0x11;
              pbVar43 = pbVar26 + 0x10;
              pbVar25 = pbVar44 + 0x10;
              uVar53 = uVar34;
              do {
                uVar11 = *(undefined8 *)(pbVar25 + -8);
                uVar10 = *(undefined8 *)(pbVar25 + -0x10);
                bVar58 = pbVar42[-0x10];
                bVar59 = pbVar42[-0xf];
                bVar61 = pbVar42[-0xe];
                bVar62 = pbVar42[-0xd];
                bVar64 = pbVar42[-0xc];
                bVar65 = pbVar42[-0xb];
                bVar66 = pbVar42[-10];
                bVar71 = pbVar42[-9];
                pbVar45 = pbVar42 + -8;
                pbVar14 = pbVar42 + -7;
                pbVar15 = pbVar42 + -6;
                pbVar16 = pbVar42 + -5;
                pbVar17 = pbVar42 + -4;
                pbVar18 = pbVar42 + -3;
                pbVar19 = pbVar42 + -2;
                pbVar20 = pbVar42 + -1;
                uVar117 = *(undefined8 *)(pbVar42 + 8);
                uVar111 = *(undefined8 *)pbVar42;
                uVar118 = *(undefined8 *)(pbVar24 + -8);
                uVar38 = *(undefined8 *)(pbVar24 + -0x10);
                uVar8 = *(undefined8 *)(pbVar24 + 8);
                uVar7 = *(undefined8 *)pbVar24;
                uVar53 = uVar53 - 0x20;
                pbVar24 = pbVar24 + 0x20;
                uVar13 = CONCAT12((char)((ulong)uVar111 >> 8),(short)uVar111) & 0xff00ff;
                auVar96._0_8_ =
                     CONCAT17((char)((ulong)uVar7 >> 0x38) -
                              (char)((ushort)((ushort)(byte)((ulong)uVar111 >> 0x38) +
                                             (ushort)pbVar25[7]) >> 1),
                              CONCAT16((char)((ulong)uVar7 >> 0x30) -
                                       (char)((ushort)((ushort)(byte)((ulong)uVar111 >> 0x30) +
                                                      (ushort)pbVar25[6]) >> 1),
                                       CONCAT15((char)((ulong)uVar7 >> 0x28) -
                                                (char)((ushort)((ushort)(byte)((ulong)uVar111 >>
                                                                              0x28) +
                                                               (ushort)pbVar25[5]) >> 1),
                                                CONCAT14((char)((ulong)uVar7 >> 0x20) -
                                                         (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar111 >> 0x20) + (ushort)pbVar25[4]) >> 1),
                                                  CONCAT13((char)((ulong)uVar7 >> 0x18) -
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar111 >> 0x18) + (ushort)pbVar25[3]) >> 1),
                                                  CONCAT12((char)((ulong)uVar7 >> 0x10) -
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar111 >> 0x10) + (ushort)pbVar25[2]) >> 1),
                                                  CONCAT11((char)((ulong)uVar7 >> 8) -
                                                           (char)((ushort)((ushort)(byte)(uVar13 >>
                                                                                         0x10) +
                                                                          (ushort)pbVar25[1]) >> 1),
                                                           (char)uVar7 -
                                                           (char)((ushort)((short)uVar13 +
                                                                          (ushort)*pbVar25) >> 1))))
                                                  ))));
                auVar96[8] = (char)uVar8 -
                             (char)((ushort)((ushort)(byte)uVar117 + (ushort)pbVar25[8]) >> 1);
                auVar96[9] = (char)((ulong)uVar8 >> 8) -
                             (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 8) +
                                            (ushort)pbVar25[9]) >> 1);
                auVar96[10] = (char)((ulong)uVar8 >> 0x10) -
                              (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 0x10) +
                                             (ushort)pbVar25[10]) >> 1);
                auVar96[0xb] = (char)((ulong)uVar8 >> 0x18) -
                               (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 0x18) +
                                              (ushort)pbVar25[0xb]) >> 1);
                auVar96[0xc] = (char)((ulong)uVar8 >> 0x20) -
                               (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 0x20) +
                                              (ushort)pbVar25[0xc]) >> 1);
                auVar96[0xd] = (char)((ulong)uVar8 >> 0x28) -
                               (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 0x28) +
                                              (ushort)pbVar25[0xd]) >> 1);
                auVar96[0xe] = (char)((ulong)uVar8 >> 0x30) -
                               (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 0x30) +
                                              (ushort)pbVar25[0xe]) >> 1);
                auVar96[0xf] = (char)((ulong)uVar8 >> 0x38) -
                               (char)((ushort)((ushort)(byte)((ulong)uVar117 >> 0x38) +
                                              (ushort)pbVar25[0xf]) >> 1);
                pbVar42 = pbVar42 + 0x20;
                *(ulong *)(pbVar43 + -8) =
                     CONCAT17((char)((ulong)uVar118 >> 0x38) -
                              (char)((ushort)((ushort)*pbVar20 +
                                             (ushort)(byte)((ulong)uVar11 >> 0x38)) >> 1),
                              CONCAT16((char)((ulong)uVar118 >> 0x30) -
                                       (char)((ushort)((ushort)*pbVar19 +
                                                      (ushort)(byte)((ulong)uVar11 >> 0x30)) >> 1),
                                       CONCAT15((char)((ulong)uVar118 >> 0x28) -
                                                (char)((ushort)((ushort)*pbVar18 +
                                                               (ushort)(byte)((ulong)uVar11 >> 0x28)
                                                               ) >> 1),
                                                CONCAT14((char)((ulong)uVar118 >> 0x20) -
                                                         (char)((ushort)((ushort)*pbVar17 +
                                                                        (ushort)(byte)((ulong)uVar11
                                                                                      >> 0x20)) >> 1
                                                               ),CONCAT13((char)((ulong)uVar118 >>
                                                                                0x18) -
                                                                          (char)((ushort)((ushort)*
                                                  pbVar16 + (ushort)(byte)((ulong)uVar11 >> 0x18))
                                                  >> 1),CONCAT12((char)((ulong)uVar118 >> 0x10) -
                                                                 (char)((ushort)((ushort)*pbVar15 +
                                                                                (ushort)(byte)((
                                                  ulong)uVar11 >> 0x10)) >> 1),
                                                  CONCAT11((char)((ulong)uVar118 >> 8) -
                                                           (char)((ushort)((ushort)*pbVar14 +
                                                                          (ushort)(byte)((ulong)
                                                  uVar11 >> 8)) >> 1),
                                                  (char)uVar118 -
                                                  (char)((ushort)((ushort)*pbVar45 +
                                                                 (ushort)(byte)uVar11) >> 1))))))));
                *(ulong *)(pbVar43 + -0x10) =
                     CONCAT17((char)((ulong)uVar38 >> 0x38) -
                              (char)((ushort)((ushort)bVar71 + (ushort)(byte)((ulong)uVar10 >> 0x38)
                                             ) >> 1),
                              CONCAT16((char)((ulong)uVar38 >> 0x30) -
                                       (char)((ushort)((ushort)bVar66 +
                                                      (ushort)(byte)((ulong)uVar10 >> 0x30)) >> 1),
                                       CONCAT15((char)((ulong)uVar38 >> 0x28) -
                                                (char)((ushort)((ushort)bVar65 +
                                                               (ushort)(byte)((ulong)uVar10 >> 0x28)
                                                               ) >> 1),
                                                CONCAT14((char)((ulong)uVar38 >> 0x20) -
                                                         (char)((ushort)((ushort)bVar64 +
                                                                        (ushort)(byte)((ulong)uVar10
                                                                                      >> 0x20)) >> 1
                                                               ),CONCAT13((char)((ulong)uVar38 >>
                                                                                0x18) -
                                                                          (char)((ushort)((ushort)
                                                  bVar62 + (ushort)(byte)((ulong)uVar10 >> 0x18)) >>
                                                  1),CONCAT12((char)((ulong)uVar38 >> 0x10) -
                                                              (char)((ushort)((ushort)bVar61 +
                                                                             (ushort)(byte)((ulong)
                                                  uVar10 >> 0x10)) >> 1),
                                                  CONCAT11((char)((ulong)uVar38 >> 8) -
                                                           (char)((ushort)((ushort)bVar59 +
                                                                          (ushort)(byte)((ulong)
                                                  uVar10 >> 8)) >> 1),
                                                  (char)uVar38 -
                                                  (char)((ushort)((ushort)bVar58 +
                                                                 (ushort)(byte)uVar10) >> 1))))))));
                *(long *)(pbVar43 + 8) = auVar96._8_8_;
                *(undefined8 *)pbVar43 = auVar96._0_8_;
                pbVar43 = pbVar43 + 0x20;
                pbVar25 = pbVar25 + 0x20;
              } while (uVar53 != 0);
              pbVar44 = pbVar44 + uVar34;
              pbVar26 = pbVar26 + uVar34;
              pbVar28 = pbVar28 + uVar34;
              if (uVar47 == uVar34) goto LAB_010dd928;
            }
          }
        }
        uVar46 = (uint)uVar49;
        do {
          uVar46 = uVar46 + 1;
          *pbVar26 = *pbVar28 - (char)((uint)*pbVar50 + (uint)*pbVar44 >> 1);
          pbVar44 = pbVar44 + 1;
          pbVar26 = pbVar26 + 1;
          pbVar28 = pbVar28 + 1;
          pbVar50 = pbVar50 + 1;
        } while (uVar46 < uVar36);
      }
    }
LAB_010dd928:
    pbVar50 = *(byte **)(param_1 + 0x278);
LAB_010dd934:
    if (-1 < (char)bVar57) goto LAB_010de20c;
    uVar46 = uVar104;
    if (*(char *)(param_1 + 0x3d0) == '\x02') {
      uVar46 = uVar104 & 0xffff;
      uVar39 = uVar104 >> 10 & 0x3fffc0;
      if (bVar2 != 0) {
        uVar47 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar47) == '\x04') {
            uVar29 = (uint)*(ushort *)(*(long *)(param_1 + 1000) + uVar47 * 2);
            uVar46 = uVar46 * uVar29 >> 8;
            uVar39 = uVar39 * uVar29 >> 8;
          }
          uVar47 = uVar47 + 1;
        } while (uVar55 != uVar47);
      }
      uVar29 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f8) + 8);
      uVar39 = uVar39 * uVar29;
      if (uVar39 < 0x1fffe08) {
        uVar46 = (uVar39 * 0x80 & 0xfffffc00) + (uVar46 * uVar29 >> 3);
      }
      else {
        uVar46 = 0x7fffffff;
      }
    }
    lVar48 = *(long *)(param_1 + 0x280);
    pbVar44 = pbVar40 + 1;
    pbVar26 = (byte *)(pcVar41 + 1);
    uVar39 = 0;
    pbVar28 = (byte *)(lVar48 + 1);
    pbVar24 = pbVar44;
    pbVar42 = pbVar26;
    if (uVar30 == 0) {
      uVar37 = 0;
      if (uVar36 != 0) goto LAB_010de114;
    }
    else {
      lVar31 = uVar37 + 1;
      uVar47 = uVar37;
      do {
        bVar57 = *pbVar44;
        bVar58 = *pbVar26;
        uVar47 = uVar47 - 1;
        *pbVar28 = bVar57 - bVar58;
        uVar30 = (uint)(byte)(bVar57 - bVar58);
        if (0x7f < uVar30) {
          uVar30 = 0x100 - uVar30;
        }
        uVar39 = uVar30 + uVar39;
        pbVar26 = pbVar26 + 1;
        pbVar44 = pbVar44 + 1;
        pbVar28 = pbVar28 + 1;
      } while (uVar47 != 0);
      pbVar28 = (byte *)(lVar48 + lVar31);
      pbVar26 = (byte *)(pcVar41 + lVar31);
      pbVar44 = pbVar40 + lVar31;
      for (; uVar37 < uVar36; uVar37 = uVar37 + 1) {
LAB_010de114:
        bVar57 = *pbVar42;
        uVar30 = (uint)*pbVar26;
        iVar22 = uVar30 - bVar57;
        iVar52 = -iVar22;
        if (-1 < iVar22) {
          iVar52 = iVar22;
        }
        iVar3 = (uint)*pbVar24 - (uint)bVar57;
        iVar12 = -iVar3;
        if (-1 < iVar3) {
          iVar12 = iVar3;
        }
        iVar3 = iVar3 + iVar22;
        iVar22 = -iVar3;
        if (-1 < iVar3) {
          iVar22 = iVar3;
        }
        if (iVar22 < iVar12) {
          uVar30 = (uint)bVar57;
        }
        if (iVar52 <= iVar22 && iVar52 <= iVar12) {
          uVar30 = (uint)*pbVar24;
        }
        uVar29 = *pbVar44 - uVar30 & 0xff;
        if (0x7f < uVar29) {
          uVar29 = 0x100 - uVar29;
        }
        uVar39 = uVar29 + uVar39;
        *pbVar28 = (byte)(*pbVar44 - uVar30);
        if (uVar46 < uVar39) break;
        pbVar28 = pbVar28 + 1;
        pbVar44 = pbVar44 + 1;
        pbVar24 = pbVar24 + 1;
        pbVar42 = pbVar42 + 1;
        pbVar26 = pbVar26 + 1;
      }
    }
                    /* try { // try from 010de19c to 011de2d7 has its CatchHandler @ 010de19c
                       catch() { ... } // from try @ 010de19c with catch @ 010de19c
                       catch() { ... } // from try @ 010de2e0 with catch @ 010de19c */
    if (*(char *)(param_1 + 0x3d0) == '\x02') {
      uVar46 = uVar39 & 0xffff;
      uVar30 = uVar39 >> 10 & 0x3fffc0;
      if (bVar2 != 0) {
        uVar37 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3d8) + uVar37) == '\x04') {
            uVar39 = (uint)*(ushort *)(*(long *)(param_1 + 0x3e0) + uVar37 * 2);
            uVar46 = uVar46 * uVar39 >> 8;
            uVar30 = uVar30 * uVar39 >> 8;
          }
          uVar37 = uVar37 + 1;
        } while (uVar55 != uVar37);
      }
      uVar39 = (uint)*(ushort *)(*(long *)(param_1 + 0x3f0) + 8);
      uVar30 = uVar30 * uVar39;
      if (uVar30 < 0x1fffe08) {
        uVar39 = (uVar30 * 0x80 & 0xfffffc00) + (uVar46 * uVar39 >> 3);
      }
      else {
        uVar39 = 0x7fffffff;
      }
    }
    if (uVar104 <= uVar39) goto LAB_010de20c;
  }
LAB_010de208:
  pbVar50 = *(byte **)(param_1 + 0x280);
LAB_010de20c:
  png_compress_IDAT(param_1,pbVar50,*(long *)(param_2 + 8) + 1,0);
  if (*(long *)(param_1 + 600) != 0) {
    uVar38 = *(undefined8 *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = *(long *)(param_1 + 600);
    *(undefined8 *)(param_1 + 600) = uVar38;
  }
  png_write_finish_row(param_1);
  uVar46 = *(int *)(param_1 + 0x2e4) + 1;
  *(uint *)(param_1 + 0x2e4) = uVar46;
  if (*(int *)(param_1 + 0x2e0) - 1U < uVar46) {
    png_write_flush(param_1);
  }
  if (*(char *)(param_1 + 0x3d1) != '\0') {
    if (bVar2 < 2) {
      uVar55 = 1;
    }
    else {
      lVar48 = 0;
      do {
        puVar1 = (undefined1 *)(*(long *)(param_1 + 0x3d8) + lVar48);
        lVar48 = lVar48 + 1;
        puVar1[1] = *puVar1;
      } while (uVar55 - 1 != lVar48);
    }
    *(byte *)(*(long *)(param_1 + 0x3d8) + uVar55) = *pbVar50;
  }
  return;
}

