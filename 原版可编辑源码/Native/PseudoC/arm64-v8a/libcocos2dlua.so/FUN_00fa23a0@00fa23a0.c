
/* WARNING: Type propagation algorithm not settling */

void FUN_00fa23a0(float *param_1,float *param_2,float *param_3,undefined8 param_4,long param_5,
                 long param_6,float *param_7,long param_8)

{
  bool bVar1;
  float *pfVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_6 == 0) {
    return;
  }
  while ((param_8 < param_6 && (param_8 < param_5))) {
    if (param_5 == 0) {
      return;
    }
    lVar10 = -param_5;
    while (*param_1 <= *param_2) {
      bVar1 = lVar10 == -1;
      lVar10 = lVar10 + 1;
      param_1 = param_1 + 1;
      if (bVar1) {
        return;
      }
    }
    param_5 = -lVar10;
    if (param_5 < param_6) {
      lVar9 = param_6;
      if (param_6 < 0) {
        lVar9 = param_6 + 1;
      }
      lVar9 = lVar9 >> 1;
      pfVar4 = param_2 + lVar9;
      pfVar8 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar3 = (long)param_2 - (long)param_1 >> 2;
        do {
          uVar5 = uVar3 >> 1;
          uVar6 = uVar3 + ~uVar5;
          uVar3 = uVar5;
          if (pfVar8[uVar5] <= *pfVar4) {
            pfVar8 = pfVar8 + uVar5 + 1;
            uVar3 = uVar6;
          }
        } while (uVar3 != 0);
      }
      param_5 = (long)pfVar8 - (long)param_1 >> 2;
    }
    else {
      if (lVar10 == -1) {
        fVar11 = *param_1;
        *param_1 = *param_2;
        *param_2 = fVar11;
        return;
                    /* try { // try from 00fa27b0 to 010a27bb has its CatchHandler @ 00fa2880 */
      }
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa24e0 with catch @ 00fa2470
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2510 with catch @ 00fa2470
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2540 with catch @ 00fa2470
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2568 with catch @ 00fa2470
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2594 with catch @ 00fa2470
                        */
      param_5 = param_5 >> 1;
      pfVar8 = param_1 + param_5;
      pfVar4 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar3 = (long)param_3 - (long)param_2 >> 2;
        pfVar2 = param_2;
        do {
          uVar6 = uVar3 >> 1;
          pfVar4 = pfVar2 + uVar6 + 1;
          uVar3 = uVar3 + ~uVar6;
          if (*pfVar8 <= pfVar2[uVar6]) {
            pfVar4 = pfVar2;
            uVar3 = uVar6;
          }
          pfVar2 = pfVar4;
        } while (uVar3 != 0);
      }
      lVar9 = (long)pfVar4 - (long)param_2 >> 2;
    }
                    /* try { // try from 00fa24d8 to 010a24df has its CatchHandler @ 00fa25d4 */
    pfVar2 = pfVar4;
                    /* try { // try from 00fa24e0 to 010a2503 has its CatchHandler @ 00fa2470 */
    if ((pfVar8 != param_2) && (pfVar2 = pfVar8, param_2 != pfVar4)) {
      pfVar2 = (float *)FUN_00fa2828(pfVar8,param_2,pfVar4);
                    /* try { // try from 00fa2504 to 010a250f has its CatchHandler @ 00fa25d4 */
                    /* try { // try from 00fa2510 to 010a2537 has its CatchHandler @ 00fa2470 */
    }
    if (param_5 + lVar9 < (param_6 - (param_5 + lVar9)) - lVar10) {
                    /* try { // try from 00fa2538 to 010a253f has its CatchHandler @ 00fa25d0 */
                    /* try { // try from 00fa2540 to 010a255f has its CatchHandler @ 00fa2470 */
      FUN_00fa23a0(param_1,pfVar8,pfVar2,param_4,param_5,lVar9);
      param_1 = pfVar2;
      param_2 = pfVar4;
      param_6 = param_6 - lVar9;
      param_5 = -(param_5 + lVar10);
                    /* try { // try from 00fa2560 to 010a2567 has its CatchHandler @ 00fa25d0 */
                    /* try { // try from 00fa2568 to 010a2587 has its CatchHandler @ 00fa2470 */
    }
    else {
                    /* try { // try from 00fa2588 to 010a2593 has its CatchHandler @ 00fa25d0 */
                    /* try { // try from 00fa2594 to 010a25d7 has its CatchHandler @ 00fa2470 */
      FUN_00fa23a0(pfVar2,pfVar4,param_3,param_4,-(param_5 + lVar10),param_6 - lVar9);
      param_3 = pfVar2;
      param_2 = pfVar8;
      param_6 = lVar9;
    }
    if (param_6 == 0) {
      return;
    }
  }
  if (param_6 < param_5) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa2538 with catch @ 00fa25d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2560 with catch @ 00fa25d0
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2588 with catch @ 00fa25d0
                        */
    if ((long)param_3 - (long)param_2 == 0) {
      return;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa24d8 with catch @ 00fa25d4
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2504 with catch @ 00fa25d4
                        */
    uVar6 = ((long)param_3 - (long)param_2) - 4;
    uVar3 = (uVar6 >> 2) + 1;
    pfVar4 = param_7;
    pfVar8 = param_2;
    if ((7 < uVar3) &&
       ((lVar10 = (uVar6 & 0xfffffffffffffffc) + 4, (float *)((long)param_2 + lVar10) <= param_7 ||
        ((float *)((long)param_7 + lVar10) <= param_2)))) {
      uVar5 = uVar3 & 0x7ffffffffffffff8;
      pfVar4 = param_2 + 4;
      pfVar8 = param_7 + 4;
      uVar6 = uVar5;
      do {
        pfVar2 = pfVar4 + -2;
        uVar12 = *(undefined8 *)(pfVar4 + -4);
        uVar15 = *(undefined8 *)(pfVar4 + 2);
        uVar14 = *(undefined8 *)pfVar4;
        pfVar4 = pfVar4 + 8;
        uVar6 = uVar6 - 8;
        *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)pfVar2;
        *(undefined8 *)(pfVar8 + -4) = uVar12;
        *(undefined8 *)(pfVar8 + 2) = uVar15;
        *(undefined8 *)pfVar8 = uVar14;
        pfVar8 = pfVar8 + 8;
      } while (uVar6 != 0);
      pfVar4 = param_7 + uVar5;
      pfVar8 = param_2 + uVar5;
      pfVar2 = param_7 + uVar5;
      if (uVar3 == uVar5) goto joined_r0x00fa2668;
    }
    do {
      pfVar7 = pfVar8 + 1;
      pfVar2 = pfVar4 + 1;
      *pfVar4 = *pfVar8;
      pfVar4 = pfVar2;
      pfVar8 = pfVar7;
    } while (param_3 != pfVar7);
joined_r0x00fa2668:
    while( true ) {
      if (pfVar2 == param_7) {
        return;
      }
      param_3 = param_3 + -1;
      if (param_2 == param_1) break;
      fVar11 = param_2[-1];
      fVar13 = pfVar2[-1];
      if (fVar11 <= fVar13) {
        *param_3 = fVar13;
        pfVar2 = pfVar2 + -1;
      }
      else {
        *param_3 = fVar11;
        param_2 = param_2 + -1;
      }
    }
    lVar10 = 0;
                    /* try { // try from 00fa27bc to 010a27e3 has its CatchHandler @ 00fa271c */
    do {
      *(undefined4 *)((long)param_3 + lVar10) = *(undefined4 *)((long)pfVar2 + lVar10 + -4);
      lVar10 = lVar10 + -4;
    } while ((long)param_7 - (long)pfVar2 != lVar10);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  uVar6 = (long)param_2 + (-4 - (long)param_1);
  uVar3 = (uVar6 >> 2) + 1;
  pfVar4 = param_7;
  pfVar8 = param_1;
  if ((7 < uVar3) &&
     ((lVar10 = (uVar6 & 0xfffffffffffffffc) + 4, (float *)((long)param_1 + lVar10) <= param_7 ||
      ((float *)((long)param_7 + lVar10) <= param_1)))) {
    uVar5 = uVar3 & 0x7ffffffffffffff8;
    pfVar4 = param_1 + 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fa278c with catch @ 00fa271c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa27bc with catch @ 00fa271c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa27ec with catch @ 00fa271c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2814 with catch @ 00fa271c
                       catch(type#1 @ 00000000) { ... } // from try @ 00fa2840 with catch @ 00fa271c
                        */
    pfVar2 = param_7 + uVar5;
    pfVar8 = param_7 + 4;
    uVar6 = uVar5;
    do {
      pfVar7 = pfVar4 + -2;
      uVar12 = *(undefined8 *)(pfVar4 + -4);
      uVar15 = *(undefined8 *)(pfVar4 + 2);
      uVar14 = *(undefined8 *)pfVar4;
      pfVar4 = pfVar4 + 8;
      uVar6 = uVar6 - 8;
      *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)pfVar7;
      *(undefined8 *)(pfVar8 + -4) = uVar12;
      *(undefined8 *)(pfVar8 + 2) = uVar15;
      *(undefined8 *)pfVar8 = uVar14;
      pfVar8 = pfVar8 + 8;
    } while (uVar6 != 0);
    pfVar4 = pfVar2;
    pfVar8 = param_1 + uVar5;
    if (uVar3 == uVar5) goto joined_r0x00fa2760;
  }
  do {
    pfVar7 = pfVar8 + 1;
    pfVar2 = pfVar4 + 1;
    *pfVar4 = *pfVar8;
    pfVar4 = pfVar2;
    pfVar8 = pfVar7;
  } while (param_2 != pfVar7);
joined_r0x00fa2760:
  while( true ) {
    if (pfVar2 == param_7) {
                    /* try { // try from 00fa280c to 010a2813 has its CatchHandler @ 00fa287c */
                    /* try { // try from 00fa2814 to 010a2833 has its CatchHandler @ 00fa271c */
      return;
    }
    if (param_2 == param_3) break;
                    /* try { // try from 00fa2784 to 010a278b has its CatchHandler @ 00fa2880 */
    fVar11 = *param_7;
                    /* try { // try from 00fa278c to 010a27af has its CatchHandler @ 00fa271c */
    if (fVar11 <= *param_2) {
      param_7 = param_7 + 1;
      *param_1 = fVar11;
    }
    else {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
    }
    param_1 = param_1 + 1;
  }
  if ((long)pfVar2 - (long)param_7 != 0) {
                    /* try { // try from 00fa27e4 to 010a27eb has its CatchHandler @ 00fa287c */
                    /* try { // try from 00fa27ec to 010a280b has its CatchHandler @ 00fa271c */
    memmove(param_1,param_7,(long)pfVar2 - (long)param_7);
    return;
  }
  return;
}

