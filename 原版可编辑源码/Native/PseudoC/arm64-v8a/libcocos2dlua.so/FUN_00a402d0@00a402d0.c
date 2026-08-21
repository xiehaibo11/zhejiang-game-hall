
long FUN_00a402d0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0xad0);
  auVar8 = FUN_00a2e828();
  FUN_00a4b33c(uVar3,auStack_58);
  plVar1 = (long *)FUN_00a4b34c(auStack_58);
  lVar4 = 0;
  if (plVar1 != (long *)0x0) {
    lVar6 = -1;
    do {
      for (plVar1 = (long *)**(long **)(*plVar1 + 0x10); plVar1 != (long *)0x0;
          plVar1 = (long *)plVar1[2]) {
        lVar7 = *plVar1;
        lVar5 = lVar4;
        lVar2 = lVar6;
        if ((*(char *)(lVar7 + 0x48) == '\0') &&
           (lVar2 = FUN_00a2e888(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(lVar7 + 0x240),
                                 *(undefined8 *)(lVar7 + 0x248)), lVar5 = lVar7, lVar2 <= lVar6)) {
                    /* try { // try from 00a40350 to 00b40383 has its CatchHandler @ 00a40450 */
          lVar5 = lVar4;
          lVar2 = lVar6;
        }
        lVar4 = lVar5;
        lVar6 = lVar2;
      }
      plVar1 = (long *)FUN_00a4b34c(auStack_58);
    } while (plVar1 != (long *)0x0);
  }
  return lVar4;
}

