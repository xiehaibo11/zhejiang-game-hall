
void FUN_0090dad8(long *param_1,long *param_2)

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
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 0090dbc8 to 00a0dbdb has its CatchHandler @ 0090dc64 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
                    /* try { // try from 0090dbdc to 00a0dc0f has its CatchHandler @ 0090db20 */
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
                    /* try { // try from 0090db94 to 00a0dbab has its CatchHandler @ 0090dc68 */
      }
      else {
                    /* try { // try from 0090db20 to 00a0db93 has its CatchHandler @ 0090db20
                       catch() { ... } // from try @ 0090db20 with catch @ 0090db20
                       catch() { ... } // from try @ 0090dbdc with catch @ 0090db20
                       catch() { ... } // from try @ 0090dc24 with catch @ 0090db20 */
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
      }
    }
  }
                    /* try { // try from 0090dc10 to 00a0dc23 has its CatchHandler @ 0090dc68 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0090dc24 to 00a0dc83 has its CatchHandler @ 0090db20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

