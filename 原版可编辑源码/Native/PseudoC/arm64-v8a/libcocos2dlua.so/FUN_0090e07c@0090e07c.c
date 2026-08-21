
void FUN_0090e07c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* catch() { ... } // from try @ 0090de58 with catch @ 0090e07c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0090e098 to 00a0e0d3 has its CatchHandler @ 0090e098
                       catch() { ... } // from try @ 0090e098 with catch @ 0090e098
                       catch() { ... } // from try @ 0090e164 with catch @ 0090e098
                       catch() { ... } // from try @ 0090e1ac with catch @ 0090e098 */
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
                    /* try { // try from 0090e0d4 to 00a0e14b has its CatchHandler @ 0090e1f0 */
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* try { // try from 0090e150 to 00a0e163 has its CatchHandler @ 0090e1ec */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 0090e164 to 00a0e197 has its CatchHandler @ 0090e098 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 0090e198 to 00a0e1ab has its CatchHandler @ 0090e1f0 */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
                    /* try { // try from 0090e1ac to 00a0e20b has its CatchHandler @ 0090e098 */
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

