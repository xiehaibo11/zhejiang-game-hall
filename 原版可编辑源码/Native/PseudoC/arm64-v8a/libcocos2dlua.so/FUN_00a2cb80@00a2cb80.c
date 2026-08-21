
void FUN_00a2cb80(long param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [24];
  
                    /* try { // try from 00a2cb80 to 00b2cbcb has its CatchHandler @ 00a2cb80
                       catch() { ... } // from try @ 00a2cb80 with catch @ 00a2cb80
                       catch() { ... } // from try @ 00a2cbd0 with catch @ 00a2cb80 */
  if (param_1 != 0) {
    FUN_00a4b33c(param_1,auStack_48);
    plVar2 = (long *)FUN_00a4b34c(auStack_48);
    while (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      plVar2 = (long *)FUN_00a4b34c(auStack_48);
                    /* try { // try from 00a2cbcc to 00b2cbcf has its CatchHandler @ 00a2cc04 */
      puVar5 = (undefined8 *)**(undefined8 **)(lVar4 + 0x10);
                    /* try { // try from 00a2cbd0 to 00b2cc17 has its CatchHandler @ 00a2cb80 */
      while (puVar5 != (undefined8 *)0x0) {
        uVar3 = *puVar5;
        puVar5 = (undefined8 *)puVar5[2];
        iVar1 = (*param_3)(uVar3,param_2);
        if (iVar1 == 1) {
          return;
        }
      }
    }
  }
  return;
}

