
void FUN_00dc6cc0(long *param_1,long *param_2)

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
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
                    /* try { // try from 00dc6dcc to 00ec6dcf has its CatchHandler @ 00dc6e28 */
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
                    /* catch() { ... } // from try @ 00dc6c38 with catch @ 00dc6d24 */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
                    /* catch() { ... } // from try @ 00dc6c14 with catch @ 00dc6d34 */
                    /* catch() { ... } // from try @ 00dc6be4 with catch @ 00dc6d38 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
                    /* try { // try from 00dc6df4 to 00ec6e1f has its CatchHandler @ 00dc6e30 */
      param_2[4] = (long)param_2;
    }
    else {
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dc6e20 with catch @ 00dc6d4c
                       catch(type#1 @ 00000000) { ... } // from try @ 00dc6e54 with catch @ 00dc6d4c
                       catch(type#1 @ 00000000) { ... } // from try @ 00dc6e64 with catch @ 00dc6d4c
                        */
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

