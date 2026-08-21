
void jinit_color_deconverter(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  long lVar21;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x38);
  param_1[0x51] = (long)puVar3;
  *puVar3 = FUN_010fcb30;
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  if (uVar1 < 8) {
                    /* catch() { ... } // from try @ 010fc0d8 with catch @ 010fc1e8 */
    if ((1 << (ulong)(uVar1 & 0x1f) & 0xccU) == 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x30U) == 0) {
        if (uVar1 != 1) goto LAB_010fc59c;
        if ((int)param_1[7] != 1) goto LAB_010fc1f8;
      }
      else if ((int)param_1[7] != 4) goto LAB_010fc1f8;
    }
    else if ((int)param_1[7] != 3) goto LAB_010fc1f8;
  }
  else {
LAB_010fc59c:
    if ((int)param_1[7] < 1) {
LAB_010fc1f8:
      puVar7 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010fc24c with catch @ 010fc204
                       catch() { ... } // from try @ 010fc300 with catch @ 010fc204 */
      *(undefined4 *)(puVar7 + 5) = 0xb;
      (*(code *)*puVar7)(param_1);
    }
  }
  if ((*(int *)((long)param_1 + 0x18c) != 0) && ((*(uint *)((long)param_1 + 0x3c) | 4) != 6)) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x1c;
    (*(code *)*puVar7)(param_1);
  }
                    /* try { // try from 010fc244 to 011fc24b has its CatchHandler @ 010fc344 */
                    /* try { // try from 010fc24c to 011fc2e7 has its CatchHandler @ 010fc204 */
  lVar17 = -0xb2f480;
  lVar18 = 0x5b6900;
  pcVar19 = "ayerColor_initWithColorP9lua_State";
  switch((int)param_1[8]) {
  case 1:
    *(undefined4 *)(param_1 + 0x12) = 1;
    switch(*(undefined4 *)((long)param_1 + 0x3c)) {
    case 1:
    case 3:
    case 7:
      puVar3[1] = FUN_010fcb34;
      iVar2 = (int)param_1[7];
      if (1 < iVar2) {
        lVar18 = param_1[0x26];
        uVar12 = (long)iVar2 - 1;
                    /* try { // try from 010fc2e8 to 011fc2f3 has its CatchHandler @ 010fc370 */
        if ((uVar12 < 2) || (uVar13 = uVar12 & 0xfffffffffffffffe, uVar13 == 0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = uVar12 | 1;
                    /* try { // try from 010fc2f4 to 011fc2ff has its CatchHandler @ 010fc358 */
          puVar11 = (undefined4 *)(lVar18 + 0x94);
          uVar15 = uVar13;
          do {
            *puVar11 = 0;
                    /* try { // try from 010fc300 to 011fc38b has its CatchHandler @ 010fc204 */
            puVar11[0x18] = 0;
            uVar15 = uVar15 - 2;
            puVar11 = puVar11 + 0x30;
          } while (uVar15 != 0);
          if (uVar12 == uVar13) break;
        }
                    /* try { // try from 010fc5c4 to 011fc5cb has its CatchHandler @ 010fc950 */
        puVar11 = (undefined4 *)(lVar18 + uVar9 * 0x60 + 0x34);
        do {
          uVar9 = uVar9 + 1;
          *puVar11 = 0;
          puVar11 = puVar11 + 0x18;
        } while ((long)uVar9 < (long)iVar2);
      }
      break;
    case 2:
      if (*(int *)((long)param_1 + 0x18c) == 1) {
        puVar3[1] = FUN_010fcbec;
      }
      else {
                    /* try { // try from 010fc5e8 to 011fc5f7 has its CatchHandler @ 010fc948 */
        if (*(int *)((long)param_1 + 0x18c) == 0) {
          puVar3[1] = FUN_010fcb50;
                    /* try { // try from 010fc5f8 to 011fc603 has its CatchHandler @ 010fc934 */
        }
        else {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x1c;
          (*(code *)*puVar3)(param_1);
        }
      }
      lVar16 = param_1[0x51];
      lVar17 = (**(code **)param_1[1])(param_1,1,0x1800);
      lVar21 = 1;
      lVar20 = 0;
      lVar18 = 0;
      *(long *)(lVar16 + 0x30) = lVar17;
      do {
        plVar5 = (long *)(lVar17 + lVar18);
        plVar5[1] = lVar21 * 0x4c8b;
        *plVar5 = lVar20 * 0x4c8b;
        lVar14 = lVar20 * 0x1d2f;
        lVar16 = lVar21 * 0x1d2f;
        plVar5[0x101] = lVar21 * 0x9646;
        plVar5[0x100] = lVar20 * 0x9646;
        lVar18 = lVar18 + 0x10;
        lVar20 = lVar20 + 2;
        lVar21 = lVar21 + 2;
        plVar5[0x201] = lVar16 + 0x8000;
        plVar5[0x200] = lVar14 + 0x8000;
      } while (lVar18 != 0x800);
      break;
    default:
      goto switchD_010fc364_caseD_4;
    }
    goto LAB_010fc574;
  case 2:
                    /* catch() { ... } // from try @ 010fc244 with catch @ 010fc344 */
    *(undefined4 *)(param_1 + 0x12) = 3;
                    /* catch() { ... } // from try @ 010fc2f4 with catch @ 010fc358 */
    switch(*(undefined4 *)((long)param_1 + 0x3c)) {
    case 1:
      pcVar8 = FUN_010fcca0;
                    /* catch() { ... } // from try @ 010fc2e8 with catch @ 010fc370 */
      goto LAB_010fc620;
    case 2:
      if (*(int *)((long)param_1 + 0x18c) == 1) {
LAB_010fc618:
                    /* try { // try from 010fc618 to 011fc623 has its CatchHandler @ 010fc944 */
        pcVar8 = FUN_010fcfa8;
      }
      else {
        if (*(int *)((long)param_1 + 0x18c) != 0) goto switchD_010fc364_caseD_4;
LAB_010fc60c:
        pcVar8 = FUN_010fce4c;
      }
LAB_010fc620:
      puVar3[1] = pcVar8;
      iVar2 = *(int *)((long)param_1 + 0x6c);
                    /* try { // try from 010fc628 to 011fc64b has its CatchHandler @ 010fc960 */
      goto joined_r0x010fc398;
    case 3:
      puVar3[1] = FUN_010fcd90;
      lVar16 = param_1[0x51];
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar16 + 0x10) = uVar4;
                    /* try { // try from 010fc67c to 011fc683 has its CatchHandler @ 010fc930 */
                    /* try { // try from 010fc684 to 011fc68f has its CatchHandler @ 010fc8e0 */
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar16 + 0x18) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x800);
      *(undefined8 *)(lVar16 + 0x20) = uVar4;
      plVar5 = (long *)(**(code **)param_1[1])(param_1,1,0x800);
      uVar12 = *(ulong *)(lVar16 + 0x10);
      uVar13 = *(ulong *)(lVar16 + 0x18);
      plVar10 = *(long **)(lVar16 + 0x20);
      *(long **)(lVar16 + 0x28) = plVar5;
                    /* try { // try from 010fc6fc to 011fc703 has its CatchHandler @ 010fc8dc */
                    /* try { // try from 010fc704 to 011fc70f has its CatchHandler @ 010fc89c */
      if ((uVar12 < uVar13 + 0x400 && uVar13 < uVar12 + 0x400) ||
         (plVar10 < plVar5 + 0x100 && plVar5 < plVar10 + 0x100)) {
        lVar16 = 0;
        lVar20 = -0xe25100;
        do {
          lVar21 = lVar16 + 1;
          *(int *)(uVar12 + lVar16 * 4) = (int)((ulong)lVar17 >> 0x10);
          *(int *)(uVar13 + lVar16 * 4) = (int)((ulong)lVar20 >> 0x10);
          plVar10[lVar16] = lVar18;
          plVar5[lVar16] = (long)pcVar19;
          pcVar19 = pcVar19 + -0x5819;
          lVar18 = lVar18 + -0xb6d2;
                    /* catch() { ... } // from try @ 010fca1c with catch @ 010fc9d0
                       catch() { ... } // from try @ 010fcb58 with catch @ 010fc9d0 */
          lVar17 = lVar17 + 0x166e9;
          lVar16 = lVar21;
          lVar20 = lVar20 + 0x1c5a2;
        } while (lVar21 != 0x100);
      }
      else {
        lVar16 = -0x7f;
        lVar17 = -0x80;
        lVar18 = 0;
        do {
                    /* try { // try from 010fc760 to 011fc767 has its CatchHandler @ 010fc898 */
                    /* try { // try from 010fc768 to 011fc773 has its CatchHandler @ 010fc894 */
          *(ulong *)(uVar12 + lVar18) =
               CONCAT44((int)((ulong)(lVar16 * 0x166e9 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar17 * 0x166e9 + 0x8000) >> 0x10));
          *(ulong *)(uVar13 + lVar18) =
               CONCAT44((int)((ulong)(lVar16 * 0x1c5a2 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar17 * 0x1c5a2 + 0x8000) >> 0x10));
          plVar10[1] = lVar16 * -0xb6d2;
          *plVar10 = lVar17 * -0xb6d2;
                    /* try { // try from 010fc7a8 to 011fc7af has its CatchHandler @ 010fc890 */
                    /* try { // try from 010fc7b0 to 011fc7bb has its CatchHandler @ 010fc88c */
          lVar18 = lVar18 + 8;
          plVar5[1] = lVar16 * -0x5819 + 0x8000;
          *plVar5 = lVar17 * -0x5819 + 0x8000;
          lVar17 = lVar17 + 2;
          lVar16 = lVar16 + 2;
          plVar5 = plVar5 + 2;
          plVar10 = plVar10 + 2;
        } while (lVar18 != 0x400);
      }
      break;
    default:
      goto switchD_010fc364_caseD_4;
    case 7:
      puVar3[1] = FUN_010fcd90;
      lVar18 = param_1[0x51];
                    /* try { // try from 010fc7e0 to 011fc7e7 has its CatchHandler @ 010fc888 */
                    /* try { // try from 010fc7e8 to 011fc7f3 has its CatchHandler @ 010fc884 */
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar18 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar18 + 0x18) = uVar4;
                    /* try { // try from 010fc81c to 011fc837 has its CatchHandler @ 010fc880 */
      uVar4 = (**(code **)param_1[1])(param_1,1,0x800);
      *(undefined8 *)(lVar18 + 0x20) = uVar4;
                    /* try { // try from 010fc838 to 011fc843 has its CatchHandler @ 010fc87c */
      plVar5 = (long *)(**(code **)param_1[1])(param_1,1,0x800);
                    /* try { // try from 010fc844 to 011fc9cf has its CatchHandler @ 010fc540 */
      uVar12 = *(ulong *)(lVar18 + 0x10);
      uVar13 = *(ulong *)(lVar18 + 0x18);
      plVar10 = *(long **)(lVar18 + 0x20);
      *(long **)(lVar18 + 0x28) = plVar5;
                    /* catch() { ... } // from try @ 010fc838 with catch @ 010fc87c */
                    /* catch() { ... } // from try @ 010fc81c with catch @ 010fc880 */
                    /* catch() { ... } // from try @ 010fc7e8 with catch @ 010fc884 */
                    /* catch() { ... } // from try @ 010fc7e0 with catch @ 010fc888 */
                    /* catch() { ... } // from try @ 010fc7b0 with catch @ 010fc88c */
      if ((uVar12 < uVar13 + 0x400 && uVar13 < uVar12 + 0x400) ||
         (plVar10 < plVar5 + 0x100 && plVar5 < plVar10 + 0x100)) {
        lVar16 = -0x1666980;
        lVar18 = 0x589980;
        lVar17 = 0xb6d180;
                    /* try { // try from 010fca14 to 011fca1b has its CatchHandler @ 010fcba0 */
                    /* try { // try from 010fca1c to 011fcb47 has its CatchHandler @ 010fc9d0 */
        lVar20 = 0;
        lVar21 = -0x1c52200;
        do {
          lVar14 = lVar20 + 1;
          *(int *)(uVar12 + lVar20 * 4) = (int)((ulong)lVar16 >> 0x10);
          *(int *)(uVar13 + lVar20 * 4) = (int)((ulong)lVar21 >> 0x10);
          plVar10[lVar20] = lVar17;
          plVar5[lVar20] = lVar18;
          lVar18 = lVar18 + -0xb033;
          lVar17 = lVar17 + -0x16da3;
          lVar16 = lVar16 + 0x2cdd3;
          lVar20 = lVar14;
          lVar21 = lVar21 + 0x38b44;
        } while (lVar14 != 0x100);
      }
      else {
                    /* catch() { ... } // from try @ 010fc7a8 with catch @ 010fc890 */
                    /* catch() { ... } // from try @ 010fc768 with catch @ 010fc894 */
        lVar16 = -0x7f;
        lVar17 = -0x80;
                    /* catch() { ... } // from try @ 010fc760 with catch @ 010fc898 */
                    /* catch() { ... } // from try @ 010fc704 with catch @ 010fc89c */
        lVar18 = 0;
        do {
                    /* catch() { ... } // from try @ 010fc6fc with catch @ 010fc8dc */
                    /* catch() { ... } // from try @ 010fc684 with catch @ 010fc8e0 */
          *(ulong *)(uVar12 + lVar18) =
               CONCAT44((int)((ulong)(lVar16 * 0x2cdd3 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar17 * 0x2cdd3 + 0x8000) >> 0x10));
          *(ulong *)(uVar13 + lVar18) =
               CONCAT44((int)((ulong)(lVar16 * 0x38b44 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar17 * 0x38b44 + 0x8000) >> 0x10));
          plVar10[1] = lVar16 * -0x16da3;
          *plVar10 = lVar17 * -0x16da3;
                    /* catch() { ... } // from try @ 010fc67c with catch @ 010fc930 */
          lVar18 = lVar18 + 8;
                    /* catch() { ... } // from try @ 010fc5f8 with catch @ 010fc934 */
          plVar5[1] = lVar16 * -0xb033 + 0x8000;
          *plVar5 = lVar17 * -0xb033 + 0x8000;
          lVar17 = lVar17 + 2;
          lVar16 = lVar16 + 2;
          plVar5 = plVar5 + 2;
          plVar10 = plVar10 + 2;
        } while (lVar18 != 0x400);
      }
    }
    goto LAB_010fc574;
  default:
    if ((int)param_1[8] == *(int *)((long)param_1 + 0x3c)) {
      *(int *)(param_1 + 0x12) = (int)param_1[7];
      puVar3[1] = FUN_010fd1e0;
      iVar2 = *(int *)((long)param_1 + 0x6c);
      goto joined_r0x010fc398;
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x12) = 4;
    if (*(int *)((long)param_1 + 0x3c) == 4) {
      pcVar8 = FUN_010fd1e0;
      goto LAB_010fc620;
    }
    if (*(int *)((long)param_1 + 0x3c) == 5) {
      puVar3[1] = FUN_010fd110;
      lVar16 = param_1[0x51];
                    /* try { // try from 010fc3d4 to 011fc3ff has its CatchHandler @ 010fc3d4
                       catch() { ... } // from try @ 010fc3d4 with catch @ 010fc3d4
                       catch() { ... } // from try @ 010fc42c with catch @ 010fc3d4 */
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar16 + 0x10) = uVar4;
      uVar4 = (**(code **)param_1[1])(param_1,1,0x400);
                    /* try { // try from 010fc400 to 011fc403 has its CatchHandler @ 010fc4e8 */
      *(undefined8 *)(lVar16 + 0x18) = uVar4;
                    /* try { // try from 010fc408 to 011fc413 has its CatchHandler @ 010fc4d8 */
      uVar4 = (**(code **)param_1[1])(param_1,1,0x800);
                    /* try { // try from 010fc41c to 011fc42b has its CatchHandler @ 010fc4b8 */
      *(undefined8 *)(lVar16 + 0x20) = uVar4;
                    /* try { // try from 010fc42c to 011fc53f has its CatchHandler @ 010fc3d4 */
      plVar5 = (long *)(**(code **)param_1[1])(param_1,1,0x800);
      uVar12 = *(ulong *)(lVar16 + 0x10);
      uVar13 = *(ulong *)(lVar16 + 0x18);
      plVar10 = *(long **)(lVar16 + 0x20);
      *(long **)(lVar16 + 0x28) = plVar5;
      if ((uVar12 < uVar13 + 0x400 && uVar13 < uVar12 + 0x400) ||
         (plVar10 < plVar5 + 0x100 && plVar5 < plVar10 + 0x100)) {
                    /* catch() { ... } // from try @ 010fc5e8 with catch @ 010fc948 */
                    /* catch() { ... } // from try @ 010fc5c4 with catch @ 010fc950 */
        lVar16 = 0;
        lVar20 = -0xe25100;
        do {
                    /* catch() { ... } // from try @ 010fc628 with catch @ 010fc960 */
          lVar21 = lVar16 + 1;
          *(int *)(uVar12 + lVar16 * 4) = (int)((ulong)lVar17 >> 0x10);
          *(int *)(uVar13 + lVar16 * 4) = (int)((ulong)lVar20 >> 0x10);
          plVar10[lVar16] = lVar18;
          plVar5[lVar16] = (long)pcVar19;
          pcVar19 = pcVar19 + -0x5819;
          lVar18 = lVar18 + -0xb6d2;
          lVar17 = lVar17 + 0x166e9;
          lVar16 = lVar21;
          lVar20 = lVar20 + 0x1c5a2;
        } while (lVar21 != 0x100);
      }
      else {
        lVar16 = -0x7f;
        lVar17 = -0x80;
        lVar18 = 0;
        do {
                    /* catch() { ... } // from try @ 010fc41c with catch @ 010fc4b8 */
                    /* catch() { ... } // from try @ 010fc408 with catch @ 010fc4d8 */
          *(ulong *)(uVar12 + lVar18) =
               CONCAT44((int)((ulong)(lVar16 * 0x166e9 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar17 * 0x166e9 + 0x8000) >> 0x10));
                    /* catch() { ... } // from try @ 010fc400 with catch @ 010fc4e8 */
          *(ulong *)(uVar13 + lVar18) =
               CONCAT44((int)((ulong)(lVar16 * 0x1c5a2 + 0x8000) >> 0x10),
                        (int)((ulong)(lVar17 * 0x1c5a2 + 0x8000) >> 0x10));
          plVar10[1] = lVar16 * -0xb6d2;
          *plVar10 = lVar17 * -0xb6d2;
          lVar18 = lVar18 + 8;
          plVar5[1] = lVar16 * -0x5819 + 0x8000;
          *plVar5 = lVar17 * -0x5819 + 0x8000;
          lVar17 = lVar17 + 2;
          lVar16 = lVar16 + 2;
          plVar5 = plVar5 + 2;
          plVar10 = plVar10 + 2;
        } while (lVar18 != 0x400);
      }
      goto LAB_010fc574;
    }
    break;
  case 6:
                    /* catch() { ... } // from try @ 010fc844 with catch @ 010fc540 */
    *(undefined4 *)(param_1 + 0x12) = 3;
    if (*(int *)((long)param_1 + 0x3c) == 6) {
      if (*(int *)((long)param_1 + 0x18c) == 1) goto LAB_010fc618;
      if (*(int *)((long)param_1 + 0x18c) == 0) goto LAB_010fc60c;
    }
  }
switchD_010fc364_caseD_4:
  puVar3 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar3 + 5) = 0x1c;
  (*(code *)*puVar3)(param_1);
LAB_010fc574:
  iVar2 = *(int *)((long)param_1 + 0x6c);
joined_r0x010fc398:
  if (iVar2 == 0) {
    uVar6 = (undefined4)param_1[0x12];
  }
  else {
    uVar6 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar6;
  return;
}

