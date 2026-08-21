
undefined8 FUN_00a6678c(long *param_1,int param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  lVar4 = *param_1;
  plVar1 = param_1 + 0xc3;
  if (param_2 == 0x14b) {
    if ((int)param_1[0xd9] == 3) {
      puVar5 = *(undefined1 **)(*(long *)(lVar4 + 0x218) + 0x10);
      puVar2 = &DAT_013c996e;
      if (puVar5 != (undefined1 *)0x0) {
        puVar2 = puVar5;
      }
                    /* try { // try from 00a667dc to 00b6680b has its CatchHandler @ 00a66730 */
      uVar3 = FUN_00a54d8c(plVar1,"PASS %s",puVar2);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 4;
        return uVar3;
      }
      return uVar3;
    }
  }
  else {
    if (param_2 - 200U < 100) {
      if ((char)param_1[0x53] == '\0') {
        uVar3 = FUN_00a54d8c(param_1 + 0xc3,"%s",&DAT_013cb47c);
        if ((int)uVar3 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 9;
          return uVar3;
        }
        return uVar3;
      }
                    /* try { // try from 00a6680c to 00b6681f has its CatchHandler @ 00a66860 */
      uVar3 = FUN_00a54d8c(param_1 + 0xc3,"PBSZ %d",0);
      if ((int)uVar3 == 0) {
                    /* try { // try from 00a66820 to 00b6687b has its CatchHandler @ 00a66730 */
        *(undefined4 *)(param_1 + 0xd9) = 6;
        return uVar3;
      }
      return uVar3;
    }
    if (param_2 == 0x14c) {
      if (*(long *)(lVar4 + 0x6c0) == 0) {
        FUN_00a38a08(lVar4,"ACCT requested but none available");
        return 0x43;
      }
      uVar3 = FUN_00a54d8c(plVar1,"ACCT %s");
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 5;
        return uVar3;
      }
      return uVar3;
    }
  }
                    /* catch() { ... } // from try @ 00a66780 with catch @ 00a66860
                       catch() { ... } // from try @ 00a6680c with catch @ 00a66860 */
  if ((*(long *)(lVar4 + 0x6c8) != 0) && (*(char *)(lVar4 + 36000) == '\0')) {
    uVar3 = FUN_00a54d8c(plVar1,"%s");
    if ((int)uVar3 == 0) {
      *(undefined1 *)(*param_1 + 36000) = 1;
      *(undefined4 *)(param_1 + 0xd9) = 3;
      return uVar3;
    }
    return uVar3;
  }
  FUN_00a38a08(lVar4,"Access denied: %03d",param_2);
  return 0x43;
}

