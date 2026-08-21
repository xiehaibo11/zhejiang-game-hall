
/* cocos2d::network::SocketIOPacket::typeForIndex(int) const */

long __thiscall cocos2d::network::SocketIOPacket::typeForIndex(SocketIOPacket *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)param_1;
  uVar2 = (*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3) * -0x5555555555555555;
                    /* try { // try from 009e0698 to 00ae069f has its CatchHandler @ 009e0790 */
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
                    /* try { // try from 009e06a0 to 00ae071f has its CatchHandler @ 009e0600 */
    return *(long *)(this + 200) + uVar1 * 0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

