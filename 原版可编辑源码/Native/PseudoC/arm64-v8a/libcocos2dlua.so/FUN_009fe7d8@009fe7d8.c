
long * FUN_009fe7d8(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined8 *__ptr;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  if (param_3 == 0) {
    return (long *)0x0;
  }
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 == 0) {
LAB_009fe868:
    plVar12 = (long *)FUN_009feb68((long *)(param_2 + 0x30),param_3);
  }
  else {
    uVar3 = lVar2 - 1;
    uVar11 = uVar3 & param_3 * 0x9e3779b1;
    if ((uVar3 & param_3 * 0x9e3779b1) == 0) {
      uVar11 = 1;
    }
    for (plVar12 = (long *)(*(long *)(param_2 + 0x48) +
                           uVar11 * ((ulong)*(uint *)(param_2 + 0x40) & 0x7fffffff));
        plVar12[1] != param_3; plVar12 = (long *)((long)plVar12 + *plVar12)) {
      if (*plVar12 == 0) goto LAB_009fe868;
                    /* try { // try from 009fe854 to 00afe8a3 has its CatchHandler @ 009fe854
                       catch() { ... } // from try @ 009fe854 with catch @ 009fe854
                       catch() { ... } // from try @ 009fe8cc with catch @ 009fe854 */
    }
    if (plVar12 == (long *)0x0) goto LAB_009fe868;
  }
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_009fe8d8:
    plVar14 = (long *)FUN_009feb68();
  }
  else {
    if (param_4 == 0) {
                    /* try { // try from 009fe8cc to 00afe933 has its CatchHandler @ 009fe854 */
      if (-1 < *(int *)(param_2 + 0x20)) goto LAB_009fe8d8;
      plVar14 = *(long **)(param_2 + 0x28);
    }
    else {
      uVar6 = (long)param_4 * 0x9e3779b1;
      uVar3 = *(long *)(param_2 + 0x10) - 1;
      uVar11 = uVar3 & uVar6;
      if ((uVar3 & uVar6) == 0) {
        uVar11 = 1;
      }
                    /* try { // try from 009fe8a4 to 00afe8cb has its CatchHandler @ 009fe920 */
      for (plVar14 = (long *)(*(long *)(param_2 + 0x28) +
                             uVar11 * ((ulong)*(uint *)(param_2 + 0x20) & 0x7fffffff));
          plVar14[1] != (long)param_4; plVar14 = (long *)((long)plVar14 + *plVar14)) {
        if (*plVar14 == 0) goto LAB_009fe8d8;
      }
    }
    if (plVar14 == (long *)0x0) goto LAB_009fe8d8;
  }
  if (plVar12 == (long *)0x0) {
    return (long *)0x0;
  }
  if (plVar14 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar13 = (long *)plVar12[2];
  if ((plVar13 != (long *)0x0) && ((long *)plVar14[2] == plVar13)) {
    lVar2 = plVar13[2];
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar2 + -8);
      if ((ushort)((ulong)lVar4 >> 0x30) < 2) {
        puVar5 = (undefined8 *)
                 (*(long *)(param_1 + 0x30) +
                 (ulong)((uint)lVar4 & *(int *)(param_1 + 0x20) - 1U) * 8);
        puVar9 = (undefined8 *)*puVar5;
        if (puVar9 != (undefined8 *)0x0) {
          __ptr = (undefined8 *)(lVar2 + -0x10);
          do {
                    /* try { // try from 009fea08 to 00afeaa3 has its CatchHandler @ 009fea08
                       catch() { ... } // from try @ 009fea08 with catch @ 009fea08
                       catch() { ... } // from try @ 009feab0 with catch @ 009fea08
                       catch() { ... } // from try @ 009feb3c with catch @ 009fea08
                       catch() { ... } // from try @ 009feb88 with catch @ 009fea08 */
            if (puVar9 == __ptr) {
              *puVar5 = *__ptr;
              free(__ptr);
              *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
              plVar13[2] = 0;
              return plVar13;
            }
            puVar10 = (undefined8 *)*puVar9;
            puVar5 = puVar9;
            puVar9 = puVar10;
          } while (puVar10 != (undefined8 *)0x0);
        }
      }
      else {
        *(long *)(lVar2 + -8) = lVar4 + -0x1000000000000;
      }
    }
    plVar13[2] = 0;
    return plVar13;
  }
  plVar13 = *(long **)(param_1 + 0x58);
  if (plVar13 == (long *)0x0) {
    uVar11 = *(ulong *)(param_1 + 0x60);
    plVar13 = malloc(0x1000);
                    /* catch() { ... } // from try @ 009fe8a4 with catch @ 009fe920 */
    if (plVar13 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar3 = 0;
    if (uVar11 != 0) {
      uVar3 = 0xff8 / uVar11;
    }
    lVar2 = (uVar3 - 1) * uVar11;
    if (lVar2 != 0) {
      plVar7 = (long *)0;
      do {
        plVar8 = (long *)((long)plVar13 + lVar2);
        lVar2 = lVar2 - uVar11;
        *plVar8 = (long)plVar7;
        plVar7 = plVar8;
      } while (lVar2 != 0);
      *(long **)(param_1 + 0x58) = plVar8;
    }
    plVar13[0x1ff] = *(long *)(param_1 + 0x50);
    *(long **)(param_1 + 0x50) = plVar13;
  }
  else {
    *(long *)(param_1 + 0x58) = *plVar13;
  }
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13[3] = 0;
  plVar13[2] = 0;
  *plVar13 = param_3;
  plVar13[1] = param_2;
  *(int *)(plVar13 + 3) = param_4;
  lVar2 = plVar12[2];
  if (lVar2 != 0) {
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
LAB_009fea54:
      if (lVar2 == 0) goto LAB_009fea78;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x18);
      if (iVar1 == 0) {
        if (-1 < *(int *)(param_2 + 0x20)) goto LAB_009fea54;
        plVar7 = *(long **)(param_2 + 0x28);
      }
      else {
        uVar6 = (long)iVar1 * 0x9e3779b1;
        uVar3 = *(long *)(param_2 + 0x10) - 1;
        uVar11 = uVar3 & uVar6;
        if ((uVar3 & uVar6) == 0) {
          uVar11 = 1;
        }
        for (plVar7 = (long *)(*(long *)(param_2 + 0x28) +
                              uVar11 * ((ulong)*(uint *)(param_2 + 0x20) & 0x7fffffff));
            plVar7[1] != (long)iVar1; plVar7 = (long *)((long)plVar7 + *plVar7)) {
          if (*plVar7 == 0) goto LAB_009fea54;
        }
      }
      if (plVar7 == (long *)0x0) goto LAB_009fea54;
      if (plVar7[2] == lVar2) goto LAB_009fea78;
    }
    FUN_009fcb38(param_1);
    *(uint *)(param_2 + 0x70) =
         *(uint *)(param_2 + 0x70) & 0xf0000000 | *(uint *)(param_2 + 0x70) - 1 & 0xfffffff;
  }
LAB_009fea78:
  plVar7 = (long *)plVar14[2];
  if (plVar7 == (long *)0x0) goto LAB_009feb10;
  if (((param_2 == 0) || (lVar2 = *plVar7, lVar2 == 0)) || (*(long *)(param_2 + 0x30) == 0)) {
LAB_009feaf0:
    if (plVar7 == (long *)0x0) goto LAB_009feb10;
  }
  else {
                    /* try { // try from 009feaa4 to 00afeaaf has its CatchHandler @ 009febe0 */
    uVar3 = *(long *)(param_2 + 0x30) - 1;
    uVar11 = uVar3 & lVar2 * 0x9e3779b1;
                    /* try { // try from 009feab0 to 00afeb2f has its CatchHandler @ 009fea08 */
    if ((uVar3 & lVar2 * 0x9e3779b1) == 0) {
      uVar11 = 1;
    }
    for (plVar8 = (long *)(*(long *)(param_2 + 0x48) +
                          uVar11 * ((ulong)*(uint *)(param_2 + 0x40) & 0x7fffffff));
        plVar8[1] != lVar2; plVar8 = (long *)((long)plVar8 + *plVar8)) {
      if (*plVar8 == 0) goto LAB_009feaf0;
    }
    if (plVar8 == (long *)0x0) goto LAB_009feaf0;
    if ((long *)plVar8[2] == plVar7) goto LAB_009feb10;
  }
  FUN_009fcb38(param_1);
  *(uint *)(param_2 + 0x70) =
       *(uint *)(param_2 + 0x70) & 0xf0000000 | *(uint *)(param_2 + 0x70) - 1 & 0xfffffff;
LAB_009feb10:
  *(uint *)(param_2 + 0x70) =
       *(uint *)(param_2 + 0x70) & 0xf0000000 | *(uint *)(param_2 + 0x70) + 1 & 0xfffffff;
  plVar14[2] = (long)plVar13;
  plVar12[2] = (long)plVar13;
                    /* try { // try from 009feb30 to 00afeb3b has its CatchHandler @ 009febdc */
                    /* try { // try from 009feb3c to 00afeb7f has its CatchHandler @ 009fea08 */
  return plVar13;
}

