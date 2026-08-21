
undefined8 FUN_00a53d48(long *param_1,long param_2)

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
  
  lVar7 = *param_1;
  lVar8 = *(long *)(lVar7 + 0x8b58);
  lVar11 = *(long *)(lVar7 + 0x218);
                    /* try { // try from 00a53d88 to 00b53d9f has its CatchHandler @ 00a53e70 */
  if ((lVar8 == 0) || (*(char *)(lVar7 + 0x3d2) != '\0')) {
    lVar1 = (*(code *)PTR_malloc_017699f8)(0x8000);
                    /* try { // try from 00a53da4 to 00b53dd7 has its CatchHandler @ 00a53e6c */
    lVar9 = lVar8;
    lVar8 = lVar1;
    if (lVar1 == 0) {
      FUN_00a38a08(lVar7,"Failed to alloc scratch buffer!");
      return 0x1b;
    }
  }
  else {
    lVar1 = 0;
    lVar9 = 0;
  }
                    /* try { // try from 00a53dd8 to 00b53dff has its CatchHandler @ 00a53d38 */
  uVar2 = *(ulong *)(lVar11 + 0x18);
  lVar10 = -uVar2;
  if (param_2 < 1) {
    lVar12 = 0;
  }
  else {
    lVar13 = 0;
    lVar12 = 0;
                    /* try { // try from 00a53e00 to 00b53e13 has its CatchHandler @ 00a53e70 */
    uVar6 = uVar2;
    do {
      lVar4 = *(long *)(lVar7 + 0x208);
      if ((&DAT_013c894b)[uVar6] == *(char *)(lVar4 + lVar13)) {
        uVar3 = uVar6 + 1;
        uVar5 = 1;
        *(ulong *)(lVar11 + 0x18) = uVar3;
        if ((uVar6 != 1) && (uVar6 != 4)) {
          uVar5 = 0;
        }
        *(undefined1 *)(lVar11 + 0x20) = uVar5;
        if (uVar3 == 0) goto LAB_00a53ebc;
LAB_00a53e48:
        if (uVar3 == 3) {
                    /* try { // try from 00a53e50 to 00b53e57 has its CatchHandler @ 00a53e6c */
          __n = 4 - uVar2;
                    /* try { // try from 00a53e58 to 00b53e8b has its CatchHandler @ 00a53d38 */
          memcpy((void *)(lVar8 + lVar12),&DAT_013c8a33 + uVar2,__n);
          uVar3 = 0;
          uVar2 = 0;
                    /* catch() { ... } // from try @ 00a53da4 with catch @ 00a53e6c
                       catch() { ... } // from try @ 00a53e50 with catch @ 00a53e6c */
          lVar12 = __n + lVar12;
                    /* catch() { ... } // from try @ 00a53d88 with catch @ 00a53e70
                       catch() { ... } // from try @ 00a53e00 with catch @ 00a53e70 */
          *(undefined8 *)(lVar11 + 0x18) = 0;
        }
      }
      else {
        if (uVar6 != 0) {
          memcpy((void *)(lVar8 + lVar12),&DAT_013c894b + uVar2,uVar6 - uVar2);
          lVar4 = *(long *)(lVar7 + 0x208);
          uVar2 = 0;
          lVar12 = lVar10 + lVar12 + *(long *)(lVar11 + 0x18);
          uVar3 = (ulong)(*(char *)(lVar4 + lVar13) == '\r');
          *(ulong *)(lVar11 + 0x18) = uVar3;
          *(undefined1 *)(lVar11 + 0x20) = 0;
          if (uVar3 != 0) goto LAB_00a53e48;
        }
LAB_00a53ebc:
        *(undefined1 *)(lVar8 + lVar12) = *(undefined1 *)(lVar4 + lVar13);
        uVar3 = *(ulong *)(lVar11 + 0x18);
        lVar12 = lVar12 + 1;
      }
      lVar13 = lVar13 + 1;
      lVar10 = -uVar2;
      uVar6 = uVar3;
    } while (param_2 != lVar13);
    if (uVar3 - uVar2 != 0) {
      memcpy((void *)(lVar8 + lVar12),&DAT_013c894b + uVar2,uVar3 - uVar2);
      lVar12 = lVar10 + lVar12 + *(long *)(lVar11 + 0x18);
    }
  }
  if (lVar12 == param_2) {
    (*(code *)PTR_free_01769a00)(lVar1);
  }
  else {
    *(long *)(lVar7 + 0x208) = lVar8;
    *(long *)(lVar7 + 0x8b58) = lVar8;
    (*(code *)PTR_free_01769a00)(lVar9);
    *(long *)(lVar7 + 0x200) = lVar12;
  }
  return 0;
}

