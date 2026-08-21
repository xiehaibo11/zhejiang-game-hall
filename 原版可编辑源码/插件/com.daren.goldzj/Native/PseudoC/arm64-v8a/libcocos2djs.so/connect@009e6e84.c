
/* cocos2d::network::SocketIO::connect(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::network::SocketIO::SIODelegate&) */

void cocos2d::network::SocketIO::connect(basic_string *param_1,SIODelegate *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 009e6c7c with catch @ 009e6e8c
                       catch() { ... } // from try @ 009e6ce4 with catch @ 009e6e8c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  connect(param_1,param_2,(basic_string *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

