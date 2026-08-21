
/* cocos2d::Node::setName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Node::setName(Node *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  undefined8 uVar4;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_40 [8];
  long local_38;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00f23f4c to 0102444b has its CatchHandler @ 00f23f4c
                       catch() { ... } // from try @ 00f23f4c with catch @ 00f23f4c
                       catch() { ... } // from try @ 00f2445c with catch @ 00f23f4c */
  local_38 = *(long *)(lVar3 + 0x28);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x1a8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x1a8),(char *)pbVar2,uVar1);
  }
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_40,pbVar2,uVar1);
  *(undefined8 *)(this + 0x1c0) = uVar4;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

