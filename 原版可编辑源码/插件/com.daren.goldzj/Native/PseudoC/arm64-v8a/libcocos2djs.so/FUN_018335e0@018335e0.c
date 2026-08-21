
void FUN_018335e0(long param_1,__shared_count *param_2)

{
  long lVar1;
  __shared_count *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  if (*(undefined8 **)(param_1 + 8) == *(undefined8 **)(param_1 + 0x10)) {
    FUN_018338d0(param_1,&local_30);
  }
  else {
    **(undefined8 **)(param_1 + 8) = param_2;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
  }
  std::__ndk1::__shared_count::__add_shared(local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

