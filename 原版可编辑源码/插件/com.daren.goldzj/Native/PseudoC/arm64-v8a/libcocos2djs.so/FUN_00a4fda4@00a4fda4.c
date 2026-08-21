
undefined8 FUN_00a4fda4(long *param_1,int param_2)

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
      puVar2 = &DAT_0189703a;
      if (puVar5 != (undefined1 *)0x0) {
        puVar2 = puVar5;
      }
      uVar3 = FUN_00a3e3a4(plVar1,"PASS %s",puVar2);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 4;
        return uVar3;
      }
      return uVar3;
    }
  }
  else {
                    /* try { // try from 00a4fe10 to 00b4fef3 has its CatchHandler @ 00a4fc48 */
    if (param_2 - 200U < 100) {
      if ((char)param_1[0x53] == '\0') {
        uVar3 = FUN_00a3e3a4(param_1 + 0xc3,"%s",&DAT_01898b38);
        if ((int)uVar3 == 0) {
          *(undefined4 *)(param_1 + 0xd9) = 9;
          return uVar3;
        }
        return uVar3;
      }
      uVar3 = FUN_00a3e3a4(param_1 + 0xc3,"PBSZ %d",0);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 6;
        return uVar3;
      }
      return uVar3;
    }
    if (param_2 == 0x14c) {
      if (*(long *)(lVar4 + 0x6c0) == 0) {
                    /* try { // try from 00a4fef4 to 00b4ff53 has its CatchHandler @ 00a4fef4
                       catch() { ... } // from try @ 00a4fef4 with catch @ 00a4fef4
                       catch() { ... } // from try @ 00a50194 with catch @ 00a4fef4 */
        FUN_00a23020(lVar4,"ACCT requested but none available");
        return 0x43;
      }
      uVar3 = FUN_00a3e3a4(plVar1,"ACCT %s");
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xd9) = 5;
        return uVar3;
      }
      return uVar3;
    }
  }
  if ((*(long *)(lVar4 + 0x6c8) != 0) && (*(char *)(lVar4 + 36000) == '\0')) {
    uVar3 = FUN_00a3e3a4(plVar1,"%s");
    if ((int)uVar3 == 0) {
      *(undefined1 *)(*param_1 + 36000) = 1;
      *(undefined4 *)(param_1 + 0xd9) = 3;
      return uVar3;
    }
    return uVar3;
  }
                    /* catch() { ... } // from try @ 00a4fcc8 with catch @ 00a4fe84 */
                    /* catch() { ... } // from try @ 00a4fcbc with catch @ 00a4fe88 */
                    /* catch() { ... } // from try @ 00a4fc9c with catch @ 00a4fe8c */
  FUN_00a23020(lVar4,"Access denied: %03d",param_2);
                    /* catch() { ... } // from try @ 00a4fcd4 with catch @ 00a4fe9c */
  return 0x43;
}

