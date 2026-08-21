
/* WARNING: Type propagation algorithm not settling */

void FUN_00fa6584(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
                 long param_6,long *param_7,long param_8)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_6 == 0) {
    return;
  }
                    /* try { // try from 00fa65c0 to 010a65c7 has its CatchHandler @ 00fa6fec */
  while ((param_8 < param_6 && (param_8 < param_5))) {
    if (param_5 == 0) {
      return;
    }
                    /* try { // try from 00fa65c8 to 010a66af has its CatchHandler @ 00fa55a4 */
    lVar10 = -param_5;
    while (*(int *)(*param_1 + 0x84) <= *(int *)(*param_2 + 0x84)) {
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
      plVar3 = param_2 + lVar9;
      plVar6 = param_1;
      if ((long)param_2 - (long)param_1 != 0) {
        uVar4 = (long)param_2 - (long)param_1 >> 3;
        do {
          uVar7 = uVar4 >> 1;
          uVar8 = uVar4 + ~uVar7;
          uVar4 = uVar7;
          if (*(int *)(plVar6[uVar7] + 0x84) <= *(int *)(*plVar3 + 0x84)) {
            plVar6 = plVar6 + uVar7 + 1;
            uVar4 = uVar8;
          }
        } while (uVar4 != 0);
      }
      param_5 = (long)plVar6 - (long)param_1 >> 3;
    }
    else {
      if (lVar10 == -1) {
        lVar10 = *param_1;
        *param_1 = *param_2;
        *param_2 = lVar10;
        return;
      }
      if (param_5 < 0) {
        param_5 = param_5 + 1;
      }
      param_5 = param_5 >> 1;
      plVar6 = param_1 + param_5;
      plVar3 = param_2;
      if ((long)param_3 - (long)param_2 != 0) {
        uVar4 = (long)param_3 - (long)param_2 >> 3;
        plVar2 = param_2;
        do {
          uVar8 = uVar4 >> 1;
          plVar3 = plVar2 + uVar8 + 1;
          uVar4 = uVar4 + ~uVar8;
          if (*(int *)(*plVar6 + 0x84) <= *(int *)(plVar2[uVar8] + 0x84)) {
            plVar3 = plVar2;
            uVar4 = uVar8;
          }
          plVar2 = plVar3;
        } while (uVar4 != 0);
      }
      lVar9 = (long)plVar3 - (long)param_2 >> 3;
    }
    plVar2 = plVar3;
    if ((plVar6 != param_2) && (plVar2 = plVar6, param_2 != plVar3)) {
      plVar2 = (long *)FUN_00fa5dc8(plVar6,param_2,plVar3);
    }
    if (param_5 + lVar9 < (param_6 - (param_5 + lVar9)) - lVar10) {
      FUN_00fa6584(param_1,plVar6,plVar2,param_4,param_5,lVar9);
      param_1 = plVar2;
      param_2 = plVar3;
      param_6 = param_6 - lVar9;
      param_5 = -(param_5 + lVar10);
    }
    else {
      FUN_00fa6584(plVar2,plVar3,param_3,param_4,-(param_5 + lVar10),param_6 - lVar9);
      param_3 = plVar2;
      param_2 = plVar6;
      param_6 = lVar9;
    }
    if (param_6 == 0) {
      return;
    }
  }
  if (param_6 < param_5) {
    if ((long)param_3 - (long)param_2 == 0) {
      return;
    }
    uVar8 = ((long)param_3 - (long)param_2) - 8;
    uVar4 = (uVar8 >> 3) + 1;
    plVar3 = param_7;
    plVar6 = param_2;
                    /* try { // try from 00fa67ec to 010a67f3 has its CatchHandler @ 00fa6fd8 */
    if ((3 < uVar4) &&
       ((lVar10 = (uVar8 & 0xfffffffffffffff8) + 8, (long *)((long)param_2 + lVar10) <= param_7 ||
        ((long *)((long)param_7 + lVar10) <= param_2)))) {
      uVar7 = uVar4 & 0x3ffffffffffffffc;
      plVar3 = param_2 + 2;
      plVar6 = param_7 + 2;
      uVar8 = uVar7;
      do {
        plVar2 = plVar3 + -1;
        lVar10 = plVar3[-2];
        lVar11 = plVar3[1];
        lVar9 = *plVar3;
        plVar3 = plVar3 + 4;
        uVar8 = uVar8 - 4;
        plVar6[-1] = *plVar2;
        plVar6[-2] = lVar10;
        plVar6[1] = lVar11;
        *plVar6 = lVar9;
        plVar6 = plVar6 + 4;
      } while (uVar8 != 0);
      plVar3 = param_7 + uVar7;
      plVar6 = param_2 + uVar7;
      plVar2 = param_7 + uVar7;
      if (uVar4 == uVar7) goto joined_r0x00fa6864;
    }
    do {
      plVar5 = plVar6 + 1;
      plVar2 = plVar3 + 1;
      *plVar3 = *plVar6;
      plVar3 = plVar2;
      plVar6 = plVar5;
    } while (param_3 != plVar5);
joined_r0x00fa6864:
    while( true ) {
      if (plVar2 == param_7) {
        return;
      }
      param_3 = param_3 + -1;
      if (param_2 == param_1) break;
      lVar10 = param_2[-1];
      lVar9 = plVar2[-1];
      if (*(int *)(lVar9 + 0x84) < *(int *)(lVar10 + 0x84)) {
        *param_3 = lVar10;
        param_2 = param_2 + -1;
      }
      else {
        *param_3 = lVar9;
        plVar2 = plVar2 + -1;
      }
    }
    lVar10 = 0;
    do {
      *(undefined8 *)((long)param_3 + lVar10) = *(undefined8 *)((long)plVar2 + lVar10 + -8);
      lVar10 = lVar10 + -8;
    } while ((long)param_7 - (long)plVar2 != lVar10);
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  uVar8 = (long)param_2 + (-8 - (long)param_1);
  uVar4 = (uVar8 >> 3) + 1;
  plVar3 = param_7;
  plVar6 = param_1;
  if ((3 < uVar4) &&
     ((lVar10 = (uVar8 & 0xfffffffffffffff8) + 8, (long *)((long)param_1 + lVar10) <= param_7 ||
      ((long *)((long)param_7 + lVar10) <= param_1)))) {
    uVar7 = uVar4 & 0x3ffffffffffffffc;
    plVar3 = param_1 + 2;
    plVar2 = param_7 + uVar7;
                    /* try { // try from 00fa6924 to 010a692b has its CatchHandler @ 00fa6fc4 */
    plVar6 = param_7 + 2;
    uVar8 = uVar7;
    do {
      plVar5 = plVar3 + -1;
      lVar10 = plVar3[-2];
      lVar11 = plVar3[1];
      lVar9 = *plVar3;
      plVar3 = plVar3 + 4;
      uVar8 = uVar8 - 4;
      plVar6[-1] = *plVar5;
      plVar6[-2] = lVar10;
      plVar6[1] = lVar11;
      *plVar6 = lVar9;
      plVar6 = plVar6 + 4;
    } while (uVar8 != 0);
    plVar3 = plVar2;
    plVar6 = param_1 + uVar7;
    if (uVar4 == uVar7) goto joined_r0x00fa6964;
  }
  do {
    plVar5 = plVar6 + 1;
    plVar2 = plVar3 + 1;
    *plVar3 = *plVar6;
    plVar3 = plVar2;
    plVar6 = plVar5;
  } while (param_2 != plVar5);
joined_r0x00fa6964:
  while( true ) {
    if (plVar2 == param_7) {
      return;
    }
    if (param_2 == param_3) break;
    lVar10 = *param_7;
    if (*(int *)(*param_2 + 0x84) < *(int *)(lVar10 + 0x84)) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
    }
    else {
      param_7 = param_7 + 1;
      *param_1 = lVar10;
    }
    param_1 = param_1 + 1;
  }
  if ((long)plVar2 - (long)param_7 != 0) {
    memmove(param_1,param_7,(long)plVar2 - (long)param_7);
    return;
  }
  return;
}

