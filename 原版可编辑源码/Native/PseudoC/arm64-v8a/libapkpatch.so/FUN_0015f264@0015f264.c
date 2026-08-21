
void FUN_0015f264(size_t param_1)

{
  long lVar1;
  int iVar2;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar2 = posix_memalign(&local_30,0x10,param_1);
  if (iVar2 != 0) {
    local_30 = (void *)FUN_0015f2d8(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_30);
  }
  return;
}

