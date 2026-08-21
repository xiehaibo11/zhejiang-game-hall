
/* cocos2d::network::SocketIO::connect(cocos2d::network::SocketIO::SIODelegate&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocos2d::network::SocketIO::connect(SIODelegate *param_1,basic_string *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
                    /* try { // try from 009e6e34 to 00ae6eeb has its CatchHandler @ 009e6bac */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  uStack_38 = 0;
                    /* catch() { ... } // from try @ 009e6cb0 with catch @ 009e6e48
                       catch() { ... } // from try @ 009e6df0 with catch @ 009e6e48 */
  local_30 = 0;
  connect(param_2,param_1,(basic_string *)&local_40);
                    /* catch() { ... } // from try @ 009e6c6c with catch @ 009e6e60 */
                    /* catch() { ... } // from try @ 009e6c18 with catch @ 009e6e64 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 009e6c10 with catch @ 009e6e6c */
                    /* catch() { ... } // from try @ 009e6c04 with catch @ 009e6e74 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009e6c30 with catch @ 009e6e7c */
  __stack_chk_fail();
}

