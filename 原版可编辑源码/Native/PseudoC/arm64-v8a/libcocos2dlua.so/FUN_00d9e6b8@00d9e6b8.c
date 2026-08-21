
void FUN_00d9e6b8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00d9e6d4 to 00e9e6df has its CatchHandler @ 00d9f2f8 */
  local_30 = *(undefined8 *)(*param_2 + 0x38);
  plVar2 = *(long **)(param_1 + 0x30);
                    /* try { // try from 00d9e6e4 to 00e9e6eb has its CatchHandler @ 00d9f2ec */
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
                    /* try { // try from 00d9e6ec to 00e9e6f3 has its CatchHandler @ 00d9f2f0 */
                    /* try { // try from 00d9e6f4 to 00e9e6fb has its CatchHandler @ 00d9f2f4 */
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00d9e710 to 00e9e717 has its CatchHandler @ 00d9f314 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

