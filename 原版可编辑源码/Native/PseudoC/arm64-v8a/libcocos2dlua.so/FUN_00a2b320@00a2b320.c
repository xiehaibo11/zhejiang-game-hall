
ulong FUN_00a2b320(ulong param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar5 = param_1 & 0xffffffff;
  iVar4 = (int)param_1;
  if (iVar4 != 0) {
    if (iVar4 < 0) {
      puVar3 = (undefined4 *)__errno();
      *puVar3 = 0x16;
      param_1 = 0xffffffff;
    }
    else {
      auVar6 = FUN_00a2e828();
                    /* try { // try from 00a2b340 to 00b2b36b has its CatchHandler @ 00a2b414 */
      do {
        iVar1 = poll((pollfd *)0x0,0,(int)uVar5);
        if (iVar1 != -1) goto LAB_00a2b3a4;
        piVar2 = (int *)__errno();
                    /* try { // try from 00a2b36c to 00b2b393 has its CatchHandler @ 00a2b278 */
        if ((*piVar2 != 0) && ((iVar1 = -1, *piVar2 != 4 || (DAT_017824c0 != 0))))
        goto LAB_00a2b3a4;
        auVar7 = FUN_00a2e828();
        iVar1 = FUN_00a2e888(auVar7._0_8_,auVar7._8_8_,auVar6._0_8_,auVar6._8_8_);
                    /* try { // try from 00a2b394 to 00b2b3a7 has its CatchHandler @ 00a2b428 */
        uVar5 = (ulong)(uint)(iVar4 - iVar1);
      } while (0 < iVar4 - iVar1);
      iVar1 = 0;
LAB_00a2b3a4:
      param_1 = (ulong)-(uint)(iVar1 != 0);
    }
  }
  return param_1;
}

