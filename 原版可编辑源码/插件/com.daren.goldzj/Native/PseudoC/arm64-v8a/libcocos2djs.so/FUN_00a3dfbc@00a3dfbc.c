
long FUN_00a3dfbc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 0x58);
  lVar4 = *plVar3;
  plVar1 = (long *)(lVar4 + 0x370);
  if (*(long *)(lVar4 + 0x370) == 0) {
    plVar1 = (long *)(param_1 + 0x50);
  }
  lVar5 = *plVar1;
  auVar6 = FUN_00a18e40();
  lVar2 = FUN_00a18ea0(auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_1 + 0x40),
                       *(undefined8 *)(param_1 + 0x48));
  lVar4 = *(long *)(lVar4 + 0x358);
  lVar5 = lVar5 - lVar2;
  if (lVar4 != 0) {
    auVar6 = FUN_00a18e40();
    lVar2 = FUN_00a18ea0(auVar6._0_8_,auVar6._8_8_,plVar3[0x48],plVar3[0x49]);
                    /* try { // try from 00a3e018 to 00b3e05b has its CatchHandler @ 00a3e070 */
    lVar4 = lVar4 - lVar2;
    if (lVar4 <= lVar5) {
      lVar5 = lVar4;
    }
  }
  return lVar5;
}

