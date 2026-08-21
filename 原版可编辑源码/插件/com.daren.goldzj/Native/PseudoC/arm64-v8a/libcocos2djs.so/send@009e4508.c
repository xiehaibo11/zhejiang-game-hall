
/* cocos2d::network::SIOClientImpl::send(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::network::SIOClientImpl::send
          (SIOClientImpl *this,basic_string *param_1,basic_string *param_2)

{
  ulong *puVar1;
  basic_string *pbVar2;
  long lVar3;
  SocketIOPacket *pSVar4;
  void *__src;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  basic_string local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  void *local_60;
  long local_58;
  
                    /* try { // try from 009e4520 to 00ae4573 has its CatchHandler @ 009e4520
                       catch() { ... } // from try @ 009e4520 with catch @ 009e4520
                       catch() { ... } // from try @ 009e462c with catch @ 009e4520 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x16c) == 1) {
    uStack_67 = 0;
    local_60 = (void *)0x0;
    local_70 = (basic_string)0xe;
    uStack_6f = 0x6567617373656d;
    uStack_68 = 0;
    emit(this,param_1,&local_70,param_2);
    if (((byte)local_70 & 1) != 0) {
                    /* try { // try from 009e462c to 00ae468b has its CatchHandler @ 009e4520 */
      operator_delete(local_60);
    }
    goto LAB_009e46c8;
  }
  if (*(int *)(this + 0x16c) != 0) goto LAB_009e46c8;
  uStack_67 = 0;
  local_60 = (void *)0x0;
  local_70 = (basic_string)0xe;
  uStack_6f = 0x6567617373656d;
  uStack_68 = 0;
                    /* try { // try from 009e4574 to 00ae457f has its CatchHandler @ 009e4668 */
  pSVar4 = (SocketIOPacket *)SocketIOPacket::createPacketWithType(&local_70,0);
                    /* try { // try from 009e4580 to 00ae4587 has its CatchHandler @ 009e4664 */
  if (((byte)local_70 & 1) != 0) {
                    /* try { // try from 009e4588 to 00ae462b has its CatchHandler @ 009e4670 */
    operator_delete(local_60);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pSVar4 + 0x68) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar5 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar5 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pSVar4 + 0x68),(char *)pbVar2,uVar5);
  }
  puVar1 = *(ulong **)(pSVar4 + 0x58);
  if (puVar1 == *(ulong **)(pSVar4 + 0x60)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(pSVar4 + 0x50),param_2);
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    if (((byte)*param_2 & 1) == 0) {
      uVar6 = *(ulong *)(param_2 + 8);
      uVar5 = *(ulong *)param_2;
      puVar1[2] = *(ulong *)(param_2 + 0x10);
      puVar1[1] = uVar6;
      *puVar1 = uVar5;
    }
    else {
      uVar5 = *(ulong *)(param_2 + 8);
      if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 009e46f8 to 00ae4707 has its CatchHandler @ 009e4904 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      __src = *(void **)(param_2 + 0x10);
      if (uVar5 < 0x17) {
        __dest = (void *)((long)puVar1 + 1);
        *(char *)puVar1 = (char)((int)uVar5 << 1);
                    /* catch() { ... } // from try @ 009e4580 with catch @ 009e4664 */
        if (uVar5 != 0) goto LAB_009e468c;
      }
      else {
                    /* catch() { ... } // from try @ 009e4588 with catch @ 009e4670 */
        uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
        __dest = operator_new(uVar6);
        puVar1[1] = uVar5;
        puVar1[2] = (ulong)__dest;
        *puVar1 = uVar6 | 1;
LAB_009e468c:
                    /* try { // try from 009e468c to 00ae46e3 has its CatchHandler @ 009e468c
                       catch() { ... } // from try @ 009e468c with catch @ 009e468c
                       catch() { ... } // from try @ 009e4884 with catch @ 009e468c */
        memcpy(__dest,__src,uVar5);
      }
      *(undefined1 *)((long)__dest + uVar5) = 0;
    }
    *(long *)(pSVar4 + 0x58) = *(long *)(pSVar4 + 0x58) + 0x18;
  }
  send(this,pSVar4);
  (**(code **)(*(long *)pSVar4 + 8))(pSVar4);
LAB_009e46c8:
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 009e46e4 to 00ae46eb has its CatchHandler @ 009e4914 */
                    /* try { // try from 009e46f0 to 00ae46f7 has its CatchHandler @ 009e490c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

