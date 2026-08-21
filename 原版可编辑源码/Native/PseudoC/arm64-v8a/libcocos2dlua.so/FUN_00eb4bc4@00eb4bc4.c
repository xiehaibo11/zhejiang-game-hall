
long FUN_00eb4bc4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 00eb4a5c with catch @ 00eb4bd0 */
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = lVar4;
  do {
    if (lVar3 < 0x401) {
      lVar3 = 0x400;
    }
    lVar3 = lVar3 + -0x400;
    FUN_00eb44c8(param_1,lVar3);
    lVar2 = *(long *)(param_1 + 0x10);
    lVar5 = -1;
    if (lVar2 < lVar4) {
      while( true ) {
        lVar1 = FUN_00eb4510(param_1,param_2,lVar4 - lVar2);
        if (lVar1 == -0x80) {
          return -0x80;
        }
        if (lVar1 < 0) break;
        lVar2 = *(long *)(param_1 + 0x10);
        lVar5 = lVar1;
        if (lVar4 <= lVar2) goto LAB_00eb4c58;
      }
    }
    lVar1 = lVar5;
                    /* try { // try from 00eb4bfc to 00fb4c6b has its CatchHandler @ 00eb4bfc
                       catch() { ... } // from try @ 00eb4bfc with catch @ 00eb4bfc
                       catch() { ... } // from try @ 00eb4c78 with catch @ 00eb4bfc */
  } while (lVar1 == -1);
LAB_00eb4c58:
  FUN_00eb44c8(param_1,lVar1);
                    /* try { // try from 00eb4c6c to 00fb4c77 has its CatchHandler @ 00eb4cdc */
  lVar4 = FUN_00eb4510(param_1,param_2,0x400);
                    /* try { // try from 00eb4c78 to 00fb4cf7 has its CatchHandler @ 00eb4bfc */
  lVar3 = -0x81;
  if (-1 < lVar4) {
    lVar3 = lVar1;
  }
  return lVar3;
}

