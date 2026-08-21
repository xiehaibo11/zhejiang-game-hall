
undefined8 FUN_010b07c8(long *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  
                    /* try { // try from 010b07cc to 011b083f has its CatchHandler @ 010b0588 */
  lVar1 = param_3[1];
  lVar6 = lVar1 * 4;
  *(long *)(param_4 + 0x198) = *param_3 << 2;
  *(long *)(param_4 + 0x1a0) = lVar6;
  *(long *)(param_4 + 0x1a8) = *param_2 << 2;
  lVar12 = param_2[1] * 4;
  *(long *)(param_4 + 0x1b0) = lVar12;
  *(long *)(param_4 + 0x1b8) = *param_1 << 2;
  lVar2 = *(long *)(param_4 + 0x188);
  lVar13 = param_1[1] * 4;
  *(long *)(param_4 + 0x1c0) = lVar13;
  *(undefined8 *)(param_4 + 0x1c8) = *(undefined8 *)(param_4 + 0x180);
  lVar19 = lVar12;
  if (lVar6 <= lVar12) {
    lVar19 = lVar6;
  }
  if (lVar12 + lVar1 * -4 == 0 || lVar12 < lVar6) {
    lVar12 = lVar6;
  }
  lVar1 = lVar13;
  if (lVar19 <= lVar13) {
    lVar1 = lVar19;
  }
  if (lVar13 - lVar12 == 0 || lVar13 < lVar12) {
    lVar13 = lVar12;
  }
                    /* try { // try from 010b0840 to 011b084b has its CatchHandler @ 010b08ec */
  lVar19 = lVar2;
  if (lVar1 <= lVar2) {
    lVar19 = lVar1;
  }
                    /* try { // try from 010b084c to 011b08af has its CatchHandler @ 010b0588 */
  *(long *)(param_4 + 0x1d0) = lVar2;
  if (*(long *)(param_4 + 0x128) <= lVar19 >> 8) {
    lVar19 = 0;
    goto LAB_010b0880;
  }
  if (lVar2 <= lVar13) {
    lVar2 = lVar13;
  }
  lVar12 = 0;
  lVar19 = 0;
  if (lVar2 >> 8 < *(long *)(param_4 + 0x120)) goto LAB_010b0880;
LAB_010b0890:
  plVar11 = (long *)(param_4 + lVar12 * 0x10 + 0x198);
  do {
    lVar13 = *plVar11;
    lVar1 = plVar11[1];
    lVar2 = plVar11[6];
    lVar6 = plVar11[7];
    lVar19 = param_4 + lVar12 * 0x10;
    lVar3 = lVar2 - lVar13;
    lVar16 = -lVar3;
    if (-1 < lVar3) {
      lVar16 = lVar3;
    }
    lVar4 = lVar6 - lVar1;
    lVar15 = -lVar4;
    if (-1 < lVar4) {
      lVar15 = lVar4;
    }
    lVar7 = lVar16;
    if (lVar16 <= lVar15) {
      lVar7 = lVar15;
      lVar15 = lVar16;
    }
    lVar7 = lVar7 + (lVar15 * 3 >> 3);
    if (lVar7 < 0x8000) {
      lVar16 = plVar11[2];
      lVar15 = plVar11[3];
      lVar7 = lVar7 * 0x2a;
      plVar17 = (long *)(lVar19 + 0x1a8);
      plVar14 = (long *)(lVar19 + 0x1b0);
      lVar18 = lVar15 - lVar1;
      lVar5 = lVar16 - lVar13;
      lVar8 = lVar5 * lVar4 - lVar18 * lVar3;
      lVar19 = -lVar8;
      if (-1 < lVar8) {
        lVar19 = lVar8;
      }
      if (lVar19 <= lVar7) {
        lVar9 = plVar11[4] - lVar13;
        lVar8 = plVar11[5] - lVar1;
        lVar10 = lVar9 * lVar4 - lVar8 * lVar3;
        lVar19 = -lVar10;
        if (-1 < lVar10) {
          lVar19 = lVar10;
        }
        if (((lVar19 <= lVar7) && ((lVar5 - lVar3) * lVar5 + (lVar18 - lVar4) * lVar18 < 1)) &&
           (lVar19 = lVar12, (lVar9 - lVar3) * lVar9 + (lVar8 - lVar4) * lVar8 < 1)) break;
      }
    }
    else {
      plVar17 = plVar11 + 2;
      lVar16 = *plVar17;
      plVar14 = plVar11 + 3;
      lVar15 = *plVar14;
    }
    lVar13 = lVar16 + lVar13;
    plVar11[0xc] = lVar2;
                    /* try { // try from 010b08b0 to 011b08b7 has its CatchHandler @ 010b08c8 */
    lVar2 = plVar11[4] + lVar2;
                    /* try { // try from 010b08b8 to 011b08bf has its CatchHandler @ 010b08dc */
    if (lVar13 < 0) {
      lVar13 = lVar13 + 1;
    }
    lVar16 = plVar11[4] + lVar16;
                    /* try { // try from 010b08c0 to 011b08c7 has its CatchHandler @ 010b08cc */
    if (lVar2 < 0) {
      lVar2 = lVar2 + 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b08b0 with catch @ 010b08c8
                       try { // try from 010b08c8 to 011b0957 has its CatchHandler @ 010b0588 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b07c4 with catch @ 010b08cc
                       catch(type#1 @ 00000000) { ... } // from try @ 010b08c0 with catch @ 010b08cc
                        */
    if (lVar16 < 0) {
      lVar16 = lVar16 + 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b0738 with catch @ 010b08dc
                       catch(type#1 @ 00000000) { ... } // from try @ 010b08b8 with catch @ 010b08dc
                        */
    lVar19 = (lVar16 >> 1) + (lVar13 >> 1);
    *plVar17 = lVar13 >> 1;
    plVar11[10] = lVar2 >> 1;
    lVar13 = (lVar2 >> 1) + (lVar16 >> 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b0840 with catch @ 010b08ec
                        */
    if (lVar19 < 0) {
      lVar19 = lVar19 + 1;
    }
    if (lVar13 < 0) {
      lVar13 = lVar13 + 1;
    }
    plVar11[8] = lVar13 >> 1;
    lVar13 = (lVar19 >> 1) + (lVar13 >> 1);
    lVar1 = lVar15 + lVar1;
    plVar11[0xd] = lVar6;
    lVar6 = plVar11[5] + lVar6;
    if (lVar13 < 0) {
      lVar13 = lVar13 + 1;
    }
    lVar15 = plVar11[5] + lVar15;
    plVar11[4] = lVar19 >> 1;
    if (lVar1 < 0) {
      lVar1 = lVar1 + 1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b06cc with catch @ 010b093c
                        */
    plVar11[6] = lVar13 >> 1;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    *plVar14 = lVar1 >> 1;
    if (lVar15 < 0) {
      lVar15 = lVar15 + 1;
    }
                    /* try { // try from 010b0958 to 011b0aa7 has its CatchHandler @ 010b0958
                       catch(type#1 @ 00000000) { ... } // from try @ 010b0958 with catch @ 010b0958
                        */
    lVar19 = (lVar15 >> 1) + (lVar1 >> 1);
    plVar11[0xb] = lVar6 >> 1;
    lVar13 = (lVar6 >> 1) + (lVar15 >> 1);
    if (lVar19 < 0) {
      lVar19 = lVar19 + 1;
    }
    if (lVar13 < 0) {
      lVar13 = lVar13 + 1;
    }
    plVar11[9] = lVar13 >> 1;
    lVar13 = (lVar19 >> 1) + (lVar13 >> 1);
    if (lVar13 < 0) {
      lVar13 = lVar13 + 1;
    }
    plVar11[5] = lVar19 >> 1;
    plVar11[7] = lVar13 >> 1;
    plVar11 = plVar11 + 6;
    lVar12 = lVar12 + 3;
  } while( true );
LAB_010b0880:
  FUN_010b0a94(param_4);
  if (lVar19 == 0) {
    return 0;
  }
  lVar12 = lVar19 + -3;
  goto LAB_010b0890;
}

