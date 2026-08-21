
undefined8 FUN_00a3d360(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  size_t __n;
  long lVar11;
  long lVar12;
  long lVar13;
  
                    /* catch() { ... } // from try @ 00a3d1d8 with catch @ 00a3d360 */
                    /* catch() { ... } // from try @ 00a3d210 with catch @ 00a3d370 */
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x8b58);
  lVar11 = *(long *)(lVar7 + 0x218);
  if ((lVar8 == 0) || (*(char *)(lVar7 + 0x3d2) != '\0')) {
    lVar1 = (*(code *)PTR_malloc_01d1b740)(0x8000);
    lVar9 = lVar8;
    lVar8 = lVar1;
    if (lVar1 == 0) {
                    /* try { // try from 00a3d3c8 to 00b3d41b has its CatchHandler @ 00a3d3c8
                       catch() { ... } // from try @ 00a3d3c8 with catch @ 00a3d3c8
                       catch() { ... } // from try @ 00a3d528 with catch @ 00a3d3c8 */
      FUN_00a23020(lVar7,"Failed to alloc scratch buffer!");
      return 0x1b;
    }
  }
  else {
    lVar1 = 0;
    lVar9 = 0;
  }
  uVar2 = *(ulong *)(lVar11 + 0x18);
  lVar10 = -uVar2;
  if (param_2 < 1) {
    lVar12 = 0;
                    /* catch() { ... } // from try @ 00a3d448 with catch @ 00a3d59c */
  }
  else {
    lVar13 = 0;
    lVar12 = 0;
                    /* try { // try from 00a3d41c to 00b3d433 has its CatchHandler @ 00a3d5a4 */
    uVar6 = uVar2;
    do {
      lVar4 = *(long *)(lVar7 + 0x208);
      if ((&DAT_0189601b)[uVar6] == *(char *)(lVar4 + lVar13)) {
        uVar3 = uVar6 + 1;
                    /* try { // try from 00a3d43c to 00b3d447 has its CatchHandler @ 00a3d5a0 */
        uVar5 = 1;
        *(ulong *)(lVar11 + 0x18) = uVar3;
                    /* try { // try from 00a3d448 to 00b3d453 has its CatchHandler @ 00a3d59c */
        if ((uVar6 != 1) && (uVar6 != 4)) {
                    /* try { // try from 00a3d454 to 00b3d527 has its CatchHandler @ 00a3d5b4 */
          uVar5 = 0;
        }
        *(undefined1 *)(lVar11 + 0x20) = uVar5;
        if (uVar3 == 0) goto LAB_00a3d4d4;
LAB_00a3d460:
        if (uVar3 == 3) {
          __n = 4 - uVar2;
          memcpy((void *)(lVar8 + lVar12),&DAT_01896103 + uVar2,__n);
          uVar3 = 0;
          uVar2 = 0;
          lVar12 = __n + lVar12;
          *(undefined8 *)(lVar11 + 0x18) = 0;
        }
      }
      else {
        if (uVar6 != 0) {
          memcpy((void *)(lVar8 + lVar12),&DAT_0189601b + uVar2,uVar6 - uVar2);
          lVar4 = *(long *)(lVar7 + 0x208);
          uVar2 = 0;
          lVar12 = lVar10 + lVar12 + *(long *)(lVar11 + 0x18);
          uVar3 = (ulong)(*(char *)(lVar4 + lVar13) == '\r');
          *(ulong *)(lVar11 + 0x18) = uVar3;
          *(undefined1 *)(lVar11 + 0x20) = 0;
          if (uVar3 != 0) goto LAB_00a3d460;
        }
LAB_00a3d4d4:
        *(undefined1 *)(lVar8 + lVar12) = *(undefined1 *)(lVar4 + lVar13);
        uVar3 = *(ulong *)(lVar11 + 0x18);
        lVar12 = lVar12 + 1;
      }
      lVar13 = lVar13 + 1;
      lVar10 = -uVar2;
      uVar6 = uVar3;
    } while (param_2 != lVar13);
    if (uVar3 - uVar2 != 0) {
      memcpy((void *)(lVar8 + lVar12),&DAT_0189601b + uVar2,uVar3 - uVar2);
      lVar12 = lVar10 + lVar12 + *(long *)(lVar11 + 0x18);
    }
  }
  if (lVar12 == param_2) {
                    /* try { // try from 00a3d528 to 00b3d60b has its CatchHandler @ 00a3d3c8 */
    (*(code *)PTR_free_01d1b748)(lVar1);
  }
  else {
    *(long *)(lVar7 + 0x208) = lVar8;
    *(long *)(lVar7 + 0x8b58) = lVar8;
    (*(code *)PTR_free_01d1b748)(lVar9);
    *(long *)(lVar7 + 0x200) = lVar12;
  }
  return 0;
}

