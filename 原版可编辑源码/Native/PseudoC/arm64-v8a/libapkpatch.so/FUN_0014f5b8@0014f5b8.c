
void FUN_0014f5b8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  void *pvVar16;
  undefined8 local_60;
  byte *pbStack_58;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar11 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  if ((pbVar11 == pbVar10) || (*pbVar11 != 0x4c)) goto LAB_00150d4c;
  pbVar13 = pbVar11 + 1;
  uVar1 = (long)pbVar10 - (long)pbVar13;
  *param_1 = (long)pbVar13;
  if (pbVar10 == pbVar13) {
code_r0x0014f680:
    local_50 = FUN_0014a548(param_1);
    puVar3 = (undefined8 *)0x0;
    if (local_50 == 0) goto code_r0x00150d54;
    local_60 = (byte *)*param_1;
    pbVar11 = (byte *)param_1[1];
    if ((pbVar11 == local_60) || (pbVar10 = local_60, 9 < *local_60 - 0x30)) {
      pbVar13 = local_60;
      pbStack_58 = (byte *)0x0;
      local_60 = (byte *)0x0;
    }
    else {
      do {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        pbVar13 = pbVar11;
        pbStack_58 = pbVar11;
        if (pbVar10 == pbVar11) break;
        pbVar13 = pbVar10;
        pbStack_58 = pbVar10;
      } while (*pbVar10 - 0x30 < 10);
    }
    puVar3 = (undefined8 *)0x0;
    if ((pbStack_58 == local_60) || (pbVar13 == pbVar11)) goto code_r0x00150d54;
    if (*pbVar13 == 0x45) {
      *param_1 = (long)(pbVar13 + 1);
      puVar3 = (undefined8 *)FUN_00153b10(param_1,&local_50,&local_60);
      goto code_r0x00150d54;
    }
  }
  else {
    puVar3 = (undefined8 *)0x0;
    switch(*pbVar13) {
    case 0x41:
      local_60 = (byte *)FUN_0014a548(param_1);
      puVar3 = (undefined8 *)0x0;
      if (local_60 == (byte *)0x0) goto code_r0x00150d54;
      pcVar12 = (char *)*param_1;
      if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == 'E')) {
        *param_1 = (long)(pcVar12 + 1);
        puVar3 = (undefined8 *)FUN_00153398(param_1,&local_60);
        goto code_r0x00150d54;
      }
      break;
    default:
      goto code_r0x0014f680;
    case 0x44:
      if (((2 < uVar1) && (pbVar11[2] == 0x6e)) && (pbVar11[3] == 0x45)) {
        *param_1 = (long)(pbVar11 + 4);
        puVar3 = (undefined8 *)FUN_00153428(param_1,"nullptr");
        goto code_r0x00150d54;
      }
      break;
    case 0x54:
      goto code_r0x00150d54;
    case 0x55:
      if ((1 < uVar1) && (pbVar11[2] == 0x6c)) {
        local_60 = (byte *)FUN_001534c4(param_1,0);
        puVar3 = (undefined8 *)0x0;
        if (local_60 == (byte *)0x0) goto code_r0x00150d54;
        pcVar12 = (char *)*param_1;
        if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == 'E')) {
          *param_1 = (long)(pcVar12 + 1);
          puVar3 = (undefined8 *)FUN_00153a80(param_1,&local_60);
          goto code_r0x00150d54;
        }
      }
      break;
    case 0x5f:
      if ((1 < uVar1) && (pbVar11[2] == 0x5a)) {
        *param_1 = (long)(pbVar11 + 3);
        puVar3 = (undefined8 *)FUN_00149bec(param_1);
        if (puVar3 == (undefined8 *)0x0) goto code_r0x00150d54;
        pcVar12 = (char *)*param_1;
        if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == 'E')) {
          *param_1 = (long)(pcVar12 + 1);
          goto code_r0x00150d54;
        }
      }
      break;
    case 0x61:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "signed char";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
LAB_00150d3c:
            *(undefined4 *)(puVar3 + 1) = 0x1010145;
            puVar3[2] = pcVar12;
            puVar3[3] = pcVar6;
LAB_00150d44:
            puVar3[4] = pbVar13;
            puVar3[5] = pbVar14;
            goto code_r0x00150d54;
          }
        }
      }
      break;
    case 0x62:
      if (2 < uVar1) {
        if (pbVar11[2] == 0x30) {
          if (pbVar11[3] == 0x45) {
            *param_1 = (long)(pbVar11 + 4);
            local_60 = (byte *)((ulong)local_60._4_4_ << 0x20);
            goto LAB_00150564;
          }
        }
        else if ((pbVar11[2] == 0x31) && (pbVar11[3] == 0x45)) {
          *param_1 = (long)(pbVar11 + 4);
          local_60 = (byte *)CONCAT44(local_60._4_4_,1);
LAB_00150564:
          puVar3 = (undefined8 *)FUN_00153300(param_1,&local_60);
          goto code_r0x00150d54;
        }
      }
      break;
    case 99:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "char";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 100:
      *param_1 = (long)(pbVar11 + 2);
      if (0x10 < (ulong)((long)pbVar10 - (long)(pbVar11 + 2))) {
        if (9 < pbVar11[2] - 0x30) {
          uVar9 = pbVar11[2] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[3] - 0x30) {
          uVar9 = pbVar11[3] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[4] - 0x30) {
          uVar9 = pbVar11[4] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[5] - 0x30) {
          uVar9 = pbVar11[5] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[6] - 0x30) {
          uVar9 = pbVar11[6] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[7] - 0x30) {
          uVar9 = pbVar11[7] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[8] - 0x30) {
          uVar9 = pbVar11[8] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[9] - 0x30) {
          uVar9 = pbVar11[9] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[10] - 0x30) {
          uVar9 = pbVar11[10] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0xb] - 0x30) {
          uVar9 = pbVar11[0xb] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0xc] - 0x30) {
          uVar9 = pbVar11[0xc] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0xd] - 0x30) {
          uVar9 = pbVar11[0xd] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0xe] - 0x30) {
          uVar9 = pbVar11[0xe] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0xf] - 0x30) {
          uVar9 = pbVar11[0xf] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0x10] - 0x30) {
          uVar9 = pbVar11[0x10] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[0x11] - 0x30) {
          uVar9 = pbVar11[0x11] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        pbVar13 = pbVar11 + 0x12;
        *param_1 = (long)pbVar13;
        if ((pbVar13 != pbVar10) && (*pbVar13 == 0x45)) {
          puVar15 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar11 + 0x13);
          lVar7 = puVar15[1];
          puVar3 = puVar15;
          if (0xfef < lVar7 + 0x20U) {
            puVar3 = malloc(0x1000);
            if (puVar3 == (undefined8 *)0x0) {
LAB_00150d80:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar7 = 0;
            *puVar3 = puVar15;
            puVar3[1] = 0;
            param_1[0x266] = (long)puVar3;
          }
          lVar4 = lVar7 + 0x20;
          lVar7 = (long)puVar3 + lVar7;
          uVar9 = 0x147;
          ppuVar5 = &PTR_FUN_00167490;
LAB_00150304:
          puVar3[1] = lVar4;
          puVar3 = (undefined8 *)(lVar7 + 0x10);
          *puVar3 = ppuVar5;
          *(uint *)(lVar7 + 0x18) = uVar9 | 0x1010000;
          *(byte **)(lVar7 + 0x20) = pbVar11 + 2;
          *(byte **)(lVar7 + 0x28) = pbVar13;
          goto code_r0x00150d54;
        }
      }
      break;
    case 0x65:
      pbVar8 = pbVar11 + 2;
      *param_1 = (long)pbVar8;
      if (0x20 < (ulong)((long)pbVar10 - (long)pbVar8)) {
        lVar7 = 0;
        pbVar13 = pbVar11 + 0x22;
        do {
          if ((9 < pbVar8[lVar7] - 0x30) &&
             ((uVar9 = pbVar8[lVar7] - 0x41, 0x25 < uVar9 ||
              ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0)))) goto LAB_00150d4c;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x20);
        *param_1 = (long)pbVar13;
        if ((pbVar13 != pbVar10) && (*pbVar13 == 0x45)) {
          puVar15 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar11 + 0x23);
          lVar7 = puVar15[1];
          puVar3 = puVar15;
          if (0xfef < lVar7 + 0x20U) {
            puVar3 = malloc(0x1000);
            if (puVar3 == (undefined8 *)0x0) goto LAB_00150d80;
            lVar7 = 0;
            *puVar3 = puVar15;
            puVar3[1] = 0;
            param_1[0x266] = (long)puVar3;
          }
          lVar4 = lVar7 + 0x20;
          lVar7 = (long)puVar3 + lVar7;
          uVar9 = 0x148;
          ppuVar5 = &PTR_FUN_00167500;
          goto LAB_00150304;
        }
      }
      break;
    case 0x66:
      *param_1 = (long)(pbVar11 + 2);
      if (8 < (ulong)((long)pbVar10 - (long)(pbVar11 + 2))) {
        if (9 < pbVar11[2] - 0x30) {
          uVar9 = pbVar11[2] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[3] - 0x30) {
          uVar9 = pbVar11[3] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[4] - 0x30) {
          uVar9 = pbVar11[4] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[5] - 0x30) {
          uVar9 = pbVar11[5] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[6] - 0x30) {
          uVar9 = pbVar11[6] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[7] - 0x30) {
          uVar9 = pbVar11[7] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[8] - 0x30) {
          uVar9 = pbVar11[8] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        if (9 < pbVar11[9] - 0x30) {
          uVar9 = pbVar11[9] - 0x41;
          puVar3 = (undefined8 *)0x0;
          if ((0x25 < uVar9) || ((1L << ((ulong)uVar9 & 0x3f) & 0x3f0000003fU) == 0))
          goto code_r0x00150d54;
        }
        pbVar13 = pbVar11 + 10;
        *param_1 = (long)pbVar13;
        if ((pbVar13 != pbVar10) && (*pbVar13 == 0x45)) {
          puVar15 = (undefined8 *)param_1[0x266];
          *param_1 = (long)(pbVar11 + 0xb);
          lVar7 = puVar15[1];
          puVar3 = puVar15;
          if (0xfef < lVar7 + 0x20U) {
            puVar3 = malloc(0x1000);
            if (puVar3 == (void *)0x0) goto LAB_00150d80;
            lVar7 = 0;
            *puVar3 = puVar15;
            puVar3[1] = 0;
            param_1[0x266] = (long)puVar3;
          }
          lVar4 = lVar7 + 0x20;
          lVar7 = (long)puVar3 + lVar7;
          uVar9 = 0x146;
          ppuVar5 = &PTR_FUN_00167420;
          goto LAB_00150304;
        }
      }
      break;
    case 0x68:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "unsigned char";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x69:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar15 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar15 = malloc(0x1000);
              if (puVar15 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar15 = pvVar16;
              puVar15[1] = 0;
              param_1[0x266] = (long)puVar15;
            }
            *(long *)((long)puVar15 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar15 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            *(undefined4 *)((long)puVar15 + lVar7 + 0x18) = 0x1010145;
            *(undefined1 **)((long)puVar15 + lVar7 + 0x20) = &DAT_0011a500;
            *(undefined1 **)((long)puVar15 + lVar7 + 0x28) = &DAT_0011a500;
            goto LAB_00150d44;
          }
        }
      }
      break;
    case 0x6a:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            puVar15 = (undefined8 *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = puVar15[1];
            puVar3 = puVar15;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = puVar15;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            lVar4 = (long)puVar3 + lVar7;
            pcVar12 = "u";
LAB_00150af0:
            puVar3[1] = lVar7 + 0x30;
            puVar3 = (undefined8 *)(lVar4 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = pcVar12 + 1;
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x6c:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            puVar15 = (undefined8 *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = puVar15[1];
            puVar3 = puVar15;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (undefined8 *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = puVar15;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            lVar4 = (long)puVar3 + lVar7;
            pcVar12 = "l";
            goto LAB_00150af0;
          }
        }
      }
      break;
    case 0x6d:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            puVar15 = (undefined8 *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = puVar15[1];
            puVar3 = puVar15;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (undefined8 *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = puVar15;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            lVar4 = (long)puVar3 + lVar7;
            pcVar12 = "ul";
LAB_00150b80:
            puVar3[1] = lVar7 + 0x30;
            puVar3 = (undefined8 *)(lVar4 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = pcVar12 + 2;
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x6e:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "__int128";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x6f:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "unsigned __int128";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x73:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "short";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x74:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "unsigned short";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x77:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "wchar_t";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
      break;
    case 0x78:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            puVar15 = (undefined8 *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = puVar15[1];
            puVar3 = puVar15;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = puVar15;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            lVar4 = (long)puVar3 + lVar7;
            pcVar12 = "ll";
            goto LAB_00150b80;
          }
        }
      }
      break;
    case 0x79:
      pbVar13 = pbVar11 + 2;
      *param_1 = (long)pbVar13;
      if (pbVar13 != pbVar10) {
        pbVar8 = pbVar11 + 2;
        if (*pbVar13 == 0x6e) {
          pbVar8 = pbVar11 + 3;
          *param_1 = (long)pbVar8;
        }
        if (pbVar10 != pbVar8) {
          if (*pbVar8 - 0x30 < 10) {
            do {
              pbVar8 = pbVar8 + 1;
              *param_1 = (long)pbVar8;
              pbVar11 = pbVar10;
              pbVar14 = pbVar10;
              if (pbVar8 == pbVar10) break;
              pbVar11 = pbVar8;
              pbVar14 = pbVar8;
            } while (*pbVar8 - 0x30 < 10);
          }
          else {
            pbVar13 = (byte *)0x0;
            pbVar11 = pbVar8;
            pbVar14 = (byte *)0x0;
          }
          puVar3 = (undefined8 *)0x0;
          if ((pbVar14 == pbVar13) || (pbVar11 == pbVar10)) goto code_r0x00150d54;
          if (*pbVar11 == 0x45) {
            pvVar16 = (void *)param_1[0x266];
            *param_1 = (long)(pbVar11 + 1);
            lVar7 = *(long *)((long)pvVar16 + 8);
            puVar3 = pvVar16;
            if (0xfef < lVar7 + 0x30U) {
              puVar3 = malloc(0x1000);
              if (puVar3 == (void *)0x0) goto LAB_00150d80;
              lVar7 = 0;
              *puVar3 = pvVar16;
              puVar3[1] = 0;
              param_1[0x266] = (long)puVar3;
            }
            pcVar12 = "ull";
            *(long *)((long)puVar3 + 8) = lVar7 + 0x30;
            puVar3 = (undefined8 *)((long)puVar3 + lVar7 + 0x10);
            *puVar3 = &PTR_FUN_00167340;
            pcVar6 = "";
            goto LAB_00150d3c;
          }
        }
      }
    }
  }
LAB_00150d4c:
  puVar3 = (undefined8 *)0x0;
code_r0x00150d54:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar3);
}

