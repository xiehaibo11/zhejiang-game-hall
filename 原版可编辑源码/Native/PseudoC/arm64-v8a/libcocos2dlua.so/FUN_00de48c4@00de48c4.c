
void FUN_00de48c4(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* catch() { ... } // from try @ 00de3458 with catch @ 00de48cc */
                    /* catch() { ... } // from try @ 00de3448 with catch @ 00de48d0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00de3438 with catch @ 00de48e0 */
  if (param_2 != param_1) {
                    /* catch() { ... } // from try @ 00de3428 with catch @ 00de48f0 */
    plVar2 = (long *)param_1[4];
    if (plVar2 == param_1) {
                    /* catch() { ... } // from try @ 00de33f8 with catch @ 00de4920 */
      if ((long *)param_2[4] == param_2) {
                    /* catch() { ... } // from try @ 00de3818 with catch @ 00de4984
                       catch() { ... } // from try @ 00de42ac with catch @ 00de4984 */
                    /* catch() { ... } // from try @ 00de35e0 with catch @ 00de4988
                       catch() { ... } // from try @ 00de42c0 with catch @ 00de4988 */
                    /* catch() { ... } // from try @ 00de3e4c with catch @ 00de498c
                       catch() { ... } // from try @ 00de42d4 with catch @ 00de498c */
                    /* catch() { ... } // from try @ 00de3ffc with catch @ 00de4990 */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
        (**(code **)(*(long *)param_1[4] + 0x20))();
                    /* catch() { ... } // from try @ 00de3e04 with catch @ 00de49a4 */
        param_1[4] = 0;
                    /* catch() { ... } // from try @ 00de3b5c with catch @ 00de49a8 */
                    /* catch() { ... } // from try @ 00de39c0 with catch @ 00de49ac */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
                    /* catch() { ... } // from try @ 00de3788 with catch @ 00de49c0 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = 0;
        param_1[4] = (long)param_1;
                    /* catch() { ... } // from try @ 00de3dcc with catch @ 00de49d4 */
        (**(code **)(local_60[0] + 0x18))(local_60,param_2);
                    /* catch() { ... } // from try @ 00de4188 with catch @ 00de49f4 */
        (**(code **)(local_60[0] + 0x20))(local_60);
      }
      else {
                    /* catch() { ... } // from try @ 00de33e8 with catch @ 00de4930 */
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
                    /* catch() { ... } // from try @ 00de33d8 with catch @ 00de4940 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = param_2[4];
      }
                    /* catch() { ... } // from try @ 00de3f6c with catch @ 00de49f8 */
      param_2[4] = (long)param_2;
    }
    else {
                    /* catch() { ... } // from try @ 00de3418 with catch @ 00de4900 */
      plVar3 = (long *)param_2[4];
      if (param_2 == plVar3) {
                    /* catch() { ... } // from try @ 00de33c8 with catch @ 00de4950 */
                    /* catch() { ... } // from try @ 00de33b8 with catch @ 00de4960 */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
                    /* catch() { ... } // from try @ 00de33a8 with catch @ 00de4970 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
        param_1[4] = (long)param_1;
                    /* catch() { ... } // from try @ 00de3398 with catch @ 00de4980 */
      }
      else {
        param_1[4] = (long)plVar3;
                    /* catch() { ... } // from try @ 00de3408 with catch @ 00de4910 */
        param_2[4] = (long)plVar2;
      }
    }
  }
                    /* catch() { ... } // from try @ 00de3930 with catch @ 00de49fc */
                    /* catch() { ... } // from try @ 00de3d3c with catch @ 00de4a00 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00de36f8 with catch @ 00de4a20 */
  __stack_chk_fail();
}

