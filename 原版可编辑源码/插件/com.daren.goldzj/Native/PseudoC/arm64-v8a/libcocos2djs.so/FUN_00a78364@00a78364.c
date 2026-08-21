
void FUN_00a78364(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a78384 to 00b783db has its CatchHandler @ 00a78384
                       catch() { ... } // from try @ 00a78384 with catch @ 00a78384
                       catch() { ... } // from try @ 00a78620 with catch @ 00a78384 */
  iVar1 = *(int *)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 8);
  if (iVar1 == 4) {
    plVar3 = (long *)plVar3[0x10];
    if (plVar3 == (long *)0x0) goto LAB_00a783f4;
    local_2c = 4;
  }
  else {
    if (iVar1 != 5) {
                    /* try { // try from 00a783dc to 00b783f3 has its CatchHandler @ 00a786cc */
      if ((plVar3 != (long *)0x0) && (iVar1 == 6)) {
        (**(code **)(*plVar3 + 8))();
      }
      goto LAB_00a783f4;
    }
    if ((*(int *)(param_1 + 0x14) == 4) || (plVar3 = (long *)plVar3[0x10], plVar3 == (long *)0x0))
    goto LAB_00a783f4;
    local_2c = 5;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_2c);
LAB_00a783f4:
                    /* try { // try from 00a783fc to 00b78407 has its CatchHandler @ 00a786c8 */
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* try { // try from 00a78408 to 00b78413 has its CatchHandler @ 00a786c4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a78414 to 00b7842b has its CatchHandler @ 00a786dc */
  __stack_chk_fail();
}

