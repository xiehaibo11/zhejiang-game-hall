
undefined8 FUN_00a50698(long *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_1;
                    /* catch() { ... } // from try @ 00a505d4 with catch @ 00a506bc */
  plVar1 = (long *)(lVar8 + 0x8cd8);
  lVar5 = *plVar1;
  lVar10 = *(long *)(lVar8 + 0x218);
                    /* try { // try from 00a506d8 to 00b5072f has its CatchHandler @ 00a506d8
                       catch() { ... } // from try @ 00a506d8 with catch @ 00a506d8
                       catch() { ... } // from try @ 00a508cc with catch @ 00a506d8 */
  if (((lVar5 != 0) && ((param_2 & 1) == 0)) || ((0 < lVar5 && ((param_2 & 1) != 0)))) {
    if (lVar5 < 0) {
      uVar4 = FUN_00a3e3a4(param_1 + 0xc3,"SIZE %s",param_1[0xd4]);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(undefined4 *)(param_1 + 0xd9) = 0x19;
      return uVar4;
    }
    *(undefined1 *)(lVar8 + 0x614) = 1;
    if (((code *)param_1[0x94] != (code *)0x0) &&
       (iVar2 = (*(code *)param_1[0x94])(param_1[0x95],lVar5,0), iVar2 != 0)) {
      if (iVar2 != 2) {
        pcVar6 = "Could not seek stream";
LAB_00a50864:
        FUN_00a23020(lVar8,pcVar6);
        return 0x1f;
      }
      lVar7 = *plVar1;
      lVar5 = 0;
      do {
                    /* try { // try from 00a50730 to 00b50747 has its CatchHandler @ 00a5094c */
        if (lVar7 - lVar5 < 0x4001) {
          uVar9 = FUN_00a16d14();
        }
        else {
          uVar9 = 0x4000;
        }
                    /* try { // try from 00a50750 to 00b5075b has its CatchHandler @ 00a50948 */
                    /* try { // try from 00a5075c to 00b50767 has its CatchHandler @ 00a50944 */
        lVar3 = (**(code **)(lVar8 + 0x8d10))(lVar8 + 0xb08,1,uVar9,*(undefined8 *)(lVar8 + 0x8d18))
        ;
                    /* try { // try from 00a50768 to 00b508cb has its CatchHandler @ 00a5095c */
        if (uVar9 <= lVar3 - 1U) {
          pcVar6 = "Failed to read data";
          goto LAB_00a50864;
        }
        lVar7 = *plVar1;
        lVar5 = lVar3 + lVar5;
      } while (lVar5 < lVar7);
    }
    lVar5 = *(long *)(lVar8 + 0x8cf8);
    if ((0 < lVar5) && (lVar5 = lVar5 - *plVar1, *(long *)(lVar8 + 0x8cf8) = lVar5, lVar5 < 1)) {
      FUN_00a22d58(lVar8,"File already completely uploaded\n");
      FUN_00a335d8(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      *(undefined4 *)(lVar10 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xd9) = 0;
      return 0;
    }
  }
  pcVar6 = "APPE %s";
  if (*(char *)(lVar8 + 0x614) == '\0') {
    pcVar6 = "STOR %s";
  }
  uVar4 = FUN_00a3e3a4(param_1 + 0xc3,pcVar6,param_1[0xd4]);
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xd9) = 0x21;
  }
  return uVar4;
}

