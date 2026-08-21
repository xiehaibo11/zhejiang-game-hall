
undefined8 * FUN_01838d94(long *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  char *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  void *pvVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  size_t sVar28;
  long *plVar29;
  undefined1 auVar30 [16];
  undefined2 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  ulong local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  pcVar21 = (char *)*param_1;
  pcVar14 = (char *)param_1[1];
  if ((pcVar14 == pcVar21) || ((cVar3 = *pcVar21, cVar3 != 'T' && (cVar3 != 'G')))) {
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    local_70 = param_1[0x54] - param_1[0x53] >> 3;
    puVar26 = (undefined8 *)FUN_0183b554(param_1,&local_80);
    puVar12 = puVar26;
    if (puVar26 == (undefined8 *)0x0) goto LAB_01839b64;
    lVar11 = param_1[0x53];
    uVar10 = param_1[0x54] - lVar11 >> 3;
    if (local_70 < uVar10) {
      lVar20 = param_1[0x49];
      lVar15 = param_1[0x48];
      uVar22 = local_70;
      do {
        lVar23 = *(long *)(lVar11 + uVar22 * 8);
        uVar24 = *(ulong *)(lVar23 + 0x10);
        if ((ulong)(lVar20 - lVar15 >> 3) <= uVar24) goto LAB_01839b60;
        uVar22 = uVar22 + 1;
        *(undefined8 *)(lVar23 + 0x18) = *(undefined8 *)(lVar15 + uVar24 * 8);
      } while (uVar22 < uVar10);
    }
    pbVar16 = (byte *)*param_1;
    pbVar2 = (byte *)param_1[1];
    param_1[0x54] = lVar11 + local_70 * 8;
    if (pbVar2 == pbVar16) goto LAB_01839b64;
    uVar5 = *pbVar16 - 0x2e;
    if ((uVar5 < 0x32) && ((1L << ((ulong)uVar5 & 0x3f) & 0x2000000800001U) != 0))
    goto LAB_01839b64;
    puVar27 = (undefined8 *)0x0;
    if ((0xc < (ulong)((long)pbVar2 - (long)pbVar16)) && (*pbVar16 == 0x55)) {
      if (((((((pbVar16[1] == 0x61) && (pbVar16[2] == 0x39)) && (pbVar16[3] == 0x65)) &&
            ((pbVar16[4] == 0x6e && (pbVar16[5] == 0x61)))) && (pbVar16[6] == 0x62)) &&
          (((pbVar16[7] == 0x6c && (pbVar16[8] == 0x65)) && (pbVar16[9] == 0x5f)))) &&
         (((pbVar16[10] == 0x69 && (pbVar16[0xb] == 0x66)) && (pbVar16[0xc] == 0x49)))) {
        lVar11 = param_1[2];
        lVar15 = param_1[3];
        pbVar16 = pbVar16 + 0xd;
        *param_1 = (long)pbVar16;
        if (pbVar16 == pbVar2) goto LAB_0183902c;
        while (*pbVar16 != 0x45) {
LAB_0183902c:
          do {
            lVar20 = FUN_0183c2cc(param_1);
            if (lVar20 == 0) goto LAB_01839b60;
            plVar13 = (long *)param_1[3];
            if (plVar13 == (long *)param_1[4]) {
              plVar29 = (long *)param_1[2];
              sVar28 = (long)plVar13 - (long)plVar29;
              if (param_1 + 5 == plVar29) {
                pvVar25 = malloc(sVar28 * 2);
                if (pvVar25 == (void *)0x0) goto LAB_01839b9c;
                if (sVar28 != 0) {
                  memmove(pvVar25,plVar29,sVar28);
                }
                param_1[2] = (long)pvVar25;
              }
              else {
                pvVar25 = realloc(plVar29,sVar28 * 2);
                param_1[2] = (long)pvVar25;
                if (pvVar25 == (void *)0x0) goto LAB_01839b9c;
              }
              plVar13 = (long *)((long)pvVar25 + ((long)sVar28 >> 3) * 8);
              param_1[3] = (long)plVar13;
              param_1[4] = (long)((long)pvVar25 + ((long)sVar28 >> 2) * 8);
            }
            param_1[3] = (long)(plVar13 + 1);
            *plVar13 = lVar20;
            pbVar16 = (byte *)*param_1;
          } while (pbVar16 == (byte *)param_1[1]);
        }
        lVar11 = (lVar15 - lVar11 >> 3) * 8;
        *param_1 = (long)(pbVar16 + 1);
        auVar30 = FUN_01844294(param_1,param_1[2] + lVar11,param_1[3]);
        pvVar25 = (void *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar11;
        plVar13 = (long *)((long)pvVar25 + 8);
        lVar11 = *plVar13;
        puVar12 = pvVar25;
        if (0xfef < lVar11 + 0x20U) {
          puVar12 = malloc(0x1000);
          if (puVar12 == (void *)0x0) goto LAB_01839b9c;
          lVar11 = 0;
          *puVar12 = pvVar25;
          plVar13 = puVar12 + 1;
          *plVar13 = 0;
          param_1[0x25c] = (long)puVar12;
        }
        *plVar13 = lVar11 + 0x20;
        puVar27 = (undefined8 *)((long)puVar12 + lVar11 + 0x10);
        *puVar27 = &PTR_FUN_01ce1030;
        *(undefined4 *)((long)puVar12 + lVar11 + 0x18) = 0x1010109;
        *(undefined1 (*) [16])((long)puVar12 + lVar11 + 0x20) = auVar30;
        if (puVar27 == (undefined8 *)0x0) goto LAB_01839b60;
      }
      else {
        puVar27 = (undefined8 *)0x0;
      }
    }
    lVar11 = 0;
    if ((((char)local_80 != '\0') || (local_80._1_1_ == '\0')) ||
       (lVar11 = FUN_01839ba0(param_1), lVar11 != 0)) {
      pcVar21 = (char *)*param_1;
      if ((pcVar21 == (char *)param_1[1]) || (*pcVar21 != 'v')) {
        lVar15 = param_1[2];
        lVar20 = param_1[3];
        do {
          lVar23 = FUN_01839ba0(param_1);
          if (lVar23 == 0) goto LAB_01839b60;
          plVar13 = (long *)param_1[3];
          if (plVar13 == (long *)param_1[4]) {
            plVar29 = (long *)param_1[2];
            sVar28 = (long)plVar13 - (long)plVar29;
            if (param_1 + 5 == plVar29) {
              pvVar25 = malloc(sVar28 * 2);
              if (pvVar25 == (void *)0x0) goto LAB_01839b9c;
              if (sVar28 != 0) {
                memmove(pvVar25,plVar29,sVar28);
              }
              param_1[2] = (long)pvVar25;
            }
            else {
              pvVar25 = realloc(plVar29,sVar28 * 2);
              param_1[2] = (long)pvVar25;
              if (pvVar25 == (void *)0x0) goto LAB_01839b9c;
            }
            plVar13 = (long *)((long)pvVar25 + ((long)sVar28 >> 3) * 8);
            param_1[3] = (long)plVar13;
            param_1[4] = (long)((long)pvVar25 + ((long)sVar28 >> 2) * 8);
          }
          param_1[3] = (long)(plVar13 + 1);
          *plVar13 = lVar23;
        } while (((byte *)param_1[1] != (byte *)*param_1) &&
                ((uVar5 = *(byte *)*param_1 - 0x2e, 0x31 < uVar5 ||
                 ((1L << ((ulong)uVar5 & 0x3f) & 0x2000000800001U) == 0))));
        lVar15 = (lVar20 - lVar15 >> 3) * 8;
        auVar30 = FUN_01844294(param_1,param_1[2] + lVar15,param_1[3]);
        puVar9 = (undefined8 *)param_1[0x25c];
        param_1[3] = param_1[2] + lVar15;
        plVar13 = (long *)((long)puVar9 + 8);
        lVar15 = *plVar13;
        if (0xfef < lVar15 + 0x40U) {
          puVar12 = malloc(0x1000);
          if (puVar12 == (void *)0x0) goto LAB_01839b9c;
          lVar15 = 0;
          *puVar12 = puVar9;
          plVar13 = puVar12 + 1;
          *plVar13 = 0;
          param_1[0x25c] = (long)puVar12;
          puVar9 = puVar12;
        }
        *plVar13 = lVar15 + 0x40;
        puVar12 = (undefined8 *)((long)puVar9 + lVar15 + 0x10);
        *puVar12 = &PTR_FUN_01ce10a0;
        *(undefined4 *)((long)puVar9 + lVar15 + 0x18) = 0x10012;
        *(undefined1 (*) [16])((long)puVar9 + lVar15 + 0x30) = auVar30;
        *(undefined8 **)((long)puVar9 + lVar15 + 0x40) = puVar27;
        *(long *)((long)puVar9 + lVar15 + 0x20) = lVar11;
        *(undefined8 **)((long)puVar9 + lVar15 + 0x28) = puVar26;
      }
      else {
        pvVar25 = (void *)param_1[0x25c];
        *param_1 = (long)(pcVar21 + 1);
        plVar13 = (long *)((long)pvVar25 + 8);
        lVar15 = *plVar13;
        puVar9 = pvVar25;
        if (0xfef < lVar15 + 0x40U) {
          puVar9 = malloc(0x1000);
          if (puVar9 == (void *)0x0) goto LAB_01839b9c;
          lVar15 = 0;
          *puVar9 = pvVar25;
          plVar13 = puVar9 + 1;
          *plVar13 = 0;
          param_1[0x25c] = (long)puVar9;
        }
        *plVar13 = lVar15 + 0x40;
        puVar12 = (undefined8 *)((long)puVar9 + lVar15 + 0x10);
        *puVar12 = &PTR_FUN_01ce10a0;
        *(undefined4 *)((long)puVar9 + lVar15 + 0x18) = 0x10012;
        *(long *)((long)puVar9 + lVar15 + 0x20) = lVar11;
        *(undefined8 **)((long)puVar9 + lVar15 + 0x28) = puVar26;
        *(undefined8 *)((long)puVar9 + lVar15 + 0x30) = 0;
        *(undefined8 *)((long)puVar9 + lVar15 + 0x38) = 0;
        *(undefined8 **)((long)puVar9 + lVar15 + 0x40) = puVar27;
      }
      *(undefined4 *)(puVar12 + 7) = local_7c;
      *(undefined1 *)((long)puVar12 + 0x3c) = local_78;
      goto LAB_01839b64;
    }
  }
  else if (pcVar14 != pcVar21) {
    if (cVar3 == 'G') {
      if (1 < (ulong)((long)pcVar14 - (long)pcVar21)) {
        if (pcVar21[1] == 'R') {
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_0183b554(param_1,0);
          if (lVar11 != 0) {
            pbVar16 = (byte *)*param_1;
            pbVar2 = (byte *)param_1[1];
            if (((pbVar2 == pbVar16) || (bVar4 = *pbVar16, bVar4 < 0x30)) ||
               ((0x39 < bVar4 && (0x19 < (byte)(bVar4 + 0xbf))))) {
              bVar8 = true;
              pbVar19 = pbVar16;
joined_r0x01839a34:
              if (pbVar19 != pbVar2) goto LAB_0183946c;
LAB_01839a38:
              if (!bVar8) goto LAB_01839b60;
            }
            else {
              do {
                pbVar19 = pbVar16 + 1;
                if ((0x39 < bVar4) && (0x19 < (byte)(bVar4 + 0xbf))) {
                  bVar8 = false;
                  pbVar19 = pbVar16;
                  goto joined_r0x01839a34;
                }
                *param_1 = (long)pbVar19;
              } while ((pbVar2 != pbVar19) && (bVar4 = *pbVar19, pbVar16 = pbVar19, 0x2f < bVar4));
              bVar8 = false;
              if (pbVar19 == pbVar2) goto LAB_01839a38;
LAB_0183946c:
              if (*pbVar19 != 0x5f) goto LAB_01839a38;
              *param_1 = (long)(pbVar19 + 1);
            }
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "reference temporary for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
        }
        else if (pcVar21[1] == 'V') {
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_0183b554(param_1,0);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "guard variable for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
        }
      }
    }
    else {
      if (cVar3 != 'T') goto LAB_01839b60;
      pcVar1 = pcVar21 + 1;
      if ((ulong)((long)pcVar14 - (long)pcVar21) < 2) {
switchD_01838e2c_caseD_44:
        *param_1 = (long)pcVar1;
        if (pcVar14 == pcVar1) {
          bVar8 = false;
        }
        else {
          bVar8 = *pcVar1 == 'v';
        }
        uVar10 = FUN_0183c534(param_1);
        if (((uVar10 & 1) == 0) && (lVar11 = FUN_01838d94(param_1), lVar11 != 0)) {
          puVar26 = (undefined8 *)param_1[0x25c];
          plVar13 = puVar26 + 1;
          lVar15 = *plVar13;
          bVar7 = 0xfef < lVar15 + 0x30U;
          if (bVar8) {
            puVar12 = puVar26;
            if (bVar7) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) {
LAB_01839b9c:
                    /* WARNING: Subroutine does not return */
                std::terminate();
              }
              lVar15 = 0;
              *puVar12 = puVar26;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "virtual thunk to ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
          }
          else {
            puVar12 = puVar26;
            if (bVar7) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (undefined8 *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = puVar26;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "non-virtual thunk to ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
          }
LAB_01839aa4:
          *(undefined4 *)(puVar12 + 1) = 0x1010114;
          puVar12[3] = pcVar14;
          puVar12[2] = pcVar21;
          puVar12[4] = lVar11;
          goto LAB_01839b64;
        }
      }
      else {
        switch(*pcVar1) {
        case 'C':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_01839ba0(param_1);
          if (lVar11 != 0) {
            pbVar16 = (byte *)*param_1;
            pbVar2 = (byte *)param_1[1];
            if ((pbVar16 == pbVar2) || (*pbVar16 != 0x6e)) {
              pbVar19 = pbVar16;
              if (pbVar16 != pbVar2) goto LAB_018398f4;
LAB_01839930:
              pbVar16 = (byte *)0x0;
              pbVar17 = pbVar19;
              pbVar18 = (byte *)0x0;
            }
            else {
              pbVar19 = pbVar16 + 1;
              *param_1 = (long)pbVar19;
              if (pbVar19 == pbVar2) goto LAB_01839930;
LAB_018398f4:
              if (9 < *pbVar19 - 0x30) goto LAB_01839930;
              do {
                pbVar19 = pbVar19 + 1;
                *param_1 = (long)pbVar19;
                pbVar17 = pbVar2;
                pbVar18 = pbVar2;
                if (pbVar2 == pbVar19) break;
                pbVar17 = pbVar19;
                pbVar18 = pbVar19;
              } while (*pbVar19 - 0x30 < 10);
            }
            puVar12 = (undefined8 *)0x0;
            if ((pbVar16 == pbVar18) || (pbVar17 == pbVar2)) goto LAB_01839b64;
            if (*pbVar17 == 0x5f) {
              *param_1 = (long)(pbVar17 + 1);
              lVar15 = FUN_01839ba0(param_1);
              if (lVar15 != 0) {
                pvVar25 = (void *)param_1[0x25c];
                plVar13 = (long *)((long)pvVar25 + 8);
                lVar20 = *plVar13;
                puVar26 = pvVar25;
                if (0xfef < lVar20 + 0x20U) {
                  puVar26 = malloc(0x1000);
                  if (puVar26 == (void *)0x0) goto LAB_01839b9c;
                  lVar20 = 0;
                  *puVar26 = pvVar25;
                  plVar13 = puVar26 + 1;
                  *plVar13 = 0;
                  param_1[0x25c] = (long)puVar26;
                }
                *plVar13 = lVar20 + 0x20;
                puVar12 = (undefined8 *)((long)puVar26 + lVar20 + 0x10);
                *puVar12 = &PTR_FUN_01cdfac0;
                *(undefined4 *)((long)puVar26 + lVar20 + 0x18) = 0x1010115;
                *(long *)((long)puVar26 + lVar20 + 0x20) = lVar15;
                *(long *)((long)puVar26 + lVar20 + 0x28) = lVar11;
                goto LAB_01839b64;
              }
            }
          }
          break;
        default:
          goto switchD_01838e2c_caseD_44;
        case 'H':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_0183b554(param_1,0);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "thread-local initialization routine for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
          break;
        case 'I':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_01839ba0(param_1);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "typeinfo for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
          break;
        case 'S':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_01839ba0(param_1);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "typeinfo name for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
          break;
        case 'T':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_01839ba0(param_1);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "VTT for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
          break;
        case 'V':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_01839ba0(param_1);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "vtable for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
          break;
        case 'W':
          *param_1 = (long)(pcVar21 + 2);
          lVar11 = FUN_0183b554(param_1,0);
          if (lVar11 != 0) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "thread-local wrapper routine for ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
          break;
        case 'c':
          *param_1 = (long)(pcVar21 + 2);
          uVar10 = FUN_0183c534(param_1);
          if ((((uVar10 & 1) == 0) && (uVar10 = FUN_0183c534(param_1), (uVar10 & 1) == 0)) &&
             (lVar11 = FUN_01838d94(param_1), lVar11 != 0)) {
            pvVar25 = (void *)param_1[0x25c];
            plVar13 = (long *)((long)pvVar25 + 8);
            lVar15 = *plVar13;
            puVar12 = pvVar25;
            if (0xfef < lVar15 + 0x30U) {
              puVar12 = malloc(0x1000);
              if (puVar12 == (void *)0x0) goto LAB_01839b9c;
              lVar15 = 0;
              *puVar12 = pvVar25;
              plVar13 = puVar12 + 1;
              *plVar13 = 0;
              param_1[0x25c] = (long)puVar12;
            }
            pcVar21 = "covariant return thunk to ";
            *plVar13 = lVar15 + 0x30;
            puVar12 = (undefined8 *)((long)puVar12 + lVar15 + 0x10);
            *puVar12 = &PTR_FUN_01cdfa40;
            pcVar14 = "";
            goto LAB_01839aa4;
          }
        }
      }
    }
  }
LAB_01839b60:
  puVar12 = (undefined8 *)0x0;
LAB_01839b64:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar12;
}

