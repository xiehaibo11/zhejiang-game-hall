
undefined8 FUN_00a293a8(long *param_1,uint param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
                    /* try { // try from 00a293b8 to 00b2940b has its CatchHandler @ 00a293b8
                       catch() { ... } // from try @ 00a293b8 with catch @ 00a293b8
                       catch() { ... } // from try @ 00a2957c with catch @ 00a293b8 */
  if (((param_1 != (long *)0x0) && (lVar3 = *param_1, lVar3 != 0)) &&
     ((*(char *)((long)param_1 + 0x3b9) != '\0' ||
      (*(long *)(param_1[0x8f] + 0x18) + *(long *)(param_1[0x90] + 0x18) == 0)))) {
    if (param_1[0xb] != 0) {
      FUN_00a1a800(lVar3);
      param_1[0xb] = 0;
    }
    FUN_00a1a0fc(lVar3);
                    /* try { // try from 00a2940c to 00b29423 has its CatchHandler @ 00a295f8 */
    FUN_00a405cc(param_1);
    if (*(code **)(param_1[0x80] + 0x60) != (code *)0x0) {
      (**(code **)(param_1[0x80] + 0x60))(param_1,param_2 & 1);
    }
                    /* try { // try from 00a2942c to 00b29437 has its CatchHandler @ 00a295f4 */
                    /* try { // try from 00a29438 to 00b29443 has its CatchHandler @ 00a295f0 */
    FUN_00a22d58(lVar3,"Closing connection %ld\n",param_1[10]);
                    /* try { // try from 00a29444 to 00b2957b has its CatchHandler @ 00a29608 */
    FUN_00a170cc(*(undefined8 *)(lVar3 + 0xad0),param_1);
    thunk_FUN_00a4643c(param_1,0);
    uVar2 = FUN_00a12594(*(undefined8 *)(lVar3 + 0x60),3);
    if ((uVar2 & 1) != 0) {
      plVar4 = (long *)param_1[0x8f];
      if (plVar4 != (long *)0x0) {
        plVar1 = (long *)*plVar4;
        while (plVar1 != (long *)0x0) {
          plVar5 = (long *)plVar1[2];
          *(undefined1 *)(*plVar1 + 0x8ca9) = 1;
          FUN_00a125ac();
          FUN_00a34074(plVar4,plVar1,0);
          plVar1 = plVar5;
        }
      }
      plVar4 = (long *)param_1[0x90];
      if (plVar4 != (long *)0x0) {
        plVar1 = (long *)*plVar4;
        while (plVar1 != (long *)0x0) {
          plVar5 = (long *)plVar1[2];
          *(undefined1 *)(*plVar1 + 0x8ca9) = 1;
          FUN_00a125ac();
          FUN_00a34074(plVar4,plVar1,0);
          plVar1 = plVar5;
        }
      }
    }
    FUN_00a29508(param_1);
  }
  return 0;
}

