
/* cocostudio::timeline::EventFrame::clone() */

long * __thiscall cocostudio::timeline::EventFrame::clone(EventFrame *this)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)create();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_50,(basic_string *)(this + 0x58));
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (plVar4 + 0xb) != local_50) {
    uVar1 = (ulong)((byte)local_50[0] >> 1);
    pcVar3 = (char *)((ulong)local_50 | 1);
    if (((byte)local_50[0] & 1) != 0) {
      uVar1 = local_48;
      pcVar3 = local_40;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (plVar4 + 0xb),pcVar3,uVar1);
  }
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  (**(code **)(*plVar4 + 0xa8))(plVar4,this);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar4;
}

