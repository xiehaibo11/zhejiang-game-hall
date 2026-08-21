
void FUN_00a27148(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  
  lVar9 = *(long *)(param_1 + 0x60);
  if (lVar9 != 0) {
    auVar12 = FUN_00a2e828();
                    /* try { // try from 00a2718c to 00b271cf has its CatchHandler @ 00a2718c
                       catch() { ... } // from try @ 00a2718c with catch @ 00a2718c
                       catch() { ... } // from try @ 00a27270 with catch @ 00a2718c
                       catch() { ... } // from try @ 00a27330 with catch @ 00a2718c */
    lVar8 = auVar12._8_8_ + (param_2 % 1000) * 1000;
    lVar1 = auVar12._0_8_ + param_2 / 1000;
                    /* try { // try from 00a271d0 to 00b271e7 has its CatchHandler @ 00a273a8 */
    if (999999 < lVar8) {
      lVar1 = lVar1 + 1;
      lVar8 = lVar8 + -1000000;
    }
    if (*(long *)(param_1 + 0x8c50) != 0 || *(long *)(param_1 + 0x8c58) != 0) {
      lVar4 = FUN_00a2e888(lVar1,lVar8);
                    /* try { // try from 00a271f0 to 00b2721f has its CatchHandler @ 00a27358 */
      puVar11 = *(undefined8 **)(param_1 + 0x8c90);
      plVar5 = (long *)(*(code *)PTR_malloc_017699f8)(0x10);
      if (0 < lVar4) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        *plVar5 = lVar1;
        plVar5[1] = lVar8;
        lVar9 = FUN_00a4ac00(puVar11);
                    /* try { // try from 00a2722c to 00b27243 has its CatchHandler @ 00a27394 */
        if ((lVar9 == 0) || ((undefined8 *)*puVar11 == (undefined8 *)0x0)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (undefined8 *)*puVar11;
          puVar10 = (undefined8 *)0x0;
          do {
            puVar7 = puVar2;
                    /* try { // try from 00a27248 to 00b2726f has its CatchHandler @ 00a27354 */
            lVar9 = FUN_00a2e888(*(undefined8 *)*puVar7,((undefined8 *)*puVar7)[1],*plVar5,plVar5[1]
                                );
            if (0 < lVar9) break;
            puVar2 = (undefined8 *)puVar7[2];
            puVar10 = puVar7;
          } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
        }
        iVar3 = FUN_00a4a9ac(puVar11,puVar10,plVar5);
        if (iVar3 != 0) {
          return;
        }
                    /* try { // try from 00a27300 to 00b27307 has its CatchHandler @ 00a27358 */
        (*(code *)PTR_free_01769a00)(plVar5);
        return;
      }
      if (plVar5 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x8c50);
        plVar5[1] = *(long *)(param_1 + 0x8c58);
        *plVar5 = lVar4;
        lVar4 = FUN_00a4ac00(puVar11);
        if ((lVar4 == 0) || ((undefined8 *)*puVar11 == (undefined8 *)0x0)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar2 = (undefined8 *)*puVar11;
          puVar10 = (undefined8 *)0x0;
          do {
            puVar7 = puVar2;
            lVar4 = FUN_00a2e888(*(undefined8 *)*puVar7,((undefined8 *)*puVar7)[1],*plVar5,plVar5[1]
                                );
            if (0 < lVar4) break;
            puVar2 = (undefined8 *)puVar7[2];
            puVar10 = puVar7;
          } while ((undefined8 *)puVar7[2] != (undefined8 *)0x0);
        }
        iVar3 = FUN_00a4a9ac(puVar11,puVar10,plVar5);
                    /* try { // try from 00a27328 to 00b2732f has its CatchHandler @ 00a27354 */
        if (iVar3 == 0) {
                    /* try { // try from 00a27330 to 00b273c3 has its CatchHandler @ 00a2718c */
          (*(code *)PTR_free_01769a00)(plVar5);
        }
      }
                    /* catch() { ... } // from try @ 00a27248 with catch @ 00a27354
                       catch() { ... } // from try @ 00a27328 with catch @ 00a27354 */
      iVar3 = FUN_00a2bbf4(*(undefined8 *)(lVar9 + 0x80),param_1 + 0x8c60,
                           (undefined8 *)(lVar9 + 0x80));
                    /* catch() { ... } // from try @ 00a271f0 with catch @ 00a27358
                       catch() { ... } // from try @ 00a27300 with catch @ 00a27358 */
      if (iVar3 != 0) {
        FUN_00a38740(param_1,"Internal error removing splay node = %d\n",iVar3);
      }
    }
    *(long *)(param_1 + 0x8c50) = lVar1;
    *(long *)(param_1 + 0x8c58) = lVar8;
    *(long *)(param_1 + 0x8c88) = param_1;
                    /* catch() { ... } // from try @ 00a2722c with catch @ 00a27394 */
    uVar6 = FUN_00a2ba14(lVar1,lVar8,*(undefined8 *)(lVar9 + 0x80),param_1 + 0x8c60);
    *(undefined8 *)(lVar9 + 0x80) = uVar6;
  }
                    /* catch() { ... } // from try @ 00a271d0 with catch @ 00a273a8 */
  return;
}

