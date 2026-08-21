
void FUN_009f28fc(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_68,(basic_string *)(param_1 + 0x10));
  plVar2 = *(long **)(lVar3 + 0x50);
  if (plVar2 != (long *)0x0) {
    local_4c = *(undefined4 *)(param_1 + 8);
    local_3c = 0;
    local_48 = "SUCCESS";
    (**(code **)(*plVar2 + 0x30))(plVar2,local_68,&local_3c,&local_48,&local_4c);
  }
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

