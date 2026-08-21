
/* cocos2d::network::SocketIOPacket::initWithType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::SocketIOPacket::initWithType(SocketIOPacket *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x98) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
                    /* try { // try from 009dfe28 to 00adfeab has its CatchHandler @ 009dfe28
                       catch() { ... } // from try @ 009dfe28 with catch @ 009dfe28
                       catch() { ... } // from try @ 009dfed8 with catch @ 009dfe28 */
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x98),(char *)pbVar2,uVar1);
  }
  return;
}

