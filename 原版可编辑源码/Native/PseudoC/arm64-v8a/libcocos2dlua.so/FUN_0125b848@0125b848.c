
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0125b848(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  char *pcVar19;
  char *pcVar20;
  byte *pbVar21;
  byte *pbVar22;
  void *pvVar23;
  
  pcVar2 = (char *)*param_1;
  pcVar20 = (char *)param_1[1];
  if (pcVar2 == pcVar20) {
    return (undefined8 *)0x0;
  }
  if (*pcVar2 != 'L') {
    return (undefined8 *)0x0;
  }
  pcVar19 = pcVar2 + 1;
  *param_1 = (long)pcVar19;
  if (pcVar20 == pcVar19) {
switchD_0125b8b0_caseD_55:
    puVar8 = (undefined8 *)FUN_012557ec(param_1);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pbVar3 = (byte *)*param_1;
    pbVar4 = (byte *)param_1[1];
    pbVar18 = pbVar3;
    if ((pbVar4 == pbVar3) || (9 < *pbVar3 - 0x30)) {
      pbVar21 = (byte *)0x0;
      pbVar22 = (byte *)0x0;
      if (pbVar3 != pbVar4) goto LAB_0125b9bc;
LAB_0125b9fc:
      bVar5 = false;
      bVar6 = false;
      if (pbVar21 == pbVar22) {
LAB_0125b9dc:
        if (!bVar5) {
          return (undefined8 *)0x0;
        }
        return puVar8;
      }
    }
    else {
      do {
        pbVar18 = pbVar18 + 1;
        *param_1 = (long)pbVar18;
        pbVar22 = pbVar4;
        if (pbVar4 == pbVar18) break;
        pbVar22 = pbVar18;
      } while (*pbVar18 - 0x30 < 10);
      pbVar21 = pbVar3;
      if (pbVar18 == pbVar4) goto LAB_0125b9fc;
LAB_0125b9bc:
      if (*pbVar18 != 0x45) goto LAB_0125b9fc;
      *param_1 = (long)(pbVar18 + 1);
      bVar5 = true;
      bVar6 = bVar5;
      if (pbVar21 == pbVar22) goto LAB_0125b9dc;
    }
    if (!bVar6) {
      return (undefined8 *)0x0;
    }
    pvVar23 = (void *)param_1[0x25c];
    lVar13 = *(long *)((long)pvVar23 + 8);
    puVar9 = pvVar23;
    if (0xfef < lVar13 + 0x30U) {
      puVar9 = malloc(0x1000);
      if (puVar9 == (void *)0x0) {
LAB_0125c038:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar13 = 0;
      *puVar9 = pvVar23;
      puVar9[1] = 0;
      param_1[0x25c] = (long)puVar9;
    }
    *(long *)((long)puVar9 + 8) = lVar13 + 0x30;
    puVar10 = (undefined8 *)((long)puVar9 + lVar13 + 0x10);
    *puVar10 = &PTR_FUN_01735cd8;
    *(undefined4 *)((long)puVar9 + lVar13 + 0x18) = 0x101013d;
    *(undefined8 **)((long)puVar9 + lVar13 + 0x20) = puVar8;
    *(byte **)((long)puVar9 + lVar13 + 0x28) = pbVar21;
    *(byte **)((long)puVar9 + lVar13 + 0x30) = pbVar22;
    return puVar10;
  }
  switch(*pcVar19) {
  case 'T':
    return (undefined8 *)0x0;
  default:
    goto switchD_0125b8b0_caseD_55;
  case '_':
    uVar11 = __strlen_chk(&DAT_014a7df5,3);
    pcVar2 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar2) < uVar11) {
      return (undefined8 *)0x0;
    }
    if (uVar11 != 0) {
      pcVar20 = "_Z";
      uVar17 = uVar11;
      pcVar19 = pcVar2;
      do {
        if (*pcVar20 != *pcVar19) {
          return (undefined8 *)0x0;
        }
        pcVar20 = pcVar20 + 1;
        uVar17 = uVar17 - 1;
        pcVar19 = pcVar19 + 1;
      } while (uVar17 != 0);
    }
    *param_1 = (long)(pcVar2 + uVar11);
    puVar8 = (undefined8 *)FUN_01254ca4(param_1);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar2 == 'E') {
      *param_1 = (long)(pcVar2 + 1);
      return puVar8;
    }
    return (undefined8 *)0x0;
  case 'a':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "signed char";
    uVar12 = 0xc;
    break;
  case 'b':
    uVar11 = __strlen_chk(&DAT_014a7fce,4);
    pcVar2 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar2) < uVar11) {
LAB_0125bf64:
      uVar11 = __strlen_chk(&DAT_014a7fd2,4);
      pcVar2 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar2) < uVar11) {
        return (undefined8 *)0x0;
      }
      if (uVar11 != 0) {
        pcVar20 = "b1E";
        uVar17 = uVar11;
        pcVar19 = pcVar2;
        do {
          if (*pcVar20 != *pcVar19) {
            return (undefined8 *)0x0;
          }
          pcVar20 = pcVar20 + 1;
          uVar17 = uVar17 - 1;
          pcVar19 = pcVar19 + 1;
        } while (uVar17 != 0);
      }
      pvVar23 = (void *)param_1[0x25c];
      *param_1 = (long)(pcVar2 + uVar11);
      lVar13 = *(long *)((long)pvVar23 + 8);
      puVar8 = pvVar23;
      if (0xfef < lVar13 + 0x10U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_0125c038;
        lVar13 = 0;
        *puVar8 = pvVar23;
        puVar8[1] = 0;
        param_1[0x25c] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar13 + 0x10;
      puVar9 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
      *puVar9 = &PTR_FUN_01735b18;
      *(undefined4 *)((long)puVar8 + lVar13 + 0x18) = 0x101013c;
      *(undefined1 *)((long)puVar8 + lVar13 + 0x1c) = 1;
      return puVar9;
    }
    if (uVar11 != 0) {
      pcVar20 = "b0E";
      uVar17 = uVar11;
      pcVar19 = pcVar2;
      do {
        if (*pcVar20 != *pcVar19) goto LAB_0125bf64;
        pcVar20 = pcVar20 + 1;
        uVar17 = uVar17 - 1;
        pcVar19 = pcVar19 + 1;
      } while (uVar17 != 0);
    }
    pvVar23 = (void *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + uVar11);
    lVar13 = *(long *)((long)pvVar23 + 8);
    puVar8 = pvVar23;
    if (0xfef < lVar13 + 0x10U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) goto LAB_0125c038;
      lVar13 = 0;
      *puVar8 = pvVar23;
      puVar8[1] = 0;
      param_1[0x25c] = (long)puVar8;
    }
    *(long *)((long)puVar8 + 8) = lVar13 + 0x10;
    puVar9 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
    *puVar9 = &PTR_FUN_01735b18;
    *(undefined4 *)((long)puVar8 + lVar13 + 0x18) = 0x101013c;
    *(undefined1 *)((long)puVar8 + lVar13 + 0x1c) = 0;
    return puVar9;
  case 'c':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "char";
    uVar12 = 5;
    break;
  case 'd':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar20 - (long)(pcVar2 + 2)) < 0x11) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[2]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[3]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[4]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[5]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[6]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[7]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[8]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[9]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[10]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0xb]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0xc]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0xd]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0xe]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0xf]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0x10]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[0x11]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar19 = pcVar2 + 0x12;
    *param_1 = (long)pcVar19;
    if (pcVar19 == pcVar20) {
      return (undefined8 *)0x0;
    }
    if (*pcVar19 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 0x13);
    lVar13 = puVar9[1];
    puVar8 = puVar9;
    if (0xfef < lVar13 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) goto LAB_0125c038;
      lVar13 = 0;
      *puVar8 = puVar9;
      puVar8[1] = 0;
      param_1[0x25c] = (long)puVar8;
    }
    lVar15 = lVar13 + 0x20;
    lVar13 = (long)puVar8 + lVar13;
    uVar16 = 0x140;
    ppuVar14 = &PTR_FUN_01735bf8;
    goto LAB_0125bce8;
  case 'e':
    pcVar1 = pcVar2 + 2;
    *param_1 = (long)pcVar1;
    if ((ulong)((long)pcVar20 - (long)pcVar1) < 0x21) {
      return (undefined8 *)0x0;
    }
    lVar13 = 0;
    pcVar19 = pcVar2 + 0x22;
    do {
      iVar7 = isxdigit((uint)(byte)pcVar1[lVar13]);
      if (iVar7 == 0) {
        return (undefined8 *)0x0;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x20);
    *param_1 = (long)pcVar19;
    if (pcVar19 == pcVar20) {
      return (undefined8 *)0x0;
    }
    if (*pcVar19 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 0x23);
    lVar13 = puVar9[1];
    puVar8 = puVar9;
    if (0xfef < lVar13 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (undefined8 *)0x0) goto LAB_0125c038;
      lVar13 = 0;
      *puVar8 = puVar9;
      puVar8[1] = 0;
      param_1[0x25c] = (long)puVar8;
    }
    lVar15 = lVar13 + 0x20;
    lVar13 = (long)puVar8 + lVar13;
    uVar16 = 0x141;
    ppuVar14 = &PTR_FUN_01735c68;
    goto LAB_0125bce8;
  case 'f':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar20 - (long)(pcVar2 + 2)) < 9) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[2]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[3]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[4]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[5]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[6]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[7]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[8]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    iVar7 = isxdigit((uint)(byte)pcVar2[9]);
    if (iVar7 == 0) {
      return (undefined8 *)0x0;
    }
    pcVar19 = pcVar2 + 10;
    *param_1 = (long)pcVar19;
    if (pcVar19 == pcVar20) {
      return (undefined8 *)0x0;
    }
    if (*pcVar19 != 'E') {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 0xb);
    lVar13 = puVar9[1];
    puVar8 = puVar9;
    if (0xfef < lVar13 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (undefined8 *)0x0) goto LAB_0125c038;
      lVar13 = 0;
      *puVar8 = puVar9;
      puVar8[1] = 0;
      param_1[0x25c] = (long)puVar8;
    }
    lVar15 = lVar13 + 0x20;
    lVar13 = (long)puVar8 + lVar13;
    uVar16 = 0x13f;
    ppuVar14 = &PTR_FUN_01735b88;
LAB_0125bce8:
    puVar8[1] = lVar15;
    *(undefined8 *)(lVar13 + 0x10) = ppuVar14;
    *(uint *)(lVar13 + 0x18) = uVar16 | 0x1010000;
    *(char **)(lVar13 + 0x20) = pcVar2 + 2;
    *(char **)(lVar13 + 0x28) = pcVar19;
    return (undefined8 *)(lVar13 + 0x10);
  case 'h':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "unsigned char";
    uVar12 = 0xe;
    break;
  case 'i':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "";
    uVar12 = 1;
    break;
  case 'j':
    pcVar20 = "u";
    *param_1 = (long)(pcVar2 + 2);
    goto LAB_0125bc48;
  case 'l':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "l";
LAB_0125bc48:
    uVar12 = 2;
    break;
  case 'm':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "ul";
    uVar12 = 3;
    break;
  case 'n':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "__int128";
    uVar12 = 9;
    break;
  case 'o':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "unsigned __int128";
    uVar12 = 0x12;
    break;
  case 's':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "short";
    uVar12 = 6;
    break;
  case 't':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "unsigned short";
    uVar12 = 0xf;
    break;
  case 'w':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "wchar_t";
    uVar12 = 8;
    break;
  case 'x':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "ll";
    uVar12 = 3;
    break;
  case 'y':
    *param_1 = (long)(pcVar2 + 2);
    pcVar20 = "ull";
    uVar12 = 4;
  }
  lVar13 = __strlen_chk(pcVar20,uVar12);
  puVar8 = (undefined8 *)FUN_0125dc64(param_1,pcVar20,pcVar20 + lVar13);
  return puVar8;
}

