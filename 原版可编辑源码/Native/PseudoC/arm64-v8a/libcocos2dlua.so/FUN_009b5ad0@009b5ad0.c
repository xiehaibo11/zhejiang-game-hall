
void FUN_009b5ad0(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009b5aec to 00ab5afb has its CatchHandler @ 009b5b90 */
  if (param_2 != param_1) {
                    /* try { // try from 009b5afc to 00ab5baf has its CatchHandler @ 009b59e4 */
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
                    /* catch() { ... } // from try @ 009b5aec with catch @ 009b5b90 */
                    /* catch() { ... } // from try @ 009b5a8c with catch @ 009b5b94 */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
                    /* try { // try from 009b5bb0 to 00ab5c57 has its CatchHandler @ 009b5bb0
                       catch() { ... } // from try @ 009b5bb0 with catch @ 009b5bb0
                       catch() { ... } // from try @ 009b5c68 with catch @ 009b5bb0
                       catch() { ... } // from try @ 009b5cc8 with catch @ 009b5bb0 */
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

