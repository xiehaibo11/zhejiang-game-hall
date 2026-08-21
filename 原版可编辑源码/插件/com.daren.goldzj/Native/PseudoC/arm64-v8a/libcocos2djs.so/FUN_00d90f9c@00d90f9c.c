
void FUN_00d90f9c(long *param_1)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x18))(param_1,auStack_f0);
  iVar2 = fprintf((FILE *)__cxa_thread_atexit_impl,"%s\n",auStack_f0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

