
undefined8 FUN_00a64d3c(long *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = param_1 + 0xc3;
  if ((param_2 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x6a9) != '\0') {
      iVar2 = FUN_00a54d8c(plVar1,"%s",&DAT_013c89f5);
      if (iVar2 != 0) {
        lVar3 = *param_1;
        uVar4 = FUN_00a2af4c();
        FUN_00a38a08(lVar3,"Failure sending QUIT command: %s",uVar4);
        *(undefined1 *)((long)param_1 + 0x6a9) = 0;
        FUN_00a26ce8(param_1,1);
        *(undefined4 *)(param_1 + 0xd9) = 0;
        lVar3 = param_1[0xd1];
        goto joined_r0x00a64df0;
      }
      *(undefined4 *)(param_1 + 0xd9) = 0x22;
      do {
        iVar2 = FUN_00a54a20(plVar1,1);
        if (iVar2 != 0) break;
      } while ((int)param_1[0xd9] != 0);
    }
    lVar3 = param_1[0xd1];
  }
  else {
    *(undefined1 *)((long)param_1 + 0x6a9) = 0;
    lVar3 = param_1[0xd1];
  }
joined_r0x00a64df0:
  if (lVar3 != 0) {
    if (*(long *)(*param_1 + 0x8c98) == lVar3) {
      *(long *)(*param_1 + 0x8c98) = 0;
    }
    (*(code *)PTR_free_01769a00)();
    param_1[0xd1] = 0;
  }
  lVar3 = param_1[0xd2];
  if (lVar3 != 0) {
    if (0 < (int)param_1[0xd3]) {
                    /* try { // try from 00a64e44 to 00b64e77 has its CatchHandler @ 00a64f44 */
      lVar5 = 0;
      do {
        lVar6 = lVar5 * 8;
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar3 + lVar6));
        lVar5 = lVar5 + 1;
        *(undefined8 *)(param_1[0xd2] + lVar6) = 0;
        lVar3 = param_1[0xd2];
      } while (lVar5 < (int)param_1[0xd3]);
    }
    (*(code *)PTR_free_01769a00)();
                    /* try { // try from 00a64e78 to 00b64e8b has its CatchHandler @ 00a64f10 */
    param_1[0xd2] = 0;
    *(undefined4 *)(param_1 + 0xd3) = 0;
  }
                    /* try { // try from 00a64e90 to 00b64ec3 has its CatchHandler @ 00a64f14 */
  (*(code *)PTR_free_01769a00)(param_1[0xd4]);
  param_1[0xd4] = 0;
  (*(code *)PTR_free_01769a00)(param_1[0xdd]);
  param_1[0xdd] = 0;
  (*(code *)PTR_free_01769a00)(param_1[0xd6]);
  param_1[0xd6] = 0;
  (*(code *)PTR_free_01769a00)(param_1[0xdb]);
                    /* try { // try from 00a64ec4 to 00b64f5f has its CatchHandler @ 00a64bdc */
  param_1[0xdb] = 0;
  FUN_00a55180(plVar1);
  return 0;
}

