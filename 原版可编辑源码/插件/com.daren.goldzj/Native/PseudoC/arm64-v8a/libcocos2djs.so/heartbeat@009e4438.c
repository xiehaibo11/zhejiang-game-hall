
/* cocos2d::network::SIOClientImpl::heartbeat(float) */

void cocos2d::network::SIOClientImpl::heartbeat(float param_1)

{
  long lVar1;
  SIOClientImpl *in_x0;
  SocketIOPacket *pSVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  local_50[0] = 0x12;
  local_40 = (void *)0x0;
  local_50[9] = 0x74;
  local_50[10] = 0;
  local_50[1] = 0x68;
  local_50[2] = 0x65;
  local_50[3] = 0x61;
  local_50[4] = 0x72;
  local_50[5] = 0x74;
  local_50[6] = 0x62;
  local_50[7] = 0x65;
  local_50[8] = 0x61;
  pSVar2 = (SocketIOPacket *)
           SocketIOPacket::createPacketWithType(local_50,*(undefined4 *)(in_x0 + 0x16c));
                    /* catch() { ... } // from try @ 009e42e0 with catch @ 009e4494 */
                    /* catch() { ... } // from try @ 009e428c with catch @ 009e4498 */
  if ((local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 009e4284 with catch @ 009e44a0 */
    operator_delete(local_40);
  }
                    /* catch() { ... } // from try @ 009e4278 with catch @ 009e44a8 */
  send(in_x0,pSVar2);
                    /* catch() { ... } // from try @ 009e42a4 with catch @ 009e44b0 */
  if (pSVar2 != (SocketIOPacket *)0x0) {
                    /* catch() { ... } // from try @ 009e42f0 with catch @ 009e44c0 */
    (**(code **)(*(long *)pSVar2 + 8))(pSVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

