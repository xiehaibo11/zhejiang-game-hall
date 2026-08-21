
/* cocos2d::network::SIOClientImpl::connectToEndpoint(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::SIOClientImpl::connectToEndpoint(SIOClientImpl *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  SocketIOPacket *pSVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_40 = (void *)0x0;
  local_50[0] = 0xe;
  local_50[1] = 99;
  local_50[2] = 0x6f;
  local_50[3] = 0x6e;
  local_50[4] = 0x6e;
  local_50[5] = 0x65;
  local_50[6] = 99;
  local_50[7] = 0x74;
  local_50[8] = 0;
  pSVar4 = (SocketIOPacket *)
           SocketIOPacket::createPacketWithType(local_50,*(undefined4 *)(this + 0x16c));
                    /* try { // try from 009e3fac to 00ae40b3 has its CatchHandler @ 009e3db4 */
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pSVar4 + 0x68) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pSVar4 + 0x68),(char *)pbVar2,uVar1);
  }
  send(this,pSVar4);
  if (pSVar4 != (SocketIOPacket *)0x0) {
    (**(code **)(*(long *)pSVar4 + 8))(pSVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009e3e74 with catch @ 009e4028 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009e3e20 with catch @ 009e402c */
  __stack_chk_fail();
}

