
void FUN_0090dd8c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* try { // try from 0090dda0 to 00a0ddb3 has its CatchHandler @ 0090ddfc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
                    /* try { // try from 0090ddb4 to 00a0de17 has its CatchHandler @ 0090dc84 */
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
                    /* try { // try from 0090de58 to 00a0de73 has its CatchHandler @ 0090e07c */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 0090de9c to 00a0dea3 has its CatchHandler @ 0090e078 */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
                    /* catch() { ... } // from try @ 0090dd54 with catch @ 0090ddf8 */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
                    /* catch() { ... } // from try @ 0090dcd8 with catch @ 0090ddfc
                       catch() { ... } // from try @ 0090dda0 with catch @ 0090ddfc */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else {
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
                    /* try { // try from 0090de18 to 00a0de57 has its CatchHandler @ 0090de18
                       catch() { ... } // from try @ 0090de18 with catch @ 0090de18
                       catch() { ... } // from try @ 0090df1c with catch @ 0090de18
                       catch() { ... } // from try @ 0090e044 with catch @ 0090de18 */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
        param_1[4] = (long)param_1;
      }
      else {
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
      }
    }
  }
                    /* try { // try from 0090ded0 to 00a0deeb has its CatchHandler @ 0090e074 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

