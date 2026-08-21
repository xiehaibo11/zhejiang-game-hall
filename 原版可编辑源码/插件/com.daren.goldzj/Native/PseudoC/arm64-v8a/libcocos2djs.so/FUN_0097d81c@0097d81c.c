
void FUN_0097d81c(long *param_1,long *param_2)

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
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
                    /* try { // try from 0097d914 to 00a7d95b has its CatchHandler @ 0097d914
                       catch(type#1 @ 00000000) { ... } // from try @ 0097d914 with catch @ 0097d914
                       catch(type#1 @ 00000000) { ... } // from try @ 0097d994 with catch @ 0097d914
                        */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
                    /* try { // try from 0097d87c to 00a7d8a7 has its CatchHandler @ 0097d87c
                       catch() { ... } // from try @ 0097d87c with catch @ 0097d87c
                       catch() { ... } // from try @ 0097d8b0 with catch @ 0097d87c */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else {
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
                    /* try { // try from 0097d8a8 to 00a7d8af has its CatchHandler @ 0097d8d4 */
                    /* try { // try from 0097d8b0 to 00a7d913 has its CatchHandler @ 0097d87c */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
                    /* catch() { ... } // from try @ 0097d8a8 with catch @ 0097d8d4 */
        param_1[4] = (long)param_1;
      }
      else {
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
      }
    }
  }
                    /* try { // try from 0097d95c to 00a7d967 has its CatchHandler @ 0097d9c8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

