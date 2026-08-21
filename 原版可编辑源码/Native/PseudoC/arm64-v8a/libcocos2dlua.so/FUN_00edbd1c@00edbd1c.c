
void FUN_00edbd1c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* try { // try from 00edbd24 to 00fdbd2f has its CatchHandler @ 00edbff4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
                    /* try { // try from 00edbd48 to 00fdbd57 has its CatchHandler @ 00edbfdc */
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* try { // try from 00edbdf8 to 00fdbe07 has its CatchHandler @ 00edbfd8 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* try { // try from 00edbe08 to 00fdbe23 has its CatchHandler @ 00edc020 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* try { // try from 00edbe30 to 00fdbe53 has its CatchHandler @ 00edc01c */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
                    /* try { // try from 00edbd80 to 00fdbda3 has its CatchHandler @ 00edc03c */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
      param_2[4] = (long)param_2;
    }
    else {
                    /* try { // try from 00edbd58 to 00fdbd73 has its CatchHandler @ 00edc024 */
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
                    /* try { // try from 00edbdc4 to 00fdbdd3 has its CatchHandler @ 00edbff0 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
                    /* try { // try from 00edbdd4 to 00fdbddf has its CatchHandler @ 00edbfec */
        param_1[4] = (long)param_1;
      }
      else {
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00edbe74 to 00fdbe7f has its CatchHandler @ 00edbfe8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

