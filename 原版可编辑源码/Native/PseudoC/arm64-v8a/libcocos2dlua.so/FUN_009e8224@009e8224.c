
void FUN_009e8224(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009e823c to 00ae8293 has its CatchHandler @ 009e823c
                       catch() { ... } // from try @ 009e823c with catch @ 009e823c
                       catch() { ... } // from try @ 009e8298 with catch @ 009e823c */
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* catch() { ... } // from try @ 009e8294 with catch @ 009e82f4 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 009e8310 to 00ae8347 has its CatchHandler @ 009e8310
                       catch() { ... } // from try @ 009e8310 with catch @ 009e8310
                       catch() { ... } // from try @ 009e8358 with catch @ 009e8310 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
                    /* try { // try from 009e8348 to 00ae8357 has its CatchHandler @ 009e83bc */
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
                    /* try { // try from 009e8294 to 00ae8297 has its CatchHandler @ 009e82f4 */
                    /* try { // try from 009e8298 to 00ae830f has its CatchHandler @ 009e823c */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
                    /* try { // try from 009e8358 to 00ae83d7 has its CatchHandler @ 009e8310 */
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

