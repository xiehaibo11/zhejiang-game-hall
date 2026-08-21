
void spSkeleton_updateCache(long *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  void *pvVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  int iVar25;
  int *piVar26;
  long *plVar27;
  long *plVar28;
  
                    /* try { // try from 00d5f49c to 00e5f4a7 has its CatchHandler @ 00d5f4f0 */
                    /* try { // try from 00d5f4a8 to 00e5f747 has its CatchHandler @ 00d5ecd4 */
  *(int *)((long)param_1 + 0x9c) =
       (int)param_1[7] + (int)param_1[1] + (int)param_1[9] + (int)param_1[0xb];
  _spFree((void *)param_1[0x14]);
                    /* catch() { ... } // from try @ 00d5f49c with catch @ 00d5f4f0 */
                    /* catch() { ... } // from try @ 00d5f488 with catch @ 00d5f4f4 */
                    /* catch() { ... } // from try @ 00d5f478 with catch @ 00d5f4f8 */
  lVar11 = _spMalloc((long)*(int *)((long)param_1 + 0x9c) << 4,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c"
                     ,0x14e);
                    /* catch() { ... } // from try @ 00d5f454 with catch @ 00d5f500 */
                    /* catch() { ... } // from try @ 00d5f440 with catch @ 00d5f504 */
  param_1[0x14] = lVar11;
                    /* catch() { ... } // from try @ 00d5f430 with catch @ 00d5f508 */
  *(undefined4 *)(param_1 + 0x13) = 0;
                    /* catch() { ... } // from try @ 00d5f40c with catch @ 00d5f510 */
  *(int *)((long)param_1 + 0xac) = (int)param_1[1];
                    /* catch() { ... } // from try @ 00d5f3f8 with catch @ 00d5f514 */
  _spFree((void *)param_1[0x16]);
                    /* catch() { ... } // from try @ 00d5f3e8 with catch @ 00d5f518 */
                    /* catch() { ... } // from try @ 00d5f3c4 with catch @ 00d5f520 */
                    /* catch() { ... } // from try @ 00d5f3b0 with catch @ 00d5f524 */
                    /* catch() { ... } // from try @ 00d5f3a0 with catch @ 00d5f528 */
  lVar11 = _spMalloc((long)*(int *)((long)param_1 + 0xac) << 3,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skeleton.c"
                     ,0x153);
  iVar3 = (int)param_1[1];
  uVar14 = (ulong)iVar3;
                    /* catch() { ... } // from try @ 00d5f37c with catch @ 00d5f530 */
  param_1[0x16] = lVar11;
                    /* catch() { ... } // from try @ 00d5f368 with catch @ 00d5f534 */
  *(undefined4 *)(param_1 + 0x15) = 0;
                    /* catch() { ... } // from try @ 00d5f358 with catch @ 00d5f538 */
  if (0 < iVar3) {
                    /* catch() { ... } // from try @ 00d5f334 with catch @ 00d5f540 */
    lVar11 = param_1[2];
                    /* catch() { ... } // from try @ 00d5f320 with catch @ 00d5f544 */
                    /* catch() { ... } // from try @ 00d5f310 with catch @ 00d5f548 */
    if (iVar3 == 1) {
      uVar21 = 0;
                    /* catch() { ... } // from try @ 00d5f2ec with catch @ 00d5f550 */
    }
    else {
                    /* catch() { ... } // from try @ 00d5f2d8 with catch @ 00d5f554 */
      uVar21 = uVar14 & 0xfffffffffffffffe;
                    /* catch() { ... } // from try @ 00d5f2c8 with catch @ 00d5f558 */
      plVar27 = (long *)(lVar11 + 8);
      uVar19 = uVar21;
      do {
        plVar28 = plVar27 + -1;
                    /* catch() { ... } // from try @ 00d5f2a4 with catch @ 00d5f560 */
        lVar20 = *plVar27;
                    /* catch() { ... } // from try @ 00d5f290 with catch @ 00d5f564 */
        uVar19 = uVar19 - 2;
                    /* catch() { ... } // from try @ 00d5f280 with catch @ 00d5f568 */
        plVar27 = plVar27 + 2;
        *(undefined4 *)(*plVar28 + 0x7c) = 0;
                    /* catch() { ... } // from try @ 00d5f25c with catch @ 00d5f570 */
        *(undefined4 *)(lVar20 + 0x7c) = 0;
                    /* catch() { ... } // from try @ 00d5f248 with catch @ 00d5f574 */
      } while (uVar19 != 0);
                    /* catch() { ... } // from try @ 00d5f238 with catch @ 00d5f578 */
      if (uVar21 == uVar14) goto LAB_00d5f594;
    }
    do {
                    /* catch() { ... } // from try @ 00d5f214 with catch @ 00d5f580 */
      lVar20 = uVar21 * 8;
                    /* catch() { ... } // from try @ 00d5f200 with catch @ 00d5f584 */
      uVar21 = uVar21 + 1;
                    /* catch() { ... } // from try @ 00d5f1f0 with catch @ 00d5f588 */
      *(undefined4 *)(*(long *)(lVar11 + lVar20) + 0x7c) = 0;
                    /* catch() { ... } // from try @ 00d5f1cc with catch @ 00d5f590 */
    } while ((long)uVar21 < (long)uVar14);
  }
LAB_00d5f594:
                    /* catch() { ... } // from try @ 00d5f1b8 with catch @ 00d5f594 */
  uVar5 = *(uint *)(param_1 + 7);
                    /* catch() { ... } // from try @ 00d5f1a8 with catch @ 00d5f598 */
  uVar6 = *(uint *)(param_1 + 9);
  uVar7 = *(uint *)(param_1 + 0xb);
                    /* catch() { ... } // from try @ 00d5f184 with catch @ 00d5f5a0 */
                    /* catch() { ... } // from try @ 00d5f170 with catch @ 00d5f5a4 */
                    /* catch() { ... } // from try @ 00d5f160 with catch @ 00d5f5a8 */
  iVar3 = uVar6 + uVar5 + uVar7;
                    /* catch() { ... } // from try @ 00d5f13c with catch @ 00d5f5b0 */
                    /* catch() { ... } // from try @ 00d5f128 with catch @ 00d5f5b4 */
                    /* catch() { ... } // from try @ 00d5f118 with catch @ 00d5f5b8 */
  if (iVar3 < 1) {
LAB_00d5fd58:
                    /* try { // try from 00d5fd58 to 00e5fe2f has its CatchHandler @ 00d5f8b0 */
    if (0 < (int)param_1[1]) {
      lVar11 = 0;
      do {
        FUN_00d5fee4(param_1,*(undefined8 *)(param_1[2] + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)param_1[1]);
    }
    return;
  }
  puVar15 = (undefined8 *)param_1[8];
                    /* catch() { ... } // from try @ 00d5f0f4 with catch @ 00d5f5c0 */
  iVar25 = 0;
                    /* catch() { ... } // from try @ 00d5f0e0 with catch @ 00d5f5c4 */
                    /* catch() { ... } // from try @ 00d5f0d0 with catch @ 00d5f5c8 */
  puVar16 = (undefined8 *)param_1[10];
                    /* catch() { ... } // from try @ 00d5f0ac with catch @ 00d5f5d0 */
                    /* catch() { ... } // from try @ 00d5f098 with catch @ 00d5f5d4 */
  puVar17 = (undefined8 *)param_1[0xc];
                    /* catch() { ... } // from try @ 00d5f088 with catch @ 00d5f5d8 */
LAB_00d5f640:
  do {
                    /* catch() { ... } // from try @ 00d5eeb4 with catch @ 00d5f640 */
                    /* catch() { ... } // from try @ 00d5eea0 with catch @ 00d5f644 */
                    /* catch() { ... } // from try @ 00d5ee90 with catch @ 00d5f648 */
    uVar14 = (ulong)uVar5;
    puVar18 = puVar15;
    if (0 < (int)uVar5) {
      do {
                    /* catch() { ... } // from try @ 00d5ee6c with catch @ 00d5f650 */
        plVar27 = (long *)*puVar18;
                    /* catch() { ... } // from try @ 00d5ee58 with catch @ 00d5f654 */
                    /* catch() { ... } // from try @ 00d5ee48 with catch @ 00d5f658 */
                    /* catch() { ... } // from try @ 00d5ee24 with catch @ 00d5f660 */
        if (*(int *)(*plVar27 + 8) == iVar25) {
          FUN_00d5fee4(param_1,plVar27[3]);
          plVar28 = (long *)plVar27[2];
          lVar11 = *plVar28;
          FUN_00d5fee4(param_1,lVar11);
          if ((int)plVar27[1] < 2) goto LAB_00d5facc;
          lVar20 = plVar28[(int)plVar27[1] + -1];
          if ((int)param_1[0x13] < 1) goto LAB_00d5f74c;
          lVar22 = 1;
          plVar24 = (long *)(param_1[0x14] + 8);
          goto LAB_00d5f72c;
        }
                    /* catch() { ... } // from try @ 00d5ee10 with catch @ 00d5f664 */
        uVar14 = uVar14 - 1;
                    /* catch() { ... } // from try @ 00d5ee00 with catch @ 00d5f668 */
        puVar18 = puVar18 + 1;
      } while (uVar14 != 0);
    }
                    /* catch() { ... } // from try @ 00d5eddc with catch @ 00d5f670 */
                    /* catch() { ... } // from try @ 00d5edc8 with catch @ 00d5f674 */
                    /* catch() { ... } // from try @ 00d5edb8 with catch @ 00d5f678 */
    uVar14 = (ulong)uVar6;
    puVar18 = puVar16;
    if (0 < (int)uVar6) {
LAB_00d5f67c:
      plVar27 = (long *)*puVar18;
                    /* catch() { ... } // from try @ 00d5ed94 with catch @ 00d5f680 */
      if (*(int *)(*plVar27 + 8) != iVar25) goto code_r0x00d5f690;
      FUN_00d5fee4(param_1,plVar27[3]);
      uVar8 = *(uint *)(plVar27 + 1);
      uVar14 = (ulong)uVar8;
      plVar28 = (long *)plVar27[2];
      if (*(int *)(*plVar27 + 0x4c) == 0) {
                    /* try { // try from 00d5f9c4 to 00e5fa57 has its CatchHandler @ 00d5f8b0 */
        plVar24 = plVar28;
        uVar21 = uVar14;
        if (0 < (int)uVar8) {
          do {
            FUN_00d5fee4(param_1,*plVar24);
            uVar21 = uVar21 - 1;
            plVar24 = plVar24 + 1;
          } while (uVar21 != 0);
        }
      }
      else if (0 < (int)uVar8) {
        iVar13 = 0;
        do {
          lVar11 = plVar28[iVar13];
          FUN_00d5fee4(param_1,lVar11);
          if ((int)param_1[0x13] < 1) {
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            plVar24 = (long *)(param_1[0x14] + 8);
            do {
                    /* catch() { ... } // from try @ 00d5f84c with catch @ 00d5f814 */
              if (*plVar24 == lVar11) goto LAB_00d5f7dc;
              lVar20 = lVar20 + 1;
              plVar24 = plVar24 + 2;
            } while ((int)param_1[0x13] != lVar20);
          }
          iVar13 = (int)param_1[0x15];
          if (iVar13 == *(int *)((long)param_1 + 0xac)) {
            *(int *)((long)param_1 + 0xac) = iVar13 << 1;
            pvVar12 = realloc((void *)param_1[0x16],(long)iVar13 << 4);
            iVar13 = (int)param_1[0x15];
            param_1[0x16] = (long)pvVar12;
          }
          else {
            pvVar12 = (void *)param_1[0x16];
                    /* try { // try from 00d5f844 to 00e5f84b has its CatchHandler @ 00d5f860 */
          }
          *(long *)((long)pvVar12 + (long)iVar13 * 8) = lVar11;
          *(int *)(param_1 + 0x15) = iVar13 + 1;
LAB_00d5f7dc:
          iVar13 = (int)lVar20 + 1;
        } while (iVar13 < (int)uVar8);
      }
      iVar13 = (int)param_1[0x13];
      if (iVar13 == *(int *)((long)param_1 + 0x9c)) {
        *(int *)((long)param_1 + 0x9c) = iVar13 << 1;
        pvVar12 = realloc((void *)param_1[0x14],(long)iVar13 << 5);
        iVar13 = (int)param_1[0x13];
        param_1[0x14] = (long)pvVar12;
      }
      else {
        pvVar12 = (void *)param_1[0x14];
      }
      puVar1 = (undefined4 *)((long)pvVar12 + (long)iVar13 * 0x10);
      *(long **)(puVar1 + 2) = plVar27;
      *puVar1 = 3;
      *(int *)(param_1 + 0x13) = iVar13 + 1;
      plVar27 = plVar28;
      uVar21 = uVar14;
      if (0 < (int)uVar8) {
        do {
          FUN_00d60808(*(undefined8 *)(*plVar27 + 0x20),*(undefined4 *)(*plVar27 + 0x18));
          uVar21 = uVar21 - 1;
          plVar27 = plVar27 + 1;
                    /* try { // try from 00d5fa58 to 00e5fa5f has its CatchHandler @ 00d60030 */
        } while (uVar21 != 0);
                    /* try { // try from 00d5fa60 to 00e5fb37 has its CatchHandler @ 00d5f8b0 */
        if (uVar8 < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar14 & 0xfffffffe;
          plVar27 = plVar28 + 1;
          uVar21 = uVar19;
          do {
            plVar24 = plVar27 + -1;
            lVar11 = *plVar27;
            uVar21 = uVar21 - 2;
            plVar27 = plVar27 + 2;
            *(undefined4 *)(*plVar24 + 0x7c) = 1;
            *(undefined4 *)(lVar11 + 0x7c) = 1;
          } while (uVar21 != 0);
          if (uVar19 == uVar14) goto LAB_00d5f630;
        }
        lVar11 = uVar14 - uVar19;
        plVar27 = plVar28 + uVar19;
        do {
          lVar11 = lVar11 + -1;
          *(undefined4 *)(*plVar27 + 0x7c) = 1;
          plVar27 = plVar27 + 1;
        } while (lVar11 != 0);
      }
      goto LAB_00d5f630;
    }
LAB_00d5f69c:
    uVar14 = (ulong)uVar7;
    puVar18 = puVar17;
    if (0 < (int)uVar7) {
LAB_00d5f6a8:
      plVar27 = (long *)*puVar18;
      if (*(int *)(*plVar27 + 8) != iVar25) goto code_r0x00d5f6bc;
      puVar18 = (undefined8 *)plVar27[3];
                    /* try { // try from 00d5f84c to 00e5f87b has its CatchHandler @ 00d5f814 */
      uVar4 = puVar18[1];
                    /* catch() { ... } // from try @ 00d5f844 with catch @ 00d5f860 */
      iVar13 = *(int *)*puVar18;
      if (param_1[0xd] != 0) {
        for (piVar26 = *(int **)(param_1[0xd] + 8); piVar26 != (int *)0x0;
            piVar26 = *(int **)(piVar26 + 6)) {
          if ((*piVar26 == iVar13) && (lVar11 = *(long *)(piVar26 + 4), *(int *)(lVar11 + 8) == 4))
          {
            lVar20 = *(long *)(lVar11 + 0x28);
            if (lVar20 == 0) {
              FUN_00d5fee4(param_1,uVar4);
            }
            else {
              iVar10 = *(int *)(lVar11 + 0x20);
                    /* try { // try from 00d5f8b0 to 00e5f9bb has its CatchHandler @ 00d5f8b0
                       catch() { ... } // from try @ 00d5f8b0 with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5f9c4 with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5fa60 with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5fb40 with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5fbdc with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5fcbc with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5fd58 with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5fe38 with catch @ 00d5f8b0
                       catch() { ... } // from try @ 00d5ffa8 with catch @ 00d5f8b0 */
              if (0 < iVar10) {
                lVar11 = param_1[2];
                uVar14 = 0;
                do {
                  iVar9 = *(int *)(lVar20 + (long)(int)uVar14 * 4);
                  uVar8 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar8;
                  if (0 < iVar9) {
                    uVar14 = (ulong)(int)uVar8;
                    do {
                      FUN_00d5fee4(param_1,*(undefined8 *)
                                            (lVar11 + (long)*(int *)(lVar20 + uVar14 * 4) * 8));
                      uVar14 = uVar14 + 1;
                    } while ((long)uVar14 < (long)(int)(iVar9 + uVar8));
                  }
                } while ((int)uVar14 < iVar10);
              }
            }
          }
        }
      }
      lVar11 = *param_1;
      lVar20 = *(long *)(lVar11 + 0x48);
      if (((lVar20 != 0) && (lVar20 != param_1[0xd])) &&
         (piVar26 = *(int **)(lVar20 + 8), piVar26 != (int *)0x0)) {
        do {
          if ((*piVar26 == iVar13) && (lVar11 = *(long *)(piVar26 + 4), *(int *)(lVar11 + 8) == 4))
          {
            lVar20 = *(long *)(lVar11 + 0x28);
            if (lVar20 == 0) {
              FUN_00d5fee4(param_1,uVar4);
            }
            else {
              iVar10 = *(int *)(lVar11 + 0x20);
              if (0 < iVar10) {
                lVar11 = param_1[2];
                uVar14 = 0;
                do {
                  iVar9 = *(int *)(lVar20 + (long)(int)uVar14 * 4);
                  uVar8 = (int)uVar14 + 1;
                  uVar14 = (ulong)uVar8;
                  if (0 < iVar9) {
                    uVar14 = (ulong)(int)uVar8;
                    do {
                      FUN_00d5fee4(param_1,*(undefined8 *)
                                            (lVar11 + (long)*(int *)(lVar20 + uVar14 * 4) * 8));
                      uVar14 = uVar14 + 1;
                    } while ((long)uVar14 < (long)(int)(iVar9 + uVar8));
                  }
                } while ((int)uVar14 < iVar10);
              }
            }
          }
          piVar26 = *(int **)(piVar26 + 6);
        } while (piVar26 != (int *)0x0);
        lVar11 = *param_1;
      }
      uVar8 = *(uint *)(lVar11 + 0x38);
      if (0 < (int)uVar8) {
        uVar14 = 0;
        while( true ) {
          for (piVar26 = *(int **)(*(long *)(*(long *)(lVar11 + 0x40) + uVar14 * 8) + 8);
              piVar26 != (int *)0x0; piVar26 = *(int **)(piVar26 + 6)) {
                    /* try { // try from 00d5fb38 to 00e5fb3f has its CatchHandler @ 00d6002c */
            if ((*piVar26 == iVar13) && (lVar11 = *(long *)(piVar26 + 4), *(int *)(lVar11 + 8) == 4)
               ) {
              lVar20 = *(long *)(lVar11 + 0x28);
                    /* try { // try from 00d5fb40 to 00e5fbd3 has its CatchHandler @ 00d5f8b0 */
              if (lVar20 == 0) {
                FUN_00d5fee4(param_1,uVar4);
              }
              else {
                iVar10 = *(int *)(lVar11 + 0x20);
                if (0 < iVar10) {
                  lVar11 = param_1[2];
                  uVar21 = 0;
                  do {
                    iVar9 = *(int *)(lVar20 + (long)(int)uVar21 * 4);
                    uVar2 = (int)uVar21 + 1;
                    uVar21 = (ulong)uVar2;
                    if (0 < iVar9) {
                      uVar21 = (ulong)(int)uVar2;
                      do {
                        FUN_00d5fee4(param_1,*(undefined8 *)
                                              (lVar11 + (long)*(int *)(lVar20 + uVar21 * 4) * 8));
                        uVar21 = uVar21 + 1;
                      } while ((long)uVar21 < (long)(int)(iVar9 + uVar2));
                    }
                  } while ((int)uVar21 < iVar10);
                }
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (uVar14 == uVar8) break;
          lVar11 = *param_1;
        }
      }
      lVar11 = puVar18[5];
      if ((lVar11 != 0) && (*(int *)(lVar11 + 8) == 4)) {
                    /* try { // try from 00d5fbd4 to 00e5fbdb has its CatchHandler @ 00d5fff0 */
        lVar20 = *(long *)(lVar11 + 0x28);
        if (lVar20 == 0) {
          FUN_00d5fee4(param_1,uVar4);
        }
        else {
                    /* try { // try from 00d5fbdc to 00e5fcb3 has its CatchHandler @ 00d5f8b0 */
          iVar13 = *(int *)(lVar11 + 0x20);
          if (0 < iVar13) {
            lVar11 = param_1[2];
            uVar14 = 0;
            do {
              while( true ) {
                iVar10 = *(int *)(lVar20 + (long)(int)uVar14 * 4);
                uVar8 = (int)uVar14 + 1;
                uVar14 = (ulong)uVar8;
                if (iVar10 < 1) break;
                uVar14 = (ulong)(int)uVar8;
                do {
                  FUN_00d5fee4(param_1,*(undefined8 *)
                                        (lVar11 + (long)*(int *)(lVar20 + uVar14 * 4) * 8));
                  uVar14 = uVar14 + 1;
                } while ((long)uVar14 < (long)(int)(iVar10 + uVar8));
                if (iVar13 <= (int)uVar14) goto LAB_00d5fc50;
              }
            } while ((int)uVar8 < iVar13);
          }
        }
      }
LAB_00d5fc50:
      uVar8 = *(uint *)(plVar27 + 1);
      uVar21 = (ulong)uVar8;
      plVar24 = (long *)plVar27[2];
      plVar28 = plVar24;
      uVar14 = uVar21;
      if (0 < (int)uVar8) {
        do {
          FUN_00d5fee4(param_1,*plVar28);
          uVar14 = uVar14 - 1;
          plVar28 = plVar28 + 1;
        } while (uVar14 != 0);
      }
      iVar13 = (int)param_1[0x13];
      if (iVar13 == *(int *)((long)param_1 + 0x9c)) {
        *(int *)((long)param_1 + 0x9c) = iVar13 << 1;
        pvVar12 = realloc((void *)param_1[0x14],(long)iVar13 << 5);
        iVar13 = (int)param_1[0x13];
        param_1[0x14] = (long)pvVar12;
      }
      else {
        pvVar12 = (void *)param_1[0x14];
      }
                    /* try { // try from 00d5fcb4 to 00e5fcbb has its CatchHandler @ 00d5ffec */
      puVar1 = (undefined4 *)((long)pvVar12 + (long)iVar13 * 0x10);
                    /* try { // try from 00d5fcbc to 00e5fd4f has its CatchHandler @ 00d5f8b0 */
      *(long **)(puVar1 + 2) = plVar27;
      *puVar1 = 2;
      *(int *)(param_1 + 0x13) = iVar13 + 1;
      plVar27 = plVar24;
      uVar14 = uVar21;
      if (0 < (int)uVar8) {
        do {
          FUN_00d60808(*(undefined8 *)(*plVar27 + 0x20),*(undefined4 *)(*plVar27 + 0x18));
          uVar14 = uVar14 - 1;
          plVar27 = plVar27 + 1;
        } while (uVar14 != 0);
        if (uVar8 < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar21 & 0xfffffffe;
          plVar27 = plVar24 + 1;
          uVar14 = uVar19;
          do {
            plVar28 = plVar27 + -1;
            lVar11 = *plVar27;
            uVar14 = uVar14 - 2;
            plVar27 = plVar27 + 2;
            *(undefined4 *)(*plVar28 + 0x7c) = 1;
            *(undefined4 *)(lVar11 + 0x7c) = 1;
          } while (uVar14 != 0);
          if (uVar19 == uVar21) goto LAB_00d5f630;
        }
        lVar11 = uVar21 - uVar19;
        plVar27 = plVar24 + uVar19;
        do {
          lVar11 = lVar11 + -1;
          *(undefined4 *)(*plVar27 + 0x7c) = 1;
          plVar27 = plVar27 + 1;
                    /* try { // try from 00d5fd50 to 00e5fd57 has its CatchHandler @ 00d5ffac */
        } while (lVar11 != 0);
      }
      goto LAB_00d5f630;
    }
LAB_00d5f6c8:
    iVar25 = iVar25 + 1;
  } while (iVar25 < iVar3);
  goto LAB_00d5fd58;
                    /* catch() { ... } // from try @ 00d5ed68 with catch @ 00d5f738 */
                    /* catch() { ... } // from try @ 00d5ed18 with catch @ 00d5f740 */
  while (lVar22 = lVar22 + 1, plVar24 = plVar24 + 2, lVar23 != lVar20) {
LAB_00d5f72c:
    lVar23 = *plVar24;
                    /* catch() { ... } // from try @ 00d5ed70 with catch @ 00d5f730 */
    if ((int)param_1[0x13] <= lVar22) break;
  }
  if (lVar23 != lVar20) {
LAB_00d5f74c:
    iVar13 = (int)param_1[0x15];
    if (iVar13 == *(int *)((long)param_1 + 0xac)) {
      *(int *)((long)param_1 + 0xac) = iVar13 << 1;
      pvVar12 = realloc((void *)param_1[0x16],(long)iVar13 << 4);
      iVar13 = (int)param_1[0x15];
      param_1[0x16] = (long)pvVar12;
    }
    else {
      pvVar12 = (void *)param_1[0x16];
    }
    *(long *)((long)pvVar12 + (long)iVar13 * 8) = lVar20;
    *(int *)(param_1 + 0x15) = iVar13 + 1;
  }
LAB_00d5facc:
  iVar13 = (int)param_1[0x13];
  if (iVar13 == *(int *)((long)param_1 + 0x9c)) {
                    /* catch() { ... } // from try @ 00d5f064 with catch @ 00d5f5e0 */
                    /* catch() { ... } // from try @ 00d5f050 with catch @ 00d5f5e4 */
                    /* catch() { ... } // from try @ 00d5f040 with catch @ 00d5f5e8 */
                    /* catch() { ... } // from try @ 00d5f01c with catch @ 00d5f5f0 */
    *(int *)((long)param_1 + 0x9c) = iVar13 << 1;
                    /* catch() { ... } // from try @ 00d5f008 with catch @ 00d5f5f4 */
    pvVar12 = realloc((void *)param_1[0x14],(long)iVar13 << 5);
                    /* catch() { ... } // from try @ 00d5eff8 with catch @ 00d5f5f8 */
    iVar13 = (int)param_1[0x13];
    param_1[0x14] = (long)pvVar12;
  }
  else {
    pvVar12 = (void *)param_1[0x14];
  }
                    /* catch() { ... } // from try @ 00d5efd4 with catch @ 00d5f600 */
  puVar1 = (undefined4 *)((long)pvVar12 + (long)iVar13 * 0x10);
                    /* catch() { ... } // from try @ 00d5efc0 with catch @ 00d5f604 */
                    /* catch() { ... } // from try @ 00d5efb0 with catch @ 00d5f608 */
  *puVar1 = 1;
  *(long **)(puVar1 + 2) = plVar27;
                    /* catch() { ... } // from try @ 00d5ef8c with catch @ 00d5f610 */
  *(int *)(param_1 + 0x13) = iVar13 + 1;
                    /* catch() { ... } // from try @ 00d5ef78 with catch @ 00d5f614 */
                    /* catch() { ... } // from try @ 00d5ef68 with catch @ 00d5f618 */
  FUN_00d60808(*(undefined8 *)(lVar11 + 0x20),*(undefined4 *)(lVar11 + 0x18));
                    /* catch() { ... } // from try @ 00d5ef44 with catch @ 00d5f620 */
                    /* catch() { ... } // from try @ 00d5ef30 with catch @ 00d5f624 */
                    /* catch() { ... } // from try @ 00d5ef20 with catch @ 00d5f628 */
  *(undefined4 *)(plVar28[(long)(int)plVar27[1] + -1] + 0x7c) = 1;
LAB_00d5f630:
                    /* catch() { ... } // from try @ 00d5eefc with catch @ 00d5f630 */
                    /* catch() { ... } // from try @ 00d5eee8 with catch @ 00d5f634 */
  iVar25 = iVar25 + 1;
                    /* catch() { ... } // from try @ 00d5eed8 with catch @ 00d5f638 */
  if (iVar3 <= iVar25) goto LAB_00d5fd58;
  goto LAB_00d5f640;
code_r0x00d5f690:
  uVar14 = uVar14 - 1;
  puVar18 = puVar18 + 1;
                    /* catch() { ... } // from try @ 00d5ed80 with catch @ 00d5f698 */
  if (uVar14 == 0) goto LAB_00d5f69c;
  goto LAB_00d5f67c;
code_r0x00d5f6bc:
  uVar14 = uVar14 - 1;
  puVar18 = puVar18 + 1;
  if (uVar14 == 0) goto LAB_00d5f6c8;
  goto LAB_00d5f6a8;
}

