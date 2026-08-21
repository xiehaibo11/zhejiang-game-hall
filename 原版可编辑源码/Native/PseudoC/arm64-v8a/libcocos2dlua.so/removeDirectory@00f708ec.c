
/* cocos2d::FileUtils::removeDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

uint cocos2d::FileUtils::removeDirectory(basic_string *param_1)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  char *in_x1;
  basic_string *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  char *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"rm -r ");
  std::__ndk1::operator+((__ndk1 *)0x1447f53,in_x1,in_x2);
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(local_78,"\"",1);
  local_50 = (char *)puVar5[2];
  uStack_58 = puVar5[1];
  local_60 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  uVar1 = local_60 >> 1 & 0x7f;
  pcVar2 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    uVar1 = uStack_58;
    pcVar2 = local_50;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(local_40,pcVar2,uVar1);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pcVar2 = (char *)((ulong)local_40 | 1);
  if (((byte)local_40[0] & 1) != 0) {
    pcVar2 = local_30;
  }
  uVar4 = system(pcVar2);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ~uVar4 >> 0x1f;
}

