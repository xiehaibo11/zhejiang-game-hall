
undefined8 FUN_00a4e354(long *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00a4e368 to 00b4e44b has its CatchHandler @ 00a4e13c */
  plVar1 = param_1 + 0xc3;
  if ((param_2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x6a9) != '\0') {
      iVar2 = FUN_00a3e3a4(plVar1,"%s",&DAT_018960c5);
      if (iVar2 != 0) {
        lVar3 = *param_1;
        uVar4 = FUN_00a15564();
        FUN_00a23020(lVar3,"Failure sending QUIT command: %s",uVar4);
        *(undefined1 *)((long)param_1 + 0x6a9) = 0;
        FUN_00a11300(param_1,1);
        *(undefined4 *)(param_1 + 0xd9) = 0;
        lVar3 = param_1[0xd1];
                    /* catch() { ... } // from try @ 00a4e1bc with catch @ 00a4e3dc */
        goto joined_r0x00a4e408;
      }
                    /* catch() { ... } // from try @ 00a4e190 with catch @ 00a4e3e4 */
      *(undefined4 *)(param_1 + 0xd9) = 0x22;
      do {
                    /* catch() { ... } // from try @ 00a4e1c8 with catch @ 00a4e3f4 */
        iVar2 = FUN_00a3e038(plVar1,1);
        if (iVar2 != 0) break;
      } while ((int)param_1[0xd9] != 0);
    }
    lVar3 = param_1[0xd1];
  }
  else {
    *(undefined1 *)((long)param_1 + 0x6a9) = 0;
    lVar3 = param_1[0xd1];
  }
joined_r0x00a4e408:
  if (lVar3 != 0) {
    if (*(long *)(*param_1 + 0x8c98) == lVar3) {
      *(long *)(*param_1 + 0x8c98) = 0;
    }
    (*(code *)PTR_free_01d1b748)();
    param_1[0xd1] = 0;
  }
  lVar3 = param_1[0xd2];
  if (lVar3 != 0) {
                    /* try { // try from 00a4e44c to 00b4e49f has its CatchHandler @ 00a4e44c
                       catch() { ... } // from try @ 00a4e44c with catch @ 00a4e44c
                       catch() { ... } // from try @ 00a4e62c with catch @ 00a4e44c */
    if (0 < (int)param_1[0xd3]) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 * 8;
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar3 + lVar6));
        lVar5 = lVar5 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar6) = 0;
        lVar3 = param_1[0xd2];
      } while (lVar5 < (int)param_1[0xd3]);
    }
    (*(code *)PTR_free_01d1b748)();
    param_1[0xd2] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
                    /* try { // try from 00a4e4a0 to 00b4e4b7 has its CatchHandler @ 00a4e6a8 */
  (*(code *)PTR_free_01d1b748)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01d1b748)(param_1[0xdd]);
  param_1[0xdd] = 0;
                    /* try { // try from 00a4e4c0 to 00b4e4cb has its CatchHandler @ 00a4e6a4 */
  (*(code *)PTR_free_01d1b748)(param_1[0xd6]);
                    /* try { // try from 00a4e4cc to 00b4e4d7 has its CatchHandler @ 00a4e6a0 */
  param_1[0xd6] = 0;
                    /* try { // try from 00a4e4d8 to 00b4e62b has its CatchHandler @ 00a4e6b8 */
  (*(code *)PTR_free_01d1b748)(param_1[0xdb]);
  param_1[0xdb] = 0;
  FUN_00a3e798(plVar1);
  return 0;
}

