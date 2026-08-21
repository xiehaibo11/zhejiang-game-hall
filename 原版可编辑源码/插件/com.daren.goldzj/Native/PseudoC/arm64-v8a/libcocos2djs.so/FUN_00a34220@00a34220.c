
undefined8 FUN_00a34220(long *param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if (param_2 == 0) {
                    /* catch() { ... } // from try @ 00a3401c with catch @ 00a34260
                       catch() { ... } // from try @ 00a340c0 with catch @ 00a34260 */
    return 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 00a3408c with catch @ 00a3422c
                       catch() { ... } // from try @ 00a341d4 with catch @ 00a3422c */
    plVar3 = *(long **)(param_2 + 0x10);
    if (*param_1 == param_2) {
      *param_1 = (long)plVar3;
      plVar1 = param_1;
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3;
      }
      plVar1[1] = 0;
    }
    else {
      lVar4 = *(long *)(param_2 + 8);
      *(long **)(lVar4 + 0x10) = plVar3;
                    /* catch() { ... } // from try @ 00a34010 with catch @ 00a34248 */
                    /* catch() { ... } // from try @ 00a34004 with catch @ 00a3424c */
                    /* catch() { ... } // from try @ 00a33fe4 with catch @ 00a34250 */
      plVar3 = param_1;
      if (*(long **)(param_2 + 0x10) != (long *)0x0) {
        plVar3 = *(long **)(param_2 + 0x10);
      }
      plVar3[1] = lVar4;
    }
    param_1[3] = lVar2 + -1;
    lVar2 = param_3[3];
    if (lVar2 == 0) {
      plVar3 = param_3 + 1;
      *param_3 = param_2;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      plVar3 = (long *)(param_4 + 0x10);
      lVar4 = *plVar3;
      *(long *)(param_2 + 8) = param_4;
      *(long *)(param_2 + 0x10) = lVar4;
      plVar1 = param_3;
      if ((long *)*plVar3 != (long *)0x0) {
        plVar1 = (long *)*plVar3;
      }
                    /* try { // try from 00a342b8 to 00b34307 has its CatchHandler @ 00a342b8
                       catch() { ... } // from try @ 00a342b8 with catch @ 00a342b8
                       catch() { ... } // from try @ 00a343c0 with catch @ 00a342b8 */
      plVar1[1] = param_2;
    }
    *plVar3 = param_2;
    param_3[3] = lVar2 + 1;
    return 1;
  }
  return 0;
}

