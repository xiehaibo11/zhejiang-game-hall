
void FUN_00a79ce8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  undefined4 local_2c;
  long local_28;
  
                    /* try { // try from 00a79cf4 to 00b79d27 has its CatchHandler @ 00a79cf4
                       catch() { ... } // from try @ 00a79cf4 with catch @ 00a79cf4
                       catch() { ... } // from try @ 00a79d3c with catch @ 00a79cf4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((**(char **)(param_1 + 0x10) == '\0') &&
     (plVar5 = *(long **)(param_1 + 8), *(int *)((long)plVar5 + 0x7c) != 4)) {
                    /* try { // try from 00a79d28 to 00b79d2f has its CatchHandler @ 00a79d60 */
    uVar2 = (**(code **)(*plVar5 + 0x78))(plVar5);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)plVar5[0x14];
      *(undefined4 *)((long)plVar5 + 0x7c) = 5;
      if (plVar3 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00a79d38 with catch @ 00a79d50 */
        local_2c = 5;
                    /* catch() { ... } // from try @ 00a79d28 with catch @ 00a79d60 */
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_2c);
      }
      if (*(char *)plVar5[0x17] == '\0') {
                    /* try { // try from 00a79d74 to 00b79dab has its CatchHandler @ 00a79d74
                       catch() { ... } // from try @ 00a79d74 with catch @ 00a79d74
                       catch() { ... } // from try @ 00a79db4 with catch @ 00a79d74 */
        *(char *)plVar5[0x17] = '\x01';
        if ((long *)plVar5[10] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[10] + 0x30))();
          plVar5[10] = 0;
        }
      }
      pcVar4 = *(code **)(*plVar5 + 8);
    }
    else {
                    /* try { // try from 00a79d38 to 00b79d3b has its CatchHandler @ 00a79d50 */
      pcVar4 = *(code **)(*plVar5 + 0x30);
                    /* try { // try from 00a79d3c to 00b79d73 has its CatchHandler @ 00a79cf4 */
    }
    (*pcVar4)(plVar5);
  }
                    /* try { // try from 00a79dac to 00b79db3 has its CatchHandler @ 00a79dc4 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a79db4 to 00b79dd7 has its CatchHandler @ 00a79d74 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

