
void FUN_00de4a2c(long *param_1,long *param_2)

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
                    /* catch() { ... } // from try @ 00de3610 with catch @ 00de4aec */
                    /* catch() { ... } // from try @ 00de3630 with catch @ 00de4af0 */
                    /* catch() { ... } // from try @ 00de3848 with catch @ 00de4af4 */
                    /* catch() { ... } // from try @ 00de3868 with catch @ 00de4af8 */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* catch() { ... } // from try @ 00de3c54 with catch @ 00de4afc */
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
                    /* catch() { ... } // from try @ 00de3a94 with catch @ 00de4aa4 */
                    /* catch() { ... } // from try @ 00de3a74 with catch @ 00de4aa8 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
                    /* catch() { ... } // from try @ 00de43fc with catch @ 00de4aac */
                    /* catch() { ... } // from try @ 00de4350 with catch @ 00de4ab0 */
        param_1[4] = param_2[4];
                    /* catch() { ... } // from try @ 00de40c0 with catch @ 00de4ab4 */
      }
      param_2[4] = (long)param_2;
    }
    else {
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
                    /* catch() { ... } // from try @ 00de40a0 with catch @ 00de4ab8 */
                    /* catch() { ... } // from try @ 00de3ea4 with catch @ 00de4abc */
                    /* catch() { ... } // from try @ 00de3e84 with catch @ 00de4ac0 */
                    /* catch() { ... } // from try @ 00de3540 with catch @ 00de4ac4 */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
                    /* catch() { ... } // from try @ 00de30b8 with catch @ 00de4ad4 */
                    /* catch() { ... } // from try @ 00de30d8 with catch @ 00de4ad8 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
        param_1[4] = (long)param_1;
                    /* catch() { ... } // from try @ 00de3c74 with catch @ 00de4ae8 */
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

