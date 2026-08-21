
int FUN_00e67e0c(long param_1,short *param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  char cVar15;
  undefined4 uVar16;
  ulong uVar17;
  char cVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte bVar23;
  ulong uVar24;
  uint *puVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  int *piVar32;
  ulong uVar33;
  uint uVar34;
  int iVar35;
  int *piVar36;
  long *plVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  long *plVar43;
  long *plVar44;
  undefined1 auVar45 [16];
  undefined8 local_150;
  long lStack_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  short *local_130;
  undefined8 *local_128;
  uint local_120 [2];
  long alStack_118 [18];
  undefined4 uStack_88;
  undefined2 local_84;
  bool local_82;
  bool local_81;
  undefined8 local_80;
  int local_6c [3];
  
  if (((long)param_2[1] == 0) || (*param_2 == 0)) {
    iVar8 = 0;
  }
  else {
    local_80 = 0;
    alStack_118[0x10] = 0;
    alStack_118[0xf] = 0;
    _uStack_88 = 0;
    alStack_118[0x11] = 0;
    alStack_118[0xc] = 0;
    alStack_118[0xb] = 0;
    alStack_118[0xe] = 0;
    alStack_118[0xd] = 0;
    alStack_118[8] = 0;
    alStack_118[7] = 0;
    alStack_118[10] = 0;
    alStack_118[9] = 0;
    alStack_118[4] = 0;
    alStack_118[3] = 0;
    alStack_118[6] = 0;
    alStack_118[5] = 0;
    alStack_118[0] = 0;
    local_120[0] = 0;
    local_120[1] = 0;
    alStack_118[2] = 0;
    alStack_118[1] = 0;
    local_140 = (undefined8 *)0x0;
    local_128 = (undefined8 *)0x0;
    local_130 = (short *)0x0;
    lStack_148 = 0;
    local_150 = 0;
    uVar42 = *param_3;
    uStack_138 = uVar42;
    lStack_148 = FUN_00e13bcc(uVar42,0x48,0,(long)param_2[1],0,local_6c);
    iVar8 = local_6c[0];
    if ((local_6c[0] == 0) &&
       (local_140 = (undefined8 *)FUN_00e13bcc(uVar42,0x10,0,(long)*param_2,0,local_6c),
       lVar20 = lStack_148, iVar8 = local_6c[0], local_6c[0] == 0)) {
      sVar3 = param_2[1];
      sVar4 = *param_2;
      local_150 = CONCAT44((int)sVar4,(int)sVar3);
      if (sVar4 != 0) {
        lVar26 = *(long *)(param_2 + 0xc);
        uVar24 = 0;
        puVar11 = local_140;
        uVar9 = 0;
        do {
          sVar5 = *(short *)(lVar26 + uVar24 * 2);
          plVar37 = (long *)(lStack_148 + (ulong)uVar9 * 0x48);
          *puVar11 = plVar37;
          iVar8 = (int)sVar5;
          uVar10 = iVar8 + 1;
          uVar38 = uVar10 - uVar9;
          *(uint *)(puVar11 + 1) = uVar38;
          if (uVar38 != 0) {
            *plVar37 = lStack_148 + -0x48 + (ulong)uVar10 * 0x48;
            *(undefined8 **)(lStack_148 + (ulong)uVar9 * 0x48 + 0x10) = puVar11;
            plVar13 = plVar37;
            if (uVar38 != 1) {
              uVar31 = iVar8 + ~uVar9;
              uVar17 = (ulong)uVar31 + 1;
              if (uVar17 < 2) {
LAB_00e67fbc:
                do {
                  plVar43 = plVar13 + 9;
                  uVar38 = uVar38 - 1;
                  plVar13[1] = (long)plVar43;
                  plVar13[0xb] = (long)puVar11;
                  *plVar43 = (long)plVar13;
                  plVar13 = plVar43;
                } while (1 < uVar38);
              }
              else {
                lVar14 = uVar17 - (~uVar31 & 1);
                uVar38 = uVar38 - (int)lVar14;
                plVar13 = plVar37 + lVar14 * 9;
                plVar43 = plVar37;
                do {
                  plVar43[10] = (long)(plVar43 + 0x12);
                  plVar43[0xb] = (long)puVar11;
                  lVar14 = lVar14 + -2;
                  plVar43[1] = (long)(plVar43 + 9);
                  plVar43[9] = (long)plVar43;
                  plVar43[0x12] = (long)(plVar43 + 9);
                  plVar43[0x14] = (long)puVar11;
                  plVar43 = plVar43 + 0x12;
                } while (lVar14 != 0);
                if ((~uVar31 & 1) != 0) goto LAB_00e67fbc;
              }
              plVar13 = (long *)(lStack_148 + 0x48 + ((ulong)uVar31 + (ulong)uVar9) * 0x48);
            }
            plVar13[1] = (long)plVar37;
          }
          uVar24 = uVar24 + 1;
          puVar11 = puVar11 + 2;
          uVar9 = uVar10;
        } while (uVar24 < (ulong)(long)sVar4);
      }
      if (sVar3 != 0) {
        lVar26 = *(long *)(param_2 + 4);
        uVar24 = 0;
        puVar25 = (uint *)(lStack_148 + 0x18);
        plVar37 = (long *)(lVar26 + 8);
        do {
          if ((*(byte *)(*(long *)(param_2 + 8) + uVar24) & 1) == 0) {
            *puVar25 = 1;
          }
          plVar13 = (long *)(lVar26 + (((*(long *)(puVar25 + -6) - lVar20 >> 3) * 0x38e38e39 << 0x20
                                       ) >> 0x1c));
          lVar41 = plVar37[-1];
          lVar39 = *plVar37;
          lVar40 = lVar41 - *plVar13;
          lVar14 = -lVar40;
          if (-1 < lVar40) {
            lVar14 = lVar40;
          }
          lVar6 = lVar39 - plVar13[1];
          lVar1 = -lVar6;
          if (-1 < lVar6) {
            lVar1 = lVar6;
          }
          if (lVar1 * 0xc < lVar14) {
            cVar15 = -2;
            if (-1 < lVar40) {
              cVar15 = '\x02';
            }
          }
          else if (lVar14 * 0xc < lVar1) {
            cVar15 = '\x01';
            if (-1 < lVar6) {
              cVar15 = -1;
            }
          }
          else {
            cVar15 = '\x04';
          }
          *(char *)(puVar25 + 2) = cVar15;
          plVar13 = (long *)(lVar26 + (((*(long *)(puVar25 + -4) - lVar20 >> 3) * 0x38e38e39 << 0x20
                                       ) >> 0x1c));
          lVar41 = *plVar13 - lVar41;
          lVar14 = -lVar41;
          if (-1 < lVar41) {
            lVar14 = lVar41;
          }
          lVar39 = plVar13[1] - lVar39;
          lVar40 = -lVar39;
          if (-1 < lVar39) {
            lVar40 = lVar39;
          }
          if (lVar40 * 0xc < lVar14) {
            cVar18 = -2;
            if (-1 < lVar41) {
              cVar18 = '\x02';
            }
            uVar9 = *puVar25;
            *(char *)((long)puVar25 + 9) = cVar18;
joined_r0x00e68154:
            if ((uVar9 & 1) != 0) goto LAB_00e68158;
LAB_00e680fc:
            if (cVar18 == cVar15) {
              if (cVar18 == '\x04') {
                iVar8 = FUN_00e1360c();
                if (iVar8 == 0) goto LAB_00e68160;
                uVar9 = *puVar25;
              }
              goto LAB_00e68158;
            }
          }
          else {
            if (lVar40 <= lVar14 * 0xc) {
              cVar18 = '\x04';
              uVar9 = *puVar25;
              *(undefined1 *)((long)puVar25 + 9) = 4;
              goto joined_r0x00e68154;
            }
            cVar18 = '\x01';
            if (-1 < lVar39) {
              cVar18 = -1;
            }
            uVar9 = *puVar25;
            *(char *)((long)puVar25 + 9) = cVar18;
            if ((uVar9 & 1) == 0) goto LAB_00e680fc;
LAB_00e68158:
            *puVar25 = uVar9 | 2;
          }
LAB_00e68160:
          uVar17 = local_150 & 0xffffffff;
          uVar24 = uVar24 + 1;
          puVar25 = puVar25 + 0x12;
          plVar37 = plVar37 + 2;
        } while (uVar24 < uVar17);
        if ((uint)local_150 != 0) {
          pauVar19 = *(undefined1 (**) [16])(param_2 + 4);
          puVar11 = (undefined8 *)(lStack_148 + 0x30);
          do {
            *(undefined4 *)((long)puVar11 + -0x14) = 0;
            puVar11[-1] = 0;
            auVar45 = *pauVar19;
            uVar9 = (int)uVar17 - 1;
            uVar17 = (ulong)uVar9;
            puVar11[1] = auVar45._8_8_;
            *puVar11 = auVar45._0_8_;
            pauVar19 = pauVar19 + 1;
            puVar11 = puVar11 + 9;
          } while (uVar9 != 0);
        }
      }
      local_130 = param_2;
      local_128 = param_3;
      if (local_150._4_4_ != 0) {
        uVar24 = 0;
        do {
          if (3 < *(uint *)(local_140 + uVar24 * 2 + 1)) {
            plVar13 = (long *)local_140[uVar24 * 2];
            plVar37 = plVar13;
            do {
              plVar37 = (long *)plVar37[1];
              if (plVar37 == plVar13) goto LAB_00e682ec;
              lVar20 = plVar37[6];
              lVar14 = plVar37[7];
              lVar26 = plVar13[6];
              lVar41 = plVar13[7];
              plVar43 = plVar13;
            } while (lVar14 - lVar41 == 0 && lVar20 - lVar26 == 0);
            do {
              plVar27 = plVar43;
              plVar43 = (long *)*plVar27;
              if (plVar43 == plVar13) goto LAB_00e682ec;
              lVar39 = plVar27[6] - plVar43[6];
              lVar40 = plVar27[7] - plVar43[7];
            } while ((lVar40 == 0 && lVar39 == 0) ||
                    (uVar9 = FUN_00e135ec(lVar20 - lVar26,lVar14 - lVar41,lVar39,lVar40),
                    plVar44 = plVar27, uVar9 == 0));
            do {
              while( true ) {
                bVar7 = false;
                do {
                  lVar20 = plVar37[7];
                  lVar26 = plVar37[6];
                  do {
                    plVar13 = plVar37;
                    plVar37 = (long *)plVar13[1];
                    if (plVar37 == plVar27) {
                      bVar7 = true;
                    }
                    lVar14 = plVar37[6] - lVar26;
                    lVar41 = plVar37[7] - lVar20;
                    lVar20 = plVar37[7];
                    lVar26 = plVar37[6];
                  } while (lVar41 == 0 && lVar14 == 0);
                  uVar10 = FUN_00e135ec(lVar39,lVar40,lVar14,lVar41);
                } while (uVar10 == 0);
                lVar39 = lVar14;
                lVar40 = lVar41;
                if ((int)(uVar10 ^ uVar9) < 0) break;
                plVar44 = plVar13;
                uVar9 = uVar10;
                if (bVar7) goto LAB_00e682ec;
              }
              do {
                *(uint *)(plVar44 + 3) = *(uint *)(plVar44 + 3) | 4;
                plVar44 = (long *)plVar44[1];
              } while (plVar44 != plVar13);
              *(uint *)(plVar13 + 3) = *(uint *)(plVar13 + 3) | 4;
              plVar44 = plVar13;
              uVar9 = uVar10;
            } while (!bVar7);
          }
LAB_00e682ec:
          uVar24 = uVar24 + 1;
        } while (uVar24 < local_150 >> 0x20);
      }
      local_6c[0] = FUN_00e69a9c(local_120,param_1 + 0x18,param_1 + 0x28,uVar42);
      iVar8 = local_6c[0];
      if ((local_6c[0] == 0) &&
         (iVar8 = FUN_00e69a9c(alStack_118 + 8,param_1 + 0x48,param_1 + 0x58,uVar42), iVar8 == 0)) {
        lVar20 = local_128[0x32];
        uVar42 = local_128[0x65];
        uVar17 = FT_MulFix((long)*(int *)(param_3 + 0x68));
        uVar24 = uVar17 + 0x20 & 0xffffffffffffffc0;
        if (uVar24 == 0) {
          bVar7 = true;
        }
        else {
          bVar7 = true;
          if (uVar17 != uVar24) {
            uVar12 = FT_MulDiv(uVar42,uVar24,uVar17);
            lVar26 = lVar20;
            if ((long)uVar24 < (long)uVar17) {
              lVar26 = lVar20 - lVar20 / 0x32;
            }
            FUN_00e68ea8(local_128,lVar26,uVar12,0,0);
            bVar7 = false;
          }
        }
        uVar24 = 0;
        _uStack_88 = CONCAT17(param_4 == 2 || param_4 == 4,
                              CONCAT16((param_4 | 1) == 3,CONCAT24(0x101,uStack_88)));
        local_80 = CONCAT71(local_80._1_7_,param_4 != 1);
        do {
          puVar11 = local_128;
          if ((uint)local_150 != 0) {
            pauVar19 = *(undefined1 (**) [16])(local_130 + 4);
            puVar29 = (undefined8 *)(lStack_148 + 0x30);
            uVar9 = (uint)local_150;
            if (uVar24 == 0) {
              do {
                *(undefined4 *)((long)puVar29 + -0x14) = 0;
                puVar29[-1] = 0;
                auVar45 = *pauVar19;
                uVar9 = uVar9 - 1;
                puVar29[1] = auVar45._8_8_;
                *puVar29 = auVar45._0_8_;
                pauVar19 = pauVar19 + 1;
                puVar29 = puVar29 + 9;
              } while (uVar9 != 0);
            }
            else {
              do {
                *(undefined4 *)((long)puVar29 + -0x14) = 0;
                puVar29[-1] = 0;
                uVar9 = uVar9 - 1;
                auVar45 = NEON_ext(*pauVar19,*pauVar19,8,1);
                puVar29[1] = auVar45._8_8_;
                *puVar29 = auVar45._0_8_;
                pauVar19 = pauVar19 + 1;
                puVar29 = puVar29 + 9;
              } while (uVar9 != 0);
            }
          }
          if (local_150._4_4_ == 0) {
            uVar9 = 0;
          }
          else {
            uVar17 = 0;
            do {
              if ((int)(local_140 + uVar17 * 2)[1] != 0) {
                plVar13 = (long *)local_140[uVar17 * 2];
                plVar37 = plVar13;
                do {
                  plVar37 = (long *)*plVar37;
                  if (plVar37 == plVar13) {
                    uVar9 = (uint)uVar17;
                    goto LAB_00e686f0;
                  }
                } while (plVar37[6] == plVar13[6]);
                plVar27 = (long *)plVar37[1];
                plVar13 = plVar27;
                plVar43 = plVar27;
                while (plVar13 = (long *)plVar13[1], plVar13 != plVar27) {
                  lVar14 = plVar13[6];
                  lVar26 = plVar43[6];
                  if (lVar14 != lVar26) {
                    if (*(long *)((long)plVar37 + 0x30) < lVar26) {
                      if (lVar14 < lVar26) {
LAB_00e68614:
                        do {
                          *(uint *)((long)plVar43 + 0x1c) = *(uint *)((long)plVar43 + 0x1c) | 0x40;
                          plVar43 = (long *)plVar43[1];
                        } while (plVar43 != plVar13);
                      }
                    }
                    else if (lVar26 < lVar14) goto LAB_00e68614;
                    plVar37 = (long *)*plVar13;
                    plVar43 = plVar13;
                  }
                }
              }
              uVar17 = uVar17 + 1;
              uVar9 = 0;
            } while (uVar17 < local_150._4_4_);
          }
          while (uVar9 < (uint)local_150) {
            plVar37 = (long *)(lStack_148 + (ulong)uVar9 * 0x48);
            puVar25 = (uint *)((long)plVar37 + 0x1c);
            uVar10 = *puVar25;
            if ((uVar10 >> 6 & 1) == 0) {
LAB_00e686f0:
              uVar9 = uVar9 + 1;
            }
            else {
              plVar13 = plVar37;
              do {
                plVar13 = (long *)*plVar13;
                if (plVar13 == plVar37) goto LAB_00e686f0;
                lVar14 = plVar13[7];
                lVar26 = *(long *)(lStack_148 + (ulong)uVar9 * 0x48 + 0x38);
                plVar43 = plVar37;
              } while (lVar14 == lVar26);
              do {
                plVar43 = (long *)plVar43[1];
                if (plVar43 == plVar37) goto LAB_00e686f0;
                lVar41 = plVar43[7];
              } while (lVar41 == lVar26);
              if ((lVar14 < lVar26) && (lVar26 < lVar41)) {
                *puVar25 = uVar10 | 0x80;
                uVar9 = uVar9 + 1;
              }
              else {
                if ((lVar14 <= lVar26) || (lVar26 <= lVar41)) goto LAB_00e686f0;
                *puVar25 = uVar10 | 0x100;
                uVar9 = uVar9 + 1;
              }
            }
          }
          uVar9 = local_120[uVar24 * 0x12];
          plVar37 = alStack_118 + uVar24 * 9;
          if (uVar9 != 0) {
            lVar26 = *plVar37;
            do {
              FUN_00e69da0(lVar26,puVar11,uVar24 & 0xffffffff,&local_150);
              uVar9 = uVar9 - 1;
              lVar26 = lVar26 + 0x30;
            } while (uVar9 != 0);
          }
          puVar25 = (uint *)alStack_118[uVar24 * 9 + 6];
          lVar26 = *(long *)(puVar25 + 2);
          uVar9 = *puVar25;
          uVar16 = 1;
          if (uVar24 != 0) {
            uVar16 = 2;
          }
          iVar8 = FT_DivFix(0x20,local_128[uVar24 * 0x33 + 0x32]);
          if (0x1d < iVar8) {
            iVar8 = 0x1e;
          }
          if (uVar9 < 2) {
            if (uVar9 == 1) {
LAB_00e689a4:
              puVar25 = *(uint **)(alStack_118[uVar24 * 9 + 6] + 8);
              uVar9 = local_120[uVar24 * 0x12];
              uVar10 = *puVar25;
              pbVar21 = *(byte **)(puVar25 + 2);
              if (uVar9 != 0) {
                lVar26 = *plVar37;
                uVar17 = (ulong)(uVar9 - 1) + 1;
                uVar38 = uVar9;
                if (1 < uVar17) {
                  uVar31 = ~(uVar9 - 1) & 1;
                  lVar41 = uVar17 - uVar31;
                  lVar14 = lVar41 * 0x30;
                  iVar35 = (int)lVar41;
                  puVar25 = (uint *)(lVar26 + 0x48);
                  do {
                    puVar25[-8] = 0xffffffff;
                    puVar25[4] = 0xffffffff;
                    lVar41 = lVar41 + -2;
                    puVar25[-0xc] = puVar25[-0xc] & 0xfffffffb;
                    *puVar25 = *puVar25 & 0xfffffffb;
                    puVar25 = puVar25 + 0x18;
                  } while (lVar41 != 0);
                  lVar26 = lVar26 + lVar14;
                  uVar38 = uVar9 - iVar35;
                  if (uVar31 == 0) goto LAB_00e68a74;
                }
                puVar25 = (uint *)(lVar26 + 0x18);
                do {
                  puVar25[4] = 0xffffffff;
                  uVar38 = uVar38 - 1;
                  *puVar25 = *puVar25 & 0xfffffffb;
                  puVar25 = puVar25 + 0xc;
                } while (uVar38 != 0);
              }
LAB_00e68a74:
              if (uVar10 == 0) {
                uVar17 = 0;
                local_120[uVar24 * 0x12 + 1] = 0;
                plVar13 = alStack_118 + uVar24 * 9 + 1;
              }
              else {
                lVar26 = 0;
                uVar38 = 0;
                uVar31 = 0;
                uVar17 = 0;
                plVar13 = alStack_118 + uVar24 * 9 + 1;
                lVar14 = (ulong)uVar10 * 0x30;
                do {
                  while (uVar38 == 0) {
                    pbVar22 = pbVar21 + 1;
                    uVar31 = (uint)*pbVar21;
                    uVar38 = 0x80;
                    if ((*pbVar21 & 0x80) != 0) goto LAB_00e68aac;
LAB_00e68b00:
                    lVar26 = lVar26 + 0x30;
                    uVar38 = (int)uVar38 >> 1;
                    pbVar21 = pbVar22;
                    if (lVar14 - lVar26 == 0) goto LAB_00e68b10;
                  }
                  pbVar22 = pbVar21;
                  if ((uVar38 & uVar31) == 0) goto LAB_00e68b00;
LAB_00e68aac:
                  lVar41 = *plVar37 + lVar26;
                  if ((*(uint *)(lVar41 + 0x18) >> 2 & 1) != 0) goto LAB_00e68b00;
                  *(uint *)(lVar41 + 0x18) = *(uint *)(lVar41 + 0x18) | 4;
                  if (uVar9 <= (uint)uVar17) goto LAB_00e68b00;
                  *(long *)(*plVar13 + uVar17 * 8) = lVar41;
                  uVar17 = (ulong)((uint)uVar17 + 1);
                  lVar26 = lVar26 + 0x30;
                  uVar38 = (int)uVar38 >> 1;
                  pbVar21 = pbVar22;
                } while (lVar14 - lVar26 != 0);
LAB_00e68b10:
                local_120[uVar24 * 0x12 + 1] = (uint)uVar17;
                if (1 < (int)(uint)uVar17) {
                  lVar14 = *plVar13;
                  uVar28 = 1;
                  lVar26 = lVar14;
                  do {
                    piVar32 = *(int **)(lVar14 + uVar28 * 8);
                    lVar41 = 0;
                    iVar35 = *piVar32;
                    do {
                      piVar36 = *(int **)(lVar26 + lVar41 * 8);
                      if (*piVar36 < iVar35) break;
                      puVar11 = (undefined8 *)(lVar26 + lVar41 * 8);
                      lVar41 = lVar41 + -1;
                      *puVar11 = piVar32;
                      puVar11[1] = piVar36;
                    } while (0 < (long)(uVar28 + lVar41));
                    uVar28 = uVar28 + 1;
                    lVar26 = lVar26 + 8;
                  } while (uVar28 != uVar17);
                }
              }
              FUN_00e6a1a8(uVar17,*plVar13,lStack_148,local_150 & 0xffffffff,iVar8,uVar16);
            }
            uVar17 = local_150 & 0xffffffff;
            if ((uint)local_150 != 0) {
              puVar25 = (uint *)(lStack_148 + 0x1c);
              iVar8 = (uint)local_150;
              do {
                if ((*(long *)(puVar25 + 3) != 0) && ((*puVar25 >> 4 & 1) == 0)) {
                  *puVar25 = *puVar25 | 0x10;
                }
                iVar8 = iVar8 + -1;
                puVar25 = puVar25 + 0x12;
              } while (iVar8 != 0);
            }
            if (uVar24 == 1) goto LAB_00e68bf4;
LAB_00e68da4:
            FUN_00e69378(uVar17,lStack_148,local_128,uVar24 & 0xffffffff);
            FUN_00e69448(&local_150,uVar24 & 0xffffffff);
            FUN_00e69764(local_150._4_4_,local_140,local_128,uVar24 & 0xffffffff);
            if ((uint)local_150 != 0) {
              puVar11 = *(undefined8 **)(local_130 + 4);
              lVar26 = *(long *)(local_130 + 8);
              bVar23 = 0x20;
              if (uVar24 != 0) {
                bVar23 = 0x40;
              }
              uVar17 = 0;
              if (uVar24 == 0) {
                puVar29 = (undefined8 *)(lStack_148 + 0x40);
                do {
                  *puVar11 = *puVar29;
                  if ((*(byte *)((long)puVar29 + -0x24) >> 4 & 1) != 0) {
                    *(byte *)(lVar26 + uVar17) = *(byte *)(lVar26 + uVar17) | bVar23;
                  }
                  uVar17 = uVar17 + 1;
                  puVar11 = puVar11 + 2;
                  puVar29 = puVar29 + 9;
                } while (uVar17 < (local_150 & 0xffffffff));
              }
              else {
                puVar11 = puVar11 + 1;
                puVar29 = (undefined8 *)(lStack_148 + 0x40);
                do {
                  *puVar11 = *puVar29;
                  if ((*(byte *)((long)puVar29 + -0x24) >> 4 & 1) != 0) {
                    *(byte *)(lVar26 + uVar17) = *(byte *)(lVar26 + uVar17) | bVar23;
                  }
                  uVar17 = uVar17 + 1;
                  puVar11 = puVar11 + 2;
                  puVar29 = puVar29 + 9;
                } while (uVar17 < (local_150 & 0xffffffff));
              }
            }
          }
          else {
            if ((uint)local_150 != 0) {
              uVar10 = (uint)local_150;
              if (*(uint *)(lVar26 + 0x10) <= (uint)local_150) {
                uVar10 = *(uint *)(lVar26 + 0x10);
              }
              plVar13 = alStack_118 + uVar24 * 9 + 1;
              do {
                uVar38 = *(uint *)(lVar26 + 0x28);
                if ((uint)local_150 <= *(uint *)(lVar26 + 0x28)) {
                  uVar38 = (uint)local_150;
                }
                if (uVar10 <= uVar38 && uVar38 - uVar10 != 0) {
                  uVar31 = *(uint *)(lVar26 + 0x18);
                  uVar2 = local_120[uVar24 * 0x12];
                  pbVar21 = *(byte **)(lVar26 + 0x20);
                  if (uVar2 != 0) {
                    lVar14 = *plVar37;
                    uVar17 = (ulong)(uVar2 - 1) + 1;
                    uVar34 = uVar2;
                    if (1 < uVar17) {
                      uVar30 = ~(uVar2 - 1) & 1;
                      lVar39 = uVar17 - uVar30;
                      lVar41 = lVar39 * 0x30;
                      iVar35 = (int)lVar39;
                      puVar25 = (uint *)(lVar14 + 0x48);
                      do {
                        puVar25[-8] = 0xffffffff;
                        puVar25[4] = 0xffffffff;
                        lVar39 = lVar39 + -2;
                        puVar25[-0xc] = puVar25[-0xc] & 0xfffffffb;
                        *puVar25 = *puVar25 & 0xfffffffb;
                        puVar25 = puVar25 + 0x18;
                      } while (lVar39 != 0);
                      lVar14 = lVar14 + lVar41;
                      uVar34 = uVar2 - iVar35;
                      if (uVar30 == 0) goto LAB_00e68880;
                    }
                    puVar25 = (uint *)(lVar14 + 0x18);
                    do {
                      puVar25[4] = 0xffffffff;
                      uVar34 = uVar34 - 1;
                      *puVar25 = *puVar25 & 0xfffffffb;
                      puVar25 = puVar25 + 0xc;
                    } while (uVar34 != 0);
                  }
LAB_00e68880:
                  if (uVar31 == 0) {
                    uVar17 = 0;
                    *(int *)((ulong)(local_120 + uVar24 * 0x12) | 4) = 0;
                  }
                  else {
                    lVar14 = 0;
                    uVar34 = 0;
                    uVar30 = 0;
                    uVar17 = 0;
                    lVar41 = (ulong)uVar31 * 0x30;
                    do {
                      while (uVar34 == 0) {
                        pbVar22 = pbVar21 + 1;
                        uVar30 = (uint)*pbVar21;
                        uVar34 = 0x80;
                        if ((*pbVar21 & 0x80) != 0) goto LAB_00e688a8;
LAB_00e688fc:
                        lVar14 = lVar14 + 0x30;
                        uVar34 = (int)uVar34 >> 1;
                        pbVar21 = pbVar22;
                        if (lVar41 - lVar14 == 0) goto LAB_00e6890c;
                      }
                      pbVar22 = pbVar21;
                      if ((uVar34 & uVar30) == 0) goto LAB_00e688fc;
LAB_00e688a8:
                      lVar39 = *plVar37 + lVar14;
                      if ((*(uint *)(lVar39 + 0x18) >> 2 & 1) != 0) goto LAB_00e688fc;
                      *(uint *)(lVar39 + 0x18) = *(uint *)(lVar39 + 0x18) | 4;
                      if (uVar2 <= (uint)uVar17) goto LAB_00e688fc;
                      *(long *)(*plVar13 + uVar17 * 8) = lVar39;
                      uVar17 = (ulong)((uint)uVar17 + 1);
                      lVar14 = lVar14 + 0x30;
                      uVar34 = (int)uVar34 >> 1;
                      pbVar21 = pbVar22;
                    } while (lVar41 - lVar14 != 0);
LAB_00e6890c:
                    *(int *)((ulong)(local_120 + uVar24 * 0x12) | 4) = (int)uVar17;
                    if (1 < (int)uVar17) {
                      lVar41 = *plVar13;
                      uVar28 = 1;
                      lVar14 = lVar41;
                      do {
                        piVar32 = *(int **)(lVar41 + uVar28 * 8);
                        lVar39 = 0;
                        iVar35 = *piVar32;
                        do {
                          piVar36 = *(int **)(lVar14 + lVar39 * 8);
                          if (*piVar36 < iVar35) break;
                          puVar11 = (undefined8 *)(lVar14 + lVar39 * 8);
                          lVar39 = lVar39 + -1;
                          *puVar11 = piVar32;
                          puVar11[1] = piVar36;
                        } while (0 < (long)(uVar28 + lVar39));
                        uVar28 = uVar28 + 1;
                        lVar14 = lVar14 + 8;
                      } while (uVar28 != uVar17);
                    }
                  }
                  FUN_00e6a1a8(uVar17,*plVar13,lStack_148 + (ulong)uVar10 * 0x48,uVar38 - uVar10,
                               iVar8,uVar16);
                }
                uVar9 = uVar9 - 1;
                if (uVar9 < 2) goto LAB_00e689a4;
                lVar26 = lVar26 + 0x18;
                uVar10 = uVar38;
              } while( true );
            }
            uVar17 = 0;
            if (uVar24 != 1) goto LAB_00e68da4;
LAB_00e68bf4:
            uVar9 = (uint)uVar17;
            uVar28 = uVar17;
            lVar26 = lStack_148;
            while (uVar9 != 0) {
              if (((((*(char *)(lVar26 + 0x20) == '\x02') || (*(char *)(lVar26 + 0x20) == -2)) ||
                   (*(char *)(lVar26 + 0x21) == -2)) || (*(char *)(lVar26 + 0x21) == '\x02')) &&
                 (uVar9 = *(uint *)(lVar26 + 0x1c), (uVar9 >> 4 & 1) == 0)) {
                iVar8 = *(int *)(param_3 + 0x67);
                lVar14 = *(long *)(lVar26 + 0x30);
                if (iVar8 != 0) {
                  iVar35 = *(int *)(param_3 + 0x1ed);
                  piVar32 = (int *)(param_3 + 0x69);
                  do {
                    if (lVar14 - piVar32[1] < -(long)iVar35) break;
                    if ((lVar14 <= (long)*piVar32 + (long)iVar35) &&
                       ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                        (lVar14 - piVar32[1] <= (long)*(int *)((long)param_3 + 0xf64))))) {
                      uVar12 = *(undefined8 *)(piVar32 + 6);
                      uVar9 = uVar9 | 0x30;
                      *(uint *)(lVar26 + 0x1c) = uVar9;
                      *(undefined8 *)(lVar26 + 0x40) = uVar12;
                    }
                    iVar8 = iVar8 + -1;
                    piVar32 = piVar32 + 0xc;
                  } while (iVar8 != 0);
                }
                uVar33 = (ulong)*(uint *)(param_3 + 200);
                if (*(uint *)(param_3 + 200) != 0) {
                  iVar8 = *(int *)(param_3 + 0x1ed);
                  piVar32 = (int *)(param_3 + uVar33 * 6 + 0xc4);
                  do {
                    if (*piVar32 - lVar14 < -(long)iVar8) break;
                    if (((long)piVar32[1] - (long)iVar8 <= lVar14) &&
                       ((*(char *)((long)param_3 + 0xf6c) != '\0' ||
                        (*piVar32 - lVar14 < (long)*(int *)((long)param_3 + 0xf64))))) {
                      uVar12 = *(undefined8 *)(piVar32 + 8);
                      uVar9 = uVar9 | 0x30;
                      *(uint *)(lVar26 + 0x1c) = uVar9;
                      *(undefined8 *)(lVar26 + 0x40) = uVar12;
                    }
                    uVar10 = (int)uVar33 - 1;
                    uVar33 = (ulong)uVar10;
                    piVar32 = piVar32 + -0xc;
                  } while (uVar10 != 0);
                }
              }
              uVar9 = (int)uVar28 - 1;
              uVar28 = (ulong)uVar9;
              lVar26 = lVar26 + 0x48;
            }
            FUN_00e69378(uVar17,lStack_148,local_128,1);
            FUN_00e69448(&local_150,1);
            FUN_00e69764(local_150._4_4_,local_140,local_128,1);
            if ((uint)local_150 != 0) {
              uVar17 = 0;
              lVar26 = *(long *)(local_130 + 8);
              puVar11 = (undefined8 *)(lStack_148 + 0x40);
              puVar29 = (undefined8 *)(*(long *)(local_130 + 4) + 8);
              do {
                *puVar29 = *puVar11;
                if ((*(byte *)((long)puVar11 + -0x24) >> 4 & 1) != 0) {
                  *(byte *)(lVar26 + uVar17) = *(byte *)(lVar26 + uVar17) | 0x40;
                }
                uVar17 = uVar17 + 1;
                puVar29 = puVar29 + 2;
                puVar11 = puVar11 + 9;
              } while (uVar17 < (local_150 & 0xffffffff));
            }
          }
          if (!bVar7) {
            FUN_00e68ea8(local_128,lVar20,uVar42,0,0);
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != 2);
        iVar8 = 0;
      }
    }
    uVar42 = uStack_138;
    FUN_00e139fc(uStack_138,alStack_118[0xd]);
    alStack_118[0xc] = alStack_118[0xc] & 0xffffffff00000000;
    alStack_118[0xd] = 0;
    alStack_118[0xe] = 0;
    FUN_00e139fc(uVar42,alStack_118[10]);
    alStack_118[10] = 0;
    FUN_00e139fc(uVar42,alStack_118[9]);
    alStack_118[0xb] = 0;
    alStack_118[8] = 0;
    alStack_118[9] = 0;
    FUN_00e139fc(uVar42,alStack_118[4]);
    alStack_118[3] = alStack_118[3] & 0xffffffff00000000;
    alStack_118[4] = 0;
    alStack_118[5] = 0;
    FUN_00e139fc(uVar42,alStack_118[1]);
    alStack_118[1] = 0;
    FUN_00e139fc(uVar42,alStack_118[0]);
    alStack_118[2] = 0;
    local_120[0] = 0;
    local_120[1] = 0;
    alStack_118[0] = 0;
    FUN_00e139fc(uVar42,lStack_148);
    lStack_148 = 0;
    FUN_00e139fc(uVar42,local_140);
  }
  return iVar8;
}

