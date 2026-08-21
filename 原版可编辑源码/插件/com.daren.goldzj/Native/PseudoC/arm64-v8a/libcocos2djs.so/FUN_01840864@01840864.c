
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_01840864(long *param_1)

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
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  void *pvVar21;
  
  pcVar2 = (char *)*param_1;
  pcVar11 = (char *)param_1[1];
  if (pcVar2 == pcVar11) {
    return (undefined8 *)0x0;
  }
  if (*pcVar2 != 'L') {
    return (undefined8 *)0x0;
  }
  pcVar12 = pcVar2 + 1;
  *param_1 = (long)pcVar12;
  if (pcVar11 == pcVar12) {
switchD_018408cc_caseD_55:
    puVar8 = (undefined8 *)FUN_01839ba0(param_1);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pbVar3 = (byte *)*param_1;
    pbVar4 = (byte *)param_1[1];
    pbVar18 = pbVar3;
    if ((pbVar4 == pbVar3) || (9 < *pbVar3 - 0x30)) {
      pbVar19 = (byte *)0x0;
      pbVar20 = (byte *)0x0;
      if (pbVar3 != pbVar4) goto LAB_01840998;
LAB_018409d8:
      bVar5 = false;
      bVar6 = false;
      if (pbVar20 == pbVar19) {
LAB_018409b8:
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
        pbVar19 = pbVar4;
        if (pbVar4 == pbVar18) break;
        pbVar19 = pbVar18;
      } while (*pbVar18 - 0x30 < 10);
      pbVar20 = pbVar3;
      if (pbVar18 == pbVar4) goto LAB_018409d8;
LAB_01840998:
      if (*pbVar18 != 0x45) goto LAB_018409d8;
      *param_1 = (long)(pbVar18 + 1);
      bVar5 = true;
      bVar6 = bVar5;
      if (pbVar20 == pbVar19) goto LAB_018409b8;
    }
    if (!bVar6) {
      return (undefined8 *)0x0;
    }
    pvVar21 = (void *)param_1[0x25c];
    plVar13 = (long *)((long)pvVar21 + 8);
    lVar14 = *plVar13;
    puVar9 = pvVar21;
    if (0xfef < lVar14 + 0x30U) {
      puVar9 = malloc(0x1000);
      if (puVar9 == (void *)0x0) {
LAB_01840fa8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar14 = 0;
      *puVar9 = pvVar21;
      plVar13 = puVar9 + 1;
      *plVar13 = 0;
      param_1[0x25c] = (long)puVar9;
    }
    *plVar13 = lVar14 + 0x30;
    puVar10 = (undefined8 *)((long)puVar9 + lVar14 + 0x10);
    *puVar10 = &PTR_FUN_01cdfeb0;
    *(undefined4 *)((long)puVar9 + lVar14 + 0x18) = 0x101013c;
    *(undefined8 **)((long)puVar9 + lVar14 + 0x20) = puVar8;
    *(byte **)((long)puVar9 + lVar14 + 0x28) = pbVar20;
    *(byte **)((long)puVar9 + lVar14 + 0x30) = pbVar19;
    return puVar10;
  }
  switch(*pcVar12) {
  case 'T':
    return (undefined8 *)0x0;
  default:
    goto switchD_018408cc_caseD_55;
  case '_':
    if ((ulong)((long)pcVar11 - (long)pcVar12) < 2) {
      return (undefined8 *)0x0;
    }
    if (pcVar2[2] != 'Z') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar2 + 3);
    puVar8 = (undefined8 *)FUN_01838d94(param_1);
    if (puVar8 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 != (char *)param_1[1]) {
      if (*pcVar2 == 'E') {
        *param_1 = (long)(pcVar2 + 1);
        return puVar8;
      }
      return (undefined8 *)0x0;
    }
    return (undefined8 *)0x0;
  case 'a':
    pcVar11 = "signed char";
    pcVar12 = "";
    break;
  case 'b':
    if ((ulong)((long)pcVar11 - (long)pcVar12) < 3) {
      return (undefined8 *)0x0;
    }
    if ((pcVar2[2] != '0') || (pcVar2[3] != 'E')) {
      if (pcVar2[2] != '1') {
        return (undefined8 *)0x0;
      }
      if (pcVar2[3] != 'E') {
        return (undefined8 *)0x0;
      }
      pvVar21 = (void *)param_1[0x25c];
      *param_1 = (long)(pcVar2 + 4);
      plVar13 = (long *)((long)pvVar21 + 8);
      lVar14 = *plVar13;
      puVar8 = pvVar21;
      if (0xfef < lVar14 + 0x10U) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_01840fa8;
        lVar14 = 0;
        *puVar8 = pvVar21;
        plVar13 = puVar8 + 1;
        *plVar13 = 0;
        param_1[0x25c] = (long)puVar8;
      }
      *plVar13 = lVar14 + 0x10;
      puVar9 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar9 = &PTR_FUN_01cdfcf0;
      *(undefined4 *)((long)puVar8 + lVar14 + 0x18) = 0x101013b;
      *(undefined1 *)((long)puVar8 + lVar14 + 0x1c) = 1;
      return puVar9;
    }
    pvVar21 = (void *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 4);
    plVar13 = (long *)((long)pvVar21 + 8);
    lVar14 = *plVar13;
    puVar8 = pvVar21;
    if (0xfef < lVar14 + 0x10U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) goto LAB_01840fa8;
      lVar14 = 0;
      *puVar8 = pvVar21;
      plVar13 = puVar8 + 1;
      *plVar13 = 0;
      param_1[0x25c] = (long)puVar8;
    }
    *plVar13 = lVar14 + 0x10;
    puVar9 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
    *puVar9 = &PTR_FUN_01cdfcf0;
    *(undefined4 *)((long)puVar8 + lVar14 + 0x18) = 0x101013b;
    *(undefined1 *)((long)puVar8 + lVar14 + 0x1c) = 0;
    return puVar9;
  case 'c':
    pcVar11 = "char";
    pcVar12 = "";
    break;
  case 'd':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar11 - (long)(pcVar2 + 2)) < 0x11) {
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
    pcVar12 = pcVar2 + 0x12;
    *param_1 = (long)pcVar12;
    if (pcVar12 == pcVar11) {
      return (undefined8 *)0x0;
    }
    if (*pcVar12 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar21 = (void *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 0x13);
    plVar13 = (long *)((long)pvVar21 + 8);
    lVar14 = *plVar13;
    puVar8 = pvVar21;
    if (0xfef < lVar14 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) goto LAB_01840fa8;
      lVar14 = 0;
      *puVar8 = pvVar21;
      plVar13 = puVar8 + 1;
      *plVar13 = 0;
      param_1[0x25c] = (long)puVar8;
    }
    lVar16 = lVar14 + 0x20;
    lVar14 = (long)puVar8 + lVar14;
    uVar17 = 0x13f;
    ppuVar15 = &PTR_FUN_01cdfdd0;
    goto LAB_01840cc4;
  case 'e':
    pcVar1 = pcVar2 + 2;
    *param_1 = (long)pcVar1;
    if ((ulong)((long)pcVar11 - (long)pcVar1) < 0x21) {
      return (undefined8 *)0x0;
    }
    lVar14 = 0;
    pcVar12 = pcVar2 + 0x22;
    do {
      iVar7 = isxdigit((uint)(byte)pcVar1[lVar14]);
      if (iVar7 == 0) {
        return (undefined8 *)0x0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x20);
    *param_1 = (long)pcVar12;
    if (pcVar12 == pcVar11) {
      return (undefined8 *)0x0;
    }
    if (*pcVar12 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar21 = (void *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 0x23);
    plVar13 = (long *)((long)pvVar21 + 8);
    lVar14 = *plVar13;
    puVar8 = pvVar21;
    if (0xfef < lVar14 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) goto LAB_01840fa8;
      lVar14 = 0;
      *puVar8 = pvVar21;
      plVar13 = puVar8 + 1;
      *plVar13 = 0;
      param_1[0x25c] = (long)puVar8;
    }
    lVar16 = lVar14 + 0x20;
    lVar14 = (long)puVar8 + lVar14;
    uVar17 = 0x140;
    ppuVar15 = &PTR_FUN_01cdfe40;
    goto LAB_01840cc4;
  case 'f':
    *param_1 = (long)(pcVar2 + 2);
    if ((ulong)((long)pcVar11 - (long)(pcVar2 + 2)) < 9) {
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
    pcVar12 = pcVar2 + 10;
    *param_1 = (long)pcVar12;
    if (pcVar12 == pcVar11) {
      return (undefined8 *)0x0;
    }
    if (*pcVar12 != 'E') {
      return (undefined8 *)0x0;
    }
    pvVar21 = (void *)param_1[0x25c];
    *param_1 = (long)(pcVar2 + 0xb);
    plVar13 = (long *)((long)pvVar21 + 8);
    lVar14 = *plVar13;
    puVar8 = pvVar21;
    if (0xfef < lVar14 + 0x20U) {
      puVar8 = malloc(0x1000);
      if (puVar8 == (void *)0x0) goto LAB_01840fa8;
      lVar14 = 0;
      *puVar8 = pvVar21;
      plVar13 = puVar8 + 1;
      *plVar13 = 0;
      param_1[0x25c] = (long)puVar8;
    }
    lVar16 = lVar14 + 0x20;
    lVar14 = (long)puVar8 + lVar14;
    uVar17 = 0x13e;
    ppuVar15 = &PTR_FUN_01cdfd60;
LAB_01840cc4:
    *plVar13 = lVar16;
    *(undefined8 *)(lVar14 + 0x10) = ppuVar15;
    *(uint *)(lVar14 + 0x18) = uVar17 | 0x1010000;
    *(char **)(lVar14 + 0x20) = pcVar2 + 2;
    *(char **)(lVar14 + 0x28) = pcVar12;
    return (undefined8 *)(lVar14 + 0x10);
  case 'h':
    pcVar11 = "unsigned char";
    pcVar12 = "";
    break;
  case 'i':
    pcVar11 = "";
    *param_1 = (long)(pcVar2 + 2);
    pcVar12 = pcVar11;
    goto LAB_01840ef0;
  case 'j':
    pcVar11 = "u";
    goto LAB_01840c18;
  case 'l':
    pcVar11 = "l";
LAB_01840c18:
    pcVar12 = pcVar11 + 1;
    break;
  case 'm':
    pcVar11 = "ul";
    goto LAB_01840a8c;
  case 'n':
    pcVar11 = "__int128";
    pcVar12 = "";
    break;
  case 'o':
    pcVar11 = "unsigned __int128";
    pcVar12 = "";
    break;
  case 's':
    pcVar11 = "short";
    pcVar12 = "";
    break;
  case 't':
    pcVar11 = "unsigned short";
    pcVar12 = "";
    break;
  case 'w':
    pcVar11 = "wchar_t";
    pcVar12 = "";
    break;
  case 'x':
    pcVar11 = "ll";
LAB_01840a8c:
    pcVar12 = pcVar11 + 2;
    break;
  case 'y':
    pcVar11 = "ull";
    pcVar12 = "";
  }
  *param_1 = (long)(pcVar2 + 2);
LAB_01840ef0:
  puVar8 = (undefined8 *)FUN_018422a4(param_1,pcVar11,pcVar12);
  return puVar8;
}

