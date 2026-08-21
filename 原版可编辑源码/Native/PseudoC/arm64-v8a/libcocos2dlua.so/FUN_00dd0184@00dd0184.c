
void FUN_00dd0184(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* try { // try from 00dd0188 to 00ed019f has its CatchHandler @ 00dd035c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
                    /* try { // try from 00dd01bc to 00ed01c3 has its CatchHandler @ 00dd0318 */
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* try { // try from 00dd0258 to 00ed026f has its CatchHandler @ 00dd0380 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 00dd0270 to 00ed02cf has its CatchHandler @ 00dcfb64 */
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
                    /* try { // try from 00dd01c4 to 00ed0223 has its CatchHandler @ 00dd03b0 */
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
                    /* try { // try from 00dd02d0 to 00ed02d7 has its CatchHandler @ 00dd030c */
                    /* try { // try from 00dd02d8 to 00ed02df has its CatchHandler @ 00dd0308 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dd02e0 to 00ed02e7 has its CatchHandler @ 00dd0304 */
  __stack_chk_fail();
}

