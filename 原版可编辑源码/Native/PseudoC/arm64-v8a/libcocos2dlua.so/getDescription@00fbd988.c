
/* cocos2d::Value::getDescription() const */

void cocos2d::Value::getDescription(void)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,"\n");
  FUN_00fbda7c(local_50);
  uVar1 = (ulong)(local_50[0] >> 1);
  pcVar3 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    uVar1 = local_48;
    pcVar3 = local_40;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(in_x8,pcVar3,uVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

