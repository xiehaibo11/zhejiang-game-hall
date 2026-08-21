
undefined8 * FUN_0014b4c0(long *param_1,undefined1 *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 uVar20;
  char *pcVar21;
  byte *pbVar22;
  uint uVar23;
  void *pvVar24;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pcVar21 = (char *)*param_1;
  pcVar1 = (char *)param_1[1];
  if ((pcVar21 != pcVar1) && (*pcVar21 == 'L')) {
    pcVar21 = pcVar21 + 1;
    *param_1 = (long)pcVar21;
  }
  if (pcVar1 == pcVar21) {
LAB_0014b578:
    puVar10 = (undefined8 *)FUN_0014dd04(param_1,param_2);
    puVar9 = puVar10;
    local_70 = puVar10;
    if (puVar10 == (undefined8 *)0x0) goto LAB_0014bf3c;
LAB_0014b590:
    puVar9 = puVar10;
    local_70 = puVar10;
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) goto LAB_0014bf3c;
    FUN_0014c270(param_1 + 0x25,&local_70);
    lVar13 = FUN_0014d248(param_1,param_2 != (undefined1 *)0x0);
    if (lVar13 != 0) {
      if (param_2 != (undefined1 *)0x0) {
        param_2[1] = 1;
      }
      pvVar24 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar24 + 8);
      puVar8 = pvVar24;
      if (0xfef < lVar12 + 0x20U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_0014c078;
        lVar12 = 0;
        *puVar8 = pvVar24;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
      puVar9 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
      *puVar9 = &PTR_FUN_00168920;
      *(undefined8 **)((long)puVar8 + lVar12 + 0x20) = puVar10;
      *(long *)((long)puVar8 + lVar12 + 0x28) = lVar13;
      *(undefined4 *)((long)puVar8 + lVar12 + 0x18) = 0x1010125;
      goto LAB_0014bf3c;
    }
  }
  else {
    cVar5 = *pcVar21;
    if (cVar5 == 'Z') {
      if (pcVar21 != pcVar1) {
        *param_1 = (long)(pcVar21 + 1);
        puVar8 = (undefined8 *)FUN_00149bec(param_1);
        local_70 = puVar8;
        if (puVar8 != (undefined8 *)0x0) {
          pbVar22 = (byte *)*param_1;
          pbVar2 = (byte *)param_1[1];
          if ((pbVar22 != pbVar2) && (*pbVar22 == 0x45)) {
            pbVar18 = pbVar22 + 1;
            *param_1 = (long)pbVar18;
            if (pbVar18 == pbVar2) {
LAB_0014beb8:
              local_78 = (undefined8 *)FUN_0014b4c0(param_1,param_2);
              if (local_78 == (undefined8 *)0x0) goto LAB_0014bf38;
              lVar13 = FUN_0015a620(*param_1,param_1[1]);
              *param_1 = lVar13;
            }
            else {
              if (*pbVar18 != 100) {
                if (*pbVar18 == 0x73) {
                  pbVar18 = pbVar22 + 2;
                  *param_1 = (long)pbVar18;
                  pbVar15 = pbVar2;
                  if (pbVar18 != pbVar2) {
                    pbVar15 = pbVar18;
                    if (*pbVar18 == 0x5f) {
                      if (pbVar22 + 3 != pbVar2) {
                        uVar23 = (uint)pbVar22[3];
                        if (uVar23 - 0x30 < 10) {
                          pbVar15 = pbVar22 + 4;
                        }
                        else if (uVar23 == 0x5f) {
                          for (pbVar22 = pbVar22 + 4; pbVar22 != pbVar2; pbVar22 = pbVar22 + 1) {
                            if (9 < *pbVar22 - 0x30) {
                              if (*pbVar22 == 0x5f) {
                                pbVar15 = pbVar22 + 1;
                              }
                              break;
                            }
                          }
                        }
                      }
                    }
                    else if (*pbVar18 - 0x30 < 10) {
                      pbVar22 = pbVar22 + 3;
                      do {
                        pbVar15 = pbVar2;
                        if (pbVar22 == pbVar2) break;
                        bVar4 = *pbVar22;
                        pbVar15 = pbVar18;
                        pbVar22 = pbVar22 + 1;
                      } while (bVar4 - 0x30 < 10);
                    }
                  }
                  pvVar24 = (void *)param_1[0x266];
                  *param_1 = (long)pbVar15;
                  lVar13 = *(long *)((long)pvVar24 + 8);
                  puVar10 = pvVar24;
                  if (0xfef < lVar13 + 0x20U) {
                    puVar10 = malloc(0x1000);
                    if (puVar10 == (void *)0x0) goto LAB_0014c078;
                    lVar13 = 0;
                    *puVar10 = pvVar24;
                    puVar10[1] = 0;
                    param_1[0x266] = (long)puVar10;
                  }
                  *(long *)((long)puVar10 + 8) = lVar13 + 0x20;
                  puVar14 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
                  *puVar14 = &PTR_FUN_001671f0;
                  *(undefined4 *)((long)puVar10 + lVar13 + 0x18) = 0x1010107;
                  *(char **)((long)puVar10 + lVar13 + 0x20) = "string literal";
                  *(char **)((long)puVar10 + lVar13 + 0x28) = "";
                  pvVar24 = (void *)param_1[0x266];
                  lVar13 = *(long *)((long)pvVar24 + 8);
                  puVar10 = pvVar24;
                  if (0xfef < lVar13 + 0x20U) {
                    puVar10 = malloc(0x1000);
                    if (puVar10 == (void *)0x0) goto LAB_0014c078;
                    lVar13 = 0;
                    *puVar10 = pvVar24;
                    puVar10[1] = 0;
                    param_1[0x266] = (long)puVar10;
                  }
                  *(long *)((long)puVar10 + 8) = lVar13 + 0x20;
                  puVar9 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
                  *puVar9 = &PTR_FUN_00168760;
                  *(undefined4 *)((long)puVar10 + lVar13 + 0x18) = 0x1010118;
                  *(undefined8 **)((long)puVar10 + lVar13 + 0x20) = puVar8;
                  *(undefined8 **)((long)puVar10 + lVar13 + 0x28) = puVar14;
                  goto LAB_0014bf3c;
                }
                goto LAB_0014beb8;
              }
              *param_1 = (long)(pbVar22 + 2);
              FUN_0014a40c(param_1,1);
              pcVar21 = (char *)*param_1;
              if ((pcVar21 == (char *)param_1[1]) || (*pcVar21 != '_')) goto LAB_0014bf38;
              *param_1 = (long)(pcVar21 + 1);
              local_78 = (undefined8 *)FUN_0014b4c0(param_1,param_2);
              if (local_78 == (undefined8 *)0x0) goto LAB_0014bf38;
            }
            puVar9 = (undefined8 *)FUN_0015a6d0(param_1,&local_70,&local_78);
            goto LAB_0014bf3c;
          }
        }
      }
    }
    else if (cVar5 == 'S') {
      if (((ulong)((long)pcVar1 - (long)pcVar21) < 2) || (pcVar21[1] != 't')) {
        local_70 = (undefined8 *)FUN_0014ceb0(param_1);
        if ((local_70 != (undefined8 *)0x0) &&
           ((((char *)param_1[1] != (char *)*param_1 && (*(char *)*param_1 == 'I')) &&
            (local_78 = (undefined8 *)FUN_0014d248(param_1,param_2 != (undefined1 *)0x0),
            local_78 != (undefined8 *)0x0)))) {
          if (param_2 != (undefined1 *)0x0) {
            param_2[1] = 1;
          }
          puVar9 = (undefined8 *)FUN_0014d6d0(param_1,&local_70,&local_78);
          goto LAB_0014bf3c;
        }
      }
      else {
        if (((ulong)((long)pcVar1 - (long)pcVar21) < 3) || (pcVar21[2] != 'L')) {
          lVar13 = 2;
        }
        else {
          lVar13 = 3;
        }
        *param_1 = (long)(pcVar21 + lVar13);
        lVar13 = FUN_0014dd04(param_1,param_2);
        if (lVar13 != 0) {
          pvVar24 = (void *)param_1[0x266];
          lVar12 = *(long *)((long)pvVar24 + 8);
          puVar8 = pvVar24;
          if (0xfef < lVar12 + 0x20U) {
            puVar8 = malloc(0x1000);
            if (puVar8 == (void *)0x0) goto LAB_0014c078;
            lVar12 = 0;
            *puVar8 = pvVar24;
            puVar8[1] = 0;
            param_1[0x266] = (long)puVar8;
          }
          *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
          puVar10 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
          *puVar10 = &PTR_FUN_00168990;
          *(undefined4 *)((long)puVar8 + lVar12 + 0x18) = 0x1010127;
          *(long *)((long)puVar8 + lVar12 + 0x20) = lVar13;
          goto LAB_0014b590;
        }
      }
    }
    else {
      if (cVar5 != 'N') goto LAB_0014b578;
      if (pcVar21 == pcVar1) goto LAB_0014bf38;
      pcVar16 = pcVar21 + 1;
      *param_1 = (long)pcVar16;
      pcVar17 = pcVar1;
      if (pcVar16 == pcVar1) {
        uVar23 = 0;
      }
      else {
        if (*pcVar16 == 'r') {
          pcVar16 = pcVar21 + 2;
          uVar23 = 4;
          *param_1 = (long)pcVar16;
        }
        else {
          uVar23 = 0;
        }
        if (pcVar16 != pcVar1) {
          if (*pcVar16 == 'V') {
            pcVar16 = pcVar16 + 1;
            uVar23 = uVar23 | 2;
            *param_1 = (long)pcVar16;
          }
          if ((pcVar16 != pcVar1) && (pcVar17 = pcVar16, *pcVar16 == 'K')) {
            uVar23 = uVar23 | 1;
            *param_1 = (long)(pcVar16 + 1);
            pcVar17 = pcVar16 + 1;
          }
        }
      }
      if (param_2 != (undefined1 *)0x0) {
        *(uint *)(param_2 + 4) = uVar23;
      }
      if (pcVar17 == pcVar1) {
LAB_0014b824:
        if (param_2 != (undefined1 *)0x0) {
          uVar20 = 0;
LAB_0014b8c0:
          param_2[8] = uVar20;
        }
      }
      else if (*pcVar17 == 'R') {
        pcVar17 = pcVar17 + 1;
        *param_1 = (long)pcVar17;
        if (param_2 != (undefined1 *)0x0) {
          uVar20 = 1;
          goto LAB_0014b8c0;
        }
      }
      else {
        if (*pcVar17 != 'O') goto LAB_0014b824;
        pcVar17 = pcVar17 + 1;
        *param_1 = (long)pcVar17;
        if (param_2 != (undefined1 *)0x0) {
          uVar20 = 2;
          goto LAB_0014b8c0;
        }
      }
      local_70 = (undefined8 *)0x0;
      if (((1 < (ulong)((long)pcVar1 - (long)pcVar17)) && (*pcVar17 == 'S')) && (pcVar17[1] == 't'))
      {
        pvVar24 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar17 + 2);
        lVar13 = *(long *)((long)pvVar24 + 8);
        puVar8 = pvVar24;
        if (0xfef < lVar13 + 0x20U) {
          puVar8 = malloc(0x1000);
          if (puVar8 == (void *)0x0) {
LAB_0014c078:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar13 = 0;
          *puVar8 = pvVar24;
          puVar8[1] = 0;
          param_1[0x266] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar13 + 0x20;
        local_70 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
        *local_70 = &PTR_FUN_001671f0;
        *(undefined4 *)((long)puVar8 + lVar13 + 0x18) = 0x1010107;
        *(undefined **)((long)puVar8 + lVar13 + 0x20) = &DAT_00115bfb;
        *(undefined **)((long)puVar8 + lVar13 + 0x28) = &DAT_00115bfe;
      }
      do {
        while( true ) {
          pbVar22 = (byte *)*param_1;
          pbVar2 = (byte *)param_1[1];
          if (pbVar22 == pbVar2) break;
          if (*pbVar22 != 0x4c) {
            if (*pbVar22 != 0x45) break;
            *param_1 = (long)(pbVar22 + 1);
            puVar9 = local_70;
            if (local_70 == (undefined8 *)0x0) goto LAB_0014bf3c;
            if (param_1[0x25] != param_1[0x26]) {
              param_1[0x26] = param_1[0x26] + -8;
              goto LAB_0014bf3c;
            }
            goto LAB_0014bf38;
          }
          pbVar22 = pbVar22 + 1;
          *param_1 = (long)pbVar22;
          if (pbVar22 != pbVar2) goto LAB_0014b9dc;
LAB_0014b9fc:
          uVar19 = (long)pbVar2 - (long)pbVar22;
          if (pbVar2 == pbVar22) goto code_r0x0014bc64;
          switch(*pbVar22) {
          case 0x44:
            if (1 < uVar19) {
              bVar4 = pbVar22[1];
              if (bVar4 == 0x43) goto code_r0x0014bc64;
              if ((bVar4 == 0x74) || (bVar4 == 0x54)) {
                puVar9 = (undefined8 *)FUN_0014dad8(param_1);
                goto joined_r0x0014bcd0;
              }
            }
          case 0x43:
            if (local_70 == (undefined8 *)0x0) goto LAB_0014bf38;
            if ((*(char *)(local_70 + 1) == ')') &&
               (iVar3 = *(int *)((long)local_70 + 0xc), iVar3 - 2U < 4)) {
              pvVar24 = (void *)param_1[0x266];
              lVar13 = *(long *)((long)pvVar24 + 8);
              puVar8 = pvVar24;
              if (0xfef < lVar13 + 0x10U) {
                puVar8 = malloc(0x1000);
                if (puVar8 == (void *)0x0) goto LAB_0014c078;
                lVar13 = 0;
                *puVar8 = pvVar24;
                puVar8[1] = 0;
                param_1[0x266] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar13 + 0x10;
              local_70 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
              *local_70 = &PTR_FUN_001685a0;
              *(undefined4 *)((long)puVar8 + lVar13 + 0x18) = 0x1010128;
              *(int *)((long)puVar8 + lVar13 + 0x1c) = iVar3;
            }
            puVar8 = local_70;
            if (pbVar22 == pbVar2) {
              bVar4 = *pbVar2;
LAB_0014bd64:
              puVar9 = (undefined8 *)0x0;
              if ((bVar4 != 0x44) || (uVar19 == 1)) goto LAB_0014bf3c;
              bVar4 = pbVar22[1];
              puVar9 = (undefined8 *)0x0;
              if ((0x35 < bVar4) || ((1L << ((ulong)bVar4 & 0x3f) & 0x37000000000000U) == 0))
              goto LAB_0014bf3c;
              *param_1 = (long)(pbVar22 + 2);
              if (param_2 != (undefined1 *)0x0) {
                *param_2 = 1;
              }
              puVar14 = (undefined8 *)param_1[0x266];
              lVar13 = puVar14[1];
              puVar10 = puVar14;
              if (0xfef < lVar13 + 0x20U) {
                puVar10 = malloc(0x1000);
                if (puVar10 == (undefined8 *)0x0) goto LAB_0014c078;
                lVar13 = 0;
                *puVar10 = puVar14;
                puVar10[1] = 0;
                param_1[0x266] = (long)puVar10;
              }
              uVar19 = lVar13 + 0x20;
              puVar10[1] = uVar19;
              uVar20 = 1;
            }
            else {
              bVar4 = *pbVar22;
              if (bVar4 != 0x43) goto LAB_0014bd64;
              pbVar18 = pbVar22 + 1;
              *param_1 = (long)pbVar18;
              if (pbVar18 == pbVar2) goto LAB_0014bf38;
              bVar6 = *pbVar18;
              if (bVar6 == 0x49) {
                pbVar18 = pbVar22 + 2;
                *param_1 = (long)pbVar18;
              }
              if ((pbVar2 == pbVar18) || (bVar4 = *pbVar18, 4 < bVar4 - 0x31)) goto LAB_0014bf38;
              *param_1 = (long)(pbVar18 + 1);
              if (param_2 != (undefined1 *)0x0) {
                *param_2 = 1;
              }
              if ((bVar6 == 0x49) && (lVar13 = FUN_0014b4c0(param_1,param_2), lVar13 == 0))
              goto LAB_0014bf38;
              puVar14 = (undefined8 *)param_1[0x266];
              lVar13 = puVar14[1];
              puVar10 = puVar14;
              if (0xfef < lVar13 + 0x20U) {
                puVar10 = malloc(0x1000);
                if (puVar10 == (void *)0x0) goto LAB_0014c078;
                lVar13 = 0;
                *puVar10 = puVar14;
                puVar10[1] = 0;
                param_1[0x266] = (long)puVar10;
              }
              uVar20 = 0;
              uVar19 = lVar13 + 0x20;
              puVar10[1] = uVar19;
            }
            puVar14 = local_70;
            puVar9 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
            *puVar9 = &PTR_FUN_00168610;
            *(undefined4 *)((long)puVar10 + lVar13 + 0x18) = 0x101012a;
            *(undefined8 **)((long)puVar10 + lVar13 + 0x20) = puVar8;
            *(undefined1 *)((long)puVar10 + lVar13 + 0x28) = uVar20;
            *(uint *)((long)puVar10 + lVar13 + 0x2c) = bVar4 - 0x30;
            puVar8 = puVar9;
            if (local_70 != (undefined8 *)0x0) {
              puVar11 = puVar10;
              if (0xfcf < uVar19) {
                puVar11 = malloc(0x1000);
                if (puVar11 == (undefined8 *)0x0) goto LAB_0014c078;
                uVar19 = 0;
                *puVar11 = puVar10;
                puVar11[1] = 0;
                param_1[0x266] = (long)puVar11;
              }
              puVar11[1] = uVar19 + 0x20;
              puVar8 = (undefined8 *)((long)puVar11 + uVar19 + 0x10);
              *puVar8 = &PTR_FUN_00167260;
              *(undefined8 **)((long)puVar11 + uVar19 + 0x20) = puVar14;
              *(undefined8 **)((long)puVar11 + uVar19 + 0x28) = puVar9;
              *(undefined4 *)((long)puVar11 + uVar19 + 0x18) = 0x1010117;
            }
            if (param_2 != (undefined1 *)0x0) {
              param_2[1] = 0;
            }
            local_70 = (undefined8 *)FUN_0014dbf8(param_1,puVar8);
            if (local_70 == (undefined8 *)0x0) goto LAB_0014bf38;
LAB_0014b994:
            FUN_0014c270(param_1 + 0x25,&local_70);
            break;
          default:
            goto code_r0x0014bc64;
          case 0x49:
            lVar13 = FUN_0014d248(param_1,param_2 != (undefined1 *)0x0);
            puVar8 = local_70;
            puVar9 = (undefined8 *)0x0;
            if ((lVar13 == 0) || (local_70 == (undefined8 *)0x0)) goto LAB_0014bf3c;
            pvVar24 = (void *)param_1[0x266];
            lVar12 = *(long *)((long)pvVar24 + 8);
            puVar10 = pvVar24;
            if (0xfef < lVar12 + 0x20U) {
              puVar10 = malloc(0x1000);
              if (puVar10 == (void *)0x0) goto LAB_0014c078;
              lVar12 = 0;
              *puVar10 = pvVar24;
              puVar10[1] = 0;
              param_1[0x266] = (long)puVar10;
            }
            *(long *)((long)puVar10 + 8) = lVar12 + 0x20;
            local_70 = (undefined8 *)((long)puVar10 + lVar12 + 0x10);
            *local_70 = &PTR_FUN_00168920;
            *(undefined4 *)((long)puVar10 + lVar12 + 0x18) = 0x1010125;
            *(undefined8 **)((long)puVar10 + lVar12 + 0x20) = puVar8;
            *(long *)((long)puVar10 + lVar12 + 0x28) = lVar13;
            if (param_2 != (undefined1 *)0x0) {
              param_2[1] = 1;
            }
            goto LAB_0014b994;
          case 0x53:
            if ((1 < uVar19) && (pbVar22[1] == 0x74)) {
code_r0x0014bc64:
              puVar9 = (undefined8 *)FUN_0014dd04(param_1,param_2);
              if (puVar9 == (undefined8 *)0x0) goto LAB_0014bf3c;
LAB_0014bc78:
              puVar8 = local_70;
              if (local_70 != (undefined8 *)0x0) {
                pvVar24 = (void *)param_1[0x266];
                lVar13 = *(long *)((long)pvVar24 + 8);
                puVar10 = pvVar24;
                if (0xfef < lVar13 + 0x20U) {
                  puVar10 = malloc(0x1000);
                  if (puVar10 == (void *)0x0) goto LAB_0014c078;
                  lVar13 = 0;
                  *puVar10 = pvVar24;
                  puVar10[1] = 0;
                  param_1[0x266] = (long)puVar10;
                }
                *(long *)((long)puVar10 + 8) = lVar13 + 0x20;
                puVar14 = (undefined8 *)((long)puVar10 + lVar13 + 0x10);
                *puVar14 = &PTR_FUN_00167260;
                *(undefined4 *)((long)puVar10 + lVar13 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar10 + lVar13 + 0x20) = puVar8;
                *(undefined8 **)((long)puVar10 + lVar13 + 0x28) = puVar9;
                puVar9 = puVar14;
              }
              local_70 = puVar9;
              if (param_2 != (undefined1 *)0x0) {
                param_2[1] = 0;
              }
              goto LAB_0014b994;
            }
            puVar9 = (undefined8 *)FUN_0014ceb0(param_1);
            puVar8 = local_70;
            local_78 = puVar9;
            if (puVar9 == (undefined8 *)0x0) goto LAB_0014bf3c;
            puVar10 = puVar9;
            if (local_70 != (undefined8 *)0x0) {
              pvVar24 = (void *)param_1[0x266];
              lVar13 = *(long *)((long)pvVar24 + 8);
              puVar14 = pvVar24;
              if (0xfef < lVar13 + 0x20U) {
                puVar14 = malloc(0x1000);
                if (puVar14 == (void *)0x0) goto LAB_0014c078;
                lVar13 = 0;
                *puVar14 = pvVar24;
                puVar14[1] = 0;
                param_1[0x266] = (long)puVar14;
              }
              *(long *)((long)puVar14 + 8) = lVar13 + 0x20;
              puVar10 = (undefined8 *)((long)puVar14 + lVar13 + 0x10);
              *puVar10 = &PTR_FUN_00167260;
              *(undefined4 *)((long)puVar14 + lVar13 + 0x18) = 0x1010117;
              *(undefined8 **)((long)puVar14 + lVar13 + 0x20) = puVar8;
              *(undefined8 **)((long)puVar14 + lVar13 + 0x28) = puVar9;
            }
            local_70 = puVar10;
            if (param_2 != (undefined1 *)0x0) {
              param_2[1] = 0;
            }
            if (local_70 != puVar9) {
              FUN_0014c270(param_1 + 0x25,&local_78);
            }
            break;
          case 0x54:
            puVar9 = (undefined8 *)FUN_0014d768(param_1);
joined_r0x0014bcd0:
            if (puVar9 != (undefined8 *)0x0) goto LAB_0014bc78;
            goto LAB_0014bf3c;
          }
        }
        if (pbVar22 == pbVar2) goto LAB_0014b9fc;
LAB_0014b9dc:
        if (*pbVar22 != 0x4d) goto LAB_0014b9fc;
        *param_1 = (long)(pbVar22 + 1);
      } while (local_70 != (undefined8 *)0x0);
    }
  }
LAB_0014bf38:
  puVar9 = (undefined8 *)0x0;
LAB_0014bf3c:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

