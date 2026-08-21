
/* cocos2d::network::SocketIOPacket::createPacketWithTypeIndex(int,
   cocos2d::network::SocketIOPacket::SocketIOVersion) */

SocketIOPacket *
cocos2d::network::SocketIOPacket::createPacketWithTypeIndex(int param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  SocketIOPacket *unaff_x19;
  
                    /* catch() { ... } // from try @ 009e1c50 with catch @ 009e1dc8 */
  if (param_2 == 1) {
    unaff_x19 = operator_new(0xf8,(nothrow_t *)&std::nothrow);
    if (unaff_x19 != (SocketIOPacket *)0x0) {
      SocketIOPacketV10x::SocketIOPacketV10x((SocketIOPacketV10x *)unaff_x19);
    }
  }
  else {
                    /* catch() { ... } // from try @ 009e1c44 with catch @ 009e1dcc */
                    /* catch() { ... } // from try @ 009e1c24 with catch @ 009e1dd0 */
                    /* catch() { ... } // from try @ 009e1ccc with catch @ 009e1de0 */
    if ((param_2 == 0) &&
       (unaff_x19 = operator_new(0xe0,(nothrow_t *)&std::nothrow),
       unaff_x19 != (SocketIOPacket *)0x0)) {
      SocketIOPacket(unaff_x19);
    }
    lVar2 = *(long *)(unaff_x19 + 200);
    uVar3 = (ulong)param_1;
    uVar4 = (*(long *)(unaff_x19 + 0xd0) - lVar2 >> 3) * -0x5555555555555555;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar2 + uVar3 * 0x18);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (unaff_x19 + 0x98) != pbVar5) {
                    /* try { // try from 009e1e38 to 00ae1e93 has its CatchHandler @ 009e1e38
                       catch() { ... } // from try @ 009e1e38 with catch @ 009e1e38
                       catch() { ... } // from try @ 009e21c4 with catch @ 009e1e38 */
      lVar2 = lVar2 + uVar3 * 0x18;
      uVar3 = (ulong)((byte)*pbVar5 >> 1);
      pbVar1 = pbVar5 + 1;
      if (((byte)*pbVar5 & 1) != 0) {
        uVar3 = *(ulong *)(lVar2 + 8);
        pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(lVar2 + 0x10);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (unaff_x19 + 0x98),(char *)pbVar1,uVar3);
    }
  }
  return unaff_x19;
}

