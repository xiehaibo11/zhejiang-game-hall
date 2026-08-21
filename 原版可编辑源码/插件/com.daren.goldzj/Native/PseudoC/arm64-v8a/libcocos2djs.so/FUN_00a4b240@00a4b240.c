
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00a4b240(long *param_1,long *param_2)

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
                    /* catch() { ... } // from try @ 00a4b0e4 with catch @ 00a4b29c */
                    /* catch() { ... } // from try @ 00a4b0d8 with catch @ 00a4b2a0 */
                    /* catch() { ... } // from try @ 00a4b0b8 with catch @ 00a4b2a4 */
                    /* catch() { ... } // from try @ 00a4b0f0 with catch @ 00a4b2b4 */
  plVar5 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x80);
  if (plVar5 == (long *)0x0) {
    return 1;
  }
  piVar18 = (int *)0x0;
  lVar22 = 0;
  plVar20 = (long *)register0x00000008;
  plVar17 = plVar5;
  bVar3 = false;
LAB_00a4b2f4:
  bVar1 = bVar3;
  plVar6 = plVar20;
  if ((piVar18 == (int *)0x0) || (!bVar1)) {
    iVar15 = iVar4;
    if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
      plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
      iVar4 = iVar15;
                    /* try { // try from 00a4b384 to 00b4b38f has its CatchHandler @ 00a4b58c */
    }
    else {
      plVar6 = plVar20 + 1;
      iVar4 = iVar15;
    }
    iVar15 = (int)*plVar20;
    if (iVar15 == 0x11) {
      pcVar19 = (char *)0x0;
      plVar20 = plVar5;
      lVar22 = 0;
      goto LAB_00a4bb84;
    }
  }
  else {
    iVar15 = *piVar18;
    lVar22 = *(long *)(piVar18 + 2);
                    /* try { // try from 00a4b30c to 00b4b363 has its CatchHandler @ 00a4b30c
                       catch() { ... } // from try @ 00a4b30c with catch @ 00a4b30c
                       catch() { ... } // from try @ 00a4b510 with catch @ 00a4b30c */
    piVar18 = piVar18 + 4;
    bVar3 = false;
    if (iVar15 == 0x11) goto LAB_00a4b2f4;
  }
  uVar26 = 4;
  plVar20 = plVar6;
  bVar3 = bVar1;
  lVar9 = lVar22;
                    /* try { // try from 00a4b364 to 00b4b37b has its CatchHandler @ 00a4b590 */
  switch(iVar15) {
  case 1:
    goto switchD_00a4b364_caseD_1;
  case 2:
                    /* try { // try from 00a4b390 to 00b4b39b has its CatchHandler @ 00a4b588 */
    plVar17[8] = plVar17[8] | 4;
switchD_00a4b364_caseD_1:
                    /* try { // try from 00a4b39c to 00b4b50f has its CatchHandler @ 00a4b5a0 */
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
      if (lVar9 == 0) goto LAB_00a4bd6c;
      *plVar17 = lVar9;
      goto LAB_00a4b2f4;
    }
    break;
  case 3:
    if (plVar17[2] == 0) {
      if (bVar1) {
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
      goto LAB_00a4b2f4;
    }
    break;
  case 4:
    goto switchD_00a4b364_caseD_4;
  case 5:
    plVar17[8] = plVar17[8] | 8;
switchD_00a4b364_caseD_4:
    if (plVar17[3] == 0) {
      if (!bVar1) {
        iVar15 = iVar4;
        if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
          plVar20 = (long *)(&stack0xffffffffffffff80 + iVar4);
          plVar16 = plVar6;
                    /* try { // try from 00a4b914 to 00b4b91f has its CatchHandler @ 00a4badc */
        }
        else {
          plVar16 = plVar6 + 1;
        }
        lVar9 = *plVar20;
        plVar6 = plVar16;
        iVar4 = iVar15;
      }
      if (lVar9 == 0) goto LAB_00a4bd6c;
LAB_00a4b2ec:
      plVar17[3] = lVar9;
      plVar20 = plVar6;
      goto LAB_00a4b2f4;
    }
    break;
  case 6:
    if (bVar1) goto LAB_00a4b3f0;
LAB_00a4b5a0:
                    /* catch() { ... } // from try @ 00a4b39c with catch @ 00a4b5a0 */
    iVar15 = iVar4;
    if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
      plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
      iVar4 = iVar15;
    }
    else {
      plVar20 = plVar6 + 1;
      iVar4 = iVar15;
    }
    plVar17[5] = *plVar6;
    goto LAB_00a4b2f4;
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
      if (lVar9 == 0) goto LAB_00a4bd6c;
      lVar9 = (*(code *)PTR_strdup_01d1b758)();
      plVar17[3] = lVar9;
                    /* catch() { ... } // from try @ 00a4b678 with catch @ 00a4b830 */
      if (lVar9 == 0) goto LAB_00a4bd74;
                    /* catch() { ... } // from try @ 00a4b66c with catch @ 00a4b834 */
                    /* catch() { ... } // from try @ 00a4b64c with catch @ 00a4b838 */
      uVar24 = plVar17[8] | 2;
LAB_00a4b83c:
      plVar17[8] = uVar24;
      *(undefined1 *)(plVar17 + 4) = 1;
                    /* catch() { ... } // from try @ 00a4b684 with catch @ 00a4b848 */
      goto LAB_00a4b2f4;
    }
    break;
  case 8:
    if (!bVar1) goto code_r0x00a4b420;
    uVar26 = 6;
                    /* try { // try from 00a4be74 to 00b4bf9b has its CatchHandler @ 00a4c02c */
  default:
    goto switchD_00a4b364_caseD_9;
  case 10:
    if (bVar1) {
      lVar10 = plVar17[3];
    }
    else {
      iVar15 = iVar4;
      if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
        plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
                    /* try { // try from 00a4b920 to 00b4b92b has its CatchHandler @ 00a4bad8 */
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
      if (lVar9 == 0) goto LAB_00a4bd6c;
      lVar9 = (*(code *)PTR_strdup_01d1b758)();
      if (lVar9 == 0) goto LAB_00a4bd74;
      plVar6 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x80);
      if (plVar6 == (long *)0x0) {
LAB_00a4be54:
                    /* try { // try from 00a4be5c to 00b4be67 has its CatchHandler @ 00a4c018 */
        (*(code *)PTR_free_01d1b748)(lVar9);
                    /* try { // try from 00a4be68 to 00b4be73 has its CatchHandler @ 00a4c014 */
        uVar26 = 1;
        goto switchD_00a4b364_caseD_9;
      }
      plVar6[3] = lVar9;
      plVar6[8] = 1;
      plVar6[0xf] = plVar17[0xf];
      plVar17[0xf] = (long)plVar6;
      *(undefined1 *)(plVar6 + 4) = 1;
      plVar17 = plVar6;
      goto LAB_00a4b2f4;
    }
    if (lVar9 == 0) goto LAB_00a4bd6c;
    lVar9 = (*(code *)PTR_strdup_01d1b758)();
    plVar17[3] = lVar9;
    if (lVar9 != 0) {
      uVar24 = plVar17[8] | 1;
      goto LAB_00a4b83c;
    }
    goto LAB_00a4bd74;
  case 0xb:
  case 0x10:
    if (bVar1) {
      lVar10 = plVar17[0xb];
    }
    else {
      iVar15 = iVar4;
                    /* try { // try from 00a4b64c to 00b4b663 has its CatchHandler @ 00a4b838 */
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
                    /* try { // try from 00a4b66c to 00b4b677 has its CatchHandler @ 00a4b834 */
    if (lVar10 == 0) {
                    /* try { // try from 00a4b678 to 00b4b683 has its CatchHandler @ 00a4b830 */
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      plVar17[0xb] = lVar9;
                    /* try { // try from 00a4b684 to 00b4b7bb has its CatchHandler @ 00a4b848 */
      if (lVar9 == 0) goto LAB_00a4bd74;
      *(undefined1 *)(plVar17 + 0xc) = 1;
      plVar20 = plVar6;
      goto LAB_00a4b2f4;
    }
    break;
  case 0xc:
    plVar17[8] = plVar17[8] | 0x30;
    if (plVar17[9] != 0) break;
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
      plVar17[9] = lVar9;
      goto LAB_00a4b2ec;
    }
    goto LAB_00a4bd6c;
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
      goto LAB_00a4b2f4;
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
                    /* try { // try from 00a4b92c to 00b4ba63 has its CatchHandler @ 00a4baf0 */
      }
      else {
        plVar20 = plVar6 + 1;
      }
      lVar10 = plVar17[6];
      lVar9 = *plVar6;
      iVar4 = iVar15;
    }
    if (lVar10 == 0) {
      if (lVar9 == 0) goto LAB_00a4bd6c;
      lVar9 = (*(code *)PTR_strdup_01d1b758)();
      plVar17[6] = lVar9;
      if (lVar9 != 0) {
        *(undefined1 *)(plVar17 + 7) = 1;
        goto LAB_00a4b2f4;
      }
    }
    else {
      if ((*(byte *)(plVar17 + 8) & 1) == 0) break;
      if (lVar9 == 0) goto LAB_00a4bd6c;
      lVar9 = (*(code *)PTR_strdup_01d1b758)();
      if (lVar9 != 0) {
                    /* try { // try from 00a4b510 to 00b4b5f7 has its CatchHandler @ 00a4b30c */
        plVar6 = (long *)(*(code *)PTR_calloc_01d1b760)(1,0x80);
        if (plVar6 == (long *)0x0) goto LAB_00a4be54;
        plVar6[6] = lVar9;
        plVar6[8] = 1;
        plVar6[0xf] = plVar17[0xf];
        plVar17[0xf] = (long)plVar6;
        *(undefined1 *)(plVar6 + 7) = 1;
        plVar17 = plVar6;
        goto LAB_00a4b2f4;
      }
    }
LAB_00a4bd74:
                    /* catch() { ... } // from try @ 00a4bbc8 with catch @ 00a4bd74 */
    uVar26 = 1;
    goto switchD_00a4b364_caseD_9;
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
                    /* try { // try from 00a4b7bc to 00b4b89f has its CatchHandler @ 00a4b5f8 */
        plVar16 = plVar6 + 1;
      }
      lVar10 = plVar17[0xe];
      lVar9 = *plVar20;
      plVar6 = plVar16;
      iVar4 = iVar15;
    }
    if (lVar10 == 0) {
      plVar17[0xe] = lVar9;
      plVar20 = plVar6;
      goto LAB_00a4b2f4;
    }
    break;
  case 0x13:
    plVar17[8] = plVar17[8] | 0x40;
    if (plVar17[0xd] == 0) {
      if (!bVar1) {
        iVar15 = iVar4;
                    /* try { // try from 00a4b8a0 to 00b4b8f3 has its CatchHandler @ 00a4b8a0
                       catch() { ... } // from try @ 00a4b8a0 with catch @ 00a4b8a0
                       catch() { ... } // from try @ 00a4ba64 with catch @ 00a4b8a0 */
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
        goto LAB_00a4b2ec;
      }
      goto LAB_00a4bd6c;
    }
    break;
  case 0x14:
                    /* catch() { ... } // from try @ 00a4b364 with catch @ 00a4b590 */
    plVar17[8] = plVar17[8] | 0x80;
    if (!bVar1) goto LAB_00a4b5a0;
LAB_00a4b3f0:
    plVar17[5] = lVar22;
    goto LAB_00a4b2f4;
  }
  uVar26 = 2;
  goto switchD_00a4b364_caseD_9;
LAB_00a4bb84:
  puVar2 = PTR_strdup_01d1b758;
  if (*plVar20 == 0) {
                    /* try { // try from 00a4bb9c to 00b4bbb3 has its CatchHandler @ 00a4bd7c */
    if (lVar22 == 0) {
      uVar26 = 5;
      goto joined_r0x00a4be80;
    }
  }
  else if ((lVar22 == 0) && (plVar20[3] == 0)) {
    uVar26 = 5;
LAB_00a4beac:
    do {
      if ((char)plVar20[1] != '\0') {
        (*(code *)PTR_free_01d1b748)(*plVar20);
        *plVar20 = 0;
        *(undefined1 *)(plVar20 + 1) = 0;
      }
      if ((char)plVar20[4] != '\0') {
        (*(code *)PTR_free_01d1b748)(plVar20[3]);
        plVar20[3] = 0;
        *(undefined1 *)(plVar20 + 4) = 0;
      }
      if ((char)plVar20[7] != '\0') {
        (*(code *)PTR_free_01d1b748)(plVar20[6]);
        plVar20[6] = 0;
        *(undefined1 *)(plVar20 + 7) = 0;
      }
      if ((char)plVar20[0xc] != '\0') {
        (*(code *)PTR_free_01d1b748)(plVar20[0xb]);
        plVar20[0xb] = 0;
        *(undefined1 *)(plVar20 + 0xc) = 0;
      }
      plVar20 = (long *)plVar20[0xf];
joined_r0x00a4be80:
    } while (plVar20 != (long *)0x0);
    goto LAB_00a4be08;
  }
  uVar24 = plVar20[8];
  uVar26 = 5;
  uVar23 = (uint)uVar24;
                    /* try { // try from 00a4bbbc to 00b4bbc7 has its CatchHandler @ 00a4bd78 */
                    /* try { // try from 00a4bbc8 to 00b4bbd3 has its CatchHandler @ 00a4bd74 */
  if (((~uVar23 & 9) == 0) || ((plVar20[5] != 0 & uVar23) != 0)) goto LAB_00a4beac;
                    /* try { // try from 00a4bbd4 to 00b4bcff has its CatchHandler @ 00a4bd8c */
  uVar26 = 5;
  if (((~uVar23 & 10) == 0) || ((~uVar23 & 0x30) == 0 && plVar20[9] == 0)) goto LAB_00a4beac;
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
                    /* try { // try from 00a4bd00 to 00b4bde3 has its CatchHandler @ 00a4bb48 */
      if ((sVar7 < 4) || (iVar4 = FUN_00a33710(__s + (sVar7 - 4),&DAT_0189868d), iVar4 == 0)) {
                    /* try { // try from 00a4ba64 to 00b4bb47 has its CatchHandler @ 00a4b8a0 */
        sVar7 = strlen(__s);
        if ((sVar7 < 4) || (iVar4 = FUN_00a33710(__s + (sVar7 - 4),&DAT_0188996e), iVar4 == 0)) {
          sVar7 = strlen(__s);
          if ((sVar7 < 5) || (iVar4 = FUN_00a33710(__s + (sVar7 - 5),".jpeg"), iVar4 == 0)) {
            sVar7 = strlen(__s);
                    /* catch() { ... } // from try @ 00a4b920 with catch @ 00a4bad8 */
                    /* catch() { ... } // from try @ 00a4b914 with catch @ 00a4badc */
                    /* catch() { ... } // from try @ 00a4b8f4 with catch @ 00a4bae0 */
            if ((sVar7 < 4) || (iVar4 = FUN_00a33710(__s + (sVar7 - 4),&DAT_0188de8c), iVar4 == 0))
            {
                    /* catch() { ... } // from try @ 00a4b92c with catch @ 00a4baf0 */
              sVar7 = strlen(__s);
              if ((sVar7 < 5) || (iVar4 = FUN_00a33710(__s + (sVar7 - 5),".html"), iVar4 == 0)) {
                sVar7 = strlen(__s);
                if ((sVar7 < 4) ||
                   (iVar4 = FUN_00a33710(__s + (sVar7 - 4),&DAT_018986c2), iVar4 == 0))
                goto LAB_00a4bb5c;
                    /* try { // try from 00a4bb48 to 00b4bb9b has its CatchHandler @ 00a4bb48
                       catch() { ... } // from try @ 00a4bb48 with catch @ 00a4bb48
                       catch() { ... } // from try @ 00a4bd00 with catch @ 00a4bb48 */
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
        lVar9 = 0;
      }
      pcVar21 = (&PTR_s_image_gif_01c6e2c8)[lVar9 * 2];
    }
LAB_00a4bb5c:
    lVar9 = (*(code *)puVar2)(pcVar21);
    plVar20[6] = lVar9;
    if (lVar9 != 0) {
      uVar24 = plVar20[8];
      *(undefined1 *)(plVar20 + 7) = 1;
      goto joined_r0x00a4bb7c;
    }
LAB_00a4be94:
    uVar26 = 1;
    goto LAB_00a4beac;
  }
joined_r0x00a4bb7c:
  if ((plVar20 == plVar5) && (((uint)uVar24 >> 2 & 1) == 0)) {
    pcVar21 = (char *)*plVar20;
    if (pcVar21 == (char *)0x0) {
      uVar26 = 1;
      plVar20 = plVar5;
      goto joined_r0x00a4be80;
    }
    lVar9 = plVar5[2];
    if (lVar9 == 0) {
      sVar7 = strlen(pcVar21);
      lVar9 = sVar7 + 1;
    }
    lVar9 = FUN_00a37958(pcVar21,lVar9);
    *plVar20 = lVar9;
    if (lVar9 == 0) {
      uVar26 = 1;
      plVar20 = plVar5;
      goto LAB_00a4beac;
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
        lVar9 = sVar7 + 1;
      }
      local_170 = FUN_00a37958(pcVar21,lVar9);
      plVar20[3] = local_170;
      if (local_170 == 0) goto LAB_00a4be94;
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
  lVar8 = (*(code *)PTR_calloc_01d1b760)(1,0x70);
  if (lVar8 == 0) goto LAB_00a4beac;
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
  *plVar17 = lVar8;
  plVar17 = plVar20 + 6;
  plVar20 = (long *)plVar20[0xf];
  if ((char *)*plVar17 != (char *)0x0) {
    pcVar19 = (char *)*plVar17;
  }
  lVar22 = lVar8;
  if (plVar20 == (long *)0x0) goto LAB_00a4be44;
  goto LAB_00a4bb84;
LAB_00a4be44:
  uVar26 = 0;
  goto LAB_00a4be08;
code_r0x00a4b420:
  iVar15 = iVar4;
  if ((iVar4 < 0) && (iVar15 = iVar4 + 8, iVar15 < 1)) {
    plVar6 = (long *)(&stack0xffffffffffffff80 + iVar4);
    iVar4 = iVar15;
                    /* try { // try from 00a4b8f4 to 00b4b90b has its CatchHandler @ 00a4bae0 */
  }
  else {
    plVar20 = plVar6 + 1;
    iVar4 = iVar15;
  }
  piVar18 = (int *)*plVar6;
  bVar3 = piVar18 != (int *)0x0;
  if (piVar18 == (int *)0x0) goto LAB_00a4bd6c;
  goto LAB_00a4b2f4;
LAB_00a4bd6c:
  uVar26 = 3;
switchD_00a4b364_caseD_9:
                    /* catch() { ... } // from try @ 00a4bbbc with catch @ 00a4bd78 */
                    /* catch() { ... } // from try @ 00a4bb9c with catch @ 00a4bd7c */
  plVar20 = plVar5;
  do {
    if ((char)plVar20[1] != '\0') {
                    /* catch() { ... } // from try @ 00a4bbd4 with catch @ 00a4bd8c */
      (*(code *)PTR_free_01d1b748)(*plVar20);
      *plVar20 = 0;
      *(undefined1 *)(plVar20 + 1) = 0;
    }
    if ((char)plVar20[4] != '\0') {
      (*(code *)PTR_free_01d1b748)(plVar20[3]);
      plVar20[3] = 0;
      *(undefined1 *)(plVar20 + 4) = 0;
    }
    if ((char)plVar20[7] != '\0') {
      (*(code *)PTR_free_01d1b748)(plVar20[6]);
      plVar20[6] = 0;
      *(undefined1 *)(plVar20 + 7) = 0;
    }
    if ((char)plVar20[0xc] != '\0') {
                    /* try { // try from 00a4bde4 to 00b4be3b has its CatchHandler @ 00a4bde4
                       catch() { ... } // from try @ 00a4bde4 with catch @ 00a4bde4
                       catch() { ... } // from try @ 00a4bf9c with catch @ 00a4bde4 */
      (*(code *)PTR_free_01d1b748)(plVar20[0xb]);
      plVar20[0xb] = 0;
      *(undefined1 *)(plVar20 + 0xc) = 0;
    }
    plVar20 = (long *)plVar20[0xf];
  } while (plVar20 != (long *)0x0);
LAB_00a4be08:
  do {
    plVar20 = (long *)plVar5[0xf];
    (*(code *)PTR_free_01d1b748)(plVar5);
    plVar5 = plVar20;
  } while (plVar20 != (long *)0x0);
                    /* try { // try from 00a4be3c to 00b4be53 has its CatchHandler @ 00a4c01c */
  return uVar26;
}

