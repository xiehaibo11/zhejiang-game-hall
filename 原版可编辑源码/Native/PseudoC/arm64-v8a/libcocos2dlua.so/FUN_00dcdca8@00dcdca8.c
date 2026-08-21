
void FUN_00dcdca8(long *param_1,long *param_2)

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
                    /* try { // try from 00dcddac to 00ecddbf has its CatchHandler @ 00dceda0 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 00dcddc4 to 00ecdddb has its CatchHandler @ 00dce97c */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
                    /* try { // try from 00dcdd0c to 00ecdd1b has its CatchHandler @ 00dcee78 */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
                    /* try { // try from 00dcdddc to 00ecddef has its CatchHandler @ 00dce8f8 */
      param_2[4] = (long)param_2;
    }
    else {
                    /* try { // try from 00dcdce4 to 00ecdceb has its CatchHandler @ 00dced60 */
      plVar3 = (long *)param_2[4];
                    /* try { // try from 00dcdcec to 00ecdcf7 has its CatchHandler @ 00dced74 */
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
                    /* try { // try from 00dcddf4 to 00ecde23 has its CatchHandler @ 00dced00 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

