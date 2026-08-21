
void FUN_00a2cab4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
                    /* try { // try from 00a2cac8 to 00b2cb1f has its CatchHandler @ 00a2cac8
                       catch() { ... } // from try @ 00a2cac8 with catch @ 00a2cac8
                       catch() { ... } // from try @ 00a2cb24 with catch @ 00a2cac8 */
  lVar3 = *(long *)(param_2 + 0x718);
  if (lVar3 != 0) {
    for (plVar1 = (long *)**(long **)(lVar3 + 0x10); plVar1 != (long *)0x0;
        plVar1 = (long *)plVar1[2]) {
      if (*plVar1 == param_2) {
        FUN_00a4aa5c(*(long **)(lVar3 + 0x10),plVar1,0);
        *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + -1;
        *(undefined8 *)(param_2 + 0x718) = 0;
        lVar2 = *(long *)(lVar3 + 8);
        goto joined_r0x00a2cb58;
      }
    }
    lVar2 = *(long *)(lVar3 + 8);
joined_r0x00a2cb58:
    if ((lVar2 == 0) && (param_1 != 0)) {
      FUN_00a4b33c(param_1,auStack_48);
      do {
        plVar1 = (long *)FUN_00a4b34c(auStack_48);
        if (plVar1 == (long *)0x0) goto joined_r0x00a2cb5c;
                    /* try { // try from 00a2cb20 to 00b2cb23 has its CatchHandler @ 00a2cb64 */
                    /* try { // try from 00a2cb24 to 00b2cb7f has its CatchHandler @ 00a2cac8 */
      } while (*plVar1 != lVar3);
      FUN_00a4afac(param_1,plVar1[1],plVar1[2]);
    }
joined_r0x00a2cb5c:
    if (param_1 != 0) {
                    /* catch() { ... } // from try @ 00a2cb20 with catch @ 00a2cb64 */
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
    }
  }
  return;
}

