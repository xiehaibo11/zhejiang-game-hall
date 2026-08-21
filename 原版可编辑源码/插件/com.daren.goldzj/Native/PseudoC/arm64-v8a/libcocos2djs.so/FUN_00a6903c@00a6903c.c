
void FUN_00a6903c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* catch() { ... } // from try @ 00a68f9c with catch @ 00a69050 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a68f34 with catch @ 00a69054 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a68fa4 with catch @ 00a69058 */
  if (param_2 != param_1) {
                    /* catch() { ... } // from try @ 00a68f20 with catch @ 00a69068 */
    plVar2 = (long *)param_1[4];
                    /* catch() { ... } // from try @ 00a68ef4 with catch @ 00a6906c */
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* try { // try from 00a69118 to 00b6914f has its CatchHandler @ 00a69180 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 00a69150 to 00b69193 has its CatchHandler @ 00a690d4 */
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
                    /* catch() { ... } // from try @ 00a68f84 with catch @ 00a6907c */
      if (param_2 == plVar3) {
                    /* try { // try from 00a690d4 to 00b69117 has its CatchHandler @ 00a690d4
                       catch() { ... } // from try @ 00a690d4 with catch @ 00a690d4
                       catch() { ... } // from try @ 00a69150 with catch @ 00a690d4 */
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
                    /* catch() { ... } // from try @ 00a69118 with catch @ 00a69180 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a691f4 with catch @ 00a69194 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

