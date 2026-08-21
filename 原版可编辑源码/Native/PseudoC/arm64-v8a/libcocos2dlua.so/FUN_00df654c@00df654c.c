
void FUN_00df654c(long param_1,int *param_2)

{
  long lVar1;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00df6560 to 00ef6563 has its CatchHandler @ 00df66bc */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00df6564 to 00ef66fb has its CatchHandler @ 00df6338 */
  local_2c = *param_2;
  std::__ndk1::list<int,std::__ndk1::allocator<int>>::remove
            ((list<int,std::__ndk1::allocator<int>> *)(*(long *)(param_1 + 8) + 0x10),&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

