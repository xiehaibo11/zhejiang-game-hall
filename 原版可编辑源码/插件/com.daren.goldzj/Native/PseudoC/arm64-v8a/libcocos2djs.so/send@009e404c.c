
/* cocos2d::network::SIOClientImpl::send(cocos2d::network::SocketIOPacket*) */

void __thiscall cocos2d::network::SIOClientImpl::send(SIOClientImpl *this,SocketIOPacket *param_1)

{
  char *__s;
  long lVar1;
  size_t __n;
  WebSocket *this_00;
  void *__dest;
  ulong uVar2;
  ulong local_78;
  size_t local_70;
  void *local_68;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 009e3e84 with catch @ 009e4054 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  SocketIOPacket::toString(param_1);
  if (this[0x168] == (SIOClientImpl)0x0) goto LAB_009e4130;
  this_00 = *(WebSocket **)(this + 0x170);
  __s = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    __s = local_50;
  }
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  __n = strlen(__s);
                    /* try { // try from 009e40b4 to 00ae4107 has its CatchHandler @ 009e40b4
                       catch() { ... } // from try @ 009e40b4 with catch @ 009e40b4
                       catch() { ... } // from try @ 009e41c0 with catch @ 009e40b4 */
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_009e4100;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_78 = uVar2 | 1;
    local_70 = __n;
    local_68 = __dest;
LAB_009e4100:
                    /* try { // try from 009e4108 to 00ae4113 has its CatchHandler @ 009e41fc */
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 009e4114 to 00ae411b has its CatchHandler @ 009e41f8 */
                    /* try { // try from 009e411c to 00ae41bf has its CatchHandler @ 009e4204 */
  WebSocket::send(this_00,(basic_string *)&local_78);
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_009e4130:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

