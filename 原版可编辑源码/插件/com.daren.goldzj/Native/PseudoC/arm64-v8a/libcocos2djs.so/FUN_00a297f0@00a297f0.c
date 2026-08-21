
void FUN_00a297f0(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(char *)(param_2 + 0x470) == '\0') {
    uVar2 = 1;
    cVar1 = *(char *)(param_2 + 0x471);
  }
  else {
                    /* try { // try from 00a29818 to 00b298fb has its CatchHandler @ 00a29660 */
    uVar2 = FUN_00a177c8(param_1,param_2);
    uVar2 = uVar2 ^ 1;
    cVar1 = *(char *)(param_2 + 0x471);
  }
  if (cVar1 == '\0') {
    uVar3 = 1;
    plVar4 = *(long **)(param_2 + 0x480);
  }
  else {
    uVar3 = FUN_00a177f8(param_1,param_2);
    uVar3 = uVar3 ^ 1;
    plVar4 = *(long **)(param_2 + 0x480);
  }
  if (plVar4 != (long *)0x0) {
    for (plVar5 = (long *)*plVar4; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      if (*plVar5 == param_1) {
        FUN_00a34074(plVar4,plVar5,0);
        if ((uVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a296e0 with catch @ 00a2988c */
          FUN_00a178e8(param_2);
        }
        break;
      }
    }
  }
                    /* catch() { ... } // from try @ 00a296d4 with catch @ 00a29890 */
  plVar4 = *(long **)(param_2 + 0x478);
                    /* catch() { ... } // from try @ 00a296b4 with catch @ 00a29894 */
  if (plVar4 != (long *)0x0) {
    for (plVar5 = (long *)*plVar4; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
                    /* catch() { ... } // from try @ 00a296ec with catch @ 00a298a4 */
      if (*plVar5 == param_1) {
        FUN_00a34074(plVar4,plVar5,0);
        if ((uVar3 & 1) != 0) {
          return;
        }
        FUN_00a173a8(param_2);
        return;
      }
    }
  }
  return;
}

