
void FUN_00a2770c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar4 = (long *)**(long **)(param_1 + 0x28);
joined_r0x00a27734:
  do {
    plVar1 = plVar4;
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar1;
    plVar4 = (long *)plVar1[2];
  } while (*(int *)(lVar3 + 0x18) != 1);
  *(undefined4 *)(lVar3 + 0x18) = 2;
  FUN_00a495e8(lVar3);
                    /* try { // try from 00a27778 to 00b277ab has its CatchHandler @ 00a27878 */
  FUN_00a4aa5c(*(undefined8 *)(param_1 + 0x28),plVar1,0);
  auVar5 = FUN_00a2e828();
  lVar2 = auVar5._0_8_;
  if (*(long *)(lVar3 + 0x8c58) != 0 || *(long *)(lVar3 + 0x8c50) != 0) goto code_r0x00a2779c;
  goto LAB_00a277c0;
code_r0x00a2779c:
  if (999999 < auVar5._8_8_) {
    auVar5._8_8_ = auVar5._8_8_ + -1000000;
    auVar5._0_8_ = lVar2 + 1;
  }
                    /* try { // try from 00a277ac to 00b277bf has its CatchHandler @ 00a27844 */
  lVar2 = FUN_00a2e888(auVar5._0_8_,auVar5._8_8_);
  if (lVar2 < 1) {
LAB_00a277c0:
                    /* try { // try from 00a277c4 to 00b277f7 has its CatchHandler @ 00a27848 */
    FUN_00a27148(lVar3,0);
  }
  goto joined_r0x00a27734;
}

