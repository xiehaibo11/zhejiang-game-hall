
void FUN_00fa7ab4(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long local_38;
  long lStack_30;
  long local_28;
  
                    /* try { // try from 00fa7ab8 to 010a7abf has its CatchHandler @ 00fa7ac4 */
                    /* try { // try from 00fa7ac0 to 010a7ba7 has its CatchHandler @ 00fa75b0 */
                    /* catch() { ... } // from try @ 00fa7ab8 with catch @ 00fa7ac4 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00fa7ab0 with catch @ 00fa7ac8 */
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
                    /* catch() { ... } // from try @ 00fa7a6c with catch @ 00fa7ad8 */
  lStack_30 = local_38 + 0x38;
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xc0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
                    /* catch() { ... } // from try @ 00fa76a4 with catch @ 00fa7af0 */
  (**(code **)(*plVar2 + 0x30))(plVar2,&lStack_30,&local_38);
                    /* catch() { ... } // from try @ 00fa7680 with catch @ 00fa7b00 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00fa7980 with catch @ 00fa7b18 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

