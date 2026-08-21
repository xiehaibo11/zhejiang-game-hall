
undefined8 * FUN_0011aac8(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 **ppuVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  char *pcVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  void *pvVar22;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pcVar13 = (char *)*param_1;
  pcVar17 = (char *)param_1[1];
  if ((pcVar13 != pcVar17) && (*pcVar13 == 'L')) {
    pcVar13 = pcVar13 + 1;
    *param_1 = (long)pcVar13;
  }
  if (pcVar17 == pcVar13) {
LAB_0011aba0:
    uVar5 = __strlen_chk(&DAT_0012f456,4);
    pcVar13 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar13) < uVar5) {
LAB_0011abf8:
      uVar5 = __strlen_chk(&DAT_0012eed3,3);
      pcVar13 = (char *)*param_1;
      if (uVar5 <= (ulong)(param_1[1] - (long)pcVar13)) {
        if (uVar5 != 0) {
          pcVar17 = "St";
          uVar21 = uVar5;
          pcVar16 = pcVar13;
          do {
            if (*pcVar17 != *pcVar16) goto LAB_0011acc8;
            pcVar17 = pcVar17 + 1;
            uVar21 = uVar21 - 1;
            pcVar16 = pcVar16 + 1;
          } while (uVar21 != 0);
        }
        goto LAB_0011ac4c;
      }
LAB_0011acc8:
      puVar9 = (undefined8 *)FUN_0011cdc8(param_1,param_2);
      puVar6 = puVar9;
      local_70 = puVar9;
      if (puVar9 == (undefined8 *)0x0) goto LAB_0011b51c;
    }
    else {
      if (uVar5 != 0) {
        pcVar17 = "StL";
        uVar21 = uVar5;
        pcVar16 = pcVar13;
        do {
          if (*pcVar17 != *pcVar16) goto LAB_0011abf8;
          pcVar17 = pcVar17 + 1;
          uVar21 = uVar21 - 1;
          pcVar16 = pcVar16 + 1;
        } while (uVar21 != 0);
      }
LAB_0011ac4c:
      *param_1 = (long)(pcVar13 + uVar5);
      lVar12 = FUN_0011cdc8(param_1,param_2);
      if (lVar12 == 0) {
        puVar9 = (undefined8 *)0x0;
        local_70 = (undefined8 *)0x0;
        goto LAB_0011b51c;
      }
      pvVar22 = (void *)param_1[0x25c];
      lVar7 = *(long *)((long)pvVar22 + 8);
      puVar8 = pvVar22;
      if (0xfef < lVar7 + 0x20U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_0011b700;
        lVar7 = 0;
        *puVar8 = pvVar22;
        puVar8[1] = 0;
        param_1[0x25c] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
      *puVar6 = &PTR_FUN_00138448;
      *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010122;
      *(long *)((long)puVar8 + lVar7 + 0x20) = lVar12;
    }
    puVar9 = puVar6;
    local_70 = puVar6;
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) goto LAB_0011b51c;
    FUN_0011b8dc(param_1 + 0x25,&local_70);
    lVar12 = FUN_0011c1c4(param_1,param_2 != 0);
    if (lVar12 != 0) {
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar22 = (void *)param_1[0x25c];
      lVar7 = *(long *)((long)pvVar22 + 8);
      puVar8 = pvVar22;
      if (0xfef < lVar7 + 0x20U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) {
LAB_0011b700:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar8 = pvVar22;
        puVar8[1] = 0;
        param_1[0x25c] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
      puVar9 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
      *puVar9 = &PTR_FUN_001383d8;
      *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar6;
      *(long *)((long)puVar8 + lVar7 + 0x28) = lVar12;
      *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010120;
      goto LAB_0011b51c;
    }
  }
  else {
    cVar3 = *pcVar13;
    if (cVar3 != 'Z') {
      if (cVar3 == 'S') {
        if (((ulong)((long)pcVar17 - (long)pcVar13) < 2) || (pcVar13[1] != 't')) {
          lVar12 = FUN_0011be3c(param_1);
          if ((lVar12 != 0) &&
             ((((char *)param_1[1] != (char *)*param_1 && (*(char *)*param_1 == 'I')) &&
              (puVar6 = (undefined8 *)FUN_0011c1c4(param_1,param_2 != 0),
              puVar6 != (undefined8 *)0x0)))) {
            if (param_2 != 0) {
              *(undefined1 *)(param_2 + 1) = 1;
            }
            pvVar22 = (void *)param_1[0x25c];
            lVar7 = *(long *)((long)pvVar22 + 8);
            puVar8 = pvVar22;
            if (0xfef < lVar7 + 0x20U) {
              puVar8 = malloc(0x1000);
              if (puVar8 == (void *)0x0) goto LAB_0011b700;
              lVar7 = 0;
              *puVar8 = pvVar22;
              puVar8[1] = 0;
              param_1[0x25c] = (long)puVar8;
            }
            *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
            puVar9 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
            *puVar9 = &PTR_FUN_001383d8;
            *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010120;
LAB_0011b678:
            puVar9[2] = lVar12;
            puVar9[3] = puVar6;
            goto LAB_0011b51c;
          }
          goto LAB_0011b518;
        }
      }
      else if (cVar3 == 'N') {
        if (pcVar13 == pcVar17) goto LAB_0011b518;
        pcVar16 = pcVar13 + 1;
        *param_1 = (long)pcVar16;
        if (pcVar16 == pcVar17) {
          uVar20 = 0;
          pcVar16 = pcVar17;
        }
        else {
          if (*pcVar16 == 'r') {
            pcVar16 = pcVar13 + 2;
            uVar20 = 4;
            *param_1 = (long)pcVar16;
          }
          else {
            uVar20 = 0;
          }
          if (pcVar16 != pcVar17) {
            if (*pcVar16 == 'V') {
              pcVar16 = pcVar16 + 1;
              uVar20 = uVar20 | 2;
              *param_1 = (long)pcVar16;
            }
            if ((pcVar16 != pcVar17) && (*pcVar16 == 'K')) {
              pcVar16 = pcVar16 + 1;
              uVar20 = uVar20 | 1;
              *param_1 = (long)pcVar16;
            }
          }
        }
        if (param_2 != 0) {
          *(uint *)(param_2 + 4) = uVar20;
        }
        if (pcVar16 == pcVar17) {
LAB_0011af68:
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 8) = 0;
          }
        }
        else if (*pcVar16 == 'O') {
          *param_1 = (long)(pcVar16 + 1);
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 8) = 2;
          }
        }
        else {
          if (*pcVar16 != 'R') goto LAB_0011af68;
          *param_1 = (long)(pcVar16 + 1);
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 8) = 1;
          }
        }
        local_70 = (undefined8 *)0x0;
        uVar5 = __strlen_chk(&DAT_0012eed3,3);
        pcVar13 = (char *)*param_1;
        if (uVar5 <= (ulong)(param_1[1] - (long)pcVar13)) {
          if (uVar5 != 0) {
            pcVar17 = "St";
            uVar21 = uVar5;
            pcVar16 = pcVar13;
            do {
              if (*pcVar17 != *pcVar16) goto LAB_0011b03c;
              pcVar17 = pcVar17 + 1;
              uVar21 = uVar21 - 1;
              pcVar16 = pcVar16 + 1;
            } while (uVar21 != 0);
          }
          pvVar22 = (void *)param_1[0x25c];
          *param_1 = (long)(pcVar13 + uVar5);
          lVar12 = *(long *)((long)pvVar22 + 8);
          puVar6 = pvVar22;
          if (0xfef < lVar12 + 0x20U) {
            puVar6 = malloc(0x1000);
            if (puVar6 == (void *)0x0) goto LAB_0011b700;
            lVar12 = 0;
            *puVar6 = pvVar22;
            puVar6[1] = 0;
            param_1[0x25c] = (long)puVar6;
          }
          *(long *)((long)puVar6 + 8) = lVar12 + 0x20;
          lVar7 = __strlen_chk(&DAT_0012eed6,4);
          local_70 = (undefined8 *)((long)puVar6 + lVar12 + 0x10);
          *local_70 = &PTR_FUN_00136fb8;
          *(undefined4 *)((long)puVar6 + lVar12 + 0x18) = 0x1010107;
          *(undefined **)((long)puVar6 + lVar12 + 0x20) = &DAT_0012eed6;
          *(undefined **)((long)puVar6 + lVar12 + 0x28) = &DAT_0012eed6 + lVar7;
        }
LAB_0011b03c:
LAB_0011b06c:
        do {
          pcVar13 = (char *)*param_1;
          pcVar17 = (char *)param_1[1];
          if (pcVar13 != pcVar17) {
            if (*pcVar13 == 'E') {
              *param_1 = (long)(pcVar13 + 1);
              puVar9 = local_70;
              if (local_70 == (undefined8 *)0x0) goto LAB_0011b51c;
              if (param_1[0x25] != param_1[0x26]) {
                param_1[0x26] = param_1[0x26] + -8;
                goto LAB_0011b51c;
              }
              break;
            }
            if (*pcVar13 == 'L') {
              pcVar13 = pcVar13 + 1;
              *param_1 = (long)pcVar13;
            }
          }
          if ((pcVar13 == pcVar17) || (*pcVar13 != 'M')) {
            if (pcVar17 == pcVar13) {
switchD_0011b0d0_caseD_45:
              puVar9 = (undefined8 *)FUN_0011cdc8(param_1,param_2);
              if (puVar9 == (undefined8 *)0x0) goto LAB_0011b51c;
LAB_0011b234:
              puVar6 = local_70;
              if (local_70 != (undefined8 *)0x0) {
                pvVar22 = (void *)param_1[0x25c];
                lVar12 = *(long *)((long)pvVar22 + 8);
                puVar8 = pvVar22;
                if (0xfef < lVar12 + 0x20U) {
                  puVar8 = malloc(0x1000);
                  if (puVar8 == (void *)0x0) goto LAB_0011b700;
                  lVar12 = 0;
                  *puVar8 = pvVar22;
                  puVar8[1] = 0;
                  param_1[0x25c] = (long)puVar8;
                }
                *(long *)((long)puVar8 + 8) = lVar12 + 0x20;
                puVar14 = (undefined8 *)((long)puVar8 + lVar12 + 0x10);
                *puVar14 = &PTR_FUN_00137028;
                *(undefined4 *)((long)puVar8 + lVar12 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar8 + lVar12 + 0x20) = puVar6;
                *(undefined8 **)((long)puVar8 + lVar12 + 0x28) = puVar9;
                puVar9 = puVar14;
              }
              local_70 = puVar9;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
            }
            else {
              switch(*pcVar13) {
              case 'D':
                if (1 < (ulong)((long)pcVar17 - (long)pcVar13)) {
                  if ((byte)(pcVar13[1] | 0x20U) == 0x74) {
                    puVar9 = (undefined8 *)FUN_0011c920(param_1);
                    goto joined_r0x0011b230;
                  }
                  if (pcVar13[1] == 'C') goto switchD_0011b0d0_caseD_45;
                }
              case 'C':
                if (local_70 == (undefined8 *)0x0) goto LAB_0011b518;
                puVar8 = (undefined8 *)FUN_0011c9d0(param_1,&local_70,param_2);
                puVar6 = local_70;
                puVar9 = (undefined8 *)0x0;
                if (puVar8 == (undefined8 *)0x0) goto LAB_0011b51c;
                if (local_70 != (undefined8 *)0x0) {
                  pvVar22 = (void *)param_1[0x25c];
                  lVar12 = *(long *)((long)pvVar22 + 8);
                  puVar9 = pvVar22;
                  if (0xfef < lVar12 + 0x20U) {
                    puVar9 = malloc(0x1000);
                    if (puVar9 == (void *)0x0) goto LAB_0011b700;
                    lVar12 = 0;
                    *puVar9 = pvVar22;
                    puVar9[1] = 0;
                    param_1[0x25c] = (long)puVar9;
                  }
                  *(long *)((long)puVar9 + 8) = lVar12 + 0x20;
                  puVar14 = (undefined8 *)((long)puVar9 + lVar12 + 0x10);
                  *puVar14 = &PTR_FUN_00137028;
                  *(undefined4 *)((long)puVar9 + lVar12 + 0x18) = 0x1010117;
                  *(undefined8 **)((long)puVar9 + lVar12 + 0x20) = puVar6;
                  *(undefined8 **)((long)puVar9 + lVar12 + 0x28) = puVar8;
                  puVar8 = puVar14;
                }
                local_70 = puVar8;
                if (param_2 != 0) {
                  *(undefined1 *)(param_2 + 1) = 0;
                }
                local_70 = (undefined8 *)FUN_0011cc40(param_1,local_70);
                if (local_70 == (undefined8 *)0x0) goto LAB_0011b518;
                break;
              default:
                goto switchD_0011b0d0_caseD_45;
              case 'I':
                lVar12 = FUN_0011c1c4(param_1,param_2 != 0);
                puVar6 = local_70;
                puVar9 = (undefined8 *)0x0;
                if ((lVar12 == 0) || (local_70 == (undefined8 *)0x0)) goto LAB_0011b51c;
                pvVar22 = (void *)param_1[0x25c];
                lVar7 = *(long *)((long)pvVar22 + 8);
                puVar8 = pvVar22;
                if (0xfef < lVar7 + 0x20U) {
                  puVar8 = malloc(0x1000);
                  if (puVar8 == (void *)0x0) goto LAB_0011b700;
                  lVar7 = 0;
                  *puVar8 = pvVar22;
                  puVar8[1] = 0;
                  param_1[0x25c] = (long)puVar8;
                }
                *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
                local_70 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
                *local_70 = &PTR_FUN_001383d8;
                *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010120;
                *(undefined8 **)((long)puVar8 + lVar7 + 0x20) = puVar6;
                *(long *)((long)puVar8 + lVar7 + 0x28) = lVar12;
                if (param_2 != 0) {
                  *(undefined1 *)(param_2 + 1) = 1;
                }
                break;
              case 'S':
                if ((1 < (ulong)((long)pcVar17 - (long)pcVar13)) && (pcVar13[1] == 't'))
                goto switchD_0011b0d0_caseD_45;
                puVar9 = (undefined8 *)FUN_0011be3c(param_1);
                puVar6 = local_70;
                local_78 = puVar9;
                if (puVar9 == (undefined8 *)0x0) goto LAB_0011b51c;
                puVar8 = puVar9;
                if (local_70 != (undefined8 *)0x0) {
                  pvVar22 = (void *)param_1[0x25c];
                  lVar12 = *(long *)((long)pvVar22 + 8);
                  puVar14 = pvVar22;
                  if (0xfef < lVar12 + 0x20U) {
                    puVar14 = malloc(0x1000);
                    if (puVar14 == (void *)0x0) goto LAB_0011b700;
                    lVar12 = 0;
                    *puVar14 = pvVar22;
                    puVar14[1] = 0;
                    param_1[0x25c] = (long)puVar14;
                  }
                  *(long *)((long)puVar14 + 8) = lVar12 + 0x20;
                  puVar8 = (undefined8 *)((long)puVar14 + lVar12 + 0x10);
                  *puVar8 = &PTR_FUN_00137028;
                  *(undefined4 *)((long)puVar14 + lVar12 + 0x18) = 0x1010117;
                  *(undefined8 **)((long)puVar14 + lVar12 + 0x20) = puVar6;
                  *(undefined8 **)((long)puVar14 + lVar12 + 0x28) = puVar9;
                }
                local_70 = puVar8;
                if (param_2 != 0) {
                  *(undefined1 *)(param_2 + 1) = 0;
                }
                if (local_70 != puVar9) {
                  ppuVar11 = &local_78;
                  goto LAB_0011b36c;
                }
                goto LAB_0011b06c;
              case 'T':
                puVar9 = (undefined8 *)FUN_0011c690(param_1);
joined_r0x0011b230:
                if (puVar9 != (undefined8 *)0x0) goto LAB_0011b234;
                goto LAB_0011b51c;
              }
            }
            ppuVar11 = &local_70;
LAB_0011b36c:
            FUN_0011b8dc(param_1 + 0x25,ppuVar11);
            goto LAB_0011b06c;
          }
          *param_1 = (long)(pcVar13 + 1);
        } while (local_70 != (undefined8 *)0x0);
        goto LAB_0011b518;
      }
      goto LAB_0011aba0;
    }
    if (pcVar13 != pcVar17) {
      *param_1 = (long)(pcVar13 + 1);
      lVar12 = FUN_00118900(param_1);
      if (lVar12 != 0) {
        pbVar18 = (byte *)*param_1;
        pbVar15 = (byte *)param_1[1];
        if ((pbVar18 != pbVar15) && (*pbVar18 == 0x45)) {
          pbVar1 = pbVar18 + 1;
          *param_1 = (long)pbVar1;
          if (pbVar1 == pbVar15) {
LAB_0011b3f0:
            lVar7 = FUN_0011aac8(param_1,param_2);
            if (lVar7 != 0) {
              pbVar18 = (byte *)*param_1;
              pbVar1 = (byte *)param_1[1];
              pbVar15 = pbVar18;
              if (pbVar18 != pbVar1) {
                uVar20 = (uint)*pbVar18;
                pbVar19 = pbVar18;
                if (uVar20 == 0x5f) {
                  if (pbVar18 + 1 != pbVar1) {
                    uVar20 = (uint)pbVar18[1];
                    if (uVar20 - 0x30 < 10) {
                      pbVar15 = pbVar18 + 2;
                    }
                    else if (uVar20 == 0x5f) {
                      for (pbVar18 = pbVar18 + 2; pbVar18 != pbVar1; pbVar18 = pbVar18 + 1) {
                        if (9 < *pbVar18 - 0x30) {
                          if (*pbVar18 == 0x5f) {
                            pbVar15 = pbVar18 + 1;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
                else {
                  while ((pbVar15 = pbVar18, uVar20 - 0x30 < 10 &&
                         (pbVar19 = pbVar19 + 1, pbVar15 = pbVar1, pbVar1 != pbVar19))) {
                    uVar20 = (uint)*pbVar19;
                  }
                }
              }
              pvVar22 = (void *)param_1[0x25c];
              *param_1 = (long)pbVar15;
LAB_0011b68c:
              lVar10 = *(long *)((long)pvVar22 + 8);
              puVar6 = pvVar22;
              if (0xfef < lVar10 + 0x20U) {
                puVar6 = malloc(0x1000);
                if (puVar6 == (void *)0x0) goto LAB_0011b700;
                lVar10 = 0;
                *puVar6 = pvVar22;
                puVar6[1] = 0;
                param_1[0x25c] = (long)puVar6;
              }
              *(long *)((long)puVar6 + 8) = lVar10 + 0x20;
              puVar9 = (undefined8 *)((long)puVar6 + lVar10 + 0x10);
              *puVar9 = &PTR_FUN_00138218;
              *(undefined4 *)((long)puVar6 + lVar10 + 0x18) = 0x1010118;
              *(long *)((long)puVar6 + lVar10 + 0x20) = lVar12;
              *(long *)((long)puVar6 + lVar10 + 0x28) = lVar7;
              goto LAB_0011b51c;
            }
          }
          else {
            if (*pbVar1 == 0x73) {
              pbVar1 = pbVar18 + 2;
              *param_1 = (long)pbVar1;
              pbVar19 = pbVar15;
              if (pbVar1 != pbVar15) {
                pbVar19 = pbVar1;
                if (*pbVar1 == 0x5f) {
                  if (pbVar18 + 3 != pbVar15) {
                    uVar20 = (uint)pbVar18[3];
                    if (uVar20 - 0x30 < 10) {
                      pbVar19 = pbVar18 + 4;
                    }
                    else if (uVar20 == 0x5f) {
                      for (pbVar18 = pbVar18 + 4; pbVar18 != pbVar15; pbVar18 = pbVar18 + 1) {
                        if (9 < *pbVar18 - 0x30) {
                          if (*pbVar18 == 0x5f) {
                            pbVar19 = pbVar18 + 1;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
                else if (*pbVar1 - 0x30 < 10) {
                  pbVar18 = pbVar18 + 3;
                  do {
                    pbVar19 = pbVar15;
                    if (pbVar15 == pbVar18) break;
                    bVar2 = *pbVar18;
                    pbVar19 = pbVar1;
                    pbVar18 = pbVar18 + 1;
                  } while (bVar2 - 0x30 < 10);
                }
              }
              pvVar22 = (void *)param_1[0x25c];
              *param_1 = (long)pbVar19;
              lVar7 = *(long *)((long)pvVar22 + 8);
              puVar8 = pvVar22;
              if (0xfef < lVar7 + 0x20U) {
                puVar8 = malloc(0x1000);
                if (puVar8 == (void *)0x0) goto LAB_0011b700;
                lVar7 = 0;
                *puVar8 = pvVar22;
                puVar8[1] = 0;
                param_1[0x25c] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
              lVar10 = __strlen_chk("string literal",0xf);
              puVar6 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
              *puVar6 = &PTR_FUN_00136fb8;
              *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010107;
              *(char **)((long)puVar8 + lVar7 + 0x20) = "string literal";
              *(char **)((long)puVar8 + lVar7 + 0x28) = "string literal" + lVar10;
              pvVar22 = (void *)param_1[0x25c];
              lVar7 = *(long *)((long)pvVar22 + 8);
              puVar8 = pvVar22;
              if (0xfef < lVar7 + 0x20U) {
                puVar8 = malloc(0x1000);
                if (puVar8 == (void *)0x0) goto LAB_0011b700;
                lVar7 = 0;
                *puVar8 = pvVar22;
                puVar8[1] = 0;
                param_1[0x25c] = (long)puVar8;
              }
              *(long *)((long)puVar8 + 8) = lVar7 + 0x20;
              puVar9 = (undefined8 *)((long)puVar8 + lVar7 + 0x10);
              *puVar9 = &PTR_FUN_00138218;
              *(undefined4 *)((long)puVar8 + lVar7 + 0x18) = 0x1010118;
              goto LAB_0011b678;
            }
            if (*pbVar1 != 100) goto LAB_0011b3f0;
            pbVar1 = pbVar18 + 2;
            *param_1 = (long)pbVar1;
            pbVar19 = pbVar15;
            if ((pbVar1 != pbVar15) && (pbVar19 = pbVar1, *pbVar1 == 0x6e)) {
              pbVar1 = pbVar18 + 3;
              *param_1 = (long)pbVar1;
              pbVar19 = pbVar1;
            }
            if (pbVar1 != pbVar15) {
              bVar2 = *pbVar19;
              while (bVar2 - 0x30 < 10) {
                pbVar19 = pbVar19 + 1;
                *param_1 = (long)pbVar19;
                if (pbVar15 == pbVar19) break;
                bVar2 = *pbVar19;
              }
            }
            if ((pbVar19 != pbVar15) && (*pbVar19 == 0x5f)) {
              *param_1 = (long)(pbVar19 + 1);
              lVar7 = FUN_0011aac8(param_1,param_2);
              if (lVar7 != 0) {
                pvVar22 = (void *)param_1[0x25c];
                goto LAB_0011b68c;
              }
            }
          }
        }
      }
    }
  }
LAB_0011b518:
  puVar9 = (undefined8 *)0x0;
LAB_0011b51c:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

