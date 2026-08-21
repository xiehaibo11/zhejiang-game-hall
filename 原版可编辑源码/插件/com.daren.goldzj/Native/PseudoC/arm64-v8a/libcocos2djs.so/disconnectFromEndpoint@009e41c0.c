
/* cocos2d::network::SIOClientImpl::disconnectFromEndpoint(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::network::SIOClientImpl::disconnectFromEndpoint(basic_string *param_1)

{
  basic_string bVar1;
  long lVar2;
  basic_string *in_x1;
  basic_string *in_x2;
  basic_string *pbVar3;
  basic_string *__n;
  void *__src;
  void *__dest;
  basic_string local_88 [16];
  void *local_78;
  ulong local_70;
  basic_string *pbStack_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 009e41c0 to 00ae421f has its CatchHandler @ 009e40b4 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 400) == 1) {
LAB_009e41f8:
                    /* catch() { ... } // from try @ 009e4114 with catch @ 009e41f8 */
                    /* catch() { ... } // from try @ 009e4108 with catch @ 009e41fc */
    if (param_1[0x168] != (basic_string)0x0) {
                    /* catch() { ... } // from try @ 009e411c with catch @ 009e4204 */
      disconnect((SIOClientImpl *)param_1);
    }
    goto LAB_009e4314;
  }
  bVar1 = *in_x1;
  __n = *(basic_string **)(in_x1 + 8);
  pbVar3 = (basic_string *)(ulong)((byte)bVar1 >> 1);
                    /* try { // try from 009e4220 to 00ae4277 has its CatchHandler @ 009e4220
                       catch() { ... } // from try @ 009e4220 with catch @ 009e4220
                       catch() { ... } // from try @ 009e4418 with catch @ 009e4220 */
  if (((byte)bVar1 & 1) != 0) {
    pbVar3 = __n;
  }
  if (pbVar3 == (basic_string *)0x1) {
    pbVar3 = *(basic_string **)(in_x1 + 0x10);
    if (((byte)bVar1 & 1) == 0) {
      pbVar3 = in_x1 + 1;
    }
    if (*pbVar3 == (basic_string)0x2f) goto LAB_009e41f8;
  }
  local_70 = 0;
  pbStack_68 = (basic_string *)0x0;
  local_60 = (void *)0x0;
  if (((byte)bVar1 & 1) == 0) {
    local_60 = *(void **)(in_x1 + 0x10);
    pbStack_68 = *(basic_string **)(in_x1 + 8);
    local_70 = *(ulong *)in_x1;
  }
  else {
    if ((basic_string *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    __src = *(void **)(in_x1 + 0x10);
                    /* try { // try from 009e4278 to 00ae427f has its CatchHandler @ 009e44a8 */
    if (__n < (basic_string *)0x17) {
                    /* try { // try from 009e4284 to 00ae428b has its CatchHandler @ 009e44a0 */
      __dest = (void *)((ulong)&local_70 | 1);
      local_70 = (ulong)(byte)((int)__n << 1);
                    /* try { // try from 009e428c to 00ae429b has its CatchHandler @ 009e4498 */
      if (__n != (basic_string *)0x0) goto LAB_009e42b4;
    }
    else {
      __dest = operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
                    /* try { // try from 009e42a4 to 00ae42df has its CatchHandler @ 009e44b0 */
      local_70 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
      pbStack_68 = __n;
      local_60 = __dest;
LAB_009e42b4:
      in_x2 = __n;
      memcpy(__dest,__src,(size_t)__n);
    }
    *(basic_string *)((long)__dest + (long)__n) = (basic_string)0x0;
  }
  std::__ndk1::operator+((__ndk1 *)&DAT_0188cf03,(char *)&local_70,in_x2);
                    /* try { // try from 009e42e0 to 00ae42ef has its CatchHandler @ 009e4494 */
  WebSocket::send(*(WebSocket **)(param_1 + 0x170),local_88);
                    /* try { // try from 009e42f0 to 00ae4417 has its CatchHandler @ 009e44c0 */
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
  ::erase((Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::network::SIOClient*>
           *)(param_1 + 0x178),in_x1);
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_009e4314:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

