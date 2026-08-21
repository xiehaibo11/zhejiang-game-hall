
void FUN_00dad59c(long *param_1,long *param_2)

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
                    /* catch() { ... } // from try @ 00dad6bc with catch @ 00dad684 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 00dad6b4 to 00ead6bb has its CatchHandler @ 00dad6d8 */
                    /* try { // try from 00dad6bc to 00ead6f3 has its CatchHandler @ 00dad684 */
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
                    /* catch() { ... } // from try @ 00dad6b4 with catch @ 00dad6d8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dad6f4 to 00ead75b has its CatchHandler @ 00dad6f4
                       catch() { ... } // from try @ 00dad6f4 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dad76c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dad7ec with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dad86c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dad8ec with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dad96c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dad9ec with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dada64 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadadc with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadb54 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadbcc with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadc44 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadcbc with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadd34 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00daddac with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dade24 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dade9c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadf14 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dadf8c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dae004 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dae07c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dae0f4 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dae16c with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dae1e4 with catch @ 00dad6f4
                       catch() { ... } // from try @ 00dae26c with catch @ 00dad6f4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

