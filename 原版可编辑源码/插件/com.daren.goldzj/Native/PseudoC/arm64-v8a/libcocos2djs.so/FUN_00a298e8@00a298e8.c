
long FUN_00a298e8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [24];
  
                    /* try { // try from 00a298fc to 00b2994f has its CatchHandler @ 00a298fc
                       catch() { ... } // from try @ 00a298fc with catch @ 00a298fc
                       catch() { ... } // from try @ 00a29ac0 with catch @ 00a298fc */
  uVar3 = *(undefined8 *)(param_1 + 0xad0);
  auVar8 = FUN_00a18e40();
  FUN_00a34954(uVar3,auStack_58);
  plVar1 = (long *)FUN_00a34964(auStack_58);
  lVar4 = 0;
  if (plVar1 != (long *)0x0) {
    lVar6 = -1;
    do {
      for (plVar1 = (long *)**(long **)(*plVar1 + 0x10); plVar1 != (long *)0x0;
          plVar1 = (long *)plVar1[2]) {
        lVar7 = *plVar1;
        lVar5 = lVar4;
        lVar2 = lVar6;
                    /* try { // try from 00a29950 to 00b29967 has its CatchHandler @ 00a29b3c */
        if ((*(char *)(lVar7 + 0x48) == '\0') &&
           (lVar2 = FUN_00a18ea0(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(lVar7 + 0x240),
                                 *(undefined8 *)(lVar7 + 0x248)), lVar5 = lVar7, lVar2 <= lVar6)) {
          lVar5 = lVar4;
          lVar2 = lVar6;
        }
                    /* try { // try from 00a29970 to 00b2997b has its CatchHandler @ 00a29b38 */
        lVar4 = lVar5;
        lVar6 = lVar2;
      }
      plVar1 = (long *)FUN_00a34964(auStack_58);
                    /* try { // try from 00a2997c to 00b29987 has its CatchHandler @ 00a29b34 */
    } while (plVar1 != (long *)0x0);
  }
                    /* try { // try from 00a29988 to 00b29abf has its CatchHandler @ 00a29b4c */
  return lVar4;
}

