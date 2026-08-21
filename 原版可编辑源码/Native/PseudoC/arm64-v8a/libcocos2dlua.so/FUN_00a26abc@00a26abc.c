
undefined4 FUN_00a26abc(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_40;
  char local_38;
  
                    /* try { // try from 00a26ac0 to 00b26b0f has its CatchHandler @ 00a269a0 */
  lVar3 = *(long *)(param_1 + 0xaf0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if ((lVar2 != 0) || (*(long *)(param_1 + 0x60) != 0)) {
      local_38 = '\0';
      plVar1 = (long *)(param_1 + 0x68);
      if (lVar2 == 0) {
        plVar1 = (long *)(param_1 + 0x60);
      }
                    /* try { // try from 00a26b10 to 00b26b13 has its CatchHandler @ 00a26b80 */
      local_40 = lVar3;
      FUN_00a2cb80(*plVar1 + 200,&local_40,FUN_00a26b54);
      if (local_38 != '\0') {
                    /* try { // try from 00a26b28 to 00b26b33 has its CatchHandler @ 00a26bb0 */
        if (param_2 != (long *)0x0) {
          *param_2 = lVar3;
        }
        return *(undefined4 *)(lVar3 + 0x260);
                    /* try { // try from 00a26b34 to 00b26b77 has its CatchHandler @ 00a269a0 */
      }
      *(undefined8 *)(param_1 + 0xaf0) = 0;
    }
  }
  return 0xffffffff;
}

