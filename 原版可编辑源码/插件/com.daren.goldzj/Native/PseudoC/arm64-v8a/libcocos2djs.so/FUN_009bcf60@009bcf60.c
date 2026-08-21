
void FUN_009bcf60(long *param_1,long *param_2)

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
                    /* try { // try from 009bcf98 to 00abcfef has its CatchHandler @ 009bcf98
                       catch() { ... } // from try @ 009bcf98 with catch @ 009bcf98
                       catch() { ... } // from try @ 009bd31c with catch @ 009bcf98 */
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
                    /* try { // try from 009bd028 to 00abd31b has its CatchHandler @ 009bd33c */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
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
                    /* try { // try from 009bcff0 to 00abd007 has its CatchHandler @ 009bd32c */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
                    /* try { // try from 009bd010 to 00abd01b has its CatchHandler @ 009bd328 */
        param_2[4] = param_1[4];
        param_1[4] = (long)param_1;
                    /* try { // try from 009bd01c to 00abd027 has its CatchHandler @ 009bd324 */
      }
      else {
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

