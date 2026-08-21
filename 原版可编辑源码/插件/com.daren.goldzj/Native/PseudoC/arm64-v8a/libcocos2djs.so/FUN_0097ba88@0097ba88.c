
void FUN_0097ba88(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097baac to 00a7bab3 has its CatchHandler @ 0097bb9c */
  if (param_2 != param_1) {
                    /* try { // try from 0097bab4 to 00a7bbd3 has its CatchHandler @ 0097b8b8 */
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097baac with catch @ 0097bb9c
                        */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097ba44 with catch @ 0097bbbc
                        */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097b908 with catch @ 0097bbd0
                        */
                    /* try { // try from 0097bbd4 to 00a7bc7b has its CatchHandler @ 0097bbd4
                       catch() { ... } // from try @ 0097bbd4 with catch @ 0097bbd4
                       catch() { ... } // from try @ 0097bc80 with catch @ 0097bbd4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

