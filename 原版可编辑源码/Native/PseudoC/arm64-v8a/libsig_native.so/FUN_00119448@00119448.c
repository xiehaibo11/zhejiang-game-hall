
byte * FUN_00119448(long *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined **ppuVar15;
  char *pcVar16;
  char *pcVar17;
  void *pvVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  byte *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_50 = (byte *)0x0;
  pbVar5 = (byte *)*param_1;
  pbVar20 = (byte *)param_1[1];
  uVar14 = (long)pbVar20 - (long)pbVar5;
  if (pbVar20 == pbVar5) {
switchD_001194a4_caseD_42:
    pbVar5 = (byte *)FUN_00127aa0(param_1);
    goto joined_r0x0011a35c;
  }
  bVar1 = *pbVar5;
  switch(bVar1) {
  case 0x41:
    if (pbVar5 == pbVar20) goto LAB_0011aa00;
    pbVar19 = pbVar5 + 1;
    *param_1 = (long)pbVar19;
    if ((pbVar20 == pbVar19) || (pbVar21 = pbVar5, 9 < *pbVar19 - 0x30)) {
      if ((pbVar19 == pbVar20) || (*pbVar19 != 0x5f)) {
        pbVar19 = (byte *)FUN_0011d7cc(param_1);
        pbVar5 = (byte *)0x0;
        if (pbVar19 == (byte *)0x0) goto joined_r0x0011a35c;
        pcVar17 = (char *)*param_1;
        if ((pcVar17 == (char *)param_1[1]) || (*pcVar17 != '_')) goto LAB_0011aa00;
        pbVar21 = (byte *)0x0;
        pbVar10 = (byte *)(pcVar17 + 1);
      }
      else {
        pbVar21 = (byte *)0x0;
        pbVar19 = (byte *)0x0;
        pbVar10 = pbVar5 + 2;
      }
    }
    else {
      do {
        pbVar10 = pbVar21;
        *param_1 = (long)(pbVar10 + 2);
        pbVar21 = pbVar20;
        if (pbVar20 == pbVar10 + 2) goto LAB_0011a2bc;
        pbVar21 = pbVar10 + 1;
      } while (pbVar10[2] - 0x30 < 10);
      pbVar21 = pbVar10 + 2;
LAB_0011a2bc:
      if (pbVar21 == (byte *)0x0) {
        pbVar21 = (byte *)0x1;
        pbVar19 = pbVar5 + 2;
      }
      if ((pbVar20 + -2 == pbVar10) || (pbVar10[2] != 0x5f)) goto LAB_0011aa00;
      pbVar10 = pbVar10 + 3;
    }
    *param_1 = (long)pbVar10;
    lVar8 = FUN_00119448(param_1);
    pbVar5 = (byte *)0x0;
    if (lVar8 != 0) {
      pvVar18 = (void *)param_1[0x25c];
      lVar6 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar6 + 0x30U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
LAB_0011aac4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar6 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
      pbVar5 = (byte *)((long)puVar4 + lVar6 + 0x10);
      *(undefined ***)pbVar5 = &PTR_FUN_001389f8;
      *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x100000e;
      *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
      *(byte **)((long)puVar4 + lVar6 + 0x28) = pbVar19;
      *(byte **)((long)puVar4 + lVar6 + 0x30) = pbVar21;
    }
    goto joined_r0x0011a35c;
  default:
    goto switchD_001194a4_caseD_42;
  case 0x43:
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = FUN_00119448(param_1);
    pbVar19 = (byte *)0x0;
    if (lVar8 == 0) goto switchD_00119d1c_caseD_50;
    pvVar18 = (void *)param_1[0x25c];
    lVar6 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar6 + 0x30U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar6 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
    lVar6 = (long)puVar4 + lVar6;
    pcVar17 = " complex";
    uVar7 = 9;
    goto LAB_00119a1c;
  case 0x44:
    if (uVar14 < 2) goto LAB_0011aa0c;
    pbVar19 = (byte *)0x0;
    switch(pbVar5[1]) {
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto switchD_001194a4_caseD_46;
    default:
      goto switchD_00119d1c_caseD_50;
    case 0x54:
    case 0x74:
      local_50 = (byte *)FUN_0011c920(param_1);
joined_r0x0011a930:
      if (local_50 == (byte *)0x0) goto LAB_0011aa0c;
      goto LAB_00119c10;
    case 0x61:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "auto";
      goto LAB_0011a104;
    case 99:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "decltype(auto)";
      uVar7 = 0xf;
      break;
    case 100:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "decimal64";
      uVar7 = 10;
      break;
    case 0x65:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "decimal128";
      uVar7 = 0xb;
      break;
    case 0x66:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "decimal32";
      uVar7 = 10;
      break;
    case 0x68:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "decimal16";
      uVar7 = 10;
      break;
    case 0x69:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "char32_t";
      uVar7 = 9;
      break;
    case 0x6e:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "std::nullptr_t";
      uVar7 = 0xf;
      break;
    case 0x70:
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = FUN_00119448(param_1);
      pbVar19 = (byte *)0x0;
      if (lVar8 == 0) goto switchD_00119d1c_caseD_50;
      pvVar18 = (void *)param_1[0x25c];
      lVar6 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar6 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar6 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
      local_50 = (byte *)((long)puVar4 + lVar6 + 0x10);
      *(undefined ***)local_50 = &PTR_FUN_00137488;
      *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x101011d;
      *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
      goto LAB_00119c10;
    case 0x73:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "char16_t";
      uVar7 = 9;
      break;
    case 0x75:
      pvVar18 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar5 + 2);
      lVar8 = *(long *)((long)pvVar18 + 8);
      puVar4 = pvVar18;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = pvVar18;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
      lVar8 = (long)puVar4 + lVar8;
      pcVar17 = "char8_t";
      uVar7 = 8;
      break;
    case 0x76:
      uVar14 = __strlen_chk(&DAT_0012f58f,3);
      pcVar17 = (char *)*param_1;
      pbVar5 = (byte *)param_1[1];
      if (uVar14 <= (ulong)((long)pbVar5 - (long)pcVar17)) {
        if (uVar14 != 0) {
          pcVar13 = "Dv";
          uVar12 = uVar14;
          pcVar16 = pcVar17;
          do {
            if (*pcVar13 != *pcVar16) goto LAB_0011aa00;
            pcVar13 = pcVar13 + 1;
            uVar12 = uVar12 - 1;
            pcVar16 = pcVar16 + 1;
          } while (uVar12 != 0);
        }
        pbVar20 = (byte *)(pcVar17 + uVar14);
        *param_1 = (long)pbVar20;
        if ((pbVar5 == pbVar20) || (8 < *pbVar20 - 0x31)) {
          if ((pbVar20 == pbVar5) || (*pbVar20 != 0x5f)) {
            lVar8 = FUN_0011d7cc(param_1);
            pbVar5 = (byte *)0x0;
            if (lVar8 != 0) {
              pcVar17 = (char *)*param_1;
              if ((pcVar17 == (char *)param_1[1]) || (*pcVar17 != '_')) goto LAB_0011aa00;
              *param_1 = (long)(pcVar17 + 1);
              lVar6 = FUN_00119448(param_1);
              pbVar5 = (byte *)0x0;
              if (lVar6 != 0) {
                pvVar18 = (void *)param_1[0x25c];
                lVar9 = *(long *)((long)pvVar18 + 8);
                puVar4 = pvVar18;
                if (0xfef < lVar9 + 0x30U) {
                  puVar4 = malloc(0x1000);
                  if (puVar4 == (void *)0x0) goto LAB_0011aac4;
                  lVar9 = 0;
                  *puVar4 = pvVar18;
                  puVar4[1] = 0;
                  param_1[0x25c] = (long)puVar4;
                }
                *(long *)((long)puVar4 + 8) = lVar9 + 0x30;
                local_50 = (byte *)((long)puVar4 + lVar9 + 0x10);
                *(undefined ***)local_50 = &PTR_FUN_00138988;
                *(undefined4 *)((long)puVar4 + lVar9 + 0x18) = 0x1010119;
                *(long *)((long)puVar4 + lVar9 + 0x20) = lVar6;
                *(long *)((long)puVar4 + lVar9 + 0x28) = lVar8;
                *(undefined8 *)((long)puVar4 + lVar9 + 0x30) = 0;
                goto joined_r0x0011a930;
              }
            }
          }
          else {
            *param_1 = (long)(pbVar20 + 1);
            lVar8 = FUN_00119448(param_1);
            pbVar5 = (byte *)0x0;
            if (lVar8 != 0) {
              pvVar18 = (void *)param_1[0x25c];
              lVar6 = *(long *)((long)pvVar18 + 8);
              puVar4 = pvVar18;
              if (0xfef < lVar6 + 0x30U) {
                puVar4 = malloc(0x1000);
                if (puVar4 == (void *)0x0) goto LAB_0011aac4;
                lVar6 = 0;
                *puVar4 = pvVar18;
                puVar4[1] = 0;
                param_1[0x25c] = (long)puVar4;
              }
              *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
              local_50 = (byte *)((long)puVar4 + lVar6 + 0x10);
              *(undefined ***)local_50 = &PTR_FUN_00138988;
              *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x1010119;
              *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
              *(undefined8 *)((long)puVar4 + lVar6 + 0x30) = 1;
              *(undefined8 *)((long)puVar4 + lVar6 + 0x28) = 1;
              goto joined_r0x0011a930;
            }
          }
          goto joined_r0x0011a35c;
        }
        if (*pbVar20 - 0x30 < 10) {
          pbVar19 = (byte *)(pcVar17 + uVar14);
          do {
            pbVar19 = pbVar19 + 1;
            *param_1 = (long)pbVar19;
            if (pbVar5 == pbVar19) {
              pbVar21 = pbVar5;
              if (pbVar19 == pbVar5) goto LAB_0011aa00;
              goto LAB_0011a960;
            }
            pbVar21 = pbVar19;
          } while (*pbVar19 - 0x30 < 10);
        }
        else {
          pbVar19 = pbVar20;
          pbVar20 = (byte *)0x0;
          pbVar21 = (byte *)0x0;
        }
        if (pbVar19 != pbVar5) {
LAB_0011a960:
          if (*pbVar19 == 0x5f) {
            pbVar10 = pbVar19 + 1;
            *param_1 = (long)pbVar10;
            if ((pbVar10 == pbVar5) || (*pbVar10 != 0x70)) {
              lVar8 = FUN_00119448(param_1);
              pbVar5 = (byte *)0x0;
              if (lVar8 != 0) {
                pvVar18 = (void *)param_1[0x25c];
                lVar6 = *(long *)((long)pvVar18 + 8);
                puVar4 = pvVar18;
                if (0xfef < lVar6 + 0x30U) {
                  puVar4 = malloc(0x1000);
                  if (puVar4 == (void *)0x0) goto LAB_0011aac4;
                  lVar6 = 0;
                  *puVar4 = pvVar18;
                  puVar4[1] = 0;
                  param_1[0x25c] = (long)puVar4;
                }
                *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
                if (pbVar21 == (byte *)0x0) {
                  pbVar20 = pbVar20 + 1;
                  pbVar21 = (byte *)0x1;
                }
                local_50 = (byte *)((long)puVar4 + lVar6 + 0x10);
                *(undefined ***)local_50 = &PTR_FUN_00138988;
                *(undefined4 *)((long)puVar4 + lVar6 + 0x18) = 0x1010119;
                *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
                *(byte **)((long)puVar4 + lVar6 + 0x28) = pbVar20;
                *(byte **)((long)puVar4 + lVar6 + 0x30) = pbVar21;
                goto joined_r0x0011a930;
              }
            }
            else {
              pvVar18 = (void *)param_1[0x25c];
              *param_1 = (long)(pbVar19 + 2);
              lVar8 = *(long *)((long)pvVar18 + 8);
              puVar4 = pvVar18;
              if (0xfef < lVar8 + 0x20U) {
                puVar4 = malloc(0x1000);
                if (puVar4 == (void *)0x0) goto LAB_0011aac4;
                lVar8 = 0;
                *puVar4 = pvVar18;
                puVar4[1] = 0;
                param_1[0x25c] = (long)puVar4;
              }
              *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
              if (pbVar21 == (byte *)0x0) {
                pbVar20 = pbVar20 + 1;
                pbVar21 = (byte *)0x1;
              }
              pbVar5 = (byte *)((long)puVar4 + lVar8 + 0x10);
              *(undefined ***)pbVar5 = &PTR_FUN_00138918;
              *(undefined4 *)((long)puVar4 + lVar8 + 0x18) = 0x101011a;
              *(byte **)((long)puVar4 + lVar8 + 0x20) = pbVar20;
              *(byte **)((long)puVar4 + lVar8 + 0x28) = pbVar21;
            }
            goto joined_r0x0011a35c;
          }
        }
      }
      goto LAB_0011aa00;
    }
    break;
  case 0x46:
    goto switchD_001194a4_caseD_46;
  case 0x47:
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = FUN_00119448(param_1);
    pbVar19 = (byte *)0x0;
    if (lVar8 == 0) goto switchD_00119d1c_caseD_50;
    pvVar18 = (void *)param_1[0x25c];
    lVar6 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar6 + 0x30U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar6 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x30;
    lVar6 = (long)puVar4 + lVar6;
    pcVar17 = " imaginary";
    uVar7 = 0xb;
LAB_00119a1c:
    lVar9 = __strlen_chk(pcVar17,uVar7);
    local_50 = (byte *)(lVar6 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_00138c28;
    *(undefined4 *)(lVar6 + 0x18) = 0x1010105;
    *(long *)(lVar6 + 0x20) = lVar8;
    *(char **)(lVar6 + 0x28) = pcVar17;
    *(char **)(lVar6 + 0x30) = pcVar17 + lVar9;
    goto LAB_00119c10;
  case 0x4b:
  case 0x56:
  case 0x72:
    uVar12 = (ulong)(bVar1 == 0x72);
    if (uVar12 < uVar14) {
      uVar11 = 1;
      if (bVar1 == 0x72) {
        uVar11 = 2;
      }
      if (pbVar5[uVar12] != 0x56) {
        uVar11 = (uint)(bVar1 == 0x72);
      }
      uVar12 = (ulong)uVar11;
    }
    if (uVar12 < uVar14) {
      uVar11 = (uint)uVar12;
      if (pbVar5[uVar12] == 0x4b) {
        uVar11 = uVar11 + 1;
      }
      uVar12 = (ulong)uVar11;
    }
    if ((uVar14 <= uVar12) ||
       ((pbVar5[uVar12] != 0x46 &&
        (((pbVar5[uVar12] != 0x44 || (uVar14 <= uVar12 + 1)) ||
         ((0x29 < pbVar5[uVar12 + 1] - 0x4f ||
          ((1L << ((ulong)(pbVar5[uVar12 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))))
    goto switchD_001194a4_caseD_55;
    goto switchD_001194a4_caseD_46;
  case 0x4d:
    if (pbVar5 != pbVar20) {
      *param_1 = (long)(pbVar5 + 1);
      lVar8 = FUN_00119448(param_1);
      pbVar5 = (byte *)0x0;
      if (lVar8 != 0) {
        lVar6 = FUN_00119448(param_1);
        pbVar5 = (byte *)0x0;
        if (lVar6 != 0) {
          pvVar18 = (void *)param_1[0x25c];
          lVar9 = *(long *)((long)pvVar18 + 8);
          puVar4 = pvVar18;
          if (0xfef < lVar9 + 0x20U) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (void *)0x0) goto LAB_0011aac4;
            lVar9 = 0;
            *puVar4 = pvVar18;
            puVar4[1] = 0;
            param_1[0x25c] = (long)puVar4;
          }
          *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
          uVar2 = *(undefined1 *)(lVar6 + 9);
          local_50 = (byte *)((long)puVar4 + lVar9 + 0x10);
          *(undefined ***)local_50 = &PTR_FUN_00138a68;
          *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0xd;
          *(undefined2 *)((long)puVar4 + lVar9 + 0x1a) = 0x101;
          *(undefined1 *)((long)puVar4 + lVar9 + 0x19) = uVar2;
          *(long *)((long)puVar4 + lVar9 + 0x20) = lVar8;
          *(long *)((long)puVar4 + lVar9 + 0x28) = lVar6;
          goto joined_r0x0011a930;
        }
      }
      goto joined_r0x0011a35c;
    }
LAB_0011aa00:
    local_50 = (byte *)0x0;
    goto LAB_0011aa0c;
  case 0x4f:
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = FUN_00119448(param_1);
    pbVar19 = (byte *)0x0;
    if (lVar8 == 0) goto switchD_00119d1c_caseD_50;
    pvVar18 = (void *)param_1[0x25c];
    lVar6 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar6 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar6 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
    bVar1 = *(byte *)(lVar8 + 9);
    local_50 = (byte *)((long)puVar4 + lVar6 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_00138bb8;
    *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar4 + lVar6 + 0x1a) = 0x101;
    *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
    *(undefined4 *)((long)puVar4 + lVar6 + 0x28) = 1;
    goto LAB_00119edc;
  case 0x50:
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = FUN_00119448(param_1);
    pbVar19 = (byte *)0x0;
    if (lVar8 == 0) goto switchD_00119d1c_caseD_50;
    pvVar18 = (void *)param_1[0x25c];
    lVar6 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar6 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar6 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
    uVar2 = *(undefined1 *)(lVar8 + 9);
    local_50 = (byte *)((long)puVar4 + lVar6 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_00138b48;
    *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0xb;
    *(undefined2 *)((long)puVar4 + lVar6 + 0x1a) = 0x101;
    *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
    *(undefined1 *)((long)puVar4 + lVar6 + 0x19) = uVar2;
    goto LAB_00119c10;
  case 0x52:
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = FUN_00119448(param_1);
    pbVar19 = (byte *)0x0;
    if (lVar8 == 0) goto switchD_00119d1c_caseD_50;
    pvVar18 = (void *)param_1[0x25c];
    lVar6 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar6 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar6 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
    bVar1 = *(byte *)(lVar8 + 9);
    local_50 = (byte *)((long)puVar4 + lVar6 + 0x10);
    *(undefined ***)local_50 = &PTR_FUN_00138bb8;
    *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar4 + lVar6 + 0x1a) = 0x101;
    *(long *)((long)puVar4 + lVar6 + 0x20) = lVar8;
    *(undefined4 *)((long)puVar4 + lVar6 + 0x28) = 0;
LAB_00119edc:
    local_50[0x1c] = 0;
    local_50[9] = bVar1;
    goto LAB_00119c10;
  case 0x53:
    if (((uVar14 < 2) || (pbVar5[1] == 0)) || (pbVar5[1] == 0x74)) goto switchD_001194a4_caseD_42;
    pbVar19 = (byte *)FUN_0011be3c(param_1);
    if ((((pbVar19 == (byte *)0x0) || ((char)param_1[0x5a] == '\0')) ||
        ((char *)param_1[1] == (char *)*param_1)) || (*(char *)*param_1 != 'I'))
    goto switchD_00119d1c_caseD_50;
LAB_0011a1bc:
    pbVar5 = (byte *)FUN_0011c1c4(param_1,0);
    if (pbVar5 != (byte *)0x0) {
      puVar22 = (undefined8 *)param_1[0x25c];
      lVar8 = puVar22[1];
      puVar4 = puVar22;
      if (0xfef < lVar8 + 0x20U) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) goto LAB_0011aac4;
        lVar8 = 0;
        *puVar4 = puVar22;
        puVar4[1] = 0;
        param_1[0x25c] = (long)puVar4;
      }
      uVar11 = 0x120;
      lVar6 = (long)puVar4 + lVar8;
      ppuVar15 = &PTR_FUN_001383d8;
LAB_0011a288:
      puVar4[1] = lVar8 + 0x20;
      local_50 = (byte *)(lVar6 + 0x10);
      *(undefined ***)local_50 = ppuVar15;
      *(uint *)(lVar6 + 0x18) = uVar11 | 0x1010000;
      *(byte **)(lVar6 + 0x20) = pbVar19;
      *(byte **)(lVar6 + 0x28) = pbVar5;
      goto LAB_00119c10;
    }
    goto LAB_0011aa0c;
  case 0x54:
    if (((1 < uVar14) && (pbVar5[1] - 0x65 < 0x11)) &&
       ((1 << (ulong)(pbVar5[1] - 0x65 & 0x1f) & 0x14001U) != 0)) goto switchD_001194a4_caseD_42;
    pbVar19 = (byte *)FUN_0011c690(param_1);
    local_50 = pbVar19;
    if (pbVar19 == (byte *)0x0) goto switchD_00119d1c_caseD_50;
    if ((((char)param_1[0x5a] != '\0') && ((char *)param_1[1] != (char *)*param_1)) &&
       (*(char *)*param_1 == 'I')) goto LAB_0011a1bc;
LAB_00119c10:
    FUN_0011b8dc(param_1 + 0x25,&local_50);
    pbVar19 = local_50;
    goto switchD_00119d1c_caseD_50;
  case 0x55:
switchD_001194a4_caseD_55:
    pbVar5 = (byte *)FUN_001276e0(param_1);
joined_r0x0011a35c:
    local_50 = pbVar5;
    if (local_50 != (byte *)0x0) goto LAB_00119c10;
    goto LAB_0011aa0c;
  case 0x61:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "signed char";
    uVar7 = 0xc;
    break;
  case 0x62:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "bool";
    goto LAB_0011a104;
  case 99:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "char";
    goto LAB_0011a104;
  case 100:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "double";
    uVar7 = 7;
    break;
  case 0x65:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "long double";
    uVar7 = 0xc;
    break;
  case 0x66:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "float";
    uVar7 = 6;
    break;
  case 0x67:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "__float128";
    uVar7 = 0xb;
    break;
  case 0x68:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "unsigned char";
    uVar7 = 0xe;
    break;
  case 0x69:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "int";
    uVar7 = 4;
    break;
  case 0x6a:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "unsigned int";
    uVar7 = 0xd;
    break;
  case 0x6c:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "long";
    goto LAB_0011a104;
  case 0x6d:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "unsigned long";
    uVar7 = 0xe;
    break;
  case 0x6e:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "__int128";
    uVar7 = 9;
    break;
  case 0x6f:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "unsigned __int128";
    uVar7 = 0x12;
    break;
  case 0x73:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "short";
    uVar7 = 6;
    break;
  case 0x74:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "unsigned short";
    uVar7 = 0xf;
    break;
  case 0x75:
    pbVar5 = pbVar5 + 1;
    *param_1 = (long)pbVar5;
    if ((pbVar20 != pbVar5) && (*pbVar5 - 0x30 < 10)) {
      if (pbVar5 == pbVar20) {
        uVar14 = 0xffffffffffffffd0;
        pbVar19 = pbVar20;
      }
      else {
        lVar8 = 0;
        pbVar19 = pbVar5;
        do {
          pbVar5 = pbVar19 + 1;
          *param_1 = (long)pbVar5;
          uVar14 = (lVar8 + (ulong)*pbVar19) - 0x30;
          pbVar19 = pbVar5;
          if ((pbVar20 == pbVar5) || (9 < *pbVar5 - 0x30)) goto LAB_0011a228;
          lVar8 = uVar14 * 10;
        } while (pbVar20 != pbVar5);
        uVar14 = lVar8 - 0x30;
        pbVar19 = pbVar20;
      }
LAB_0011a228:
      if (uVar14 <= (ulong)((long)pbVar20 - (long)pbVar5)) {
        pbVar5 = pbVar19 + uVar14;
        *param_1 = (long)pbVar5;
        if (pbVar19 != pbVar5) {
          puVar22 = (undefined8 *)param_1[0x25c];
          lVar8 = puVar22[1];
          puVar4 = puVar22;
          if (0xfef < lVar8 + 0x20U) {
            puVar4 = malloc(0x1000);
            if (puVar4 == (undefined8 *)0x0) goto LAB_0011aac4;
            lVar8 = 0;
            *puVar4 = puVar22;
            puVar4[1] = 0;
            param_1[0x25c] = (long)puVar4;
          }
          uVar11 = 0x107;
          lVar6 = (long)puVar4 + lVar8;
          ppuVar15 = &PTR_FUN_00136fb8;
          goto LAB_0011a288;
        }
      }
    }
LAB_0011aa0c:
    pbVar19 = (byte *)0x0;
    goto switchD_00119d1c_caseD_50;
  case 0x76:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "void";
LAB_0011a104:
    uVar7 = 5;
    break;
  case 0x77:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "wchar_t";
    uVar7 = 8;
    break;
  case 0x78:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "long long";
    uVar7 = 10;
    break;
  case 0x79:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "unsigned long long";
    uVar7 = 0x13;
    break;
  case 0x7a:
    pvVar18 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar5 + 1);
    lVar8 = *(long *)((long)pvVar18 + 8);
    puVar4 = pvVar18;
    if (0xfef < lVar8 + 0x20U) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0011aac4;
      lVar8 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x25c] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
    lVar8 = (long)puVar4 + lVar8;
    pcVar17 = "...";
    uVar7 = 4;
  }
  lVar6 = __strlen_chk(pcVar17,uVar7);
  pbVar19 = (byte *)(lVar8 + 0x10);
  *(undefined ***)pbVar19 = &PTR_FUN_00136fb8;
  *(undefined4 *)(lVar8 + 0x18) = 0x1010107;
  *(char **)(lVar8 + 0x20) = pcVar17;
  *(char **)(lVar8 + 0x28) = pcVar17 + lVar6;
switchD_00119d1c_caseD_50:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar19;
switchD_001194a4_caseD_46:
  pbVar5 = (byte *)FUN_001270cc(param_1);
  goto joined_r0x0011a35c;
}

