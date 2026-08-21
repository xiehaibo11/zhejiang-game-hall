
void FUN_00a0cf6c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
                    /* try { // try from 00a0cfc4 to 00b0d037 has its CatchHandler @ 00a0cfc4
                       catch() { ... } // from try @ 00a0cfc4 with catch @ 00a0cfc4
                       catch() { ... } // from try @ 00a0d0cc with catch @ 00a0cfc4 */
      if ((long *)param_2[4] == param_2) {
                    /* try { // try from 00a0d038 to 00b0d043 has its CatchHandler @ 00a0d1b4 */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 00a0d054 to 00b0d0ab has its CatchHandler @ 00a0d1c4 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else {
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
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
                    /* try { // try from 00a0d0ac to 00b0d0bf has its CatchHandler @ 00a0d1b0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a0d0c4 to 00b0d0cb has its CatchHandler @ 00a0d168 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

