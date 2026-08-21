
void FUN_010ed444(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x18))(param_1,auStack_f0);
                    /* try { // try from 010ed478 to 011ed597 has its CatchHandler @ 010ed478
                       catch() { ... } // from try @ 010ed478 with catch @ 010ed478
                       catch() { ... } // from try @ 010ed5f8 with catch @ 010ed478 */
  iVar2 = fprintf((FILE *)pthread_rwlock_tryrdlock,"%s\n",auStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

