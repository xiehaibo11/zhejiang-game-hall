
undefined8 * FUN_0183b554(long *param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  char *pcVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  void *pvVar20;
  size_t sVar21;
  undefined8 *puVar22;
  undefined8 *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar10 = (char *)*param_1;
  pcVar2 = (char *)param_1[1];
  if ((pcVar10 != pcVar2) && (*pcVar10 == 'L')) {
    pcVar10 = pcVar10 + 1;
    *param_1 = (long)pcVar10;
  }
  uVar5 = (long)pcVar2 - (long)pcVar10;
  if (pcVar2 == pcVar10) goto LAB_0183b848;
  cVar4 = *pcVar10;
  if (cVar4 == 'Z') {
    if (pcVar10 != pcVar2) {
      *param_1 = (long)(pcVar10 + 1);
      lVar15 = FUN_01838d94(param_1);
      if (lVar15 != 0) {
        pbVar17 = (byte *)*param_1;
        pbVar11 = (byte *)param_1[1];
        if ((pbVar17 != pbVar11) && (*pbVar17 == 0x45)) {
          pbVar1 = pbVar17 + 1;
          *param_1 = (long)pbVar1;
          if (pbVar1 == pbVar11) {
LAB_0183bff0:
            puVar7 = (undefined8 *)FUN_0183b554(param_1,param_2);
            if (puVar7 != (undefined8 *)0x0) {
              pbVar17 = (byte *)*param_1;
              pbVar1 = (byte *)param_1[1];
              pbVar11 = pbVar17;
              if (pbVar17 != pbVar1) {
                uVar19 = (uint)*pbVar17;
                pbVar18 = pbVar17;
                if (uVar19 == 0x5f) {
                  if (pbVar17 + 1 != pbVar1) {
                    uVar19 = (uint)pbVar17[1];
                    if (uVar19 - 0x30 < 10) {
                      pbVar11 = pbVar17 + 2;
                    }
                    else if (uVar19 == 0x5f) {
                      for (pbVar17 = pbVar17 + 2; pbVar17 != pbVar1; pbVar17 = pbVar17 + 1) {
                        if (9 < *pbVar17 - 0x30) {
                          if (*pbVar17 == 0x5f) {
                            pbVar11 = pbVar17 + 1;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
                else {
                  while ((pbVar11 = pbVar17, uVar19 - 0x30 < 10 &&
                         (pbVar18 = pbVar18 + 1, pbVar11 = pbVar1, pbVar1 != pbVar18))) {
                    uVar19 = (uint)*pbVar18;
                  }
                }
              }
              pvVar20 = (void *)param_1[0x25c];
              *param_1 = (long)pbVar11;
              goto LAB_0183c248;
            }
          }
          else {
            if (*pbVar1 == 0x73) {
              pbVar1 = pbVar17 + 2;
              *param_1 = (long)pbVar1;
              pbVar18 = pbVar11;
              if (pbVar1 != pbVar11) {
                pbVar18 = pbVar1;
                if (*pbVar1 == 0x5f) {
                  if (pbVar17 + 3 != pbVar11) {
                    uVar19 = (uint)pbVar17[3];
                    if (uVar19 - 0x30 < 10) {
                      pbVar18 = pbVar17 + 4;
                    }
                    else if (uVar19 == 0x5f) {
                      for (pbVar17 = pbVar17 + 4; pbVar17 != pbVar11; pbVar17 = pbVar17 + 1) {
                        if (9 < *pbVar17 - 0x30) {
                          if (*pbVar17 == 0x5f) {
                            pbVar18 = pbVar17 + 1;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
                else if (*pbVar1 - 0x30 < 10) {
                  pbVar17 = pbVar17 + 3;
                  do {
                    pbVar18 = pbVar11;
                    if (pbVar11 == pbVar17) break;
                    bVar3 = *pbVar17;
                    pbVar18 = pbVar1;
                    pbVar17 = pbVar17 + 1;
                  } while (bVar3 - 0x30 < 10);
                }
              }
              pvVar20 = (void *)param_1[0x25c];
              *param_1 = (long)pbVar18;
              plVar9 = (long *)((long)pvVar20 + 8);
              lVar13 = *plVar9;
              puVar16 = pvVar20;
              if (0xfef < lVar13 + 0x20U) {
                puVar16 = malloc(0x1000);
                if (puVar16 == (void *)0x0) goto LAB_0183c2c8;
                lVar13 = 0;
                *puVar16 = pvVar20;
                plVar9 = puVar16 + 1;
                *plVar9 = 0;
                param_1[0x25c] = (long)puVar16;
              }
              *plVar9 = lVar13 + 0x20;
              puVar7 = (undefined8 *)((long)puVar16 + lVar13 + 0x10);
              *puVar7 = &PTR_FUN_01cdfb30;
              *(undefined4 *)((long)puVar16 + lVar13 + 0x18) = 0x1010107;
              *(char **)((long)puVar16 + lVar13 + 0x28) = "";
              *(char **)((long)puVar16 + lVar13 + 0x20) = "string literal";
            }
            else {
              if (*pbVar1 != 100) goto LAB_0183bff0;
              pbVar1 = pbVar17 + 2;
              *param_1 = (long)pbVar1;
              pbVar18 = pbVar11;
              if ((pbVar1 != pbVar11) && (pbVar18 = pbVar1, *pbVar1 == 0x6e)) {
                pbVar1 = pbVar17 + 3;
                *param_1 = (long)pbVar1;
                pbVar18 = pbVar1;
              }
              if (pbVar1 != pbVar11) {
                bVar3 = *pbVar18;
                while (bVar3 - 0x30 < 10) {
                  pbVar18 = pbVar18 + 1;
                  *param_1 = (long)pbVar18;
                  if (pbVar11 == pbVar18) break;
                  bVar3 = *pbVar18;
                }
              }
              if ((pbVar18 == pbVar11) || (*pbVar18 != 0x5f)) goto LAB_0183c204;
              *param_1 = (long)(pbVar18 + 1);
              puVar7 = (undefined8 *)FUN_0183b554(param_1,param_2);
            }
            if (puVar7 != (undefined8 *)0x0) {
              pvVar20 = (void *)param_1[0x25c];
LAB_0183c248:
              plVar9 = (long *)((long)pvVar20 + 8);
              lVar13 = *plVar9;
              puVar16 = pvVar20;
              if (0xfef < lVar13 + 0x20U) {
                puVar16 = malloc(0x1000);
                if (puVar16 == (void *)0x0) goto LAB_0183c2c8;
                lVar13 = 0;
                *puVar16 = pvVar20;
                plVar9 = puVar16 + 1;
                *plVar9 = 0;
                param_1[0x25c] = (long)puVar16;
              }
              *plVar9 = lVar13 + 0x20;
              puVar8 = (undefined8 *)((long)puVar16 + lVar13 + 0x10);
              *puVar8 = &PTR_FUN_01ce0d20;
              *(undefined4 *)((long)puVar16 + lVar13 + 0x18) = 0x1010118;
              *(long *)((long)puVar16 + lVar13 + 0x20) = lVar15;
              *(undefined8 **)((long)puVar16 + lVar13 + 0x28) = puVar7;
              goto LAB_0183c208;
            }
          }
        }
      }
    }
  }
  else {
    if (cVar4 == 'S') {
      if ((uVar5 < 2) || (pcVar10[1] != 't')) {
        lVar15 = FUN_0183ca54(param_1);
        if ((lVar15 != 0) &&
           ((((char *)param_1[1] != (char *)*param_1 && (*(char *)*param_1 == 'I')) &&
            (lVar13 = FUN_0183cea8(param_1,param_2 != 0), lVar13 != 0)))) {
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 1) = 1;
          }
          pvVar20 = (void *)param_1[0x25c];
          plVar9 = (long *)((long)pvVar20 + 8);
          lVar12 = *plVar9;
          puVar7 = pvVar20;
          if (0xfef < lVar12 + 0x20U) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_0183c2c8;
            lVar12 = 0;
            *puVar7 = pvVar20;
            plVar9 = puVar7 + 1;
            *plVar9 = 0;
            param_1[0x25c] = (long)puVar7;
          }
          *plVar9 = lVar12 + 0x20;
          puVar8 = (undefined8 *)((long)puVar7 + lVar12 + 0x10);
          *puVar8 = &PTR_FUN_01ce0ee0;
          *(undefined4 *)((long)puVar7 + lVar12 + 0x18) = 0x1010120;
          *(long *)((long)puVar7 + lVar12 + 0x20) = lVar15;
          *(long *)((long)puVar7 + lVar12 + 0x28) = lVar13;
          goto LAB_0183c208;
        }
        goto LAB_0183c204;
      }
    }
    else if (cVar4 == 'N') {
      if (pcVar10 == pcVar2) goto LAB_0183c204;
      pcVar14 = pcVar10 + 1;
      *param_1 = (long)pcVar14;
      if (pcVar14 == pcVar2) {
        uVar19 = 0;
        pcVar14 = pcVar2;
      }
      else {
        if (*pcVar14 == 'r') {
          pcVar14 = pcVar10 + 2;
          uVar19 = 4;
          *param_1 = (long)pcVar14;
        }
        else {
          uVar19 = 0;
        }
        if (pcVar14 != pcVar2) {
          if (*pcVar14 == 'V') {
            pcVar14 = pcVar14 + 1;
            uVar19 = uVar19 | 2;
            *param_1 = (long)pcVar14;
          }
          if ((pcVar14 != pcVar2) && (*pcVar14 == 'K')) {
            pcVar14 = pcVar14 + 1;
            uVar19 = uVar19 | 1;
            *param_1 = (long)pcVar14;
          }
        }
      }
      if (param_2 != 0) {
        *(uint *)(param_2 + 4) = uVar19;
      }
      if (pcVar14 == pcVar2) {
LAB_0183b95c:
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 0;
        }
      }
      else if (*pcVar14 == 'O') {
        pcVar14 = pcVar14 + 1;
        *param_1 = (long)pcVar14;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 2;
        }
      }
      else {
        if (*pcVar14 != 'R') goto LAB_0183b95c;
        pcVar14 = pcVar14 + 1;
        *param_1 = (long)pcVar14;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 1;
        }
      }
      local_70 = (undefined8 *)0x0;
      if (((1 < (ulong)((long)pcVar2 - (long)pcVar14)) && (*pcVar14 == 'S')) && (pcVar14[1] == 't'))
      {
        pvVar20 = (void *)param_1[0x25c];
        *param_1 = (long)(pcVar14 + 2);
        plVar9 = (long *)((long)pvVar20 + 8);
        lVar15 = *plVar9;
        puVar7 = pvVar20;
        if (0xfef < lVar15 + 0x20U) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0183c2c8;
          lVar15 = 0;
          *puVar7 = pvVar20;
          plVar9 = puVar7 + 1;
          *plVar9 = 0;
          param_1[0x25c] = (long)puVar7;
        }
        *plVar9 = lVar15 + 0x20;
        local_70 = (undefined8 *)((long)puVar7 + lVar15 + 0x10);
        *local_70 = &PTR_FUN_01cdfb30;
        *(undefined4 *)((long)puVar7 + lVar15 + 0x18) = 0x1010107;
        *(undefined **)((long)puVar7 + lVar15 + 0x28) = &DAT_01a685eb;
        *(undefined **)((long)puVar7 + lVar15 + 0x20) = &UNK_01a685e8;
        if (local_70 == (undefined8 *)0x0) goto LAB_0183c204;
      }
      do {
        while( true ) {
          pcVar10 = (char *)*param_1;
          pcVar2 = (char *)param_1[1];
          if (pcVar10 != pcVar2) {
            if (*pcVar10 == 'E') {
              *param_1 = (long)(pcVar10 + 1);
              puVar8 = local_70;
              if (local_70 == (undefined8 *)0x0) goto LAB_0183c208;
              if (param_1[0x25] != param_1[0x26]) {
                param_1[0x26] = param_1[0x26] + -8;
                goto LAB_0183c208;
              }
              goto LAB_0183c204;
            }
            if (*pcVar10 == 'L') {
              pcVar10 = pcVar10 + 1;
              *param_1 = (long)pcVar10;
            }
          }
          if ((pcVar10 != pcVar2) && (*pcVar10 == 'M')) break;
          if (pcVar2 == pcVar10) {
switchD_0183bab0_caseD_45:
            puVar7 = (undefined8 *)FUN_0183dc88(param_1,param_2);
            if (puVar7 == (undefined8 *)0x0) goto LAB_0183c204;
LAB_0183bc68:
            puVar16 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              pvVar20 = (void *)param_1[0x25c];
              plVar9 = (long *)((long)pvVar20 + 8);
              lVar15 = *plVar9;
              puVar8 = pvVar20;
              if (0xfef < lVar15 + 0x20U) {
                puVar8 = malloc(0x1000);
                if (puVar8 == (void *)0x0) goto LAB_0183c2c8;
                lVar15 = 0;
                *puVar8 = pvVar20;
                plVar9 = puVar8 + 1;
                *plVar9 = 0;
                param_1[0x25c] = (long)puVar8;
              }
              *plVar9 = lVar15 + 0x20;
              puVar22 = (undefined8 *)((long)puVar8 + lVar15 + 0x10);
              *puVar22 = &PTR_FUN_01cdfba0;
              *(undefined4 *)((long)puVar8 + lVar15 + 0x18) = 0x1010117;
              *(undefined8 **)((long)puVar8 + lVar15 + 0x20) = puVar16;
              *(undefined8 **)((long)puVar8 + lVar15 + 0x28) = puVar7;
              puVar7 = puVar22;
            }
            local_70 = puVar7;
            if (param_2 != 0) {
              *(undefined1 *)(param_2 + 1) = 0;
            }
            if (local_70 == (undefined8 *)0x0) goto LAB_0183c204;
LAB_0183bce4:
            puVar16 = local_70;
            puVar7 = (undefined8 *)param_1[0x26];
            if (puVar7 == (undefined8 *)param_1[0x27]) {
              plVar9 = (long *)param_1[0x25];
              sVar21 = (long)puVar7 - (long)plVar9;
              if (param_1 + 0x28 == plVar9) {
                pvVar20 = malloc(sVar21 * 2);
                if (pvVar20 == (void *)0x0) goto LAB_0183c2c8;
                if (sVar21 != 0) {
                  memmove(pvVar20,plVar9,sVar21);
                }
                param_1[0x25] = (long)pvVar20;
              }
              else {
                pvVar20 = realloc(plVar9,sVar21 * 2);
                param_1[0x25] = (long)pvVar20;
                if (pvVar20 == (void *)0x0) goto LAB_0183c2c8;
              }
              puVar7 = (undefined8 *)((long)pvVar20 + ((long)sVar21 >> 3) * 8);
              param_1[0x26] = (long)puVar7;
              param_1[0x27] = (long)((long)pvVar20 + ((long)sVar21 >> 2) * 8);
            }
            param_1[0x26] = (long)(puVar7 + 1);
            *puVar7 = puVar16;
          }
          else {
            switch(*pcVar10) {
            case 'D':
              if (1 < (ulong)((long)pcVar2 - (long)pcVar10)) {
                if ((byte)(pcVar10[1] | 0x20U) == 0x74) {
                  puVar7 = (undefined8 *)FUN_0183d720(param_1);
                  goto joined_r0x0183bc34;
                }
                if (pcVar10[1] == 'C') goto switchD_0183bab0_caseD_45;
              }
            case 'C':
              if ((local_70 == (undefined8 *)0x0) ||
                 (puVar16 = (undefined8 *)FUN_0183d85c(param_1,&local_70,param_2), puVar7 = local_70
                 , puVar16 == (undefined8 *)0x0)) goto LAB_0183c204;
              if (local_70 != (undefined8 *)0x0) {
                pvVar20 = (void *)param_1[0x25c];
                plVar9 = (long *)((long)pvVar20 + 8);
                lVar15 = *plVar9;
                puVar8 = pvVar20;
                if (0xfef < lVar15 + 0x20U) {
                  puVar8 = malloc(0x1000);
                  if (puVar8 == (void *)0x0) goto LAB_0183c2c8;
                  lVar15 = 0;
                  *puVar8 = pvVar20;
                  plVar9 = puVar8 + 1;
                  *plVar9 = 0;
                  param_1[0x25c] = (long)puVar8;
                }
                *plVar9 = lVar15 + 0x20;
                puVar22 = (undefined8 *)((long)puVar8 + lVar15 + 0x10);
                *puVar22 = &PTR_FUN_01cdfba0;
                *(undefined4 *)((long)puVar8 + lVar15 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar8 + lVar15 + 0x20) = puVar7;
                *(undefined8 **)((long)puVar8 + lVar15 + 0x28) = puVar16;
                puVar16 = puVar22;
              }
              local_70 = puVar16;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
              if ((local_70 == (undefined8 *)0x0) ||
                 (puVar16 = (undefined8 *)FUN_0183db08(param_1,local_70), local_70 = puVar16,
                 puVar16 == (undefined8 *)0x0)) goto LAB_0183c204;
              puVar7 = (undefined8 *)param_1[0x26];
              if (puVar7 == (undefined8 *)param_1[0x27]) {
LAB_0183bde8:
                plVar9 = (long *)param_1[0x25];
                sVar21 = (long)puVar7 - (long)plVar9;
                if (param_1 + 0x28 == plVar9) {
                  pvVar20 = malloc(sVar21 * 2);
                  if (pvVar20 == (void *)0x0) goto LAB_0183c2c8;
                  if (sVar21 != 0) {
                    memmove(pvVar20,plVar9,sVar21);
                  }
                  param_1[0x25] = (long)pvVar20;
                }
                else {
                  pvVar20 = realloc(plVar9,sVar21 * 2);
                  param_1[0x25] = (long)pvVar20;
                  if (pvVar20 == (void *)0x0) goto LAB_0183c2c8;
                }
                puVar7 = (undefined8 *)((long)pvVar20 + ((long)sVar21 >> 3) * 8);
                param_1[0x26] = (long)puVar7;
                param_1[0x27] = (long)((long)pvVar20 + ((long)sVar21 >> 2) * 8);
              }
LAB_0183be9c:
              param_1[0x26] = (long)(puVar7 + 1);
              *puVar7 = puVar16;
              break;
            default:
              goto switchD_0183bab0_caseD_45;
            case 'I':
              lVar15 = FUN_0183cea8(param_1,param_2 != 0);
              puVar7 = local_70;
              puVar8 = (undefined8 *)0x0;
              if ((lVar15 == 0) || (local_70 == (undefined8 *)0x0)) goto LAB_0183c208;
              pvVar20 = (void *)param_1[0x25c];
              plVar9 = (long *)((long)pvVar20 + 8);
              lVar13 = *plVar9;
              puVar16 = pvVar20;
              if (0xfef < lVar13 + 0x20U) {
                puVar16 = malloc(0x1000);
                if (puVar16 == (void *)0x0) goto LAB_0183c2c8;
                lVar13 = 0;
                *puVar16 = pvVar20;
                plVar9 = puVar16 + 1;
                *plVar9 = 0;
                param_1[0x25c] = (long)puVar16;
              }
              *plVar9 = lVar13 + 0x20;
              local_70 = (undefined8 *)((long)puVar16 + lVar13 + 0x10);
              *local_70 = &PTR_FUN_01ce0ee0;
              *(undefined4 *)((long)puVar16 + lVar13 + 0x18) = 0x1010120;
              *(undefined8 **)((long)puVar16 + lVar13 + 0x20) = puVar7;
              *(long *)((long)puVar16 + lVar13 + 0x28) = lVar15;
              if (local_70 != (undefined8 *)0x0) {
                if (param_2 != 0) {
                  *(undefined1 *)(param_2 + 1) = 1;
                }
                goto LAB_0183bce4;
              }
              goto LAB_0183c204;
            case 'S':
              if ((1 < (ulong)((long)pcVar2 - (long)pcVar10)) && (pcVar10[1] == 't'))
              goto switchD_0183bab0_caseD_45;
              puVar16 = (undefined8 *)FUN_0183ca54(param_1);
              puVar7 = local_70;
              if (puVar16 == (undefined8 *)0x0) goto LAB_0183c204;
              puVar8 = puVar16;
              if (local_70 != (undefined8 *)0x0) {
                pvVar20 = (void *)param_1[0x25c];
                plVar9 = (long *)((long)pvVar20 + 8);
                lVar15 = *plVar9;
                puVar22 = pvVar20;
                if (0xfef < lVar15 + 0x20U) {
                  puVar22 = malloc(0x1000);
                  if (puVar22 == (void *)0x0) goto LAB_0183c2c8;
                  lVar15 = 0;
                  *puVar22 = pvVar20;
                  plVar9 = puVar22 + 1;
                  *plVar9 = 0;
                  param_1[0x25c] = (long)puVar22;
                }
                *plVar9 = lVar15 + 0x20;
                puVar8 = (undefined8 *)((long)puVar22 + lVar15 + 0x10);
                *puVar8 = &PTR_FUN_01cdfba0;
                *(undefined4 *)((long)puVar22 + lVar15 + 0x18) = 0x1010117;
                *(undefined8 **)((long)puVar22 + lVar15 + 0x20) = puVar7;
                *(undefined8 **)((long)puVar22 + lVar15 + 0x28) = puVar16;
              }
              local_70 = puVar8;
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 1) = 0;
              }
              if (local_70 == (undefined8 *)0x0) goto LAB_0183c204;
              if (local_70 != puVar16) {
                puVar7 = (undefined8 *)param_1[0x26];
                if (puVar7 == (undefined8 *)param_1[0x27]) goto LAB_0183bde8;
                goto LAB_0183be9c;
              }
              break;
            case 'T':
              puVar7 = (undefined8 *)FUN_0183d478(param_1);
joined_r0x0183bc34:
              if (puVar7 != (undefined8 *)0x0) goto LAB_0183bc68;
              goto LAB_0183c204;
            }
          }
        }
        *param_1 = (long)(pcVar10 + 1);
      } while (local_70 != (undefined8 *)0x0);
      goto LAB_0183c204;
    }
    if (uVar5 < 3) {
      if (uVar5 == 2) {
LAB_0183b7a4:
        if ((*pcVar10 == 'S') && (pcVar10[1] == 't')) {
          lVar15 = 2;
          goto LAB_0183b7c0;
        }
      }
LAB_0183b848:
      puVar8 = (undefined8 *)FUN_0183dc88(param_1,param_2);
    }
    else {
      if (*pcVar10 != 'S') goto LAB_0183b848;
      if ((pcVar10[1] != 't') || (pcVar10[2] != 'L')) goto LAB_0183b7a4;
      lVar15 = 3;
LAB_0183b7c0:
      *param_1 = (long)(pcVar10 + lVar15);
      lVar15 = FUN_0183dc88(param_1,param_2);
      if (lVar15 == 0) goto LAB_0183c204;
      pvVar20 = (void *)param_1[0x25c];
      plVar9 = (long *)((long)pvVar20 + 8);
      lVar13 = *plVar9;
      puVar7 = pvVar20;
      if (0xfef < lVar13 + 0x20U) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (void *)0x0) goto LAB_0183c2c8;
        lVar13 = 0;
        *puVar7 = pvVar20;
        plVar9 = puVar7 + 1;
        *plVar9 = 0;
        param_1[0x25c] = (long)puVar7;
      }
      *plVar9 = lVar13 + 0x20;
      puVar8 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
      *puVar8 = &PTR_FUN_01ce0f50;
      *(undefined4 *)((long)puVar7 + lVar13 + 0x18) = 0x1010122;
      *(long *)((long)puVar7 + lVar13 + 0x20) = lVar15;
    }
    if (((puVar8 == (undefined8 *)0x0) || ((char *)param_1[1] == (char *)*param_1)) ||
       (*(char *)*param_1 != 'I')) goto LAB_0183c208;
    puVar7 = (undefined8 *)param_1[0x26];
    if (puVar7 == (undefined8 *)param_1[0x27]) {
      plVar9 = (long *)param_1[0x25];
      sVar21 = (long)puVar7 - (long)plVar9;
      if (param_1 + 0x28 == plVar9) {
        pvVar20 = malloc(sVar21 * 2);
        if (pvVar20 == (void *)0x0) goto LAB_0183c2c8;
        if (sVar21 != 0) {
          memmove(pvVar20,plVar9,sVar21);
        }
        param_1[0x25] = (long)pvVar20;
      }
      else {
        pvVar20 = realloc(plVar9,sVar21 * 2);
        param_1[0x25] = (long)pvVar20;
        if (pvVar20 == (void *)0x0) goto LAB_0183c2c8;
      }
      puVar7 = (undefined8 *)((long)pvVar20 + ((long)sVar21 >> 3) * 8);
      param_1[0x26] = (long)puVar7;
      param_1[0x27] = (long)((long)pvVar20 + ((long)sVar21 >> 2) * 8);
    }
    param_1[0x26] = (long)(puVar7 + 1);
    *puVar7 = puVar8;
    lVar15 = FUN_0183cea8(param_1,param_2 != 0);
    if (lVar15 != 0) {
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      pvVar20 = (void *)param_1[0x25c];
      plVar9 = (long *)((long)pvVar20 + 8);
      lVar13 = *plVar9;
      puVar7 = pvVar20;
      if (0xfef < lVar13 + 0x20U) {
        puVar7 = malloc(0x1000);
        if (puVar7 == (void *)0x0) {
LAB_0183c2c8:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar13 = 0;
        *puVar7 = pvVar20;
        plVar9 = puVar7 + 1;
        *plVar9 = 0;
        param_1[0x25c] = (long)puVar7;
      }
      *plVar9 = lVar13 + 0x20;
      puVar16 = (undefined8 *)((long)puVar7 + lVar13 + 0x10);
      *puVar16 = &PTR_FUN_01ce0ee0;
      *(undefined8 **)((long)puVar7 + lVar13 + 0x20) = puVar8;
      *(long *)((long)puVar7 + lVar13 + 0x28) = lVar15;
      *(undefined4 *)((long)puVar7 + lVar13 + 0x18) = 0x1010120;
      puVar8 = puVar16;
      goto LAB_0183c208;
    }
  }
LAB_0183c204:
  puVar8 = (undefined8 *)0x0;
LAB_0183c208:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}

