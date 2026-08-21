
long * FUN_00a2baf4(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_3 == 0) {
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
  }
  else {
                    /* try { // try from 00a2bb14 to 00b2bb27 has its CatchHandler @ 00a2bbac */
    plVar1 = (long *)FUN_00a2b908(param_1,param_2);
                    /* try { // try from 00a2bb2c to 00b2bb5f has its CatchHandler @ 00a2bbb0 */
    if ((param_1 < plVar1[3]) || ((param_1 <= plVar1[3] && (param_2 < plVar1[4])))) {
      lVar2 = *plVar1;
      plVar3 = (long *)0x0;
      plVar4 = plVar1;
      if (lVar2 == 0) goto LAB_00a2bbd4;
      plVar1 = (long *)FUN_00a2b908(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
                                    plVar1);
    }
    lVar2 = plVar1[3];
                    /* try { // try from 00a2bb60 to 00b2bbfb has its CatchHandler @ 00a2b9b0 */
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && (param_2 < plVar1[4])))) {
      plVar3 = (long *)0x0;
      plVar4 = plVar1;
    }
    else {
      plVar4 = (long *)plVar1[2];
      plVar3 = plVar1;
      if (plVar4 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a2bb2c with catch @ 00a2bbb0 */
        if (*plVar1 == 0) {
          plVar4 = (long *)plVar1[1];
        }
        else {
          plVar4 = (long *)FUN_00a2b908(param_1,param_2);
          plVar4[1] = plVar1[1];
        }
      }
      else {
        lVar2 = plVar1[3];
        plVar4[4] = plVar1[4];
        plVar4[3] = lVar2;
        lVar2 = *plVar1;
        plVar4[1] = plVar1[1];
        *plVar4 = lVar2;
      }
    }
  }
LAB_00a2bbd4:
  *param_4 = plVar3;
                    /* catch() { ... } // from try @ 00a2bae0 with catch @ 00a2bbe0 */
  return plVar4;
}

