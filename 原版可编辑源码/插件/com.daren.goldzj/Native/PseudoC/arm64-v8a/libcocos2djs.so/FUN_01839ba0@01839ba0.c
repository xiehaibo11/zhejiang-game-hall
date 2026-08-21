
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_01839ba0(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *pvVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  size_t __n;
  byte *pbVar19;
  long *plVar20;
  byte *pbVar21;
  
  pbVar8 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  uVar16 = (long)pbVar1 - (long)pbVar8;
  if (pbVar1 == pbVar8) goto switchD_01839be8_caseD_42;
  bVar2 = *pbVar8;
  switch(bVar2) {
  case 0x41:
    if (pbVar8 == pbVar1) {
      return (undefined8 *)0x0;
    }
    pbVar19 = pbVar8 + 1;
    *param_1 = (long)pbVar19;
    if ((pbVar1 == pbVar19) || (pbVar21 = pbVar8, 9 < *pbVar19 - 0x30)) {
      if ((pbVar19 == pbVar1) || (*pbVar19 != 0x5f)) {
        pbVar19 = (byte *)FUN_0183e610(param_1);
        if (pbVar19 == (byte *)0x0) {
          return (undefined8 *)0x0;
        }
        pcVar17 = (char *)*param_1;
        if (pcVar17 == (char *)param_1[1]) {
          return (undefined8 *)0x0;
        }
        if (*pcVar17 != '_') {
          return (undefined8 *)0x0;
        }
        pbVar21 = (byte *)0x0;
        pbVar9 = (byte *)(pcVar17 + 1);
      }
      else {
        pbVar19 = (byte *)0x0;
        pbVar21 = (byte *)0x0;
        pbVar9 = pbVar8 + 2;
      }
    }
    else {
      do {
        pbVar9 = pbVar21;
        *param_1 = (long)(pbVar9 + 2);
        pbVar21 = pbVar1;
        if (pbVar1 == pbVar9 + 2) goto LAB_0183ad48;
        pbVar21 = pbVar9 + 1;
      } while (pbVar9[2] - 0x30 < 10);
      pbVar21 = pbVar9 + 2;
LAB_0183ad48:
      if (pbVar21 == (byte *)0x0) {
        pbVar21 = (byte *)0x1;
        pbVar19 = pbVar8 + 2;
      }
      if (pbVar1 + -2 == pbVar9) {
        return (undefined8 *)0x0;
      }
      if (pbVar9[2] != 0x5f) {
        return (undefined8 *)0x0;
      }
      pbVar9 = pbVar9 + 3;
    }
    *param_1 = (long)pbVar9;
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar18 = pvVar6;
    if (0xfef < lVar14 + 0x30U) {
      puVar18 = malloc(0x1000);
      if (puVar18 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar18 = pvVar6;
      plVar20 = puVar18 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar18;
    }
    *plVar20 = lVar14 + 0x30;
    puVar5 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01ce1500;
    *(undefined4 *)((long)puVar18 + lVar14 + 0x18) = 0x100000e;
    *(long *)((long)puVar18 + lVar14 + 0x20) = lVar12;
    *(byte **)((long)puVar18 + lVar14 + 0x28) = pbVar19;
    *(byte **)((long)puVar18 + lVar14 + 0x30) = pbVar21;
    goto joined_r0x0183ac94;
  default:
    goto switchD_01839be8_caseD_42;
  case 0x43:
    *param_1 = (long)(pbVar8 + 1);
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar14 + 0x30U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = " complex";
    *plVar20 = lVar14 + 0x30;
    puVar5 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01ce1730;
    pcVar7 = "";
    goto LAB_0183a29c;
  case 0x44:
    if (uVar16 < 2) {
      return (undefined8 *)0x0;
    }
    puVar5 = (undefined8 *)0x0;
    switch(pbVar8[1]) {
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto switchD_01839be8_caseD_46;
    default:
      goto switchD_0183a4e0_caseD_50;
    case 0x54:
    case 0x74:
      puVar5 = (undefined8 *)FUN_0183d720(param_1);
      goto LAB_0183a5b0;
    case 0x61:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "auto";
      goto LAB_0183ab5c;
    case 99:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "decltype(auto)";
      goto LAB_0183a970;
    case 100:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "decimal64";
      break;
    case 0x65:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = (long)puVar5 + lVar12;
      pcVar17 = "decimal128";
      goto LAB_0183a114;
    case 0x66:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "decimal32";
      break;
    case 0x68:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "decimal16";
      break;
    case 0x69:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "char32_t";
      goto LAB_01839d64;
    case 0x6e:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "std::nullptr_t";
LAB_0183a970:
      *plVar20 = lVar14;
      puVar5 = (undefined8 *)(lVar12 + 0x10);
      *puVar5 = &PTR_FUN_01cdfb30;
      pcVar7 = pcVar17 + 0xe;
      goto LAB_0183ab68;
    case 0x70:
      *param_1 = (long)(pbVar8 + 2);
      lVar12 = FUN_01839ba0(param_1);
      if (lVar12 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar6 = (void *)param_1[0x25c];
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar14 = *plVar20;
      puVar18 = pvVar6;
      if (0xfef < lVar14 + 0x20U) {
        puVar18 = malloc(0x1000);
        if (puVar18 == (void *)0x0) goto LAB_0183b550;
        lVar14 = 0;
        *puVar18 = pvVar6;
        plVar20 = puVar18 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar18;
      }
      *plVar20 = lVar14 + 0x20;
      puVar5 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
      *puVar5 = &PTR_FUN_01ce0000;
      *(undefined4 *)((long)puVar18 + lVar14 + 0x18) = 0x101011d;
      *(long *)((long)puVar18 + lVar14 + 0x20) = lVar12;
      goto joined_r0x0183ac94;
    case 0x73:
      pvVar6 = (void *)param_1[0x25c];
      *param_1 = (long)(pbVar8 + 2);
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar12 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar12 + 0x20U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar12 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      lVar14 = lVar12 + 0x20;
      lVar12 = (long)puVar5 + lVar12;
      pcVar17 = "char16_t";
LAB_01839d64:
      *plVar20 = lVar14;
      puVar5 = (undefined8 *)(lVar12 + 0x10);
      *puVar5 = &PTR_FUN_01cdfb30;
      pcVar7 = pcVar17 + 8;
      goto LAB_0183ab68;
    case 0x76:
      pbVar19 = pbVar8 + 2;
      *param_1 = (long)pbVar19;
      if ((pbVar1 != pbVar19) && (*pbVar19 - 0x31 < 9)) {
        if (*pbVar19 - 0x30 < 10) {
          pbVar4 = pbVar8 + 3;
          do {
            pbVar9 = pbVar4;
            *param_1 = (long)pbVar9;
            pbVar21 = pbVar1;
            pbVar8 = pbVar19;
            if (pbVar1 == pbVar9) break;
            pbVar4 = pbVar9 + 1;
            pbVar21 = pbVar9;
          } while (*pbVar9 - 0x30 < 10);
        }
        else {
          pbVar21 = (byte *)0x0;
          pbVar8 = (byte *)0x0;
          pbVar9 = pbVar19;
        }
        if (pbVar9 == pbVar1) {
          return (undefined8 *)0x0;
        }
        if (*pbVar9 != 0x5f) {
          return (undefined8 *)0x0;
        }
        pbVar19 = pbVar9 + 1;
        *param_1 = (long)pbVar19;
        if ((pbVar19 == pbVar1) || (*pbVar19 != 0x70)) {
          lVar12 = FUN_01839ba0(param_1);
          if (lVar12 == 0) {
            return (undefined8 *)0x0;
          }
          pvVar6 = (void *)param_1[0x25c];
          plVar20 = (long *)((long)pvVar6 + 8);
          lVar14 = *plVar20;
          puVar18 = pvVar6;
          if (0xfef < lVar14 + 0x30U) {
            puVar18 = malloc(0x1000);
            if (puVar18 == (void *)0x0) goto LAB_0183b550;
            lVar14 = 0;
            *puVar18 = pvVar6;
            plVar20 = puVar18 + 1;
            *plVar20 = 0;
            param_1[0x25c] = (long)puVar18;
          }
          *plVar20 = lVar14 + 0x30;
          if (pbVar21 == (byte *)0x0) {
            pbVar8 = pbVar8 + 1;
            pbVar21 = (byte *)0x1;
          }
          puVar5 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
          *puVar5 = &PTR_FUN_01ce1490;
          *(undefined4 *)((long)puVar18 + lVar14 + 0x18) = 0x1010119;
          *(long *)((long)puVar18 + lVar14 + 0x20) = lVar12;
          *(byte **)((long)puVar18 + lVar14 + 0x28) = pbVar8;
          *(byte **)((long)puVar18 + lVar14 + 0x30) = pbVar21;
        }
        else {
          pvVar6 = (void *)param_1[0x25c];
          *param_1 = (long)(pbVar9 + 2);
          plVar20 = (long *)((long)pvVar6 + 8);
          lVar12 = *plVar20;
          puVar18 = pvVar6;
          if (0xfef < lVar12 + 0x20U) {
            puVar18 = malloc(0x1000);
            if (puVar18 == (void *)0x0) goto LAB_0183b550;
            lVar12 = 0;
            *puVar18 = pvVar6;
            plVar20 = puVar18 + 1;
            *plVar20 = 0;
            param_1[0x25c] = (long)puVar18;
          }
          *plVar20 = lVar12 + 0x20;
          if (pbVar21 == (byte *)0x0) {
            pbVar8 = pbVar8 + 1;
            pbVar21 = (byte *)0x1;
          }
          puVar5 = (undefined8 *)((long)puVar18 + lVar12 + 0x10);
          *puVar5 = &PTR_FUN_01ce1420;
          *(undefined4 *)((long)puVar18 + lVar12 + 0x18) = 0x101011a;
          *(byte **)((long)puVar18 + lVar12 + 0x20) = pbVar8;
          *(byte **)((long)puVar18 + lVar12 + 0x28) = pbVar21;
        }
        goto joined_r0x0183ac94;
      }
      if ((pbVar19 == pbVar1) || (*pbVar19 != 0x5f)) {
        lVar12 = FUN_0183e610(param_1);
        if ((lVar12 == 0) ||
           ((pcVar17 = (char *)*param_1, pcVar17 == (char *)param_1[1] || (*pcVar17 != '_')))) {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)(pcVar17 + 1);
        lVar14 = FUN_01839ba0(param_1);
        if (lVar14 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar6 = (void *)param_1[0x25c];
        plVar20 = (long *)((long)pvVar6 + 8);
        lVar13 = *plVar20;
        puVar18 = pvVar6;
        if (0xfef < lVar13 + 0x30U) {
          puVar18 = malloc(0x1000);
          if (puVar18 == (void *)0x0) goto LAB_0183b550;
          lVar13 = 0;
          *puVar18 = pvVar6;
          plVar20 = puVar18 + 1;
          *plVar20 = 0;
          param_1[0x25c] = (long)puVar18;
        }
        *plVar20 = lVar13 + 0x30;
        puVar5 = (undefined8 *)((long)puVar18 + lVar13 + 0x10);
        *puVar5 = &PTR_FUN_01ce1490;
        *(undefined4 *)((long)puVar18 + lVar13 + 0x18) = 0x1010119;
        *(long *)((long)puVar18 + lVar13 + 0x20) = lVar14;
        *(long *)((long)puVar18 + lVar13 + 0x28) = lVar12;
        *(undefined8 *)((long)puVar18 + lVar13 + 0x30) = 0;
        goto joined_r0x0183ac94;
      }
      *param_1 = (long)(pbVar8 + 3);
      lVar12 = FUN_01839ba0(param_1);
      if (lVar12 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar6 = (void *)param_1[0x25c];
      plVar20 = (long *)((long)pvVar6 + 8);
      lVar14 = *plVar20;
      puVar5 = pvVar6;
      if (0xfef < lVar14 + 0x30U) {
        puVar5 = malloc(0x1000);
        if (puVar5 == (void *)0x0) goto LAB_0183b550;
        lVar14 = 0;
        *puVar5 = pvVar6;
        plVar20 = puVar5 + 1;
        *plVar20 = 0;
        param_1[0x25c] = (long)puVar5;
      }
      uVar10 = 0x119;
      *plVar20 = lVar14 + 0x30;
      puVar5 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
      *puVar5 = &PTR_FUN_01ce1490;
      pcVar17 = (char *)0x1;
      pcVar7 = (char *)0x1;
      goto LAB_0183a2a4;
    }
LAB_0183aa74:
    *plVar20 = lVar14;
    puVar5 = (undefined8 *)(lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 9;
    break;
  case 0x46:
    goto switchD_01839be8_caseD_46;
  case 0x47:
    *param_1 = (long)(pbVar8 + 1);
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar14 + 0x30U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = " imaginary";
    *plVar20 = lVar14 + 0x30;
    puVar5 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01ce1730;
    pcVar7 = "";
LAB_0183a29c:
    uVar10 = 0x105;
LAB_0183a2a4:
    *(uint *)(puVar5 + 1) = uVar10 | 0x1010000;
    puVar5[2] = lVar12;
    puVar5[4] = pcVar7;
    puVar5[3] = pcVar17;
    goto joined_r0x0183ac94;
  case 0x4b:
  case 0x56:
  case 0x72:
    uVar11 = (ulong)(bVar2 == 0x72);
    if (uVar11 < uVar16) {
      uVar10 = 1;
      if (bVar2 == 0x72) {
        uVar10 = 2;
      }
      if (pbVar8[uVar11] != 0x56) {
        uVar10 = (uint)(bVar2 == 0x72);
      }
      uVar11 = (ulong)uVar10;
    }
    uVar10 = (uint)uVar11;
    if (uVar11 < uVar16) {
      if (pbVar8[uVar11] == 0x4b) {
        uVar10 = uVar10 + 1;
      }
      uVar11 = (ulong)uVar10;
    }
    if ((uVar16 <= uVar11) ||
       ((pbVar8[uVar11] != 0x46 &&
        ((((pbVar8[uVar11] != 0x44 || (uVar16 <= uVar10 + 1)) || (0x29 < pbVar8[uVar10 + 1] - 0x4f))
         || ((1L << ((ulong)(pbVar8[uVar10 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))
    goto switchD_01839be8_caseD_55;
    goto switchD_01839be8_caseD_46;
  case 0x4d:
    if (pbVar8 == pbVar1) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar8 + 1);
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    lVar14 = FUN_01839ba0(param_1);
    if (lVar14 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar13 = *plVar20;
    puVar18 = pvVar6;
    if (0xfef < lVar13 + 0x20U) {
      puVar18 = malloc(0x1000);
      if (puVar18 == (void *)0x0) goto LAB_0183b550;
      lVar13 = 0;
      *puVar18 = pvVar6;
      plVar20 = puVar18 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar18;
    }
    *plVar20 = lVar13 + 0x20;
    uVar3 = *(undefined1 *)(lVar14 + 9);
    puVar5 = (undefined8 *)((long)puVar18 + lVar13 + 0x10);
    *puVar5 = &PTR_FUN_01ce1570;
    *(undefined1 *)((long)puVar18 + lVar13 + 0x18) = 0xd;
    *(undefined2 *)((long)puVar18 + lVar13 + 0x1a) = 0x101;
    *(undefined1 *)((long)puVar18 + lVar13 + 0x19) = uVar3;
    *(long *)((long)puVar18 + lVar13 + 0x20) = lVar12;
    *(long *)((long)puVar18 + lVar13 + 0x28) = lVar14;
    goto joined_r0x0183ac94;
  case 0x4f:
    *param_1 = (long)(pbVar8 + 1);
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar18 = pvVar6;
    if (0xfef < lVar14 + 0x20U) {
      puVar18 = malloc(0x1000);
      if (puVar18 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar18 = pvVar6;
      plVar20 = puVar18 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar18;
    }
    *plVar20 = lVar14 + 0x20;
    uVar3 = *(undefined1 *)(lVar12 + 9);
    puVar5 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01ce16c0;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar18 + lVar14 + 0x1a) = 0x101;
    *(long *)((long)puVar18 + lVar14 + 0x20) = lVar12;
    *(undefined4 *)((long)puVar18 + lVar14 + 0x28) = 1;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x2c) = 0;
    goto joined_r0x0183ac94;
  case 0x50:
    *param_1 = (long)(pbVar8 + 1);
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar18 = pvVar6;
    if (0xfef < lVar14 + 0x20U) {
      puVar18 = malloc(0x1000);
      if (puVar18 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar18 = pvVar6;
      plVar20 = puVar18 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar18;
    }
    *plVar20 = lVar14 + 0x20;
    uVar3 = *(undefined1 *)(lVar12 + 9);
    puVar5 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01ce1650;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x18) = 0xb;
    *(undefined2 *)((long)puVar18 + lVar14 + 0x1a) = 0x101;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x19) = uVar3;
    *(long *)((long)puVar18 + lVar14 + 0x20) = lVar12;
    goto joined_r0x0183ac94;
  case 0x52:
    *param_1 = (long)(pbVar8 + 1);
    lVar12 = FUN_01839ba0(param_1);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar18 = pvVar6;
    if (0xfef < lVar14 + 0x20U) {
      puVar18 = malloc(0x1000);
      if (puVar18 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar18 = pvVar6;
      plVar20 = puVar18 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar18;
    }
    *plVar20 = lVar14 + 0x20;
    uVar3 = *(undefined1 *)(lVar12 + 9);
    puVar5 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01ce16c0;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x18) = 0xc;
    *(undefined2 *)((long)puVar18 + lVar14 + 0x1a) = 0x101;
    *(long *)((long)puVar18 + lVar14 + 0x20) = lVar12;
    *(undefined4 *)((long)puVar18 + lVar14 + 0x28) = 0;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar18 + lVar14 + 0x2c) = 0;
    goto joined_r0x0183ac94;
  case 0x53:
    if (((uVar16 < 2) || (pbVar8[1] == 0)) || (pbVar8[1] == 0x74)) goto switchD_01839be8_caseD_42;
    puVar5 = (undefined8 *)FUN_0183ca54(param_1);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((char)param_1[0x5a] == '\0') {
      return puVar5;
    }
    if ((char *)param_1[1] == (char *)*param_1) {
      return puVar5;
    }
    if (*(char *)*param_1 != 'I') {
      return puVar5;
    }
LAB_0183ac18:
    lVar12 = FUN_0183cea8(param_1,0);
    if (lVar12 == 0) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar14 = *plVar20;
    puVar18 = pvVar6;
    if (0xfef < lVar14 + 0x20U) {
      puVar18 = malloc(0x1000);
      if (puVar18 == (void *)0x0) goto LAB_0183b550;
      lVar14 = 0;
      *puVar18 = pvVar6;
      plVar20 = puVar18 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar18;
    }
    *plVar20 = lVar14 + 0x20;
    puVar15 = (undefined8 *)((long)puVar18 + lVar14 + 0x10);
    *puVar15 = &PTR_FUN_01ce0ee0;
    *(undefined4 *)((long)puVar18 + lVar14 + 0x18) = 0x1010120;
    *(undefined8 **)((long)puVar18 + lVar14 + 0x20) = puVar5;
    *(long *)((long)puVar18 + lVar14 + 0x28) = lVar12;
    puVar5 = puVar15;
joined_r0x0183ac94:
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_0183a5b4:
    puVar18 = (undefined8 *)param_1[0x26];
    if (puVar18 == (undefined8 *)param_1[0x27]) {
      plVar20 = (long *)param_1[0x25];
      __n = (long)puVar18 - (long)plVar20;
      if (param_1 + 0x28 == plVar20) {
        pvVar6 = malloc(__n * 2);
        if (pvVar6 == (void *)0x0) goto LAB_0183b550;
        if (__n != 0) {
          memmove(pvVar6,plVar20,__n);
        }
        param_1[0x25] = (long)pvVar6;
      }
      else {
        pvVar6 = realloc(plVar20,__n * 2);
        param_1[0x25] = (long)pvVar6;
        if (pvVar6 == (void *)0x0) {
LAB_0183b550:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
      }
      puVar18 = (undefined8 *)((long)pvVar6 + ((long)__n >> 3) * 8);
      param_1[0x26] = (long)puVar18;
      param_1[0x27] = (long)((long)pvVar6 + ((long)__n >> 2) * 8);
    }
    param_1[0x26] = (long)(puVar18 + 1);
    *puVar18 = puVar5;
    return puVar5;
  case 0x54:
    if (((uVar16 < 2) || (0x10 < pbVar8[1] - 0x65)) ||
       ((1 << (ulong)(pbVar8[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      puVar5 = (undefined8 *)FUN_0183d478(param_1);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if ((((char)param_1[0x5a] != '\0') && ((char *)param_1[1] != (char *)*param_1)) &&
         (*(char *)*param_1 == 'I')) goto LAB_0183ac18;
      goto LAB_0183a5b0;
    }
    goto switchD_01839be8_caseD_42;
  case 0x55:
switchD_01839be8_caseD_55:
    puVar5 = (undefined8 *)FUN_01849850(param_1);
    goto LAB_0183a5b0;
  case 0x61:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "signed char";
    goto LAB_0183aae8;
  case 0x62:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "bool";
    goto LAB_0183ab5c;
  case 99:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "char";
    goto LAB_0183ab5c;
  case 100:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = "double";
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)((long)puVar5 + lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = "";
    break;
  case 0x65:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "long double";
LAB_0183aae8:
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)(lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 0xb;
    break;
  case 0x66:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "float";
    goto LAB_0183a714;
  case 0x67:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "__float128";
LAB_0183a114:
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)(lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 10;
    break;
  case 0x68:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "unsigned char";
    goto LAB_0183a6a0;
  case 0x69:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "int";
    goto LAB_0183a3c4;
  case 0x6a:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = "unsigned int";
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)((long)puVar5 + lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = "";
    break;
  case 0x6c:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "long";
    goto LAB_0183ab5c;
  case 0x6d:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "unsigned long";
LAB_0183a6a0:
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)(lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 0xd;
    break;
  case 0x6e:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "__int128";
    goto LAB_01839d64;
  case 0x6f:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = "unsigned __int128";
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)((long)puVar5 + lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = "";
    break;
  case 0x73:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "short";
LAB_0183a714:
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)(lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 5;
    break;
  case 0x74:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "unsigned short";
    goto LAB_0183a970;
  case 0x75:
    pbVar8 = pbVar8 + 1;
    *param_1 = (long)pbVar8;
    if (pbVar1 == pbVar8) {
      return (undefined8 *)0x0;
    }
    if (9 < *pbVar8 - 0x30) {
      return (undefined8 *)0x0;
    }
    if (pbVar8 == pbVar1) {
      uVar16 = 0xffffffffffffffd0;
      pbVar19 = pbVar1;
    }
    else {
      lVar12 = 0;
      pbVar19 = pbVar8;
      do {
        pbVar8 = pbVar19 + 1;
        *param_1 = (long)pbVar8;
        uVar16 = (lVar12 + (ulong)*pbVar19) - 0x30;
        pbVar19 = pbVar8;
        if ((pbVar1 == pbVar8) || (9 < *pbVar8 - 0x30)) goto LAB_0183acac;
        lVar12 = uVar16 * 10;
      } while (pbVar1 != pbVar8);
      uVar16 = lVar12 - 0x30;
      pbVar19 = pbVar1;
    }
LAB_0183acac:
    if ((ulong)((long)pbVar1 - (long)pbVar8) < uVar16) {
      return (undefined8 *)0x0;
    }
    pbVar8 = pbVar19 + uVar16;
    *param_1 = (long)pbVar8;
    if (pbVar19 == pbVar8) {
      return (undefined8 *)0x0;
    }
    pvVar6 = (void *)param_1[0x25c];
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    *plVar20 = lVar12 + 0x20;
    puVar18 = (undefined8 *)((long)puVar5 + lVar12 + 0x10);
    *puVar18 = &PTR_FUN_01cdfb30;
    *(undefined4 *)((long)puVar5 + lVar12 + 0x18) = 0x1010107;
    *(byte **)((long)puVar5 + lVar12 + 0x20) = pbVar19;
    *(byte **)((long)puVar5 + lVar12 + 0x28) = pbVar8;
    return puVar18;
  case 0x76:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "void";
LAB_0183ab5c:
    *plVar20 = lVar14;
    puVar5 = (undefined8 *)(lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 4;
    break;
  case 0x77:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = "wchar_t";
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)((long)puVar5 + lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = "";
    break;
  case 0x78:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = lVar12 + 0x20;
    lVar12 = (long)puVar5 + lVar12;
    pcVar17 = "long long";
    goto LAB_0183aa74;
  case 0x79:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    pcVar17 = "unsigned long long";
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)((long)puVar5 + lVar12 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = "";
    break;
  case 0x7a:
    pvVar6 = (void *)param_1[0x25c];
    *param_1 = (long)(pbVar8 + 1);
    plVar20 = (long *)((long)pvVar6 + 8);
    lVar12 = *plVar20;
    puVar5 = pvVar6;
    if (0xfef < lVar12 + 0x20U) {
      puVar5 = malloc(0x1000);
      if (puVar5 == (void *)0x0) goto LAB_0183b550;
      lVar12 = 0;
      *puVar5 = pvVar6;
      plVar20 = puVar5 + 1;
      *plVar20 = 0;
      param_1[0x25c] = (long)puVar5;
    }
    lVar14 = (long)puVar5 + lVar12;
    pcVar17 = "...";
LAB_0183a3c4:
    *plVar20 = lVar12 + 0x20;
    puVar5 = (undefined8 *)(lVar14 + 0x10);
    *puVar5 = &PTR_FUN_01cdfb30;
    pcVar7 = pcVar17 + 3;
  }
LAB_0183ab68:
  *(undefined4 *)(puVar5 + 1) = 0x1010107;
  puVar5[3] = pcVar7;
  puVar5[2] = pcVar17;
switchD_0183a4e0_caseD_50:
  return puVar5;
switchD_01839be8_caseD_46:
  puVar5 = (undefined8 *)FUN_01849240(param_1);
  goto LAB_0183a5b0;
switchD_01839be8_caseD_42:
  puVar5 = (undefined8 *)FUN_01849c74(param_1);
LAB_0183a5b0:
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_0183a5b4;
}

