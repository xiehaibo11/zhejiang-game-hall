
void FUN_00a785a0(long *param_1,long *param_2)

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
                    /* catch() { ... } // from try @ 00a78480 with catch @ 00a78698
                       catch() { ... } // from try @ 00a78570 with catch @ 00a78698 */
                    /* catch() { ... } // from try @ 00a78454 with catch @ 00a7869c
                       catch() { ... } // from try @ 00a78528 with catch @ 00a7869c */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
                    /* catch() { ... } // from try @ 00a78408 with catch @ 00a786c4 */
                    /* catch() { ... } // from try @ 00a783fc with catch @ 00a786c8 */
                    /* catch() { ... } // from try @ 00a783dc with catch @ 00a786cc */
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
                    /* try { // try from 00a78620 to 00b78733 has its CatchHandler @ 00a78384 */
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else {
      plVar3 = (long *)param_2[4];
                    /* try { // try from 00a785e4 to 00b7861f has its CatchHandler @ 00a786dc */
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
                    /* catch() { ... } // from try @ 00a78414 with catch @ 00a786dc
                       catch() { ... } // from try @ 00a784bc with catch @ 00a786dc
                       catch() { ... } // from try @ 00a785e4 with catch @ 00a786dc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

