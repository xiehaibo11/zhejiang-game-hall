
/* cocos2d::network::SocketIOPacket::createPacketWithType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::network::SocketIOPacket::SocketIOVersion) */

SocketIOPacket *
cocos2d::network::SocketIOPacket::createPacketWithType
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_2)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  SocketIOPacket *unaff_x20;
  
  if (param_2 == 1) {
    unaff_x20 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
    if (unaff_x20 != (SocketIOPacket *)0x0) {
      SocketIOPacketV10x::SocketIOPacketV10x((SocketIOPacketV10x *)unaff_x20);
    }
  }
  else if ((param_2 == 0) &&
          (unaff_x20 = operator_new(0xe0,(nothrow_t *)&std::nothrow),
          unaff_x20 != (SocketIOPacket *)0x0)) {
                    /* try { // try from 009e1d38 to 00ae1e37 has its CatchHandler @ 009e1bcc */
    SocketIOPacket(unaff_x20);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (unaff_x20 + 0x98) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (unaff_x20 + 0x98),(char *)pbVar2,uVar1);
  }
  return unaff_x20;
}

