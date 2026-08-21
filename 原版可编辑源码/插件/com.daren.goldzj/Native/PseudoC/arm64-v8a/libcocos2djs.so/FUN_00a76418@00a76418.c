
void FUN_00a76418(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a7643c to 00b76453 has its CatchHandler @ 00a7678c */
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
                    /* try { // try from 00a76474 to 00b7648b has its CatchHandler @ 00a7679c */
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 00a76500 to 00b7652b has its CatchHandler @ 00a76734 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
                    /* try { // try from 00a76540 to 00b765a7 has its CatchHandler @ 00a7679c */
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
                    /* try { // try from 00a7645c to 00b76467 has its CatchHandler @ 00a7673c */
      if (param_2 == plVar3) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
                    /* try { // try from 00a764bc to 00b764eb has its CatchHandler @ 00a76740 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
        param_1[4] = (long)param_1;
      }
      else {
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
                    /* try { // try from 00a76468 to 00b76473 has its CatchHandler @ 00a76738 */
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

