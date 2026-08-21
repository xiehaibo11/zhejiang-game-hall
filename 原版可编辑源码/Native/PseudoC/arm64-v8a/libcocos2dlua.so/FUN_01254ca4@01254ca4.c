
undefined8 * FUN_01254ca4(long *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  char *pcVar22;
  long *plVar23;
  long lVar24;
  char *pcVar25;
  void *pvVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined1 auVar29 [16];
  long local_88;
  undefined2 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  ulong local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  pcVar25 = (char *)*param_1;
  pcVar16 = (char *)param_1[1];
  if ((pcVar16 == pcVar25) || ((cVar2 = *pcVar25, cVar2 != 'T' && (cVar2 != 'G')))) {
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = param_1[0x54] - param_1[0x53] >> 3;
    puVar11 = (undefined8 *)FUN_01256e6c(param_1,&local_80);
    puVar27 = puVar11;
    if (puVar11 == (undefined8 *)0x0) goto LAB_012557a4;
    lVar10 = param_1[0x53];
    uVar9 = param_1[0x54] - lVar10 >> 3;
    if (local_70 < uVar9) {
      lVar21 = param_1[0x49];
      lVar12 = param_1[0x48];
      lVar14 = uVar9 - local_70;
      plVar23 = (long *)(lVar10 + local_70 * 8);
      do {
        lVar24 = *plVar23;
        uVar9 = *(ulong *)(lVar24 + 0x10);
        if ((ulong)(lVar21 - lVar12 >> 3) <= uVar9) goto LAB_012557a0;
        lVar14 = lVar14 + -1;
        plVar23 = plVar23 + 1;
        *(undefined8 *)(lVar24 + 0x18) = *(undefined8 *)(lVar12 + uVar9 * 8);
      } while (lVar14 != 0);
    }
    param_1[0x54] = lVar10 + local_70 * 8;
    if (((byte *)param_1[1] == (byte *)*param_1) ||
       ((uVar4 = *(byte *)*param_1 - 0x2e, uVar4 < 0x32 &&
        ((1L << ((ulong)uVar4 & 0x3f) & 0x2000000800001U) != 0)))) goto LAB_012557a4;
    uVar9 = __strlen_chk("Ua9enable_ifI",0xe);
    pcVar25 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar25) < uVar9) {
LAB_01254f9c:
      puVar28 = (undefined8 *)0x0;
    }
    else {
      if (uVar9 != 0) {
        pcVar16 = "Ua9enable_ifI";
        uVar18 = uVar9;
        pcVar22 = pcVar25;
        do {
          if (*pcVar16 != *pcVar22) goto LAB_01254f9c;
          pcVar16 = pcVar16 + 1;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar22 + 1;
        } while (uVar18 != 0);
      }
      pcVar25 = pcVar25 + uVar9;
      *param_1 = (long)pcVar25;
      lVar10 = param_1[2];
      lVar14 = param_1[3];
      if (pcVar25 == (char *)param_1[1]) goto LAB_01254ed4;
      while (*pcVar25 != 'E') {
LAB_01254ed4:
        do {
          local_88 = FUN_01257aa8(param_1);
          if (local_88 == 0) goto LAB_012557a0;
          FUN_01257c80(param_1 + 2,&local_88);
          pcVar25 = (char *)*param_1;
        } while (pcVar25 == (char *)param_1[1]);
      }
      lVar10 = (lVar14 - lVar10 >> 3) * 8;
      *param_1 = (long)(pcVar25 + 1);
      auVar29 = FUN_0125f2dc(param_1,param_1[2] + lVar10,param_1[3]);
      pvVar26 = (void *)param_1[0x25c];
      param_1[3] = param_1[2] + lVar10;
      lVar10 = *(long *)((long)pvVar26 + 8);
      puVar27 = pvVar26;
      if (0xfef < lVar10 + 0x20U) {
        puVar27 = malloc(0x1000);
        if (puVar27 == (void *)0x0) goto LAB_012557e8;
        lVar10 = 0;
        *puVar27 = pvVar26;
        puVar27[1] = 0;
        param_1[0x25c] = (long)puVar27;
      }
      *(long *)((long)puVar27 + 8) = lVar10 + 0x20;
      puVar28 = (undefined8 *)((long)puVar27 + lVar10 + 0x10);
      *puVar28 = &PTR_FUN_01736ec8;
      *(undefined4 *)((long)puVar27 + lVar10 + 0x18) = 0x1010109;
      *(undefined1 (*) [16])((long)puVar27 + lVar10 + 0x20) = auVar29;
    }
    lVar10 = 0;
    if ((((char)local_80 != '\0') || (local_80._1_1_ == '\0')) ||
       (lVar10 = FUN_012557ec(param_1), lVar10 != 0)) {
      pcVar25 = (char *)*param_1;
      if ((pcVar25 == (char *)param_1[1]) || (*pcVar25 != 'v')) {
        lVar14 = param_1[2];
        lVar12 = param_1[3];
        do {
          local_88 = FUN_012557ec(param_1);
          if (local_88 == 0) goto LAB_012557a0;
          FUN_01257c80(param_1 + 2,&local_88);
        } while (((byte *)param_1[1] != (byte *)*param_1) &&
                ((uVar4 = *(byte *)*param_1 - 0x2e, 0x31 < uVar4 ||
                 ((1L << ((ulong)uVar4 & 0x3f) & 0x2000000800001U) == 0))));
        lVar14 = (lVar12 - lVar14 >> 3) * 8;
        auVar29 = FUN_0125f2dc(param_1,param_1[2] + lVar14,param_1[3]);
        pvVar26 = (void *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar14;
        lVar14 = *(long *)((long)pvVar26 + 8);
        puVar8 = pvVar26;
        if (0xfef < lVar14 + 0x40U) {
          puVar8 = malloc(0x1000);
          if (puVar8 == (void *)0x0) goto LAB_012557e8;
          lVar14 = 0;
          *puVar8 = pvVar26;
          puVar8[1] = 0;
          param_1[0x25c] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar14 + 0x40;
        puVar27 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
        *puVar27 = &PTR_FUN_01736f38;
        *(undefined4 *)((long)puVar8 + lVar14 + 0x18) = 0x10012;
        *(long *)((long)puVar8 + lVar14 + 0x20) = lVar10;
        *(undefined8 **)((long)puVar8 + lVar14 + 0x28) = puVar11;
        *(undefined1 (*) [16])((long)puVar8 + lVar14 + 0x30) = auVar29;
      }
      else {
        pvVar26 = (void *)param_1[0x25c];
        *param_1 = (long)(pcVar25 + 1);
        lVar14 = *(long *)((long)pvVar26 + 8);
        puVar8 = pvVar26;
        if (0xfef < lVar14 + 0x40U) {
          puVar8 = malloc(0x1000);
          if (puVar8 == (void *)0x0) goto LAB_012557e8;
          lVar14 = 0;
          *puVar8 = pvVar26;
          puVar8[1] = 0;
          param_1[0x25c] = (long)puVar8;
        }
        *(long *)((long)puVar8 + 8) = lVar14 + 0x40;
        puVar27 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
        *puVar27 = &PTR_FUN_01736f38;
        *(undefined4 *)((long)puVar8 + lVar14 + 0x18) = 0x10012;
        *(long *)((long)puVar8 + lVar14 + 0x20) = lVar10;
        *(undefined8 **)((long)puVar8 + lVar14 + 0x28) = puVar11;
        *(undefined8 *)((long)puVar8 + lVar14 + 0x30) = 0;
        *(undefined8 *)((long)puVar8 + lVar14 + 0x38) = 0;
      }
      puVar27[6] = puVar28;
      *(undefined4 *)(puVar27 + 7) = local_7c;
      *(undefined1 *)((long)puVar27 + 0x3c) = local_78;
      goto LAB_012557a4;
    }
  }
  else if (pcVar16 != pcVar25) {
    if (cVar2 == 'G') {
      if (1 < (ulong)((long)pcVar16 - (long)pcVar25)) {
        if (pcVar25[1] == 'R') {
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_01256e6c(param_1,0);
          if (lVar10 != 0) {
            pbVar15 = (byte *)*param_1;
            pbVar1 = (byte *)param_1[1];
            if (((pbVar1 == pbVar15) || (bVar3 = *pbVar15, bVar3 < 0x30)) ||
               ((0x39 < bVar3 && (0x19 < (byte)(bVar3 + 0xbf))))) {
              bVar7 = true;
              pbVar19 = pbVar15;
joined_r0x01255720:
              if (pbVar19 != pbVar1) goto LAB_01255224;
LAB_01255724:
              if (!bVar7) goto LAB_012557a0;
            }
            else {
              do {
                pbVar19 = pbVar15 + 1;
                if ((0x39 < bVar3) && (0x19 < (byte)(bVar3 + 0xbf))) {
                  bVar7 = false;
                  pbVar19 = pbVar15;
                  goto joined_r0x01255720;
                }
                *param_1 = (long)pbVar19;
              } while ((pbVar1 != pbVar19) && (bVar3 = *pbVar19, pbVar15 = pbVar19, 0x2f < bVar3));
              bVar7 = false;
              if (pbVar19 == pbVar1) goto LAB_01255724;
LAB_01255224:
              if (*pbVar19 != 0x5f) goto LAB_01255724;
              *param_1 = (long)(pbVar19 + 1);
            }
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "reference temporary for ";
            uVar13 = 0x19;
            goto LAB_01255770;
          }
        }
        else if (pcVar25[1] == 'V') {
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_01256e6c(param_1,0);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "guard variable for ";
            uVar13 = 0x14;
            goto LAB_01255770;
          }
        }
      }
    }
    else {
      if (cVar2 != 'T') goto LAB_012557a0;
      if ((ulong)((long)pcVar16 - (long)pcVar25) < 2) {
switchD_01254d38_caseD_44:
        pcVar25 = pcVar25 + 1;
        *param_1 = (long)pcVar25;
        if (pcVar16 == pcVar25) {
          bVar7 = false;
        }
        else {
          bVar7 = *pcVar25 == 'v';
        }
        uVar9 = FUN_01257d3c(param_1);
        if (((uVar9 & 1) == 0) && (lVar10 = FUN_01254ca4(param_1), lVar10 != 0)) {
          puVar27 = (undefined8 *)param_1[0x25c];
          lVar14 = puVar27[1];
          bVar6 = 0xfef < lVar14 + 0x30U;
          if (bVar7) {
            puVar11 = puVar27;
            if (bVar6) {
              puVar11 = malloc(0x1000);
              if (puVar11 == (void *)0x0) {
LAB_012557e8:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar14 = 0;
              *puVar11 = puVar27;
              puVar11[1] = 0;
              param_1[0x25c] = (long)puVar11;
            }
            puVar11[1] = lVar14 + 0x30;
            lVar14 = (long)puVar11 + lVar14;
            pcVar25 = "virtual thunk to ";
            uVar13 = 0x12;
          }
          else {
            puVar11 = puVar27;
            if (bVar6) {
              puVar11 = malloc(0x1000);
              if (puVar11 == (undefined8 *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar11 = puVar27;
              puVar11[1] = 0;
              param_1[0x25c] = (long)puVar11;
            }
            puVar11[1] = lVar14 + 0x30;
            lVar14 = (long)puVar11 + lVar14;
            pcVar25 = "non-virtual thunk to ";
            uVar13 = 0x16;
          }
LAB_01255770:
          lVar12 = __strlen_chk(pcVar25,uVar13);
          *(undefined8 *)(lVar14 + 0x10) = &PTR_FUN_01735868;
          *(undefined4 *)(lVar14 + 0x18) = 0x1010114;
          *(char **)(lVar14 + 0x20) = pcVar25;
          *(char **)(lVar14 + 0x28) = pcVar25 + lVar12;
          *(long *)(lVar14 + 0x30) = lVar10;
          puVar27 = (undefined8 *)(lVar14 + 0x10);
          goto LAB_012557a4;
        }
      }
      else {
        switch(pcVar25[1]) {
        case 'C':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_012557ec(param_1);
          if (lVar10 != 0) {
            pbVar15 = (byte *)*param_1;
            pbVar1 = (byte *)param_1[1];
            if ((pbVar15 == pbVar1) || (*pbVar15 != 0x6e)) {
              pbVar19 = pbVar15;
              if (pbVar15 != pbVar1) goto LAB_0125563c;
LAB_01255678:
              pbVar15 = (byte *)0x0;
              pbVar17 = pbVar19;
              pbVar20 = (byte *)0x0;
            }
            else {
              pbVar19 = pbVar15 + 1;
              *param_1 = (long)pbVar19;
              if (pbVar19 == pbVar1) goto LAB_01255678;
LAB_0125563c:
              if (9 < *pbVar19 - 0x30) goto LAB_01255678;
              do {
                pbVar19 = pbVar19 + 1;
                *param_1 = (long)pbVar19;
                pbVar17 = pbVar1;
                pbVar20 = pbVar1;
                if (pbVar1 == pbVar19) break;
                pbVar17 = pbVar19;
                pbVar20 = pbVar19;
              } while (*pbVar19 - 0x30 < 10);
            }
            puVar27 = (undefined8 *)0x0;
            if ((pbVar15 == pbVar20) || (pbVar17 == pbVar1)) goto LAB_012557a4;
            if (*pbVar17 == 0x5f) {
              *param_1 = (long)(pbVar17 + 1);
              lVar14 = FUN_012557ec(param_1);
              if (lVar14 != 0) {
                pvVar26 = (void *)param_1[0x25c];
                lVar12 = *(long *)((long)pvVar26 + 8);
                puVar11 = pvVar26;
                if (0xfef < lVar12 + 0x20U) {
                  puVar11 = malloc(0x1000);
                  if (puVar11 == (void *)0x0) goto LAB_012557e8;
                  lVar12 = 0;
                  *puVar11 = pvVar26;
                  puVar11[1] = 0;
                  param_1[0x25c] = (long)puVar11;
                }
                *(long *)((long)puVar11 + 8) = lVar12 + 0x20;
                puVar27 = (undefined8 *)((long)puVar11 + lVar12 + 0x10);
                *puVar27 = &PTR_FUN_017358e8;
                *(undefined4 *)((long)puVar11 + lVar12 + 0x18) = 0x1010115;
                *(long *)((long)puVar11 + lVar12 + 0x20) = lVar14;
                *(long *)((long)puVar11 + lVar12 + 0x28) = lVar10;
                goto LAB_012557a4;
              }
            }
          }
          break;
        default:
          goto switchD_01254d38_caseD_44;
        case 'H':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_01256e6c(param_1,0);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "thread-local initialization routine for ";
            uVar13 = 0x29;
            goto LAB_01255770;
          }
          break;
        case 'I':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_012557ec(param_1);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "typeinfo for ";
            uVar13 = 0xe;
            goto LAB_01255770;
          }
          break;
        case 'S':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_012557ec(param_1);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "typeinfo name for ";
            uVar13 = 0x13;
            goto LAB_01255770;
          }
          break;
        case 'T':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_012557ec(param_1);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "VTT for ";
            uVar13 = 9;
            goto LAB_01255770;
          }
          break;
        case 'V':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_012557ec(param_1);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "vtable for ";
            uVar13 = 0xc;
            goto LAB_01255770;
          }
          break;
        case 'W':
          *param_1 = (long)(pcVar25 + 2);
          lVar10 = FUN_01256e6c(param_1,0);
          if (lVar10 != 0) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "thread-local wrapper routine for ";
            uVar13 = 0x22;
            goto LAB_01255770;
          }
          break;
        case 'c':
          *param_1 = (long)(pcVar25 + 2);
          uVar9 = FUN_01257d3c(param_1);
          if ((((uVar9 & 1) == 0) && (uVar9 = FUN_01257d3c(param_1), (uVar9 & 1) == 0)) &&
             (lVar10 = FUN_01254ca4(param_1), lVar10 != 0)) {
            pvVar26 = (void *)param_1[0x25c];
            lVar14 = *(long *)((long)pvVar26 + 8);
            puVar27 = pvVar26;
            if (0xfef < lVar14 + 0x30U) {
              puVar27 = malloc(0x1000);
              if (puVar27 == (void *)0x0) goto LAB_012557e8;
              lVar14 = 0;
              *puVar27 = pvVar26;
              puVar27[1] = 0;
              param_1[0x25c] = (long)puVar27;
            }
            *(long *)((long)puVar27 + 8) = lVar14 + 0x30;
            lVar14 = (long)puVar27 + lVar14;
            pcVar25 = "covariant return thunk to ";
            uVar13 = 0x1b;
            goto LAB_01255770;
          }
        }
      }
    }
  }
LAB_012557a0:
  puVar27 = (undefined8 *)0x0;
LAB_012557a4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar27;
}

