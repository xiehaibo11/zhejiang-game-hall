
/* cocos2d::network::SocketIOPacket::initWithTypeIndex(int) */

void __thiscall
cocos2d::network::SocketIOPacket::initWithTypeIndex(SocketIOPacket *this,int param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(this + 200);
  uVar4 = (ulong)param_1;
  uVar5 = (*(long *)(this + 0xd0) - lVar3 >> 3) * -0x5555555555555555;
  if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009dfed0 to 00adfed7 has its CatchHandler @ 009dff74 */
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
  }
  pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar3 + uVar4 * 0x18);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x98) != pbVar2) {
    lVar3 = lVar3 + uVar4 * 0x18;
                    /* try { // try from 009dfeac to 00adfeb7 has its CatchHandler @ 009dff60 */
    uVar4 = (ulong)((byte)*pbVar2 >> 1);
    pbVar1 = pbVar2 + 1;
    if (((byte)*pbVar2 & 1) != 0) {
      uVar4 = *(ulong *)(lVar3 + 8);
      pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (lVar3 + 0x10);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x98),(char *)pbVar1,uVar4);
  }
  return;
}

