
void FUN_00dc518c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long local_60 [5];
  long local_38;
  
                    /* try { // try from 00dc5190 to 00ec5197 has its CatchHandler @ 00dc5198 */
                    /* catch() { ... } // from try @ 00dc5190 with catch @ 00dc5198
                       try { // try from 00dc5198 to 00ec5307 has its CatchHandler @ 00dc4ab8 */
                    /* catch() { ... } // from try @ 00dc4f68 with catch @ 00dc519c */
                    /* catch() { ... } // from try @ 00dc4ca8 with catch @ 00dc51a0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != param_1) {
    plVar2 = (long *)param_1[4];
                    /* catch() { ... } // from try @ 00dc4cc4 with catch @ 00dc51c0 */
                    /* catch() { ... } // from try @ 00dc4c7c with catch @ 00dc51c4 */
    if (plVar2 == param_1) {
      if ((long *)param_2[4] == param_2) {
                    /* catch() { ... } // from try @ 00dc4b7c with catch @ 00dc524c */
                    /* catch() { ... } // from try @ 00dc4b70 with catch @ 00dc5250 */
        (**(code **)(*plVar2 + 0x18))(plVar2,local_60);
                    /* catch() { ... } // from try @ 00dc501c with catch @ 00dc5260 */
                    /* catch() { ... } // from try @ 00dc4b18 with catch @ 00dc5264 */
                    /* catch() { ... } // from try @ 00dc4b04 with catch @ 00dc5268 */
        (**(code **)(*(long *)param_1[4] + 0x20))();
        param_1[4] = 0;
                    /* catch() { ... } // from try @ 00dc4dbc with catch @ 00dc5278 */
                    /* catch() { ... } // from try @ 00dc4fd4 with catch @ 00dc527c */
                    /* catch() { ... } // from try @ 00dc4c5c with catch @ 00dc5280 */
        (**(code **)(*(long *)param_2[4] + 0x18))((long *)param_2[4],param_1);
                    /* catch() { ... } // from try @ 00dc4d28 with catch @ 00dc5284 */
        (**(code **)(*(long *)param_2[4] + 0x20))();
                    /* catch() { ... } // from try @ 00dc4e14 with catch @ 00dc5294 */
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
                    /* catch() { ... } // from try @ 00dc4e58 with catch @ 00dc51c8 */
      plVar3 = (long *)param_2[4];
                    /* catch() { ... } // from try @ 00dc4dfc with catch @ 00dc51cc */
                    /* catch() { ... } // from try @ 00dc4fa8 with catch @ 00dc51d0 */
      if (param_2 == plVar3) {
                    /* catch() { ... } // from try @ 00dc4d80 with catch @ 00dc5220 */
                    /* catch() { ... } // from try @ 00dc4b48 with catch @ 00dc5224 */
        (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        (**(code **)(*(long *)param_2[4] + 0x20))();
        param_2[4] = param_1[4];
                    /* catch() { ... } // from try @ 00dc4b94 with catch @ 00dc5244 */
        param_1[4] = (long)param_1;
                    /* catch() { ... } // from try @ 00dc4b88 with catch @ 00dc5248 */
      }
      else {
        param_1[4] = (long)plVar3;
        param_2[4] = (long)plVar2;
      }
    }
  }
                    /* catch() { ... } // from try @ 00dc4c0c with catch @ 00dc52c4 */
                    /* catch() { ... } // from try @ 00dc4bd4 with catch @ 00dc52c8 */
                    /* catch() { ... } // from try @ 00dc4c38 with catch @ 00dc52cc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

