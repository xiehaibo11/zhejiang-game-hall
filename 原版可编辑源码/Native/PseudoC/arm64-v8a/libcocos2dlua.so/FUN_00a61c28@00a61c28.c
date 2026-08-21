
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00a61c28(long *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  long *plVar17;
  int *piVar18;
  char *pcVar19;
  long *plVar20;
  char *pcVar21;
  char *__s;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  undefined4 uVar26;
  long local_170;
  
  iVar4 = -0x30;
  plVar5 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x80);
  if (plVar5 == (long *)0x0) {
    return 1;
  }
  piVar18 = (int *)0x0;
  lVar22 = 0;
  plVar20 = (long *)register0x00000008;
  plVar17 = plVar5;
  bVar3 = false;
LAB_00a61cdc:
  bVar1 = bVar3;
  plVar6 = plVar20;
  if ((piVar18 == (int *)0x0) || (!bVar1)) {
    iVar15 = iVar4;
    if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
      plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
      iVar4 = iVar15;
    }
    else {
      plVar6 = plVar20 + 1;
      iVar4 = iVar15;
    }
    iVar15 = (int)*plVar20;
                    /* try { // try from 00a61d2c to 00b61da3 has its CatchHandler @ 00a61d2c
                       catch() { ... } // from try @ 00a61d2c with catch @ 00a61d2c
                       catch() { ... } // from try @ 00a61db0 with catch @ 00a61d2c */
    if (iVar15 == 0x11) {
      pcVar19 = (char *)0x0;
      plVar20 = plVar5;
      lVar22 = 0;
      goto LAB_00a6256c;
    }
  }
  else {
    iVar15 = *piVar18;
    lVar22 = *(long *)(piVar18 + 2);
    piVar18 = piVar18 + 4;
    bVar3 = false;
    if (iVar15 == 0x11) goto LAB_00a61cdc;
  }
  uVar26 = 4;
  plVar20 = plVar6;
  bVar3 = bVar1;
  lVar9 = lVar22;
  switch(iVar15) {
  case 1:
    goto switchD_00a61d4c_caseD_1;
  case 2:
    plVar17[8] = plVar17[8] | 4;
switchD_00a61d4c_caseD_1:
    if (*plVar17 == 0) {
      if (!bVar1) {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
        }
        else {
          plVar20 = plVar6 + 1;
        }
        lVar9 = *plVar6;
        iVar4 = iVar15;
      }
      if (lVar9 == 0) goto LAB_00a62754;
      *plVar17 = lVar9;
      goto LAB_00a61cdc;
    }
    break;
  case 3:
    if (plVar17[2] == 0) {
      if (bVar1) {
                    /* try { // try from 00a61da4 to 00b61daf has its CatchHandler @ 00a61e2c */
        plVar17[2] = lVar22;
      }
      else {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
          iVar4 = iVar15;
        }
        else {
          plVar20 = plVar6 + 1;
          iVar4 = iVar15;
        }
        plVar17[2] = *plVar6;
      }
      goto LAB_00a61cdc;
    }
    break;
  case 4:
    goto switchD_00a61d4c_caseD_4;
  case 5:
                    /* try { // try from 00a61db0 to 00b61e63 has its CatchHandler @ 00a61d2c */
    plVar17[8] = plVar17[8] | 8;
switchD_00a61d4c_caseD_4:
    if (plVar17[3] == 0) {
      if (!bVar1) {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
          plVar16 = plVar6;
        }
        else {
          plVar16 = plVar6 + 1;
        }
        lVar9 = *plVar20;
        plVar6 = plVar16;
        iVar4 = iVar15;
      }
      if (lVar9 == 0) goto LAB_00a62754;
LAB_00a61cd4:
      plVar17[3] = lVar9;
      plVar20 = plVar6;
      goto LAB_00a61cdc;
    }
    break;
  case 6:
    if (bVar1) goto LAB_00a61dd8;
LAB_00a61f88:
    iVar15 = iVar4;
    if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
      plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
      iVar4 = iVar15;
                    /* catch() { ... } // from try @ 00a62234 with catch @ 00a622bc */
    }
    else {
      plVar20 = plVar6 + 1;
      iVar4 = iVar15;
    }
    plVar17[5] = *plVar6;
    goto LAB_00a61cdc;
  case 7:
    if ((*(byte *)(plVar17 + 8) & 10) == 0) {
      if (!bVar1) {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
        }
        else {
          plVar20 = plVar6 + 1;
        }
        iVar4 = iVar15;
        lVar9 = *plVar6;
      }
      if (lVar9 == 0) goto LAB_00a62754;
      lVar9 = (*(code *)PTR_strdup_01769a10)();
      plVar17[3] = lVar9;
      if (lVar9 == 0) goto LAB_00a6275c;
      uVar24 = plVar17[8] | 2;
LAB_00a62224:
      plVar17[8] = uVar24;
      *(undefined1 *)(plVar17 + 4) = 1;
                    /* try { // try from 00a62234 to 00b6223f has its CatchHandler @ 00a622bc */
      goto LAB_00a61cdc;
    }
    break;
  case 8:
    if (!bVar1) goto code_r0x00a61e08;
    uVar26 = 6;
  default:
    goto switchD_00a61d4c_caseD_9;
  case 10:
    if (bVar1) {
      lVar10 = plVar17[3];
    }
    else {
      iVar15 = iVar4;
      if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
        plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
      }
      else {
        plVar20 = plVar6 + 1;
      }
      lVar10 = plVar17[3];
      lVar9 = *plVar6;
      iVar4 = iVar15;
    }
    if (lVar10 != 0) {
      if ((*(byte *)(plVar17 + 8) & 1) == 0) break;
                    /* catch() { ... } // from try @ 00a61da4 with catch @ 00a61e2c */
      if (lVar9 == 0) goto LAB_00a62754;
      lVar9 = (*(code *)PTR_strdup_01769a10)();
      if (lVar9 == 0) goto LAB_00a6275c;
      plVar6 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x80);
      if (plVar6 == (long *)0x0) {
LAB_00a6283c:
        (*(code *)PTR_free_01769a00)(lVar9);
        uVar26 = 1;
        goto switchD_00a61d4c_caseD_9;
      }
      plVar6[3] = lVar9;
      plVar6[8] = 1;
      plVar6[0xf] = plVar17[0xf];
      plVar17[0xf] = (long)plVar6;
      *(undefined1 *)(plVar6 + 4) = 1;
      plVar17 = plVar6;
      goto LAB_00a61cdc;
    }
    if (lVar9 == 0) goto LAB_00a62754;
    lVar9 = (*(code *)PTR_strdup_01769a10)();
    plVar17[3] = lVar9;
    if (lVar9 != 0) {
      uVar24 = plVar17[8] | 1;
      goto LAB_00a62224;
    }
    goto LAB_00a6275c;
  case 0xb:
  case 0x10:
    if (bVar1) {
      lVar10 = plVar17[0xb];
    }
    else {
      iVar15 = iVar4;
      if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
        plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
        plVar16 = plVar6;
      }
      else {
        plVar16 = plVar6 + 1;
      }
      lVar10 = plVar17[0xb];
      lVar9 = *plVar20;
      plVar6 = plVar16;
      iVar4 = iVar15;
    }
    if (lVar10 == 0) {
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      plVar17[0xb] = lVar9;
      if (lVar9 == 0) goto LAB_00a6275c;
                    /* catch() { ... } // from try @ 00a61fec with catch @ 00a62074 */
      *(undefined1 *)(plVar17 + 0xc) = 1;
      plVar20 = plVar6;
      goto LAB_00a61cdc;
    }
    break;
  case 0xc:
    plVar17[8] = plVar17[8] | 0x30;
    if (plVar17[9] != 0) break;
    if (!bVar1) {
      iVar15 = iVar4;
                    /* try { // try from 00a62240 to 00b622f3 has its CatchHandler @ 00a621bc */
      if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
        plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
        plVar16 = plVar6;
      }
      else {
        plVar16 = plVar6 + 1;
      }
      lVar9 = *plVar20;
      plVar6 = plVar16;
      iVar4 = iVar15;
    }
    if (lVar9 != 0) {
      plVar17[9] = lVar9;
      goto LAB_00a61cd4;
    }
    goto LAB_00a62754;
  case 0xd:
    if (plVar17[10] == 0) {
      if (bVar1) {
        plVar17[10] = lVar22;
      }
      else {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
          iVar4 = iVar15;
        }
        else {
          plVar20 = plVar6 + 1;
          iVar4 = iVar15;
        }
        plVar17[10] = *plVar6;
      }
      goto LAB_00a61cdc;
    }
    break;
  case 0xe:
    if (bVar1) {
      lVar10 = plVar17[6];
    }
    else {
      iVar15 = iVar4;
      if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
        plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
      }
      else {
        plVar20 = plVar6 + 1;
      }
      lVar10 = plVar17[6];
      lVar9 = *plVar6;
      iVar4 = iVar15;
    }
    if (lVar10 == 0) {
      if (lVar9 == 0) goto LAB_00a62754;
      lVar9 = (*(code *)PTR_strdup_01769a10)();
      plVar17[6] = lVar9;
      if (lVar9 != 0) {
        *(undefined1 *)(plVar17 + 7) = 1;
        goto LAB_00a61cdc;
      }
    }
    else {
      if ((*(byte *)(plVar17 + 8) & 1) == 0) break;
      if (lVar9 == 0) goto LAB_00a62754;
      lVar9 = (*(code *)PTR_strdup_01769a10)();
      if (lVar9 != 0) {
        plVar6 = (long *)(*(code *)PTR_calloc_01769a18)(1,0x80);
        if (plVar6 == (long *)0x0) goto LAB_00a6283c;
        plVar6[6] = lVar9;
        plVar6[8] = 1;
        plVar6[0xf] = plVar17[0xf];
        plVar17[0xf] = (long)plVar6;
        *(undefined1 *)(plVar6 + 7) = 1;
        plVar17 = plVar6;
        goto LAB_00a61cdc;
      }
    }
LAB_00a6275c:
    uVar26 = 1;
    goto switchD_00a61d4c_caseD_9;
  case 0xf:
    if (bVar1) {
      lVar10 = plVar17[0xe];
    }
    else {
      iVar15 = iVar4;
      if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
        plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
        plVar16 = plVar6;
      }
      else {
        plVar16 = plVar6 + 1;
      }
      lVar10 = plVar17[0xe];
      lVar9 = *plVar20;
      plVar6 = plVar16;
      iVar4 = iVar15;
    }
    if (lVar10 == 0) {
                    /* try { // try from 00a621bc to 00b62233 has its CatchHandler @ 00a621bc
                       catch() { ... } // from try @ 00a621bc with catch @ 00a621bc
                       catch() { ... } // from try @ 00a62240 with catch @ 00a621bc */
      plVar17[0xe] = lVar9;
      plVar20 = plVar6;
      goto LAB_00a61cdc;
    }
    break;
  case 0x13:
    plVar17[8] = plVar17[8] | 0x40;
    if (plVar17[0xd] == 0) {
      if (!bVar1) {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
          plVar16 = plVar6;
        }
        else {
          plVar16 = plVar6 + 1;
        }
        lVar9 = *plVar20;
        plVar6 = plVar16;
        iVar4 = iVar15;
      }
      if (lVar9 != 0) {
        plVar17[0xd] = lVar9;
        goto LAB_00a61cd4;
      }
      goto LAB_00a62754;
    }
    break;
  case 0x14:
    plVar17[8] = plVar17[8] | 0x80;
    if (!bVar1) goto LAB_00a61f88;
LAB_00a61dd8:
    plVar17[5] = lVar22;
    goto LAB_00a61cdc;
  }
  uVar26 = 2;
  goto switchD_00a61d4c_caseD_9;
LAB_00a6256c:
  puVar2 = PTR_strdup_01769a10;
  if (*plVar20 == 0) {
    if (lVar22 == 0) {
      uVar26 = 5;
      goto joined_r0x00a62868;
    }
  }
  else if ((lVar22 == 0) && (plVar20[3] == 0)) {
    uVar26 = 5;
LAB_00a62894:
    do {
      if ((char)plVar20[1] != '\0') {
        (*(code *)PTR_free_01769a00)(*plVar20);
        *plVar20 = 0;
        *(undefined1 *)(plVar20 + 1) = 0;
      }
                    /* try { // try from 00a628b4 to 00b6292b has its CatchHandler @ 00a628b4
                       catch() { ... } // from try @ 00a628b4 with catch @ 00a628b4
                       catch() { ... } // from try @ 00a62938 with catch @ 00a628b4 */
      if ((char)plVar20[4] != '\0') {
        (*(code *)PTR_free_01769a00)(plVar20[3]);
        plVar20[3] = 0;
        *(undefined1 *)(plVar20 + 4) = 0;
      }
      if ((char)plVar20[7] != '\0') {
        (*(code *)PTR_free_01769a00)(plVar20[6]);
        plVar20[6] = 0;
        *(undefined1 *)(plVar20 + 7) = 0;
      }
      if ((char)plVar20[0xc] != '\0') {
        (*(code *)PTR_free_01769a00)(plVar20[0xb]);
        plVar20[0xb] = 0;
        *(undefined1 *)(plVar20 + 0xc) = 0;
      }
      plVar20 = (long *)plVar20[0xf];
joined_r0x00a62868:
    } while (plVar20 != (long *)0x0);
    goto LAB_00a627f0;
  }
  uVar24 = plVar20[8];
  uVar26 = 5;
  uVar23 = (uint)uVar24;
  if (((~uVar23 & 9) == 0) || ((plVar20[5] != 0 & uVar23) != 0)) goto LAB_00a62894;
  uVar26 = 5;
  if (((~uVar23 & 10) == 0) || ((~uVar23 & 0x30) == 0 && plVar20[9] == 0)) goto LAB_00a62894;
  if (((uVar24 & 0x11) != 0) && (plVar20[6] == 0)) {
    plVar17 = plVar20 + 0xb;
    if ((uVar24 & 0x10) == 0) {
      plVar17 = plVar20 + 3;
    }
    __s = (char *)*plVar17;
    pcVar21 = "application/octet-stream";
    if (pcVar19 != (char *)0x0) {
      pcVar21 = pcVar19;
    }
    if (__s != (char *)0x0) {
      sVar7 = strlen(__s);
                    /* try { // try from 00a626e4 to 00b626ef has its CatchHandler @ 00a6276c */
      if ((sVar7 < 4) || (iVar4 = FUN_00a4a0f8(__s + (sVar7 - 4),&DAT_013cafd1), iVar4 == 0)) {
        sVar7 = strlen(__s);
        if ((sVar7 < 4) || (iVar4 = FUN_00a4a0f8(__s + (sVar7 - 4),&DAT_013cafe0), iVar4 == 0)) {
          sVar7 = strlen(__s);
                    /* try { // try from 00a6249c to 00b624a7 has its CatchHandler @ 00a62524 */
          if ((sVar7 < 5) || (iVar4 = FUN_00a4a0f8(__s + (sVar7 - 5),".jpeg"), iVar4 == 0)) {
                    /* try { // try from 00a624a8 to 00b6255b has its CatchHandler @ 00a62424 */
            sVar7 = strlen(__s);
            if ((sVar7 < 4) || (iVar4 = FUN_00a4a0f8(__s + (sVar7 - 4),&DAT_012f2e9f), iVar4 == 0))
            {
              sVar7 = strlen(__s);
              if ((sVar7 < 5) || (iVar4 = FUN_00a4a0f8(__s + (sVar7 - 5),".html"), iVar4 == 0)) {
                sVar7 = strlen(__s);
                    /* catch() { ... } // from try @ 00a6249c with catch @ 00a62524 */
                if ((sVar7 < 4) || (iVar4 = FUN_00a4a0f8(__s + (sVar7 - 4),".xml"), iVar4 == 0))
                goto LAB_00a62544;
                lVar9 = 5;
              }
              else {
                lVar9 = 4;
              }
            }
            else {
              lVar9 = 3;
            }
          }
          else {
            lVar9 = 2;
          }
        }
        else {
          lVar9 = 1;
        }
      }
      else {
                    /* try { // try from 00a626f0 to 00b627a3 has its CatchHandler @ 00a6266c */
        lVar9 = 0;
      }
      pcVar21 = (&PTR_s_image_gif_016a4a98)[lVar9 * 2];
    }
LAB_00a62544:
    lVar9 = (*(code *)puVar2)(pcVar21);
    plVar20[6] = lVar9;
    if (lVar9 != 0) {
      uVar24 = plVar20[8];
      *(undefined1 *)(plVar20 + 7) = 1;
      goto joined_r0x00a62564;
    }
LAB_00a6287c:
    uVar26 = 1;
    goto LAB_00a62894;
  }
joined_r0x00a62564:
  if ((plVar20 == plVar5) && (((uint)uVar24 >> 2 & 1) == 0)) {
    pcVar21 = (char *)*plVar20;
    if (pcVar21 == (char *)0x0) {
      uVar26 = 1;
      plVar20 = plVar5;
      goto joined_r0x00a62868;
    }
    lVar9 = plVar5[2];
    if (lVar9 == 0) {
      sVar7 = strlen(pcVar21);
      lVar9 = sVar7 + 1;
    }
    lVar9 = FUN_00a4e340(pcVar21,lVar9);
    *plVar20 = lVar9;
    if (lVar9 == 0) {
      uVar26 = 1;
      plVar20 = plVar5;
      goto LAB_00a62894;
    }
    *(undefined1 *)(plVar5 + 1) = 1;
    uVar24 = plVar20[8];
  }
  if ((uVar24 & 0x6b) == 0) {
    pcVar21 = (char *)plVar20[3];
    if (pcVar21 == (char *)0x0) {
      local_170 = 0;
    }
    else {
      lVar9 = plVar20[5];
      if (lVar9 == 0) {
        sVar7 = strlen(pcVar21);
                    /* try { // try from 00a6266c to 00b626e3 has its CatchHandler @ 00a6266c
                       catch() { ... } // from try @ 00a6266c with catch @ 00a6266c
                       catch() { ... } // from try @ 00a626f0 with catch @ 00a6266c */
        lVar9 = sVar7 + 1;
      }
      local_170 = FUN_00a4e340(pcVar21,lVar9);
      plVar20[3] = local_170;
      if (local_170 == 0) goto LAB_00a6287c;
      uVar24 = plVar20[8];
      *(undefined1 *)(plVar20 + 4) = 1;
    }
  }
  else {
    local_170 = plVar20[3];
  }
  lVar11 = plVar20[9];
  pcVar21 = (char *)*plVar20;
  sVar7 = plVar20[2];
  lVar12 = plVar20[10];
  uVar26 = 1;
  lVar13 = plVar20[5];
  lVar14 = plVar20[6];
  lVar9 = plVar20[0xd];
  lVar10 = plVar20[0xe];
  lVar25 = plVar20[0xb];
  lVar8 = (*(code *)PTR_calloc_01769a18)(1,0x70);
  if (lVar8 == 0) goto LAB_00a62894;
  *(char **)(lVar8 + 8) = pcVar21;
  if (pcVar21 == (char *)0x0) {
    sVar7 = 0;
  }
  else if (sVar7 == 0) {
    sVar7 = strlen(pcVar21);
  }
  *(size_t *)(lVar8 + 0x10) = sVar7;
  *(long *)(lVar8 + 0x60) = lVar9;
  *(long *)(lVar8 + 0x18) = local_170;
  *(long *)(lVar8 + 0x68) = lVar13;
  *(long *)(lVar8 + 0x28) = lVar11;
  *(long *)(lVar8 + 0x30) = lVar12;
  *(long *)(lVar8 + 0x38) = lVar14;
  *(long *)(lVar8 + 0x40) = lVar10;
  *(ulong *)(lVar8 + 0x50) = uVar24 | 0x80;
  *(long *)(lVar8 + 0x58) = lVar25;
  if (lVar22 == 0) {
    plVar17 = param_1;
    if ((long *)*param_2 != (long *)0x0) {
      plVar17 = (long *)*param_2;
    }
    *plVar17 = lVar8;
    plVar17 = param_2;
  }
  else {
    *(long *)(lVar8 + 0x48) = *(long *)(lVar22 + 0x48);
    plVar17 = (long *)(lVar22 + 0x48);
  }
                    /* try { // try from 00a62424 to 00b6249b has its CatchHandler @ 00a62424
                       catch() { ... } // from try @ 00a62424 with catch @ 00a62424
                       catch() { ... } // from try @ 00a624a8 with catch @ 00a62424 */
  *plVar17 = lVar8;
  plVar17 = plVar20 + 6;
  plVar20 = (long *)plVar20[0xf];
  if ((char *)*plVar17 != (char *)0x0) {
    pcVar19 = (char *)*plVar17;
  }
  lVar22 = lVar8;
  if (plVar20 == (long *)0x0) goto LAB_00a6282c;
  goto LAB_00a6256c;
LAB_00a6282c:
  uVar26 = 0;
  goto LAB_00a627f0;
code_r0x00a61e08:
  iVar15 = iVar4;
  if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
    plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
    iVar4 = iVar15;
  }
  else {
    plVar20 = plVar6 + 1;
    iVar4 = iVar15;
  }
  piVar18 = (int *)*plVar6;
  bVar3 = piVar18 != (int *)0x0;
  if (piVar18 == (int *)0x0) goto LAB_00a62754;
  goto LAB_00a61cdc;
LAB_00a62754:
  uVar26 = 3;
switchD_00a61d4c_caseD_9:
  plVar20 = plVar5;
  do {
                    /* catch() { ... } // from try @ 00a626e4 with catch @ 00a6276c */
    if ((char)plVar20[1] != '\0') {
      (*(code *)PTR_free_01769a00)(*plVar20);
      *plVar20 = 0;
      *(undefined1 *)(plVar20 + 1) = 0;
    }
    if ((char)plVar20[4] != '\0') {
      (*(code *)PTR_free_01769a00)(plVar20[3]);
      plVar20[3] = 0;
      *(undefined1 *)(plVar20 + 4) = 0;
    }
    if ((char)plVar20[7] != '\0') {
      (*(code *)PTR_free_01769a00)(plVar20[6]);
      plVar20[6] = 0;
      *(undefined1 *)(plVar20 + 7) = 0;
    }
    if ((char)plVar20[0xc] != '\0') {
      (*(code *)PTR_free_01769a00)(plVar20[0xb]);
      plVar20[0xb] = 0;
      *(undefined1 *)(plVar20 + 0xc) = 0;
    }
    plVar20 = (long *)plVar20[0xf];
  } while (plVar20 != (long *)0x0);
LAB_00a627f0:
  do {
    plVar20 = (long *)plVar5[0xf];
    (*(code *)PTR_free_01769a00)(plVar5);
    plVar5 = plVar20;
  } while (plVar20 != (long *)0x0);
  return uVar26;
}

