
void FUN_00a89f74(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* catch() { ... } // from try @ 00a89c50 with catch @ 00a89f74 */
                    /* catch() { ... } // from try @ 00a89e6c with catch @ 00a89f78 */
                    /* catch() { ... } // from try @ 00a89d68 with catch @ 00a89f7c */
                    /* catch() { ... } // from try @ 00a89bcc with catch @ 00a89f80
                       catch() { ... } // from try @ 00a89ec4 with catch @ 00a89f80 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a89cc4 with catch @ 00a89f90
                       catch() { ... } // from try @ 00a89ee8 with catch @ 00a89f90 */
                    /* catch() { ... } // from try @ 00a89da4 with catch @ 00a89f94
                       catch() { ... } // from try @ 00a89f00 with catch @ 00a89f94 */
  if (param_2 != param_1) {
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
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
                    /* try { // try from 00a8a0a8 to 00b8a0f7 has its CatchHandler @ 00a8a0a8
                       catch() { ... } // from try @ 00a8a0a8 with catch @ 00a8a0a8
                       catch() { ... } // from try @ 00a8a130 with catch @ 00a8a0a8
                       catch() { ... } // from try @ 00a8a174 with catch @ 00a8a0a8 */
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

