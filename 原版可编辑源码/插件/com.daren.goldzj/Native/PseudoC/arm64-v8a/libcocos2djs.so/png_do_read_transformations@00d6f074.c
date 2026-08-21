
void png_do_read_transformations(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  undefined2 uVar21;
  long lVar22;
  undefined4 *puVar23;
  undefined2 *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  uint uVar29;
  long lVar30;
  undefined1 *puVar31;
  uint uVar32;
  byte *pbVar33;
  byte *pbVar34;
  long lVar35;
  long lVar36;
  byte *pbVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  byte bVar41;
  uint uVar42;
  byte *pbVar43;
  byte bVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 auVar78 [16];
  undefined1 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint local_40 [4];
  
  lVar16 = *(long *)(param_1 + 0x260);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"NULL row buffer");
  }
  if ((*(uint *)(param_1 + 0x168) & 0x4040) == 0x4000) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"Uninitialized row");
  }
  if ((*(uint *)(param_1 + 0x16c) >> 0xc & 1) != 0) {
    if ((char)param_2[4] == '\x03') {
      bVar44 = *(byte *)((long)param_2 + 0x11);
      lVar22 = *(long *)(param_1 + 0x298);
      lVar30 = *(long *)(param_1 + 0x330);
      uVar13 = *(ushort *)(param_1 + 0x2a8);
      uVar38 = *param_2;
      uVar27 = (ulong)uVar38;
      lVar35 = lVar16 + 1;
      if (bVar44 < 8) {
        if (bVar44 == 1) {
          if (uVar38 != 0) {
            pbVar33 = (byte *)(lVar35 + (ulong)(uVar38 - 1 >> 3));
            uVar39 = uVar27;
            uVar32 = ~(uVar38 + 7) & 7;
            do {
              *(bool *)(lVar16 + uVar39) = (1 << (ulong)(uVar32 & 0x1f) & (uint)*pbVar33) != 0;
              pbVar43 = pbVar33 + -1;
              if (uVar32 != 7) {
                pbVar43 = pbVar33;
              }
              uVar39 = uVar39 - 1;
              uVar29 = 0;
              if (uVar32 != 7) {
                uVar29 = uVar32 + 1;
              }
              pbVar33 = pbVar43;
              uVar32 = uVar29;
            } while ((int)uVar39 != 0);
          }
        }
        else if (bVar44 == 2) {
          if (uVar38 != 0) {
            uVar32 = ~(uVar38 * 2 + 6) & 6;
            pbVar33 = (byte *)(lVar35 + (ulong)(uVar38 - 1 >> 2));
            uVar39 = uVar27;
            do {
              uVar29 = uVar32 + 2;
              bVar12 = uVar32 != 6;
              pbVar43 = pbVar33 + -1;
              if (bVar12) {
                pbVar43 = pbVar33;
              }
              *(byte *)(lVar16 + uVar39) = *pbVar33 >> (ulong)(uVar32 & 0x1f) & 3;
              uVar39 = uVar39 - 1;
              uVar32 = 0;
              if (bVar12) {
                uVar32 = uVar29;
              }
              pbVar33 = pbVar43;
            } while ((int)uVar39 != 0);
          }
        }
        else if ((bVar44 == 4) && (uVar38 != 0)) {
          uVar32 = (uVar38 & 1) << 2;
          pbVar33 = (byte *)(lVar35 + (ulong)(uVar38 - 1 >> 1));
          uVar39 = uVar27;
          do {
            uVar29 = uVar32 + 4;
            bVar12 = uVar32 != 4;
            pbVar43 = pbVar33 + -1;
            if (bVar12) {
              pbVar43 = pbVar33;
            }
            *(byte *)(lVar16 + uVar39) = *pbVar33 >> (ulong)(uVar32 & 0x1f) & 0xf;
            uVar39 = uVar39 - 1;
            uVar32 = 0;
            if (bVar12) {
              uVar32 = uVar29;
            }
            pbVar33 = pbVar43;
          } while ((int)uVar39 != 0);
        }
        *(undefined1 *)((long)param_2 + 0x11) = 8;
        *(undefined1 *)((long)param_2 + 0x13) = 8;
        *(ulong *)(param_2 + 2) = uVar27;
      }
      else if (bVar44 != 8) goto LAB_00d6f328;
      if (uVar13 == 0) {
        uVar39 = (ulong)(uVar38 * 3);
        if (uVar38 != 0) {
          puVar31 = (undefined1 *)(lVar35 + uVar39 + -1);
          do {
            *puVar31 = *(undefined1 *)(lVar22 + (ulong)*(byte *)(lVar16 + uVar27) * 3 + 2);
            puVar31[-1] = *(undefined1 *)(lVar22 + (ulong)*(byte *)(lVar16 + uVar27) * 3 + 1);
            pbVar33 = (byte *)(lVar16 + uVar27);
            uVar27 = uVar27 - 1;
            puVar31[-2] = *(undefined1 *)(lVar22 + (ulong)*pbVar33 * 3);
            puVar31 = puVar31 + -3;
          } while ((int)uVar27 != 0);
        }
        uVar45 = 3;
        uVar46 = 2;
        uVar47 = 0x18;
      }
      else {
        uVar39 = (ulong)(uVar38 << 2);
        if (uVar38 != 0) {
          puVar31 = (undefined1 *)(lVar35 + uVar39 + -1);
          do {
            if (*(byte *)(lVar16 + uVar27) < uVar13) {
              uVar45 = *(undefined1 *)(lVar30 + (ulong)*(byte *)(lVar16 + uVar27));
            }
            else {
              uVar45 = 0xff;
            }
            *puVar31 = uVar45;
            puVar31[-1] = *(undefined1 *)(lVar22 + (ulong)*(byte *)(lVar16 + uVar27) * 3 + 2);
            puVar31[-2] = *(undefined1 *)(lVar22 + (ulong)*(byte *)(lVar16 + uVar27) * 3 + 1);
            pbVar33 = (byte *)(lVar16 + uVar27);
            uVar27 = uVar27 - 1;
            puVar31[-3] = *(undefined1 *)(lVar22 + (ulong)*pbVar33 * 3);
            puVar31 = puVar31 + -4;
          } while ((int)uVar27 != 0);
        }
        uVar45 = 4;
        uVar46 = 6;
        uVar47 = 0x20;
      }
      *(undefined1 *)((long)param_2 + 0x13) = uVar47;
      *(ulong *)(param_2 + 2) = uVar39;
      *(undefined1 *)(param_2 + 4) = uVar46;
      *(undefined1 *)((long)param_2 + 0x11) = 8;
      *(undefined1 *)((long)param_2 + 0x12) = uVar45;
    }
    else {
      if (((*(uint *)(param_1 + 0x16c) >> 0x19 & 1) == 0) || (*(short *)(param_1 + 0x2a8) == 0)) {
        lVar35 = 0;
      }
      else {
        lVar35 = param_1 + 0x338;
      }
      FUN_00d71b68(param_2,lVar16 + 1,lVar35);
    }
  }
LAB_00d6f328:
  uVar38 = *(uint *)(param_1 + 0x16c);
  if (((uVar38 & 0x40080) == 0x40000) && ((byte)((byte)param_2[4] | 2) == 6)) {
    png_do_strip_channel(param_2,*(long *)(param_1 + 0x260) + 1,0);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if (((uVar38 & 0x600000) != 0) && (bVar44 = (byte)param_2[4], (bVar44 & 3) == 2)) {
    uVar13 = *(ushort *)(param_1 + 0x44a);
    uVar6 = *(ushort *)(param_1 + 0x44c);
    uVar38 = *param_2;
    uVar27 = (ulong)uVar38;
    pbVar33 = (byte *)(*(long *)(param_1 + 0x260) + 1);
    iVar15 = (0x8000 - (uint)uVar13) - (uint)uVar6;
    uVar32 = (uint)uVar13;
    uVar25 = (uint)uVar6;
    uVar29 = (uint)uVar13;
    uVar26 = (uint)uVar6;
    if (*(char *)((long)param_2 + 0x11) == '\b') {
      lVar16 = *(long *)(param_1 + 0x300);
      if ((lVar16 == 0) || (lVar35 = *(long *)(param_1 + 0x308), lVar35 == 0)) {
        if (uVar38 == 0) goto LAB_00d6f640;
        if ((bVar44 >> 2 & 1) == 0) {
          bVar12 = false;
          uVar39 = uVar27;
          pbVar43 = pbVar33;
          do {
            bVar44 = *pbVar33;
            if (((uint)bVar44 != (uint)pbVar33[1]) || ((uint)bVar44 != (uint)pbVar33[2])) {
              bVar12 = true;
              bVar44 = (byte)(bVar44 * uVar32 + pbVar33[1] * uVar25 + iVar15 * (uint)pbVar33[2] >>
                             0xf);
            }
            *pbVar43 = bVar44;
            uVar38 = (int)uVar39 - 1;
            uVar39 = (ulong)uVar38;
            pbVar33 = pbVar33 + 3;
            pbVar43 = pbVar43 + 1;
          } while (uVar38 != 0);
        }
        else {
          bVar12 = false;
          uVar39 = uVar27;
          pbVar43 = pbVar33;
          do {
            bVar44 = *pbVar33;
            if (((uint)bVar44 != (uint)pbVar33[1]) || ((uint)bVar44 != (uint)pbVar33[2])) {
              bVar12 = true;
              bVar44 = (byte)(bVar44 * uVar29 + pbVar33[1] * uVar26 + iVar15 * (uint)pbVar33[2] >>
                             0xf);
            }
            *pbVar43 = bVar44;
            pbVar19 = pbVar33 + 3;
            uVar38 = (int)uVar39 - 1;
            uVar39 = (ulong)uVar38;
            pbVar33 = pbVar33 + 4;
            pbVar43[1] = *pbVar19;
            pbVar43 = pbVar43 + 2;
          } while (uVar38 != 0);
        }
      }
      else if (uVar38 == 0) {
LAB_00d6f640:
        bVar12 = false;
      }
      else if ((bVar44 >> 2 & 1) == 0) {
        bVar12 = false;
        pbVar43 = pbVar33;
        do {
          bVar44 = *pbVar33;
          if ((bVar44 == pbVar33[1]) && (bVar44 == pbVar33[2])) {
            if (*(long *)(param_1 + 0x2f0) != 0) {
              pbVar19 = (byte *)(*(long *)(param_1 + 0x2f0) + (ulong)bVar44);
              goto LAB_00d6f774;
            }
          }
          else {
            bVar12 = true;
            pbVar19 = (byte *)(lVar16 + (ulong)(*(byte *)(lVar35 + (ulong)pbVar33[1]) * uVar25 +
                                                *(byte *)(lVar35 + (ulong)bVar44) * uVar32 +
                                                iVar15 * (uint)*(byte *)(lVar35 + (ulong)pbVar33[2])
                                                + 0x4000 >> 0xf));
LAB_00d6f774:
            bVar44 = *pbVar19;
          }
          *pbVar43 = bVar44;
          uVar38 = uVar38 - 1;
          pbVar33 = pbVar33 + 3;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
      }
      else {
        bVar12 = false;
        uVar39 = uVar27;
        pbVar43 = pbVar33;
        do {
          bVar44 = *pbVar33;
          if ((bVar44 == pbVar33[1]) && (bVar44 == pbVar33[2])) {
            if (*(long *)(param_1 + 0x2f0) != 0) {
              pbVar19 = (byte *)(*(long *)(param_1 + 0x2f0) + (ulong)bVar44);
              goto LAB_00d6f424;
            }
          }
          else {
            bVar12 = true;
            pbVar19 = (byte *)(lVar16 + (ulong)(*(byte *)(lVar35 + (ulong)pbVar33[1]) * uVar25 +
                                                *(byte *)(lVar35 + (ulong)bVar44) * uVar32 +
                                                iVar15 * (uint)*(byte *)(lVar35 + (ulong)pbVar33[2])
                                                + 0x4000 >> 0xf));
LAB_00d6f424:
            bVar44 = *pbVar19;
          }
          *pbVar43 = bVar44;
          pbVar19 = pbVar33 + 3;
          uVar38 = (int)uVar39 - 1;
          uVar39 = (ulong)uVar38;
          pbVar33 = pbVar33 + 4;
          pbVar43[1] = *pbVar19;
          pbVar43 = pbVar43 + 2;
        } while (uVar38 != 0);
      }
    }
    else {
      lVar16 = *(long *)(param_1 + 0x318);
      if ((lVar16 == 0) || (lVar35 = *(long *)(param_1 + 0x310), lVar35 == 0)) {
        if (uVar38 == 0) goto LAB_00d6f640;
        if ((bVar44 >> 2 & 1) == 0) {
          bVar12 = false;
          pbVar43 = pbVar33;
          do {
            uVar25 = (uint)CONCAT11(*pbVar43,pbVar43[1]);
            uVar32 = CONCAT11(pbVar43[2],pbVar43[3]) * uVar26 + uVar25 * uVar29 +
                     (uint)CONCAT11(pbVar43[4],pbVar43[5]) * iVar15 + 0x4000;
            bVar12 = (bool)(bVar12 | (uVar25 != CONCAT11(pbVar43[2],pbVar43[3]) ||
                                     uVar25 != CONCAT11(pbVar43[4],pbVar43[5])));
            uVar38 = uVar38 - 1;
            pbVar43 = pbVar43 + 6;
            *pbVar33 = (byte)(uVar32 >> 0x17);
            pbVar33[1] = (byte)(uVar32 >> 0xf);
            pbVar33 = pbVar33 + 2;
          } while (uVar38 != 0);
        }
        else {
          bVar12 = false;
          pbVar43 = pbVar33;
          do {
            bVar44 = pbVar43[2];
            bVar41 = pbVar43[3];
            bVar3 = pbVar43[4];
            bVar4 = pbVar43[5];
            uVar26 = (uint)CONCAT11(*pbVar43,pbVar43[1]);
            uVar29 = CONCAT11(bVar44,bVar41) * uVar25 + uVar26 * uVar32 +
                     (uint)CONCAT11(bVar3,bVar4) * iVar15 + 0x4000;
            *pbVar33 = (byte)(uVar29 >> 0x17);
            pbVar33[1] = (byte)(uVar29 >> 0xf);
            pbVar33[2] = pbVar43[6];
            pbVar19 = pbVar43 + 7;
            uVar38 = uVar38 - 1;
            bVar12 = (bool)(bVar12 | (uVar26 != CONCAT11(bVar44,bVar41) ||
                                     uVar26 != CONCAT11(bVar3,bVar4)));
            pbVar43 = pbVar43 + 8;
            pbVar33[3] = *pbVar19;
            pbVar33 = pbVar33 + 4;
          } while (uVar38 != 0);
        }
      }
      else {
        if (uVar38 == 0) goto LAB_00d6f640;
        if ((bVar44 >> 2 & 1) == 0) {
          bVar12 = false;
          pbVar43 = pbVar33;
          do {
            bVar44 = pbVar33[1];
            bVar41 = *pbVar33;
            uVar14 = (ushort)bVar44;
            if ((CONCAT11(bVar41,bVar44) == CONCAT11(pbVar33[2],pbVar33[3])) &&
               (CONCAT11(bVar41,bVar44) == CONCAT11(pbVar33[4],pbVar33[5]))) {
              if (*(long *)(param_1 + 0x2f8) != 0) {
                uVar14 = *(ushort *)
                          (*(long *)(*(long *)(param_1 + 0x2f8) +
                                    (long)(int)(uint)(bVar44 >>
                                                     (ulong)(*(uint *)(param_1 + 0x2e8) & 0x1f)) * 8
                                    ) + (ulong)bVar41 * 2);
                goto LAB_00d6f844;
              }
            }
            else {
              uVar29 = *(uint *)(param_1 + 0x2e8);
              bVar12 = true;
              uVar32 = (uint)*(ushort *)
                              (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[3] >>
                                                                   (ulong)(uVar29 & 0x1f)) * 8) +
                              (ulong)pbVar33[2] * 2) * (uint)uVar6 +
                       (uint)*(ushort *)
                              (*(long *)(lVar16 + (long)(int)(uint)(bVar44 >> (ulong)(uVar29 & 0x1f)
                                                                   ) * 8) + (ulong)bVar41 * 2) *
                       (uint)uVar13 +
                       iVar15 * (uint)*(ushort *)
                                       (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[5] >>
                                                                            (ulong)(uVar29 & 0x1f))
                                                           * 8) + (ulong)pbVar33[4] * 2) + 0x4000;
              uVar14 = *(ushort *)
                        (*(long *)(lVar35 + (long)(int)((uVar32 >> 0xf & 0xff) >>
                                                       (ulong)(uVar29 & 0x1f)) * 8) +
                        (ulong)(uVar32 >> 0x17 & 0xff) * 2);
LAB_00d6f844:
              bVar41 = (byte)(uVar14 >> 8);
            }
            *pbVar43 = bVar41;
            pbVar43[1] = (byte)uVar14;
            uVar38 = uVar38 - 1;
            pbVar33 = pbVar33 + 6;
            pbVar43 = pbVar43 + 2;
          } while (uVar38 != 0);
        }
        else {
          bVar12 = false;
          pbVar43 = pbVar33;
          do {
            bVar44 = pbVar33[1];
            bVar41 = *pbVar33;
            uVar13 = (ushort)bVar44;
            if ((CONCAT11(bVar41,bVar44) == CONCAT11(pbVar33[2],pbVar33[3])) &&
               (CONCAT11(bVar41,bVar44) == CONCAT11(pbVar33[4],pbVar33[5]))) {
              if (*(long *)(param_1 + 0x2f8) != 0) {
                uVar13 = *(ushort *)
                          (*(long *)(*(long *)(param_1 + 0x2f8) +
                                    (long)(int)(uint)(bVar44 >>
                                                     (ulong)(*(uint *)(param_1 + 0x2e8) & 0x1f)) * 8
                                    ) + (ulong)bVar41 * 2);
                goto LAB_00d6f518;
              }
            }
            else {
              uVar25 = *(uint *)(param_1 + 0x2e8);
              bVar12 = true;
              uVar32 = *(ushort *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[3] >> (ulong)(uVar25 & 0x1f))
                                            * 8) + (ulong)pbVar33[2] * 2) * uVar26 +
                       *(ushort *)
                        (*(long *)(lVar16 + (long)(int)(uint)(bVar44 >> (ulong)(uVar25 & 0x1f)) * 8)
                        + (ulong)bVar41 * 2) * uVar29 +
                       iVar15 * (uint)*(ushort *)
                                       (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[5] >>
                                                                            (ulong)(uVar25 & 0x1f))
                                                           * 8) + (ulong)pbVar33[4] * 2) + 0x4000;
              uVar13 = *(ushort *)
                        (*(long *)(lVar35 + (long)(int)((uVar32 >> 0xf & 0xff) >>
                                                       (ulong)(uVar25 & 0x1f)) * 8) +
                        (ulong)(uVar32 >> 0x17 & 0xff) * 2);
LAB_00d6f518:
              bVar41 = (byte)(uVar13 >> 8);
            }
            *pbVar43 = bVar41;
            pbVar43[1] = (byte)uVar13;
            uVar38 = uVar38 - 1;
            pbVar43[2] = pbVar33[6];
            pbVar19 = pbVar33 + 7;
            pbVar33 = pbVar33 + 8;
            pbVar43[3] = *pbVar19;
            pbVar43 = pbVar43 + 4;
          } while (uVar38 != 0);
        }
      }
    }
    bVar44 = *(char *)((long)param_2 + 0x11) * (*(char *)((long)param_2 + 0x12) + -2);
    *(byte *)(param_2 + 4) = (byte)param_2[4] & 0xfd;
    *(byte *)((long)param_2 + 0x13) = bVar44;
    *(char *)((long)param_2 + 0x12) = *(char *)((long)param_2 + 0x12) + -2;
    if ((bVar44 & 0xf8) < 8) {
      *(ulong *)(param_2 + 2) = bVar44 * uVar27 + 7 >> 3;
    }
    else {
      *(ulong *)(param_2 + 2) = (bVar44 >> 3) * uVar27;
    }
    if (bVar12) {
      uVar38 = *(uint *)(param_1 + 0x16c);
      *(undefined1 *)(param_1 + 0x448) = 1;
      if ((uVar38 & 0x600000) == 0x400000) {
        png_warning(param_1,"png_do_rgb_to_gray found nongray pixel");
        uVar38 = *(uint *)(param_1 + 0x16c);
      }
      if ((uVar38 & 0x600000) == 0x200000) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"png_do_rgb_to_gray found nongray pixel");
      }
    }
    else {
      uVar38 = *(uint *)(param_1 + 0x16c);
    }
  }
  if (((uVar38 >> 0xe & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 3 & 1) == 0)) {
    FUN_00d71f98(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if (((uVar38 >> 7 & 1) != 0) && ((byte)param_2[4] < 7)) {
    pbVar43 = *(byte **)(param_1 + 0x260);
    lVar16 = *(long *)(param_1 + 0x2f0);
    lVar40 = *(long *)(param_1 + 0x300);
    lVar30 = *(long *)(param_1 + 0x308);
    lVar35 = *(long *)(param_1 + 0x2f8);
    lVar36 = *(long *)(param_1 + 0x310);
    lVar22 = *(long *)(param_1 + 0x318);
    uVar38 = *(uint *)(param_1 + 0x2e8);
    uVar32 = *param_2;
    pbVar33 = pbVar43 + 1;
    uVar29 = *(uint *)(param_1 + 0x168) >> 0xd & 1;
    switch((byte)param_2[4]) {
    case 0:
      switch(*(undefined1 *)((long)param_2 + 0x11)) {
      case 1:
        if (uVar32 != 0) {
          uVar13 = *(ushort *)(param_1 + 0x340);
          uVar38 = 7;
          do {
            if ((*pbVar33 >> (ulong)(uVar38 & 0x1f) & 1) == uVar13) {
              *pbVar33 = (char)*(undefined2 *)(param_1 + 0x2c8) << (ulong)(uVar38 & 0x1f) |
                         (byte)(0x7f7f >> (ulong)(7 - uVar38 & 0x1f)) & *pbVar33;
            }
            bVar12 = uVar38 == 0;
            uVar32 = uVar32 - 1;
            uVar38 = uVar38 - 1;
            if (bVar12) {
              pbVar33 = pbVar33 + 1;
              uVar38 = 7;
            }
          } while (uVar32 != 0);
        }
        break;
      case 2:
        if (lVar16 == 0) {
          if (uVar32 != 0) {
            uVar13 = *(ushort *)(param_1 + 0x340);
            uVar38 = 6;
            do {
              if ((*pbVar33 >> (ulong)(uVar38 & 0x1f) & 3) == uVar13) {
                *pbVar33 = (char)*(undefined2 *)(param_1 + 0x2c8) << (ulong)(uVar38 & 0x1f) |
                           (byte)(0x3f3f >> (ulong)(6 - uVar38 & 0x1f)) & *pbVar33;
              }
              bVar12 = uVar38 == 0;
              uVar32 = uVar32 - 1;
              uVar38 = uVar38 - 2;
              if (bVar12) {
                pbVar33 = pbVar33 + 1;
                uVar38 = 6;
              }
            } while (uVar32 != 0);
          }
        }
        else if (uVar32 != 0) {
          uVar13 = *(ushort *)(param_1 + 0x340);
          uVar38 = 6;
          do {
            uVar29 = *pbVar33 >> (ulong)(uVar38 & 0x1f) & 3;
            if (uVar29 == uVar13) {
              bVar41 = (byte)(0x3f3f >> (ulong)(6 - uVar38 & 0x1f));
              bVar44 = (char)*(undefined2 *)(param_1 + 0x2c8) << (ulong)(uVar38 & 0x1f);
            }
            else {
              bVar41 = (byte)(0x3f3f >> (ulong)(6 - uVar38 & 0x1f));
              bVar44 = (*(byte *)(lVar16 + (ulong)(uVar29 | uVar29 << 2 | uVar29 << 4 | uVar29 << 6)
                                 ) >> 6) << (ulong)(uVar38 & 0x1f);
            }
            uVar29 = uVar38 - 2;
            bVar12 = uVar38 != 0;
            *pbVar33 = bVar44 | bVar41 & *pbVar33;
            pbVar43 = pbVar33 + 1;
            uVar38 = 6;
            if (bVar12) {
              pbVar43 = pbVar33;
              uVar38 = uVar29;
            }
            uVar32 = uVar32 - 1;
            pbVar33 = pbVar43;
          } while (uVar32 != 0);
        }
        break;
      case 4:
        if (lVar16 == 0) {
          if (uVar32 != 0) {
            uVar13 = *(ushort *)(param_1 + 0x340);
            uVar38 = 4;
            do {
              if ((*pbVar33 >> (ulong)(uVar38 & 0x1f) & 0xf) == uVar13) {
                *pbVar33 = (char)*(undefined2 *)(param_1 + 0x2c8) << (ulong)(uVar38 & 0x1f) |
                           (byte)(0xf0f >> (ulong)(4 - uVar38 & 0x1f)) & *pbVar33;
              }
              bVar12 = uVar38 == 0;
              uVar32 = uVar32 - 1;
              uVar38 = uVar38 - 4;
              if (bVar12) {
                pbVar33 = pbVar33 + 1;
                uVar38 = 4;
              }
            } while (uVar32 != 0);
          }
        }
        else if (uVar32 != 0) {
          uVar13 = *(ushort *)(param_1 + 0x340);
          uVar38 = 4;
          do {
            uVar29 = *pbVar33 >> (ulong)(uVar38 & 0x1f) & 0xf;
            if (uVar29 == uVar13) {
              bVar41 = (byte)(0xf0f >> (ulong)(4 - uVar38 & 0x1f));
              bVar44 = (char)*(undefined2 *)(param_1 + 0x2c8) << (ulong)(uVar38 & 0x1f);
            }
            else {
              bVar41 = (byte)(0xf0f >> (ulong)(4 - uVar38 & 0x1f));
              bVar44 = (*(byte *)(lVar16 + (ulong)(uVar29 | uVar29 << 4)) >> 4) <<
                       (ulong)(uVar38 & 0x1f);
            }
            uVar29 = uVar38 - 4;
            bVar12 = uVar38 != 0;
            *pbVar33 = bVar44 | bVar41 & *pbVar33;
            pbVar43 = pbVar33 + 1;
            uVar38 = 4;
            if (bVar12) {
              pbVar43 = pbVar33;
              uVar38 = uVar29;
            }
            uVar32 = uVar32 - 1;
            pbVar33 = pbVar43;
          } while (uVar32 != 0);
        }
        break;
      case 8:
        if (lVar16 == 0) {
          if (uVar32 != 0) {
            uVar13 = *(ushort *)(param_1 + 0x340);
            do {
              if (*pbVar33 == uVar13) {
                *pbVar33 = *(byte *)(param_1 + 0x2c8);
              }
              uVar32 = uVar32 - 1;
              pbVar33 = pbVar33 + 1;
            } while (uVar32 != 0);
          }
        }
        else if (uVar32 != 0) {
          uVar13 = *(ushort *)(param_1 + 0x340);
          do {
            if (*pbVar33 == uVar13) {
              bVar44 = *(byte *)(param_1 + 0x2c8);
            }
            else {
              bVar44 = *(byte *)(lVar16 + (ulong)*pbVar33);
            }
            uVar32 = uVar32 - 1;
            *pbVar33 = bVar44;
            pbVar33 = pbVar33 + 1;
          } while (uVar32 != 0);
        }
        break;
      case 0x10:
        if (lVar35 == 0) {
          if (uVar32 != 0) {
            sVar7 = *(short *)(param_1 + 0x340);
            do {
              pbVar33 = pbVar43 + 2;
              if (CONCAT11(pbVar43[1],*pbVar33) == sVar7) {
                uVar21 = *(undefined2 *)(param_1 + 0x2c8);
                pbVar43[1] = (byte)((ushort)uVar21 >> 8);
                *pbVar33 = (byte)uVar21;
              }
              uVar32 = uVar32 - 1;
              pbVar43 = pbVar33;
            } while (uVar32 != 0);
          }
        }
        else if (uVar32 != 0) {
          sVar7 = *(short *)(param_1 + 0x340);
          do {
            puVar24 = (undefined2 *)(param_1 + 0x2c8);
            if (CONCAT11(*pbVar33,pbVar33[1]) != sVar7) {
              puVar24 = (undefined2 *)
                        (*(long *)(lVar35 + (long)(int)(uint)(pbVar33[1] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)*pbVar33 * 2);
            }
            uVar21 = *puVar24;
            uVar32 = uVar32 - 1;
            pbVar33[1] = (byte)uVar21;
            *pbVar33 = (byte)((ushort)uVar21 >> 8);
            pbVar33 = pbVar33 + 2;
          } while (uVar32 != 0);
        }
      }
      break;
    case 2:
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (lVar16 == 0) {
          if (uVar32 != 0) {
            uVar13 = *(ushort *)(param_1 + 0x33a);
            do {
              pbVar33 = pbVar43 + 3;
              if (((pbVar43[1] == uVar13) && ((ushort)pbVar43[2] == *(ushort *)(param_1 + 0x33c)))
                 && ((ushort)*pbVar33 == *(ushort *)(param_1 + 0x33e))) {
                pbVar43[1] = *(byte *)(param_1 + 0x2c2);
                pbVar43[2] = *(byte *)(param_1 + 0x2c4);
                *pbVar33 = *(byte *)(param_1 + 0x2c6);
              }
              uVar32 = uVar32 - 1;
              pbVar43 = pbVar33;
            } while (uVar32 != 0);
          }
        }
        else if (uVar32 != 0) {
          uVar13 = *(ushort *)(param_1 + 0x33a);
          do {
            pbVar19 = pbVar43 + 3;
            if (((pbVar43[1] == uVar13) && ((ushort)pbVar43[2] == *(ushort *)(param_1 + 0x33c))) &&
               ((ushort)*pbVar19 == *(ushort *)(param_1 + 0x33e))) {
              pbVar43[1] = *(byte *)(param_1 + 0x2c2);
              pbVar43[2] = *(byte *)(param_1 + 0x2c4);
              bVar44 = *(byte *)(param_1 + 0x2c6);
              pbVar43 = pbVar19;
            }
            else {
              pbVar43[1] = *(byte *)(lVar16 + (ulong)pbVar43[1]);
              pbVar43[2] = *(byte *)(lVar16 + (ulong)pbVar43[2]);
              bVar44 = *(byte *)(lVar16 + (ulong)*pbVar19);
              pbVar43 = pbVar33 + 2;
            }
            pbVar33 = pbVar33 + 3;
            uVar32 = uVar32 - 1;
            *pbVar43 = bVar44;
            pbVar43 = pbVar19;
          } while (uVar32 != 0);
        }
      }
      else if (lVar35 == 0) {
        if (uVar32 != 0) {
          sVar7 = *(short *)(param_1 + 0x33a);
          pbVar43 = pbVar43 + 3;
          do {
            if (((CONCAT11(pbVar43[-2],pbVar43[-1]) == sVar7) &&
                (CONCAT11(*pbVar43,pbVar43[1]) == *(short *)(param_1 + 0x33c))) &&
               (CONCAT11(pbVar43[2],pbVar43[3]) == *(short *)(param_1 + 0x33e))) {
              uVar21 = *(undefined2 *)(param_1 + 0x2c2);
              pbVar43[-1] = (byte)uVar21;
              pbVar43[-2] = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)(param_1 + 0x2c4);
              pbVar43[1] = (byte)uVar21;
              *pbVar43 = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)(param_1 + 0x2c6);
              pbVar43[2] = (byte)((ushort)uVar21 >> 8);
              pbVar43[3] = (byte)uVar21;
            }
            uVar32 = uVar32 - 1;
            pbVar43 = pbVar43 + 6;
          } while (uVar32 != 0);
        }
      }
      else if (uVar32 != 0) {
        sVar7 = *(short *)(param_1 + 0x33a);
        pbVar43 = pbVar43 + 3;
        do {
          if (CONCAT11(pbVar43[-2],pbVar43[-1]) == sVar7) {
            uVar29 = (uint)pbVar43[1];
            uVar27 = (ulong)*pbVar43;
            if ((CONCAT11(*pbVar43,pbVar43[1]) != *(short *)(param_1 + 0x33c)) ||
               (CONCAT11(pbVar43[2],pbVar43[3]) != *(short *)(param_1 + 0x33e))) goto LAB_00d6ff28;
            uVar21 = *(undefined2 *)(param_1 + 0x2c2);
            pbVar43[-1] = (byte)uVar21;
            pbVar43[-2] = (byte)((ushort)uVar21 >> 8);
            uVar21 = *(undefined2 *)(param_1 + 0x2c4);
            pbVar43[1] = (byte)uVar21;
            *pbVar43 = (byte)((ushort)uVar21 >> 8);
            puVar24 = (undefined2 *)(param_1 + 0x2c6);
          }
          else {
            uVar29 = (uint)pbVar43[1];
            uVar27 = (ulong)*pbVar43;
LAB_00d6ff28:
            uVar21 = *(undefined2 *)
                      (*(long *)(lVar35 + (long)(int)(uint)(pbVar43[-1] >> (ulong)(uVar38 & 0x1f)) *
                                          8) + (ulong)pbVar43[-2] * 2);
            pbVar43[-1] = (byte)uVar21;
            pbVar43[-2] = (byte)((ushort)uVar21 >> 8);
            uVar21 = *(undefined2 *)
                      (*(long *)(lVar35 + (long)(int)(uVar29 >> (ulong)(uVar38 & 0x1f)) * 8) +
                      uVar27 * 2);
            pbVar43[1] = (byte)uVar21;
            *pbVar43 = (byte)((ushort)uVar21 >> 8);
            puVar24 = (undefined2 *)
                      (*(long *)(lVar35 + (long)(int)(uint)(pbVar43[3] >> (ulong)(uVar38 & 0x1f)) *
                                          8) + (ulong)pbVar43[2] * 2);
          }
          uVar21 = *puVar24;
          uVar32 = uVar32 - 1;
          pbVar43[3] = (byte)uVar21;
          pbVar43[2] = (byte)((ushort)uVar21 >> 8);
          pbVar43 = pbVar43 + 6;
        } while (uVar32 != 0);
      }
      break;
    case 4:
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (((lVar16 == 0) || (lVar40 == 0)) || (lVar30 == 0)) {
          for (; uVar32 != 0; uVar32 = uVar32 - 1) {
            bVar44 = pbVar33[1];
            if (bVar44 != 0xff) {
              if (bVar44 == 0) {
                bVar44 = *(byte *)(param_1 + 0x2c8);
              }
              else {
                uVar38 = (bVar44 ^ 0xff) * (uint)*(ushort *)(param_1 + 0x2c8) +
                         (uint)*pbVar33 * (uint)bVar44 + 0x80;
                bVar44 = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
              }
              *pbVar33 = bVar44;
            }
            pbVar33 = pbVar33 + 2;
          }
        }
        else if (uVar32 != 0) {
          if (uVar29 == 0) {
            do {
              bVar44 = pbVar33[1];
              if (bVar44 == 0xff) {
                bVar44 = *(byte *)(lVar16 + (ulong)*pbVar33);
              }
              else if (bVar44 == 0) {
                bVar44 = *(byte *)(param_1 + 0x2c8);
              }
              else {
                uVar38 = (bVar44 ^ 0xff) * (uint)*(ushort *)(param_1 + 0x2d2) +
                         (uint)*(byte *)(lVar30 + (ulong)*pbVar33) * (uint)bVar44 + 0x80;
                bVar44 = *(byte *)(lVar40 + (ulong)(uVar38 + (uVar38 >> 8 & 0xff) >> 8 & 0xff));
              }
              uVar32 = uVar32 - 1;
              *pbVar33 = bVar44;
              pbVar33 = pbVar33 + 2;
            } while (uVar32 != 0);
          }
          else {
            do {
              bVar44 = pbVar33[1];
              if (bVar44 == 0) {
                bVar44 = *(byte *)(param_1 + 0x2c8);
              }
              else if (bVar44 == 0xff) {
                bVar44 = *(byte *)(lVar16 + (ulong)*pbVar33);
              }
              else {
                uVar38 = (bVar44 ^ 0xff) * (uint)*(ushort *)(param_1 + 0x2d2) +
                         (uint)*(byte *)(lVar30 + (ulong)*pbVar33) * (uint)bVar44 + 0x80;
                bVar44 = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
              }
              uVar32 = uVar32 - 1;
              *pbVar33 = bVar44;
              pbVar33 = pbVar33 + 2;
            } while (uVar32 != 0);
          }
        }
      }
      else if (((lVar35 == 0) || (lVar36 == 0)) || (lVar22 == 0)) {
        if (uVar32 != 0) {
          pbVar43 = pbVar43 + 2;
          do {
            uVar38 = (uint)CONCAT11(pbVar43[1],pbVar43[2]);
            if (uVar38 != 0xffff) {
              if (uVar38 == 0) {
                uVar21 = *(undefined2 *)(param_1 + 0x2c8);
                pbVar43[-1] = (byte)((ushort)uVar21 >> 8);
                *pbVar43 = (byte)uVar21;
              }
              else {
                uVar38 = CONCAT11(pbVar43[-1],*pbVar43) * uVar38 +
                         (uVar38 ^ 0xffff) * (uint)*(ushort *)(param_1 + 0x2c8) + 0x8000;
                iVar15 = uVar38 + (uVar38 >> 0x10);
                pbVar43[-1] = (byte)((uint)iVar15 >> 0x18);
                *pbVar43 = (byte)((uint)iVar15 >> 0x10);
              }
            }
            uVar32 = uVar32 - 1;
            pbVar43 = pbVar43 + 4;
          } while (uVar32 != 0);
        }
      }
      else if (uVar32 != 0) {
        if ((*(uint *)(param_1 + 0x168) >> 0xd & 1) == 0) {
          pbVar33 = pbVar43 + 2;
          do {
            uVar29 = (uint)CONCAT11(pbVar33[1],pbVar33[2]);
            if (uVar29 == 0xffff) {
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar35 + (long)(int)(uint)(*pbVar33 >> (ulong)(uVar38 & 0x1f)) *
                                            8) + (ulong)pbVar33[-1] * 2);
            }
            else if (uVar29 == 0) {
              uVar21 = *(undefined2 *)(param_1 + 0x2c8);
            }
            else {
              uVar29 = (uVar29 ^ 0xffff) * (uint)*(ushort *)(param_1 + 0x2d2) +
                       uVar29 * *(ushort *)
                                 (*(long *)(lVar22 + (long)(int)(uint)(*pbVar33 >>
                                                                      (ulong)(uVar38 & 0x1f)) * 8) +
                                 (ulong)pbVar33[-1] * 2) + 0x8000;
              uVar29 = uVar29 + (uVar29 >> 0x10);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar36 + (long)(int)((uVar29 >> 0x10 & 0xff) >>
                                                       (ulong)(uVar38 & 0x1f)) * 8) +
                        (ulong)(uVar29 >> 0x18) * 2);
            }
            pbVar33[-1] = (byte)((ushort)uVar21 >> 8);
            *pbVar33 = (byte)uVar21;
            uVar32 = uVar32 - 1;
            pbVar33 = pbVar33 + 4;
          } while (uVar32 != 0);
        }
        else {
          pbVar43 = pbVar43 + 2;
          do {
            uVar29 = (uint)CONCAT11(pbVar43[1],pbVar43[2]);
            if (uVar29 == 0) {
              uVar21 = *(undefined2 *)(param_1 + 0x2c8);
LAB_00d710d4:
              pbVar43[-1] = (byte)((ushort)uVar21 >> 8);
              *pbVar43 = (byte)uVar21;
            }
            else {
              if (uVar29 == 0xffff) {
                uVar21 = *(undefined2 *)
                          (*(long *)(lVar35 + (long)(int)(uint)(*pbVar43 >> (ulong)(uVar38 & 0x1f))
                                              * 8) + (ulong)pbVar43[-1] * 2);
                goto LAB_00d710d4;
              }
              uVar29 = (uVar29 ^ 0xffff) * (uint)*(ushort *)(param_1 + 0x2d2) +
                       uVar29 * *(ushort *)
                                 (*(long *)(lVar22 + (long)(int)(uint)(*pbVar43 >>
                                                                      (ulong)(uVar38 & 0x1f)) * 8) +
                                 (ulong)pbVar43[-1] * 2) + 0x8000;
              iVar15 = uVar29 + (uVar29 >> 0x10);
              pbVar43[-1] = (byte)((uint)iVar15 >> 0x18);
              *pbVar43 = (byte)((uint)iVar15 >> 0x10);
            }
            uVar32 = uVar32 - 1;
            pbVar43 = pbVar43 + 4;
          } while (uVar32 != 0);
        }
      }
      break;
    case 6:
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (((lVar16 == 0) || (lVar40 == 0)) || (lVar30 == 0)) {
          if (uVar32 != 0) {
            pbVar43 = pbVar43 + 2;
            do {
              bVar44 = pbVar43[2];
              if (bVar44 != 0xff) {
                if (bVar44 == 0) {
                  pbVar43[-1] = *(byte *)(param_1 + 0x2c2);
                  *pbVar43 = *(byte *)(param_1 + 0x2c4);
                  bVar44 = *(byte *)(param_1 + 0x2c6);
                }
                else {
                  uVar26 = (uint)bVar44;
                  uVar29 = uVar26 ^ 0xff;
                  uVar38 = uVar29 * *(ushort *)(param_1 + 0x2c2) + pbVar43[-1] * uVar26 + 0x80;
                  pbVar43[-1] = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
                  uVar38 = uVar29 * *(ushort *)(param_1 + 0x2c4) + *pbVar43 * uVar26 + 0x80;
                  *pbVar43 = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
                  uVar38 = uVar29 * *(ushort *)(param_1 + 0x2c6) + pbVar43[1] * uVar26 + 0x80;
                  bVar44 = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
                }
                pbVar43[1] = bVar44;
              }
              uVar32 = uVar32 - 1;
              pbVar43 = pbVar43 + 4;
            } while (uVar32 != 0);
          }
        }
        else if (uVar32 != 0) {
          if (uVar29 == 0) {
            pbVar43 = pbVar43 + 2;
            do {
              bVar44 = pbVar43[2];
              if (bVar44 == 0xff) {
                pbVar43[-1] = *(byte *)(lVar16 + (ulong)pbVar43[-1]);
                *pbVar43 = *(byte *)(lVar16 + (ulong)*pbVar43);
                bVar44 = *(byte *)(lVar16 + (ulong)pbVar43[1]);
              }
              else if (bVar44 == 0) {
                pbVar43[-1] = *(byte *)(param_1 + 0x2c2);
                *pbVar43 = *(byte *)(param_1 + 0x2c4);
                bVar44 = *(byte *)(param_1 + 0x2c6);
              }
              else {
                uVar26 = (uint)bVar44;
                uVar29 = uVar26 ^ 0xff;
                uVar38 = uVar29 * *(ushort *)(param_1 + 0x2cc) +
                         *(byte *)(lVar30 + (ulong)pbVar43[-1]) * uVar26 + 0x80;
                pbVar43[-1] = *(byte *)(lVar40 + (ulong)(uVar38 + (uVar38 >> 8 & 0xff) >> 8 & 0xff))
                ;
                uVar38 = uVar29 * *(ushort *)(param_1 + 0x2ce) +
                         *(byte *)(lVar30 + (ulong)*pbVar43) * uVar26 + 0x80;
                *pbVar43 = *(byte *)(lVar40 + (ulong)(uVar38 + (uVar38 >> 8 & 0xff) >> 8 & 0xff));
                uVar38 = uVar29 * *(ushort *)(param_1 + 0x2d0) +
                         *(byte *)(lVar30 + (ulong)pbVar43[1]) * uVar26 + 0x80;
                bVar44 = *(byte *)(lVar40 + (ulong)(uVar38 + (uVar38 >> 8 & 0xff) >> 8 & 0xff));
              }
              pbVar43[1] = bVar44;
              uVar32 = uVar32 - 1;
              pbVar43 = pbVar43 + 4;
            } while (uVar32 != 0);
          }
          else {
            pbVar43 = pbVar43 + 2;
            do {
              bVar44 = pbVar43[2];
              if (bVar44 == 0) {
                pbVar43[-1] = *(byte *)(param_1 + 0x2c2);
                *pbVar43 = *(byte *)(param_1 + 0x2c4);
                bVar44 = *(byte *)(param_1 + 0x2c6);
              }
              else if (bVar44 == 0xff) {
                pbVar43[-1] = *(byte *)(lVar16 + (ulong)pbVar43[-1]);
                *pbVar43 = *(byte *)(lVar16 + (ulong)*pbVar43);
                bVar44 = *(byte *)(lVar16 + (ulong)pbVar43[1]);
              }
              else {
                uVar26 = (uint)bVar44;
                uVar29 = uVar26 ^ 0xff;
                uVar38 = uVar29 * *(ushort *)(param_1 + 0x2cc) +
                         *(byte *)(lVar30 + (ulong)pbVar43[-1]) * uVar26 + 0x80;
                pbVar43[-1] = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
                uVar38 = uVar29 * *(ushort *)(param_1 + 0x2ce) +
                         *(byte *)(lVar30 + (ulong)*pbVar43) * uVar26 + 0x80;
                *pbVar43 = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
                uVar38 = uVar29 * *(ushort *)(param_1 + 0x2d0) +
                         *(byte *)(lVar30 + (ulong)pbVar43[1]) * uVar26 + 0x80;
                bVar44 = (byte)(uVar38 + (uVar38 >> 8 & 0xff) >> 8);
              }
              pbVar43[1] = bVar44;
              uVar32 = uVar32 - 1;
              pbVar43 = pbVar43 + 4;
            } while (uVar32 != 0);
          }
        }
      }
      else if (((lVar35 == 0) || (lVar36 == 0)) || (lVar22 == 0)) {
        if (uVar32 != 0) {
          pbVar43 = pbVar43 + 4;
          do {
            uVar38 = (uint)CONCAT11(pbVar43[3],pbVar43[4]);
            if (uVar38 != 0xffff) {
              if (uVar38 == 0) {
                uVar21 = *(undefined2 *)(param_1 + 0x2c2);
                pbVar43[-2] = (byte)uVar21;
                pbVar43[-3] = (byte)((ushort)uVar21 >> 8);
                uVar21 = *(undefined2 *)(param_1 + 0x2c4);
                *pbVar43 = (byte)uVar21;
                pbVar43[-1] = (byte)((ushort)uVar21 >> 8);
                uVar21 = *(undefined2 *)(param_1 + 0x2c6);
                pbVar43[1] = (byte)((ushort)uVar21 >> 8);
                pbVar43[2] = (byte)uVar21;
              }
              else {
                uVar26 = uVar38 ^ 0xffff;
                uVar29 = uVar26 * *(ushort *)(param_1 + 0x2c2) +
                         CONCAT11(pbVar43[-3],pbVar43[-2]) * uVar38 + 0x8000;
                iVar15 = uVar29 + (uVar29 >> 0x10);
                pbVar43[-3] = (byte)((uint)iVar15 >> 0x18);
                pbVar43[-2] = (byte)((uint)iVar15 >> 0x10);
                uVar29 = uVar26 * *(ushort *)(param_1 + 0x2c4) +
                         CONCAT11(pbVar43[-1],*pbVar43) * uVar38 + 0x8000;
                iVar15 = uVar29 + (uVar29 >> 0x10);
                pbVar43[-1] = (byte)((uint)iVar15 >> 0x18);
                *pbVar43 = (byte)((uint)iVar15 >> 0x10);
                uVar38 = uVar26 * *(ushort *)(param_1 + 0x2c6) +
                         CONCAT11(pbVar43[1],pbVar43[2]) * uVar38 + 0x8000;
                iVar15 = uVar38 + (uVar38 >> 0x10);
                pbVar43[1] = (byte)((uint)iVar15 >> 0x18);
                pbVar43[2] = (byte)((uint)iVar15 >> 0x10);
              }
            }
            uVar32 = uVar32 - 1;
            pbVar43 = pbVar43 + 8;
          } while (uVar32 != 0);
        }
      }
      else if (uVar32 != 0) {
        pbVar43 = pbVar43 + 4;
        do {
          uVar26 = (uint)CONCAT11(pbVar43[3],pbVar43[4]);
          if (uVar26 == 0) {
            uVar21 = *(undefined2 *)(param_1 + 0x2c2);
            pbVar43[-2] = (byte)uVar21;
            pbVar43[-3] = (byte)((ushort)uVar21 >> 8);
            uVar21 = *(undefined2 *)(param_1 + 0x2c4);
            *pbVar43 = (byte)uVar21;
            pbVar43[-1] = (byte)((ushort)uVar21 >> 8);
            uVar21 = *(undefined2 *)(param_1 + 0x2c6);
LAB_00d700dc:
            pbVar43[1] = (byte)((ushort)uVar21 >> 8);
            pbVar43[2] = (byte)uVar21;
          }
          else {
            if (uVar26 == 0xffff) {
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar35 + (long)(int)(uint)(pbVar43[-2] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)pbVar43[-3] * 2);
              pbVar43[-2] = (byte)uVar21;
              pbVar43[-3] = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar35 + (long)(int)(uint)(*pbVar43 >> (ulong)(uVar38 & 0x1f)) *
                                            8) + (ulong)pbVar43[-1] * 2);
              *pbVar43 = (byte)uVar21;
              pbVar43[-1] = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar35 + (long)(int)(uint)(pbVar43[2] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)pbVar43[1] * 2);
              goto LAB_00d700dc;
            }
            uVar1 = uVar26 ^ 0xffff;
            uVar25 = uVar1 * *(ushort *)(param_1 + 0x2cc) +
                     uVar26 * *(ushort *)
                               (*(long *)(lVar22 + (long)(int)(uint)(pbVar43[-2] >>
                                                                    (ulong)(uVar38 & 0x1f)) * 8) +
                               (ulong)pbVar43[-3] * 2) + 0x8000;
            uVar25 = uVar25 + (uVar25 >> 0x10);
            uVar42 = uVar25 >> 0x18;
            if (uVar29 == 0) {
              uVar13 = *(ushort *)
                        (*(long *)(lVar36 + (long)(int)((uVar25 >> 0x10 & 0xff) >>
                                                       (ulong)(uVar38 & 0x1f)) * 8) +
                        (ulong)uVar42 * 2);
              bVar44 = (byte)uVar13;
              uVar42 = (uint)(uVar13 >> 8);
            }
            else {
              bVar44 = (byte)(uVar25 >> 0x10);
            }
            pbVar43[-3] = (byte)uVar42;
            pbVar43[-2] = bVar44;
            uVar25 = uVar1 * *(ushort *)(param_1 + 0x2ce) +
                     uVar26 * *(ushort *)
                               (*(long *)(lVar22 + (long)(int)(uint)(*pbVar43 >>
                                                                    (ulong)(uVar38 & 0x1f)) * 8) +
                               (ulong)pbVar43[-1] * 2) + 0x8000;
            uVar25 = uVar25 + (uVar25 >> 0x10);
            uVar42 = uVar25 >> 0x18;
            if (uVar29 == 0) {
              uVar13 = *(ushort *)
                        (*(long *)(lVar36 + (long)(int)((uVar25 >> 0x10 & 0xff) >>
                                                       (ulong)(uVar38 & 0x1f)) * 8) +
                        (ulong)uVar42 * 2);
              bVar44 = (byte)uVar13;
              uVar42 = (uint)(uVar13 >> 8);
            }
            else {
              bVar44 = (byte)(uVar25 >> 0x10);
            }
            pbVar43[-1] = (byte)uVar42;
            *pbVar43 = bVar44;
            uVar26 = uVar1 * *(ushort *)(param_1 + 0x2d0) +
                     uVar26 * *(ushort *)
                               (*(long *)(lVar22 + (long)(int)(uint)(pbVar43[2] >>
                                                                    (ulong)(uVar38 & 0x1f)) * 8) +
                               (ulong)pbVar43[1] * 2) + 0x8000;
            uVar26 = uVar26 + (uVar26 >> 0x10);
            uVar25 = uVar26 >> 0x18;
            if (uVar29 == 0) {
              uVar13 = *(ushort *)
                        (*(long *)(lVar36 + (long)(int)((uVar26 >> 0x10 & 0xff) >>
                                                       (ulong)(uVar38 & 0x1f)) * 8) +
                        (ulong)uVar25 * 2);
              bVar44 = (byte)uVar13;
              uVar25 = (uint)(uVar13 >> 8);
            }
            else {
              bVar44 = (byte)(uVar26 >> 0x10);
            }
            pbVar43[1] = (byte)uVar25;
            pbVar43[2] = bVar44;
          }
          uVar32 = uVar32 - 1;
          pbVar43 = pbVar43 + 8;
        } while (uVar32 != 0);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x16c) & 0x602000) == 0x2000) {
    if ((*(uint *)(param_1 + 0x16c) >> 7 & 1) == 0) {
      bVar44 = *(byte *)(param_1 + 0x2af);
    }
    else if ((*(short *)(param_1 + 0x2a8) != 0) ||
            (bVar44 = *(byte *)(param_1 + 0x2af), (bVar44 >> 2 & 1) != 0))
    goto switchD_00d6f984_caseD_1;
    if (bVar44 != 3) {
      pbVar33 = *(byte **)(param_1 + 0x260);
      uVar38 = *(uint *)(param_1 + 0x2e8);
      lVar35 = *(long *)(param_1 + 0x2f0);
      lVar16 = *(long *)(param_1 + 0x2f8);
      uVar32 = *param_2;
      bVar44 = *(byte *)((long)param_2 + 0x11);
      if ((((lVar35 != 0) && (bVar44 < 9)) || ((lVar16 != 0 && (bVar44 == 0x10)))) &&
         ((byte)param_2[4] < 7)) {
        pbVar43 = pbVar33 + 1;
        switch((byte)param_2[4]) {
        case 0:
          if (bVar44 == 2) {
            if (uVar32 == 0) break;
            uVar29 = 0;
            pbVar19 = pbVar43;
            do {
              bVar44 = *pbVar19;
              uVar29 = uVar29 + 4;
              uVar26 = bVar44 & 0x30;
              uVar25 = bVar44 & 0xc;
              uVar1 = bVar44 & 0xc0;
              uVar8 = uVar25 >> 2;
              uVar42 = bVar44 & 3;
              *pbVar19 = *(byte *)(lVar35 + (ulong)(uVar26 | (uVar26 >> 4) << 6 | uVar26 >> 2 |
                                                   bVar44 >> 4 & 3)) >> 2 & 0x30 |
                         *(byte *)(lVar35 + (ulong)(uVar1 | bVar44 >> 6 | uVar1 >> 2 | uVar1 >> 4))
                         & 0xc0 | *(byte *)(lVar35 + (ulong)(uVar25 | uVar8 << 4 | uVar8 << 6 |
                                                            bVar44 >> 2 & 3)) >> 4 & 0xc |
                         *(byte *)(lVar35 + (ulong)(uVar42 << 4 | uVar42 << 6 | uVar42 | uVar42 << 2
                                                   )) >> 6;
              pbVar19 = pbVar19 + 1;
            } while (uVar29 < uVar32);
            bVar44 = *(byte *)((long)param_2 + 0x11);
          }
          if (bVar44 == 4) {
            if (uVar32 != 0) {
              uVar38 = 0;
              do {
                bVar44 = *pbVar43;
                uVar38 = uVar38 + 2;
                uVar29 = bVar44 & 0xf;
                *pbVar43 = *(byte *)(lVar35 + (ulong)(bVar44 & 0xf0 | (uint)(bVar44 >> 4))) & 0xf0 |
                           *(byte *)(lVar35 + (ulong)(uVar29 | uVar29 << 4)) >> 4;
                pbVar43 = pbVar43 + 1;
              } while (uVar38 < uVar32);
            }
          }
          else if (bVar44 == 8) {
            for (; uVar32 != 0; uVar32 = uVar32 - 1) {
              *pbVar43 = *(byte *)(lVar35 + (ulong)*pbVar43);
              pbVar43 = pbVar43 + 1;
            }
          }
          else if (bVar44 == 0x10) {
            for (; uVar32 != 0; uVar32 = uVar32 - 1) {
              pbVar43 = pbVar33 + 2;
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(*pbVar43 >> (ulong)(uVar38 & 0x1f)) *
                                            8) + (ulong)pbVar33[1] * 2);
              *pbVar43 = (byte)uVar21;
              pbVar33[1] = (byte)((ushort)uVar21 >> 8);
              pbVar33 = pbVar43;
            }
          }
          break;
        case 2:
          if (bVar44 == 8) {
            for (; uVar32 != 0; uVar32 = uVar32 - 1) {
              *pbVar43 = *(byte *)(lVar35 + (ulong)*pbVar43);
              pbVar43[1] = *(byte *)(lVar35 + (ulong)pbVar43[1]);
              pbVar43[2] = *(byte *)(lVar35 + (ulong)pbVar43[2]);
              pbVar43 = pbVar43 + 3;
            }
          }
          else if (uVar32 != 0) {
            pbVar33 = pbVar33 + 3;
            do {
              uVar32 = uVar32 - 1;
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[-1] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)pbVar33[-2] * 2);
              pbVar33[-1] = (byte)uVar21;
              pbVar33[-2] = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[1] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)*pbVar33 * 2);
              pbVar33[1] = (byte)uVar21;
              *pbVar33 = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[3] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)pbVar33[2] * 2);
              pbVar33[3] = (byte)uVar21;
              pbVar33[2] = (byte)((ushort)uVar21 >> 8);
              pbVar33 = pbVar33 + 6;
            } while (uVar32 != 0);
          }
          break;
        case 4:
          if (bVar44 == 8) {
            for (; uVar32 != 0; uVar32 = uVar32 - 1) {
              *pbVar43 = *(byte *)(lVar35 + (ulong)*pbVar43);
              pbVar43 = pbVar43 + 2;
            }
          }
          else if (uVar32 != 0) {
            pbVar33 = pbVar33 + 2;
            do {
              uVar32 = uVar32 - 1;
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(*pbVar33 >> (ulong)(uVar38 & 0x1f)) *
                                            8) + (ulong)pbVar33[-1] * 2);
              *pbVar33 = (byte)uVar21;
              pbVar33[-1] = (byte)((ushort)uVar21 >> 8);
              pbVar33 = pbVar33 + 4;
            } while (uVar32 != 0);
          }
          break;
        case 6:
          if (bVar44 == 8) {
            for (; uVar32 != 0; uVar32 = uVar32 - 1) {
              *pbVar43 = *(byte *)(lVar35 + (ulong)*pbVar43);
              pbVar43[1] = *(byte *)(lVar35 + (ulong)pbVar43[1]);
              pbVar43[2] = *(byte *)(lVar35 + (ulong)pbVar43[2]);
              pbVar43 = pbVar43 + 4;
            }
          }
          else if (uVar32 != 0) {
            pbVar33 = pbVar33 + 3;
            do {
              uVar32 = uVar32 - 1;
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[-1] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)pbVar33[-2] * 2);
              pbVar33[-1] = (byte)uVar21;
              pbVar33[-2] = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[1] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)*pbVar33 * 2);
              pbVar33[1] = (byte)uVar21;
              *pbVar33 = (byte)((ushort)uVar21 >> 8);
              uVar21 = *(undefined2 *)
                        (*(long *)(lVar16 + (long)(int)(uint)(pbVar33[3] >> (ulong)(uVar38 & 0x1f))
                                            * 8) + (ulong)pbVar33[2] * 2);
              pbVar33[3] = (byte)uVar21;
              pbVar33[2] = (byte)((ushort)uVar21 >> 8);
              pbVar33 = pbVar33 + 8;
            } while (uVar32 != 0);
          }
        }
      }
    }
  }
switchD_00d6f984_caseD_1:
  uVar38 = *(uint *)(param_1 + 0x16c);
  if ((((uVar38 ^ 0xffffffff) & 0x40080) == 0) && ((byte)((byte)param_2[4] | 2) == 6)) {
    png_do_strip_channel(param_2,*(long *)(param_1 + 0x260) + 1,0);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if (((uVar38 >> 0x17 & 1) == 0) || (bVar44 = (byte)param_2[4], (bVar44 >> 2 & 1) == 0))
  goto LAB_00d7025c;
  if ((bVar44 >> 2 & 1) == 0) {
LAB_00d7024c:
    png_warning(param_1,"png_do_encode_alpha: unexpected call");
  }
  else {
    pbVar33 = *(byte **)(param_1 + 0x260);
    uVar38 = *param_2;
    if (*(char *)((long)param_2 + 0x11) == '\x10') {
      lVar16 = *(long *)(param_1 + 0x310);
      if (lVar16 == 0) goto LAB_00d7024c;
      if (uVar38 != 0) {
        uVar32 = *(uint *)(param_1 + 0x2e8);
        do {
          pbVar33 = pbVar33 + ((bVar44 & 2) * 2 + 4);
          uVar38 = uVar38 - 1;
          uVar21 = *(undefined2 *)
                    (*(long *)(lVar16 + (long)(int)(uint)(*pbVar33 >> (ulong)(uVar32 & 0x1f)) * 8) +
                    (ulong)pbVar33[-1] * 2);
          *pbVar33 = (byte)uVar21;
          pbVar33[-1] = (byte)((ushort)uVar21 >> 8);
        } while (uVar38 != 0);
      }
    }
    else {
      if ((*(char *)((long)param_2 + 0x11) != '\b') ||
         (lVar16 = *(long *)(param_1 + 0x300), lVar16 == 0)) goto LAB_00d7024c;
      if (uVar38 != 0) {
        pbVar33 = pbVar33 + (ulong)(bVar44 & 2 | 1) + 1;
        do {
          uVar38 = uVar38 - 1;
          *pbVar33 = *(byte *)(lVar16 + (ulong)*pbVar33);
          pbVar33 = pbVar33 + ((bVar44 & 2) + 2);
        } while (uVar38 != 0);
      }
    }
  }
LAB_00d7025c:
  uVar38 = *(uint *)(param_1 + 0x16c);
  if (((uVar38 >> 0x1a & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\x10')) {
    if (0 < *(long *)(param_2 + 2)) {
      pbVar33 = (byte *)(*(long *)(param_1 + 0x260) + 1);
      pbVar43 = pbVar33 + *(long *)(param_2 + 2);
      pbVar19 = pbVar33;
      do {
        bVar44 = *pbVar33;
        pbVar34 = pbVar33 + 1;
        pbVar33 = pbVar33 + 2;
        *pbVar19 = bVar44 + (char)(((uint)*pbVar34 - (uint)bVar44) * 0xffff + 0x7fff80 >> 0x18);
        pbVar19 = pbVar19 + 1;
      } while (pbVar33 < pbVar43);
      uVar38 = *(uint *)(param_1 + 0x16c);
    }
    *(undefined1 *)((long)param_2 + 0x11) = 8;
    *(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_2 + 0x12) << 3;
    *(ulong *)(param_2 + 2) = (ulong)(*param_2 * (uint)*(byte *)((long)param_2 + 0x12));
  }
  if (((uVar38 >> 10 & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\x10')) {
    lVar16 = *(long *)(param_2 + 2);
    if (0 < lVar16) {
      puVar31 = (undefined1 *)(*(long *)(param_1 + 0x260) + 1);
      puVar28 = puVar31;
      puVar18 = puVar31;
      do {
        puVar17 = puVar28 + 2;
        *puVar18 = *puVar28;
        puVar28 = puVar17;
        puVar18 = puVar18 + 1;
      } while (puVar17 < puVar31 + lVar16);
      uVar38 = *(uint *)(param_1 + 0x16c);
    }
    *(undefined1 *)((long)param_2 + 0x11) = 8;
    *(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_2 + 0x12) << 3;
    *(ulong *)(param_2 + 2) = (ulong)(*param_2 * (uint)*(byte *)((long)param_2 + 0x12));
  }
  if ((uVar38 >> 6 & 1) != 0) {
    if (*(char *)((long)param_2 + 0x11) == '\b') {
      uVar38 = *param_2;
      uVar27 = (ulong)uVar38;
      lVar16 = *(long *)(param_1 + 0x3c0);
      lVar35 = *(long *)(param_1 + 0x3c8);
      cVar5 = (char)param_2[4];
      pbVar33 = (byte *)(*(long *)(param_1 + 0x260) + 1);
      if ((lVar16 == 0) || (cVar5 != '\x02')) {
        if ((lVar16 == 0) || (cVar5 != '\x06')) {
          if (((uVar38 != 0) && (lVar35 != 0)) && (cVar5 == '\x03')) {
            do {
              uVar38 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar38;
              *pbVar33 = *(byte *)(lVar35 + (ulong)*pbVar33);
              pbVar33 = pbVar33 + 1;
            } while (uVar38 != 0);
          }
          goto LAB_00d7048c;
        }
        uVar39 = uVar27;
        pbVar43 = pbVar33;
        if (uVar38 == 0) goto LAB_00d70408;
        do {
          bVar44 = *pbVar33;
          pbVar19 = pbVar33 + 1;
          pbVar34 = pbVar33 + 2;
          uVar38 = (int)uVar39 - 1;
          pbVar33 = pbVar33 + 4;
          *pbVar43 = *(byte *)(lVar16 + (ulong)((bVar44 & 0xf8) << 7 | (uint)(*pbVar19 >> 3) << 5 |
                                               (uint)(*pbVar34 >> 3)));
          uVar39 = (ulong)uVar38;
          pbVar43 = pbVar43 + 1;
        } while (uVar38 != 0);
LAB_00d70400:
        uVar39 = (ulong)*(byte *)((long)param_2 + 0x11);
      }
      else {
        uVar39 = uVar27;
        pbVar43 = pbVar33;
        if (uVar38 != 0) {
          do {
            bVar44 = *pbVar33;
            pbVar19 = pbVar33 + 1;
            pbVar34 = pbVar33 + 2;
            uVar38 = (int)uVar39 - 1;
            pbVar33 = pbVar33 + 3;
            *pbVar43 = *(byte *)(lVar16 + (ulong)((bVar44 & 0xf8) << 7 | (uint)(*pbVar19 >> 3) << 5
                                                 | (uint)(*pbVar34 >> 3)));
            uVar39 = (ulong)uVar38;
            pbVar43 = pbVar43 + 1;
          } while (uVar38 != 0);
          goto LAB_00d70400;
        }
LAB_00d70408:
        uVar39 = 8;
      }
      *(undefined1 *)(param_2 + 4) = 3;
      *(undefined1 *)((long)param_2 + 0x12) = 1;
      *(char *)((long)param_2 + 0x13) = (char)uVar39;
      if ((uint)uVar39 < 8) {
        *(ulong *)(param_2 + 2) = uVar39 * uVar27 + 7 >> 3;
        lVar16 = *(long *)(param_2 + 2);
      }
      else {
        *(ulong *)(param_2 + 2) = (uVar39 >> 3) * uVar27;
        lVar16 = *(long *)(param_2 + 2);
      }
    }
    else {
LAB_00d7048c:
      lVar16 = *(long *)(param_2 + 2);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"png_do_quantize returned rowbytes=0");
    }
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if ((((uVar38 >> 9 & 1) != 0) && (*(char *)((long)param_2 + 0x11) == '\b')) &&
     ((char)param_2[4] != '\x03')) {
    lVar16 = *(long *)(param_2 + 2);
    if (0 < lVar16) {
      puVar31 = (undefined1 *)(*(long *)(param_1 + 0x260) + 1 + lVar16 * 2);
      puVar28 = (undefined1 *)(*(long *)(param_1 + 0x260) + lVar16);
      do {
        uVar45 = *puVar28;
        puVar18 = puVar31 + -2;
        *puVar18 = uVar45;
        puVar31[-1] = uVar45;
        bVar12 = puVar28 < puVar18;
        puVar31 = puVar18;
        puVar28 = puVar28 + -1;
      } while (bVar12);
      lVar16 = *(long *)(param_2 + 2);
      uVar38 = *(uint *)(param_1 + 0x16c);
    }
    *(long *)(param_2 + 2) = lVar16 << 1;
    *(undefined1 *)((long)param_2 + 0x11) = 0x10;
    *(char *)((long)param_2 + 0x13) = *(char *)((long)param_2 + 0x12) << 4;
  }
  if (((uVar38 >> 0xe & 1) != 0) && ((*(byte *)(param_1 + 0x165) >> 3 & 1) != 0)) {
    FUN_00d71f98(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar38 >> 5 & 1) != 0) {
    png_do_invert(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar38 >> 0x13 & 1) != 0) {
    lVar16 = *(long *)(param_1 + 0x260);
    uVar38 = *param_2;
    if ((char)param_2[4] == '\x04') {
      lVar35 = *(long *)(param_2 + 2);
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar38 != 0) {
          uVar27 = (ulong)(uVar38 - 1) + 1;
          lVar22 = lVar16 + 1 + lVar35;
          if (uVar27 < 2) {
            lVar30 = 0;
          }
          else {
            uVar32 = ~(uVar38 - 1) & 1;
            lVar30 = uVar27 - uVar32;
            if (lVar30 != 0) {
              lVar22 = lVar22 + lVar30 * -2;
              pbVar33 = (byte *)(lVar16 + lVar35);
              lVar16 = lVar30;
              do {
                lVar16 = lVar16 + -2;
                *pbVar33 = ~*pbVar33;
                pbVar33[-2] = ~pbVar33[-2];
                pbVar33 = pbVar33 + -4;
              } while (lVar16 != 0);
              if (uVar32 == 0) goto LAB_00d706f4;
            }
          }
          iVar15 = uVar38 - (int)lVar30;
          pbVar33 = (byte *)(lVar22 + -1);
          do {
            iVar15 = iVar15 + -1;
            *pbVar33 = ~*pbVar33;
            pbVar33 = pbVar33 + -2;
          } while (iVar15 != 0);
        }
      }
      else if (uVar38 != 0) {
        pbVar33 = (byte *)(lVar16 + lVar35);
        do {
          uVar38 = uVar38 - 1;
          *pbVar33 = ~*pbVar33;
          pbVar33[-1] = ~pbVar33[-1];
          pbVar33 = pbVar33 + -4;
        } while (uVar38 != 0);
      }
    }
    else if ((char)param_2[4] == '\x06') {
      lVar35 = *(long *)(param_2 + 2);
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar38 != 0) {
          uVar27 = (ulong)(uVar38 - 1) + 1;
          lVar22 = lVar16 + 1 + lVar35;
          if (uVar27 < 2) {
            lVar30 = 0;
          }
          else {
            uVar32 = ~(uVar38 - 1) & 1;
            lVar30 = uVar27 - uVar32;
            if (lVar30 != 0) {
              lVar22 = lVar22 + lVar30 * -4;
              pbVar33 = (byte *)(lVar16 + lVar35);
              lVar16 = lVar30;
              do {
                lVar16 = lVar16 + -2;
                *pbVar33 = ~*pbVar33;
                pbVar33[-4] = ~pbVar33[-4];
                pbVar33 = pbVar33 + -8;
              } while (lVar16 != 0);
              if (uVar32 == 0) goto LAB_00d706f4;
            }
          }
          iVar15 = uVar38 - (int)lVar30;
          pbVar33 = (byte *)(lVar22 + -1);
          do {
            iVar15 = iVar15 + -1;
            *pbVar33 = ~*pbVar33;
            pbVar33 = pbVar33 + -4;
          } while (iVar15 != 0);
        }
      }
      else if (uVar38 != 0) {
        pbVar33 = (byte *)(lVar16 + lVar35);
        do {
          uVar38 = uVar38 - 1;
          *pbVar33 = ~*pbVar33;
          pbVar33[-1] = ~pbVar33[-1];
          pbVar33 = pbVar33 + -8;
        } while (uVar38 != 0);
      }
    }
  }
LAB_00d706f4:
  uVar38 = *(uint *)(param_1 + 0x16c);
  if (((uVar38 >> 3 & 1) != 0) && (bVar44 = (byte)param_2[4], bVar44 != 3)) {
    uVar27 = *(ulong *)(param_1 + 0x260);
    bVar41 = *(byte *)((long)param_2 + 0x11);
    if ((bVar44 >> 1 & 1) == 0) {
      lVar16 = 0;
      pbVar33 = (byte *)(param_1 + 0x328);
      uVar38 = 1;
    }
    else {
      pbVar33 = (byte *)(param_1 + 0x327);
      uVar38 = 3;
      local_40[0] = (uint)bVar41 - (uint)*(byte *)(param_1 + 0x325);
      local_40[1] = (uint)bVar41 - (uint)*(byte *)(param_1 + 0x326);
      lVar16 = 2;
    }
    pbVar43 = (byte *)(uVar27 + 1);
    uVar29 = (uint)bVar41;
    local_40[lVar16] = uVar29 - *pbVar33;
    uVar32 = uVar38;
    if ((bVar44 >> 2 & 1) != 0) {
      uVar32 = uVar38 + 1;
      local_40[uVar38] = uVar29 - *(byte *)(param_1 + 0x329);
    }
    lVar16 = 0;
    bVar12 = false;
    do {
      if (((int)local_40[lVar16] < 1) || ((int)uVar29 <= (int)local_40[lVar16])) {
        local_40[lVar16] = 0;
      }
      else {
        bVar12 = true;
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uVar32);
    if (bVar12) {
      switch(bVar41 - 2 >> 1 | (uint)bVar41 << 0x1f) {
      case 0:
        if (0 < *(long *)(param_2 + 2)) {
          pbVar33 = pbVar43 + *(long *)(param_2 + 2);
          pbVar19 = pbVar33;
          if (pbVar33 <= (byte *)(uVar27 + 2)) {
            pbVar19 = (byte *)(uVar27 + 2);
          }
          pbVar19 = pbVar19 + ~uVar27;
          if (((byte *)0x1f < pbVar19) &&
             (pbVar34 = (byte *)((ulong)pbVar19 & 0xffffffffffffffe0), pbVar34 != (byte *)0x0)) {
            pbVar43 = pbVar43 + (long)pbVar34;
            pbVar20 = (byte *)(uVar27 + 0x11);
            pbVar37 = pbVar34;
            do {
              uVar11 = *(undefined8 *)(pbVar20 + -8);
              uVar10 = *(undefined8 *)(pbVar20 + -0x10);
              pbVar37 = pbVar37 + -0x20;
              *(ulong *)(pbVar20 + -8) =
                   CONCAT17((byte)((ulong)uVar11 >> 0x39),
                            CONCAT16((byte)((ulong)uVar11 >> 0x30) >> 1,
                                     CONCAT15((byte)((ulong)uVar11 >> 0x28) >> 1,
                                              CONCAT14((byte)((ulong)uVar11 >> 0x20) >> 1,
                                                       CONCAT13((byte)((ulong)uVar11 >> 0x18) >> 1,
                                                                CONCAT12((byte)((ulong)uVar11 >>
                                                                               0x10) >> 1,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar11 >> 8) >> 1,(byte)uVar11 >> 1))))))) &
                   0x5555555555555555;
              *(ulong *)(pbVar20 + -0x10) =
                   CONCAT17((byte)((ulong)uVar10 >> 0x39),
                            CONCAT16((byte)((ulong)uVar10 >> 0x30) >> 1,
                                     CONCAT15((byte)((ulong)uVar10 >> 0x28) >> 1,
                                              CONCAT14((byte)((ulong)uVar10 >> 0x20) >> 1,
                                                       CONCAT13((byte)((ulong)uVar10 >> 0x18) >> 1,
                                                                CONCAT12((byte)((ulong)uVar10 >>
                                                                               0x10) >> 1,
                                                                         CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) >> 1,(byte)uVar10 >> 1))))))) &
                   0x5555555555555555;
              pbVar20[8] = pbVar20[8] >> 1 & 0x55;
              pbVar20[9] = pbVar20[9] >> 1 & 0x55;
              pbVar20[10] = pbVar20[10] >> 1 & 0x55;
              pbVar20[0xb] = pbVar20[0xb] >> 1 & 0x55;
              pbVar20[0xc] = pbVar20[0xc] >> 1 & 0x55;
              pbVar20[0xd] = pbVar20[0xd] >> 1 & 0x55;
              pbVar20[0xe] = pbVar20[0xe] >> 1 & 0x55;
              pbVar20[0xf] = pbVar20[0xf] >> 1 & 0x55;
              *pbVar20 = *pbVar20 >> 1 & 0x55;
              pbVar20[1] = pbVar20[1] >> 1 & 0x55;
              pbVar20[2] = pbVar20[2] >> 1 & 0x55;
              pbVar20[3] = pbVar20[3] >> 1 & 0x55;
              pbVar20[4] = pbVar20[4] >> 1 & 0x55;
              pbVar20[5] = pbVar20[5] >> 1 & 0x55;
              pbVar20[6] = pbVar20[6] >> 1 & 0x55;
              pbVar20[7] = pbVar20[7] >> 1 & 0x55;
              pbVar20 = pbVar20 + 0x20;
            } while (pbVar37 != (byte *)0x0);
            if (pbVar34 == pbVar19) break;
          }
          do {
            pbVar19 = pbVar43 + 1;
            *pbVar43 = *pbVar43 >> 1 & 0x55;
            pbVar43 = pbVar19;
          } while (pbVar19 < pbVar33);
        }
        break;
      case 1:
        if (0 < *(long *)(param_2 + 2)) {
          pbVar33 = pbVar43 + *(long *)(param_2 + 2);
          pbVar19 = pbVar33;
          if (pbVar33 <= (byte *)(uVar27 + 2)) {
            pbVar19 = (byte *)(uVar27 + 2);
          }
          pbVar19 = pbVar19 + ~uVar27;
          uVar38 = 0xf >> (ulong)(local_40[0] & 0x1f);
          bVar44 = (byte)uVar38 | (byte)(uVar38 << 4);
          if (((byte *)0xf < pbVar19) &&
             (pbVar34 = (byte *)((ulong)pbVar19 & 0xfffffffffffffff0), pbVar34 != (byte *)0x0)) {
            iVar15 = -local_40[0];
            iVar2 = -local_40[0];
            uVar45 = (undefined1)iVar2;
            uVar46 = (undefined1)((uint)iVar2 >> 8);
            uVar47 = (undefined1)((uint)iVar2 >> 0x10);
            uVar48 = (undefined1)((uint)iVar2 >> 0x18);
            iVar2 = -local_40[0];
            uVar49 = (undefined1)iVar2;
            uVar50 = (undefined1)((uint)iVar2 >> 8);
            uVar51 = (undefined1)((uint)iVar2 >> 0x10);
            uVar52 = (undefined1)((uint)iVar2 >> 0x18);
            iVar2 = -local_40[0];
            uVar53 = (undefined1)iVar2;
            uVar54 = (undefined1)((uint)iVar2 >> 8);
            uVar55 = (undefined1)((uint)iVar2 >> 0x10);
            uVar56 = (undefined1)((uint)iVar2 >> 0x18);
            pbVar20 = pbVar43;
            pbVar37 = pbVar34;
            do {
              pbVar37 = pbVar37 + -0x10;
              auVar97._1_3_ = 0;
              auVar97[0] = pbVar20[4];
              auVar97[4] = pbVar20[5];
              auVar97._5_3_ = 0;
              auVar97[8] = pbVar20[6];
              auVar97._9_3_ = 0;
              auVar97[0xc] = pbVar20[7];
              auVar97._13_3_ = 0;
              auVar94._6_2_ = 0;
              auVar94._0_6_ =
                   (uint6)CONCAT14(pbVar20[1],(uint)CONCAT12(pbVar20[1],(ushort)*pbVar20)) &
                   0xffff0000ffff;
              auVar94[8] = pbVar20[2];
              auVar94._9_3_ = 0;
              auVar94[0xc] = pbVar20[3];
              auVar94._13_3_ = 0;
              auVar99._1_3_ = 0;
              auVar99[0] = pbVar20[0xc];
              auVar99[4] = pbVar20[0xd];
              auVar99._5_3_ = 0;
              auVar99[8] = pbVar20[0xe];
              auVar99._9_3_ = 0;
              auVar99[0xc] = pbVar20[0xf];
              auVar99._13_3_ = 0;
              auVar100._6_2_ = 0;
              auVar100._0_6_ =
                   (uint6)CONCAT14(pbVar20[9],(uint)CONCAT12(pbVar20[9],(ushort)pbVar20[8])) &
                   0xffff0000ffff;
              auVar100[8] = pbVar20[10];
              auVar100._9_3_ = 0;
              auVar100[0xc] = pbVar20[0xb];
              auVar100._13_3_ = 0;
              auVar78[4] = uVar45;
              auVar78._0_4_ = iVar15;
              auVar78[5] = uVar46;
              auVar78[6] = uVar47;
              auVar78[7] = uVar48;
              auVar78[8] = uVar49;
              auVar78[9] = uVar50;
              auVar78[10] = uVar51;
              auVar78[0xb] = uVar52;
              auVar78[0xc] = uVar53;
              auVar78[0xd] = uVar54;
              auVar78[0xe] = uVar55;
              auVar78[0xf] = uVar56;
              auVar78 = NEON_ushl(auVar100,auVar78,4);
              auVar95[4] = uVar45;
              auVar95._0_4_ = iVar15;
              auVar95[5] = uVar46;
              auVar95[6] = uVar47;
              auVar95[7] = uVar48;
              auVar95[8] = uVar49;
              auVar95[9] = uVar50;
              auVar95[10] = uVar51;
              auVar95[0xb] = uVar52;
              auVar95[0xc] = uVar53;
              auVar95[0xd] = uVar54;
              auVar95[0xe] = uVar55;
              auVar95[0xf] = uVar56;
              auVar95 = NEON_ushl(auVar94,auVar95,4);
              auVar98[4] = uVar45;
              auVar98._0_4_ = iVar15;
              auVar98[5] = uVar46;
              auVar98[6] = uVar47;
              auVar98[7] = uVar48;
              auVar98[8] = uVar49;
              auVar98[9] = uVar50;
              auVar98[10] = uVar51;
              auVar98[0xb] = uVar52;
              auVar98[0xc] = uVar53;
              auVar98[0xd] = uVar54;
              auVar98[0xe] = uVar55;
              auVar98[0xf] = uVar56;
              auVar100 = NEON_ushl(auVar99,auVar98,4);
              auVar9[4] = uVar45;
              auVar9._0_4_ = iVar15;
              auVar9[5] = uVar46;
              auVar9[6] = uVar47;
              auVar9[7] = uVar48;
              auVar9[8] = uVar49;
              auVar9[9] = uVar50;
              auVar9[10] = uVar51;
              auVar9[0xb] = uVar52;
              auVar9[0xc] = uVar53;
              auVar9[0xd] = uVar54;
              auVar9[0xe] = uVar55;
              auVar9[0xf] = uVar56;
              auVar98 = NEON_ushl(auVar97,auVar9,4);
              auVar96._0_8_ =
                   CONCAT17(auVar98[0xc] & bVar44,
                            CONCAT16(auVar98[8] & bVar44,
                                     CONCAT15(auVar98[4] & bVar44,
                                              CONCAT14(auVar98[0] & bVar44,
                                                       CONCAT13(auVar95[0xc] & bVar44,
                                                                CONCAT12(auVar95[8] & bVar44,
                                                                         CONCAT11(auVar95[4] &
                                                                                  bVar44,auVar95[0]
                                                                                         & bVar44)))
                                                      ))));
              auVar96[8] = auVar78[0] & bVar44;
              auVar96[9] = auVar78[4] & bVar44;
              auVar96[10] = auVar78[8] & bVar44;
              auVar96[0xb] = auVar78[0xc] & bVar44;
              auVar96[0xc] = auVar100[0] & bVar44;
              auVar96[0xd] = auVar100[4] & bVar44;
              auVar96[0xe] = auVar100[8] & bVar44;
              auVar96[0xf] = auVar100[0xc] & bVar44;
              *(long *)(pbVar20 + 8) = auVar96._8_8_;
              *(undefined8 *)pbVar20 = auVar96._0_8_;
              pbVar20 = pbVar20 + 0x10;
            } while (pbVar37 != (byte *)0x0);
            pbVar43 = pbVar43 + (long)pbVar34;
            if (pbVar34 == pbVar19) break;
          }
          do {
            pbVar19 = pbVar43 + 1;
            *pbVar43 = *pbVar43 >> (ulong)(local_40[0] & 0x1f) & bVar44;
            pbVar43 = pbVar19;
          } while (pbVar19 < pbVar33);
        }
        break;
      case 3:
        lVar16 = *(long *)(param_2 + 2);
        if (0 < lVar16) {
          pbVar33 = pbVar43;
          iVar15 = 0;
          do {
            iVar2 = 0;
            if (iVar15 + 1 < (int)uVar32) {
              iVar2 = iVar15 + 1;
            }
            pbVar19 = pbVar33 + 1;
            *pbVar33 = *pbVar33 >> (ulong)(local_40[iVar15] & 0x1f);
            pbVar33 = pbVar19;
            iVar15 = iVar2;
          } while (pbVar19 < pbVar43 + lVar16);
        }
        break;
      case 7:
        lVar16 = *(long *)(param_2 + 2);
        if (0 < lVar16) {
          pbVar33 = pbVar43;
          iVar15 = 0;
          do {
            uVar13 = CONCAT11(*pbVar33,pbVar33[1]) >> (ulong)(local_40[iVar15] & 0x1f);
            pbVar33[1] = (byte)uVar13;
            pbVar19 = pbVar33 + 2;
            *pbVar33 = (byte)(uVar13 >> 8);
            iVar2 = 0;
            if (iVar15 + 1 < (int)uVar32) {
              iVar2 = iVar15 + 1;
            }
            pbVar33 = pbVar19;
            iVar15 = iVar2;
          } while (pbVar19 < pbVar43 + lVar16);
        }
      }
    }
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if (((uVar38 >> 2 & 1) != 0) && (bVar44 = *(byte *)((long)param_2 + 0x11), bVar44 < 8)) {
    lVar35 = *(long *)(param_1 + 0x260);
    uVar38 = *param_2;
    uVar27 = (ulong)uVar38;
    lVar16 = lVar35 + 1;
    if (bVar44 == 4) {
      if (uVar38 != 0) {
        uVar32 = (uVar38 & 1) << 2;
        pbVar33 = (byte *)(lVar16 + (ulong)(uVar38 - 1 >> 1));
        do {
          bVar12 = uVar32 != 4;
          pbVar43 = pbVar33 + -1;
          if (bVar12) {
            pbVar43 = pbVar33;
          }
          *(byte *)(lVar35 + uVar27) = *pbVar33 >> (ulong)uVar32 & 0xf;
          uVar27 = uVar27 - 1;
          uVar32 = 0;
          if (bVar12) {
            uVar32 = 4;
          }
          pbVar33 = pbVar43;
        } while ((int)uVar27 != 0);
      }
    }
    else if (bVar44 == 2) {
      if (uVar38 != 0) {
        uVar32 = ~(uVar38 * 2 + 6) & 6;
        pbVar33 = (byte *)(lVar16 + (ulong)(uVar38 - 1 >> 2));
        do {
          uVar29 = uVar32 + 2;
          bVar12 = uVar32 != 6;
          pbVar43 = pbVar33 + -1;
          if (bVar12) {
            pbVar43 = pbVar33;
          }
          *(byte *)(lVar35 + uVar27) = *pbVar33 >> (ulong)(uVar32 & 0x1f) & 3;
          uVar27 = uVar27 - 1;
          uVar32 = 0;
          if (bVar12) {
            uVar32 = uVar29;
          }
          pbVar33 = pbVar43;
        } while ((int)uVar27 != 0);
      }
    }
    else if ((bVar44 == 1) && (uVar38 != 0)) {
      pbVar33 = (byte *)(lVar16 + (ulong)(uVar38 - 1 >> 3));
      uVar32 = ~(uVar38 + 7) & 7;
      do {
        pbVar43 = pbVar33 + -1;
        if (uVar32 != 7) {
          pbVar43 = pbVar33;
        }
        *(byte *)(lVar35 + uVar27) = *pbVar33 >> (ulong)(uVar32 & 0x1f) & 1;
        uVar27 = uVar27 - 1;
        uVar29 = 0;
        if (uVar32 != 7) {
          uVar29 = uVar32 + 1;
        }
        pbVar33 = pbVar43;
        uVar32 = uVar29;
      } while ((int)uVar27 != 0);
    }
    *(undefined1 *)((long)param_2 + 0x11) = 8;
    *(byte *)((long)param_2 + 0x13) = *(byte *)((long)param_2 + 0x12) << 3;
    *(ulong *)(param_2 + 2) = (ulong)(uVar38 * *(byte *)((long)param_2 + 0x12));
  }
  if (((char)param_2[4] == '\x03') && (-1 < *(int *)(param_1 + 0x2a4))) {
    png_do_check_palette_indexes(param_1,param_2);
  }
  uVar38 = *(uint *)(param_1 + 0x16c);
  if ((uVar38 & 1) != 0) {
    png_do_bgr(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar38 >> 0x10 & 1) != 0) {
    png_do_packswap(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar38 >> 0xf & 1) != 0) {
    lVar35 = *(long *)(param_1 + 0x260);
    uVar38 = *(uint *)(param_1 + 0x168);
    uVar32 = *param_2;
    uVar27 = (ulong)uVar32;
    lVar16 = lVar35 + 1;
    uVar45 = (undefined1)*(undefined2 *)(param_1 + 0x2b8);
    uVar46 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x2b8) >> 8);
    if ((char)param_2[4] == '\x02') {
      if (*(char *)((long)param_2 + 0x11) == '\x10') {
        if ((uVar38 >> 7 & 1) == 0) {
          if (uVar32 != 0) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 6 + -2);
            puVar28 = (undefined1 *)(lVar35 + uVar27 * 8 + -3);
            do {
              uVar38 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar38;
              puVar28[3] = puVar31[2];
              puVar28[2] = puVar31[1];
              puVar28[1] = *puVar31;
              *puVar28 = puVar31[-1];
              puVar28[-1] = puVar31[-2];
              uVar47 = puVar31[-3];
              puVar28[-3] = uVar46;
              puVar28[-4] = uVar45;
              puVar31 = puVar31 + -6;
              puVar28[-2] = uVar47;
              puVar28 = puVar28 + -8;
            } while (uVar38 != 0);
          }
        }
        else {
          lVar16 = lVar16 + uVar27 * 8;
          *(undefined1 *)(lVar16 + -1) = uVar46;
          *(undefined1 *)(lVar16 + -2) = uVar45;
          if (1 < uVar32) {
            iVar15 = uVar32 - 1;
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 6 + -2);
            puVar28 = (undefined1 *)(lVar35 + uVar27 * 8 + -4);
            do {
              iVar15 = iVar15 + -1;
              puVar28[2] = puVar31[2];
              puVar28[1] = puVar31[1];
              *puVar28 = *puVar31;
              puVar28[-1] = puVar31[-1];
              puVar28[-2] = puVar31[-2];
              uVar47 = puVar31[-3];
              puVar28[-4] = uVar46;
              puVar28[-5] = uVar45;
              puVar31 = puVar31 + -6;
              puVar28[-3] = uVar47;
              puVar28 = puVar28 + -8;
            } while (iVar15 != 0);
          }
        }
        uVar21 = 0x4004;
        uVar27 = (ulong)(uVar32 << 3);
      }
      else {
        if (*(char *)((long)param_2 + 0x11) != '\b') goto LAB_00d71860;
        if ((uVar38 >> 7 & 1) == 0) {
          if (uVar32 != 0) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 3);
            puVar28 = (undefined1 *)(lVar35 + uVar27 * 4 + -1);
            do {
              uVar38 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar38;
              puVar28[1] = *puVar31;
              *puVar28 = puVar31[-1];
              uVar46 = puVar31[-2];
              puVar28[-2] = uVar45;
              puVar31 = puVar31 + -3;
              puVar28[-1] = uVar46;
              puVar28 = puVar28 + -4;
            } while (uVar38 != 0);
          }
        }
        else {
          *(undefined1 *)(lVar16 + uVar27 * 4 + -1) = uVar45;
          if (1 < uVar32) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 3);
            iVar15 = uVar32 - 1;
            puVar28 = (undefined1 *)(lVar35 + uVar27 * 4 + -2);
            do {
              iVar15 = iVar15 + -1;
              puVar28[1] = *puVar31;
              *puVar28 = puVar31[-1];
              uVar46 = puVar31[-2];
              puVar28[-2] = uVar45;
              puVar31 = puVar31 + -3;
              puVar28[-1] = uVar46;
              puVar28 = puVar28 + -4;
            } while (iVar15 != 0);
          }
        }
        uVar21 = 0x2004;
        uVar27 = (ulong)(uVar32 << 2);
      }
    }
    else {
      if ((char)param_2[4] != '\0') goto LAB_00d71860;
      if (*(char *)((long)param_2 + 0x11) == '\x10') {
        if ((uVar38 >> 7 & 1) == 0) {
          if (uVar32 != 0) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 2);
            puVar28 = (undefined1 *)(lVar35 + uVar27 * 4 + -1);
            do {
              uVar38 = (int)uVar27 - 1;
              uVar27 = (ulong)uVar38;
              puVar28[1] = *puVar31;
              uVar47 = puVar31[-1];
              puVar28[-1] = uVar46;
              puVar28[-2] = uVar45;
              puVar31 = puVar31 + -2;
              *puVar28 = uVar47;
              puVar28 = puVar28 + -4;
            } while (uVar38 != 0);
          }
        }
        else {
          lVar16 = lVar16 + uVar27 * 4;
          *(undefined1 *)(lVar16 + -1) = uVar46;
          *(undefined1 *)(lVar16 + -2) = uVar45;
          if (1 < uVar32) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 2);
            iVar15 = uVar32 - 1;
            puVar28 = (undefined1 *)(lVar35 + uVar27 * 4 + -2);
            do {
              iVar15 = iVar15 + -1;
              *puVar28 = *puVar31;
              uVar47 = puVar31[-1];
              puVar28[-2] = uVar46;
              puVar28[-3] = uVar45;
              puVar31 = puVar31 + -2;
              puVar28[-1] = uVar47;
              puVar28 = puVar28 + -4;
            } while (iVar15 != 0);
          }
        }
        uVar21 = 0x2002;
        uVar27 = (ulong)(uVar32 << 2);
      }
      else {
        if (*(char *)((long)param_2 + 0x11) != '\b') goto LAB_00d71860;
        if ((uVar38 >> 7 & 1) == 0) {
          if (uVar32 != 0) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 2);
            do {
              uVar46 = *(undefined1 *)(lVar35 + uVar27);
              puVar31[-1] = uVar45;
              uVar27 = uVar27 - 1;
              *puVar31 = uVar46;
              puVar31 = puVar31 + -2;
            } while ((int)uVar27 != 0);
          }
        }
        else {
          *(undefined1 *)(lVar16 + uVar27 * 2 + -1) = uVar45;
          if (1 < uVar32) {
            puVar31 = (undefined1 *)(lVar35 + uVar27 * 2 + -1);
            do {
              uVar46 = *(undefined1 *)(lVar35 + uVar27);
              uVar27 = uVar27 - 1;
              puVar31[-1] = uVar45;
              *puVar31 = uVar46;
              puVar31 = puVar31 + -2;
            } while ((int)uVar27 != 1);
          }
        }
        uVar21 = 0x1002;
        uVar27 = (ulong)(uVar32 << 1);
      }
    }
    *(undefined2 *)((long)param_2 + 0x12) = uVar21;
    *(ulong *)(param_2 + 2) = uVar27;
  }
LAB_00d71860:
  if ((*(byte *)(param_1 + 0x16e) >> 1 & 1) != 0) {
    lVar16 = *(long *)(param_1 + 0x260);
    uVar38 = *param_2;
    if ((char)param_2[4] == '\x04') {
      lVar22 = *(long *)(param_2 + 2);
      lVar35 = lVar16 + 1 + lVar22;
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar38 != 0) {
          uVar27 = (ulong)(uVar38 - 1) + 1;
          if (uVar27 < 0x20) {
            lVar30 = 0;
          }
          else {
            lVar30 = uVar27 - (uVar38 & 0x1f);
            if (lVar30 != 0) {
              lVar35 = lVar35 + lVar30 * -2;
              puVar31 = (undefined1 *)(lVar16 + lVar22 + -0x1f);
              lVar16 = lVar30;
              do {
                uVar45 = *puVar31;
                uVar46 = puVar31[2];
                uVar47 = puVar31[4];
                uVar48 = puVar31[6];
                uVar49 = puVar31[8];
                uVar50 = puVar31[10];
                uVar51 = puVar31[0xc];
                uVar52 = puVar31[0xe];
                uVar53 = puVar31[0x10];
                uVar54 = puVar31[0x12];
                uVar55 = puVar31[0x14];
                uVar56 = puVar31[0x16];
                uVar57 = puVar31[0x18];
                uVar58 = puVar31[0x1a];
                uVar59 = puVar31[0x1c];
                uVar60 = puVar31[0x1e];
                uVar61 = puVar31[-0x20];
                uVar62 = puVar31[-0x1e];
                uVar63 = puVar31[-0x1c];
                uVar64 = puVar31[-0x1a];
                uVar65 = puVar31[-0x18];
                uVar66 = puVar31[-0x16];
                uVar67 = puVar31[-0x14];
                uVar68 = puVar31[-0x12];
                uVar69 = puVar31[-0x10];
                uVar70 = puVar31[-0xe];
                uVar71 = puVar31[-0xc];
                uVar72 = puVar31[-10];
                uVar73 = puVar31[-8];
                uVar74 = puVar31[-6];
                uVar75 = puVar31[-4];
                uVar76 = puVar31[-2];
                lVar16 = lVar16 + -0x20;
                *puVar31 = puVar31[1];
                puVar31[1] = uVar45;
                puVar31[2] = puVar31[3];
                puVar31[3] = uVar46;
                puVar31[4] = puVar31[5];
                puVar31[5] = uVar47;
                puVar31[6] = puVar31[7];
                puVar31[7] = uVar48;
                puVar31[8] = puVar31[9];
                puVar31[9] = uVar49;
                puVar31[10] = puVar31[0xb];
                puVar31[0xb] = uVar50;
                puVar31[0xc] = puVar31[0xd];
                puVar31[0xd] = uVar51;
                puVar31[0xe] = puVar31[0xf];
                puVar31[0xf] = uVar52;
                puVar31[0x10] = puVar31[0x11];
                puVar31[0x11] = uVar53;
                puVar31[0x12] = puVar31[0x13];
                puVar31[0x13] = uVar54;
                puVar31[0x14] = puVar31[0x15];
                puVar31[0x15] = uVar55;
                puVar31[0x16] = puVar31[0x17];
                puVar31[0x17] = uVar56;
                puVar31[0x18] = puVar31[0x19];
                puVar31[0x19] = uVar57;
                puVar31[0x1a] = puVar31[0x1b];
                puVar31[0x1b] = uVar58;
                puVar31[0x1c] = puVar31[0x1d];
                puVar31[0x1d] = uVar59;
                puVar31[0x1e] = puVar31[0x1f];
                puVar31[0x1f] = uVar60;
                puVar31[-0x20] = puVar31[-0x1f];
                puVar31[-0x1f] = uVar61;
                puVar31[-0x1e] = puVar31[-0x1d];
                puVar31[-0x1d] = uVar62;
                puVar31[-0x1c] = puVar31[-0x1b];
                puVar31[-0x1b] = uVar63;
                puVar31[-0x1a] = puVar31[-0x19];
                puVar31[-0x19] = uVar64;
                puVar31[-0x18] = puVar31[-0x17];
                puVar31[-0x17] = uVar65;
                puVar31[-0x16] = puVar31[-0x15];
                puVar31[-0x15] = uVar66;
                puVar31[-0x14] = puVar31[-0x13];
                puVar31[-0x13] = uVar67;
                puVar31[-0x12] = puVar31[-0x11];
                puVar31[-0x11] = uVar68;
                puVar31[-0x10] = puVar31[-0xf];
                puVar31[-0xf] = uVar69;
                puVar31[-0xe] = puVar31[-0xd];
                puVar31[-0xd] = uVar70;
                puVar31[-0xc] = puVar31[-0xb];
                puVar31[-0xb] = uVar71;
                puVar31[-10] = puVar31[-9];
                puVar31[-9] = uVar72;
                puVar31[-8] = puVar31[-7];
                puVar31[-7] = uVar73;
                puVar31[-6] = puVar31[-5];
                puVar31[-5] = uVar74;
                puVar31[-4] = puVar31[-3];
                puVar31[-3] = uVar75;
                puVar31[-2] = puVar31[-1];
                puVar31[-1] = uVar76;
                puVar31 = puVar31 + -0x40;
              } while (lVar16 != 0);
              if ((uVar38 & 0x1f) == 0) goto LAB_00d71a8c;
            }
          }
          iVar15 = uVar38 - (int)lVar30;
          puVar31 = (undefined1 *)(lVar35 + -1);
          do {
            uVar45 = *puVar31;
            iVar15 = iVar15 + -1;
            *puVar31 = puVar31[-1];
            puVar31[-1] = uVar45;
            puVar31 = puVar31 + -2;
          } while (iVar15 != 0);
        }
      }
      else if (uVar38 != 0) {
        uVar27 = (ulong)(uVar38 - 1) + 1;
        if (uVar27 < 0x10) {
          lVar30 = 0;
        }
        else {
          lVar30 = uVar27 - (uVar38 & 0xf);
          if (lVar30 != 0) {
            lVar35 = lVar35 + lVar30 * -4;
            puVar31 = (undefined1 *)(lVar16 + lVar22 + -0x3f);
            lVar16 = lVar30;
            do {
              uVar45 = *puVar31;
              uVar61 = puVar31[1];
              uVar46 = puVar31[4];
              uVar62 = puVar31[5];
              uVar47 = puVar31[8];
              uVar63 = puVar31[9];
              uVar48 = puVar31[0xc];
              uVar64 = puVar31[0xd];
              uVar49 = puVar31[0x10];
              uVar65 = puVar31[0x11];
              uVar50 = puVar31[0x14];
              uVar66 = puVar31[0x15];
              uVar51 = puVar31[0x18];
              uVar67 = puVar31[0x19];
              uVar52 = puVar31[0x1c];
              uVar68 = puVar31[0x1d];
              uVar53 = puVar31[0x20];
              uVar69 = puVar31[0x21];
              uVar54 = puVar31[0x24];
              uVar70 = puVar31[0x25];
              uVar55 = puVar31[0x28];
              uVar71 = puVar31[0x29];
              uVar56 = puVar31[0x2c];
              uVar72 = puVar31[0x2d];
              uVar57 = puVar31[0x30];
              uVar73 = puVar31[0x31];
              uVar58 = puVar31[0x34];
              uVar74 = puVar31[0x35];
              uVar59 = puVar31[0x38];
              uVar75 = puVar31[0x39];
              uVar60 = puVar31[0x3c];
              uVar76 = puVar31[0x3d];
              lVar16 = lVar16 + -0x10;
              *puVar31 = puVar31[2];
              puVar31[1] = puVar31[3];
              puVar31[2] = uVar45;
              puVar31[3] = uVar61;
              puVar31[4] = puVar31[6];
              puVar31[5] = puVar31[7];
              puVar31[6] = uVar46;
              puVar31[7] = uVar62;
              puVar31[8] = puVar31[10];
              puVar31[9] = puVar31[0xb];
              puVar31[10] = uVar47;
              puVar31[0xb] = uVar63;
              puVar31[0xc] = puVar31[0xe];
              puVar31[0xd] = puVar31[0xf];
              puVar31[0xe] = uVar48;
              puVar31[0xf] = uVar64;
              puVar31[0x10] = puVar31[0x12];
              puVar31[0x11] = puVar31[0x13];
              puVar31[0x12] = uVar49;
              puVar31[0x13] = uVar65;
              puVar31[0x14] = puVar31[0x16];
              puVar31[0x15] = puVar31[0x17];
              puVar31[0x16] = uVar50;
              puVar31[0x17] = uVar66;
              puVar31[0x18] = puVar31[0x1a];
              puVar31[0x19] = puVar31[0x1b];
              puVar31[0x1a] = uVar51;
              puVar31[0x1b] = uVar67;
              puVar31[0x1c] = puVar31[0x1e];
              puVar31[0x1d] = puVar31[0x1f];
              puVar31[0x1e] = uVar52;
              puVar31[0x1f] = uVar68;
              puVar31[0x20] = puVar31[0x22];
              puVar31[0x21] = puVar31[0x23];
              puVar31[0x22] = uVar53;
              puVar31[0x23] = uVar69;
              puVar31[0x24] = puVar31[0x26];
              puVar31[0x25] = puVar31[0x27];
              puVar31[0x26] = uVar54;
              puVar31[0x27] = uVar70;
              puVar31[0x28] = puVar31[0x2a];
              puVar31[0x29] = puVar31[0x2b];
              puVar31[0x2a] = uVar55;
              puVar31[0x2b] = uVar71;
              puVar31[0x2c] = puVar31[0x2e];
              puVar31[0x2d] = puVar31[0x2f];
              puVar31[0x2e] = uVar56;
              puVar31[0x2f] = uVar72;
              puVar31[0x30] = puVar31[0x32];
              puVar31[0x31] = puVar31[0x33];
              puVar31[0x32] = uVar57;
              puVar31[0x33] = uVar73;
              puVar31[0x34] = puVar31[0x36];
              puVar31[0x35] = puVar31[0x37];
              puVar31[0x36] = uVar58;
              puVar31[0x37] = uVar74;
              puVar31[0x38] = puVar31[0x3a];
              puVar31[0x39] = puVar31[0x3b];
              puVar31[0x3a] = uVar59;
              puVar31[0x3b] = uVar75;
              puVar31[0x3c] = puVar31[0x3e];
              puVar31[0x3d] = puVar31[0x3f];
              puVar31[0x3e] = uVar60;
              puVar31[0x3f] = uVar76;
              puVar31 = puVar31 + -0x40;
            } while (lVar16 != 0);
            if ((uVar38 & 0xf) == 0) goto LAB_00d71a8c;
          }
        }
        iVar15 = uVar38 - (int)lVar30;
        puVar24 = (undefined2 *)(lVar35 + -2);
        do {
          uVar21 = *puVar24;
          iVar15 = iVar15 + -1;
          *puVar24 = puVar24[-1];
          puVar24[-1] = uVar21;
          puVar24 = puVar24 + -2;
        } while (iVar15 != 0);
      }
    }
    else if ((char)param_2[4] == '\x06') {
      lVar35 = *(long *)(param_2 + 2);
      if (*(char *)((long)param_2 + 0x11) == '\b') {
        if (uVar38 != 0) {
          uVar27 = (ulong)(uVar38 - 1) + 1;
          lVar22 = lVar16 + 1 + lVar35;
          if (uVar27 < 0x10) {
            lVar30 = 0;
          }
          else {
            lVar30 = uVar27 - (uVar38 & 0xf);
            if (lVar30 != 0) {
              lVar22 = lVar22 + lVar30 * -4;
              puVar31 = (undefined1 *)(lVar16 + lVar35 + -0x3f);
              lVar16 = lVar30;
              do {
                uVar45 = *puVar31;
                uVar61 = puVar31[1];
                uVar77 = puVar31[2];
                uVar46 = puVar31[4];
                uVar62 = puVar31[5];
                uVar79 = puVar31[6];
                uVar47 = puVar31[8];
                uVar63 = puVar31[9];
                uVar80 = puVar31[10];
                uVar48 = puVar31[0xc];
                uVar64 = puVar31[0xd];
                uVar81 = puVar31[0xe];
                uVar49 = puVar31[0x10];
                uVar65 = puVar31[0x11];
                uVar82 = puVar31[0x12];
                uVar50 = puVar31[0x14];
                uVar66 = puVar31[0x15];
                uVar83 = puVar31[0x16];
                uVar51 = puVar31[0x18];
                uVar67 = puVar31[0x19];
                uVar84 = puVar31[0x1a];
                uVar52 = puVar31[0x1c];
                uVar68 = puVar31[0x1d];
                uVar85 = puVar31[0x1e];
                uVar53 = puVar31[0x20];
                uVar69 = puVar31[0x21];
                uVar86 = puVar31[0x22];
                uVar54 = puVar31[0x24];
                uVar70 = puVar31[0x25];
                uVar87 = puVar31[0x26];
                uVar55 = puVar31[0x28];
                uVar71 = puVar31[0x29];
                uVar88 = puVar31[0x2a];
                uVar56 = puVar31[0x2c];
                uVar72 = puVar31[0x2d];
                uVar89 = puVar31[0x2e];
                uVar57 = puVar31[0x30];
                uVar73 = puVar31[0x31];
                uVar90 = puVar31[0x32];
                uVar58 = puVar31[0x34];
                uVar74 = puVar31[0x35];
                uVar91 = puVar31[0x36];
                uVar59 = puVar31[0x38];
                uVar75 = puVar31[0x39];
                uVar92 = puVar31[0x3a];
                uVar60 = puVar31[0x3c];
                uVar76 = puVar31[0x3d];
                uVar93 = puVar31[0x3e];
                lVar16 = lVar16 + -0x10;
                *puVar31 = puVar31[3];
                puVar31[1] = uVar45;
                puVar31[2] = uVar61;
                puVar31[3] = uVar77;
                puVar31[4] = puVar31[7];
                puVar31[5] = uVar46;
                puVar31[6] = uVar62;
                puVar31[7] = uVar79;
                puVar31[8] = puVar31[0xb];
                puVar31[9] = uVar47;
                puVar31[10] = uVar63;
                puVar31[0xb] = uVar80;
                puVar31[0xc] = puVar31[0xf];
                puVar31[0xd] = uVar48;
                puVar31[0xe] = uVar64;
                puVar31[0xf] = uVar81;
                puVar31[0x10] = puVar31[0x13];
                puVar31[0x11] = uVar49;
                puVar31[0x12] = uVar65;
                puVar31[0x13] = uVar82;
                puVar31[0x14] = puVar31[0x17];
                puVar31[0x15] = uVar50;
                puVar31[0x16] = uVar66;
                puVar31[0x17] = uVar83;
                puVar31[0x18] = puVar31[0x1b];
                puVar31[0x19] = uVar51;
                puVar31[0x1a] = uVar67;
                puVar31[0x1b] = uVar84;
                puVar31[0x1c] = puVar31[0x1f];
                puVar31[0x1d] = uVar52;
                puVar31[0x1e] = uVar68;
                puVar31[0x1f] = uVar85;
                puVar31[0x20] = puVar31[0x23];
                puVar31[0x21] = uVar53;
                puVar31[0x22] = uVar69;
                puVar31[0x23] = uVar86;
                puVar31[0x24] = puVar31[0x27];
                puVar31[0x25] = uVar54;
                puVar31[0x26] = uVar70;
                puVar31[0x27] = uVar87;
                puVar31[0x28] = puVar31[0x2b];
                puVar31[0x29] = uVar55;
                puVar31[0x2a] = uVar71;
                puVar31[0x2b] = uVar88;
                puVar31[0x2c] = puVar31[0x2f];
                puVar31[0x2d] = uVar56;
                puVar31[0x2e] = uVar72;
                puVar31[0x2f] = uVar89;
                puVar31[0x30] = puVar31[0x33];
                puVar31[0x31] = uVar57;
                puVar31[0x32] = uVar73;
                puVar31[0x33] = uVar90;
                puVar31[0x34] = puVar31[0x37];
                puVar31[0x35] = uVar58;
                puVar31[0x36] = uVar74;
                puVar31[0x37] = uVar91;
                puVar31[0x38] = puVar31[0x3b];
                puVar31[0x39] = uVar59;
                puVar31[0x3a] = uVar75;
                puVar31[0x3b] = uVar92;
                puVar31[0x3c] = puVar31[0x3f];
                puVar31[0x3d] = uVar60;
                puVar31[0x3e] = uVar76;
                puVar31[0x3f] = uVar93;
                puVar31 = puVar31 + -0x40;
              } while (lVar16 != 0);
              if ((uVar38 & 0xf) == 0) goto LAB_00d71a8c;
            }
          }
          puVar31 = (undefined1 *)(lVar22 + -2);
          iVar15 = uVar38 - (int)lVar30;
          do {
            uVar45 = puVar31[1];
            iVar15 = iVar15 + -1;
            puVar31[1] = *puVar31;
            *puVar31 = puVar31[-1];
            puVar31[-1] = puVar31[-2];
            puVar31[-2] = uVar45;
            puVar31 = puVar31 + -4;
          } while (iVar15 != 0);
        }
      }
      else if (uVar38 != 0) {
        puVar23 = (undefined4 *)(lVar16 + lVar35 + -3);
        do {
          uVar38 = uVar38 - 1;
          *puVar23 = *(undefined4 *)((long)puVar23 + -2);
          *(undefined2 *)((long)puVar23 + -2) = *(undefined2 *)(puVar23 + -1);
          *(undefined2 *)(puVar23 + -1) = *(undefined2 *)((long)puVar23 + 2);
          puVar23 = puVar23 + -2;
        } while (uVar38 != 0);
      }
    }
  }
LAB_00d71a8c:
  uVar38 = *(uint *)(param_1 + 0x16c);
  if ((uVar38 >> 4 & 1) != 0) {
    png_do_swap(param_2,*(long *)(param_1 + 0x260) + 1);
    uVar38 = *(uint *)(param_1 + 0x16c);
  }
  if ((uVar38 >> 0x14 & 1) != 0) {
    if (*(code **)(param_1 + 0x148) != (code *)0x0) {
      (**(code **)(param_1 + 0x148))(param_1,param_2,*(long *)(param_1 + 0x260) + 1);
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      *(char *)((long)param_2 + 0x11) = *(char *)(param_1 + 0x160);
    }
    cVar5 = *(char *)(param_1 + 0x161);
    if (cVar5 == '\0') {
      cVar5 = *(char *)((long)param_2 + 0x12);
    }
    else {
      *(char *)((long)param_2 + 0x12) = cVar5;
    }
    bVar44 = cVar5 * *(char *)((long)param_2 + 0x11);
    *(byte *)((long)param_2 + 0x13) = bVar44;
    if ((bVar44 & 0xf8) < 8) {
      uVar27 = (ulong)bVar44 * (ulong)*param_2 + 7 >> 3;
    }
    else {
      uVar27 = (ulong)(bVar44 >> 3) * (ulong)*param_2;
    }
    *(ulong *)(param_2 + 2) = uVar27;
  }
  return;
}

