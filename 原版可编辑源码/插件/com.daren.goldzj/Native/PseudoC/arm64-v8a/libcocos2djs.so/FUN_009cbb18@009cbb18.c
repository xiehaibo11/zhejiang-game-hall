
void FUN_009cbb18(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* catch() { ... } // from try @ 009cb93c with catch @ 009cbb1c */
                    /* catch() { ... } // from try @ 009cb888 with catch @ 009cbb2c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
                    /* catch() { ... } // from try @ 009cb850 with catch @ 009cbb44 */
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
                    /* catch() { ... } // from try @ 009cb788 with catch @ 009cbb6c
                       catch() { ... } // from try @ 009cba70 with catch @ 009cbb6c */
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 009cbc08 to 00acbc3f has its CatchHandler @ 009cbc70 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
                    /* try { // try from 009cbc40 to 00acbc83 has its CatchHandler @ 009cbbc4 */
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
                    /* catch() { ... } // from try @ 009cb77c with catch @ 009cbb54 */
      plVar3 = (long *)param_2[4];
                    /* catch() { ... } // from try @ 009cb770 with catch @ 009cbb58 */
                    /* catch() { ... } // from try @ 009cb750 with catch @ 009cbb5c */
      if (param_2 == plVar3) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
                    /* try { // try from 009cbbc4 to 00acbc07 has its CatchHandler @ 009cbbc4
                       catch() { ... } // from try @ 009cbbc4 with catch @ 009cbbc4
                       catch() { ... } // from try @ 009cbc40 with catch @ 009cbbc4 */
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
                    /* catch() { ... } // from try @ 009cbc08 with catch @ 009cbc70 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

