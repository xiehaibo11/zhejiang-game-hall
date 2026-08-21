
/* cocos2d::network::SIOClientImpl::emit(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::SIOClientImpl::emit
          (SIOClientImpl *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  ulong *puVar1;
  basic_string bVar2;
  long lVar3;
  SocketIOPacket *pSVar4;
  basic_string *pbVar5;
  void *pvVar6;
  void *__dest;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009e474c to 00ae475b has its CatchHandler @ 009e4900 */
                    /* try { // try from 009e475c to 00ae4883 has its CatchHandler @ 009e492c */
  uStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0x746e6576650a;
  pSVar4 = (SocketIOPacket *)
           SocketIOPacket::createPacketWithType(&local_80,*(undefined4 *)(this + 0x16c));
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  bVar2 = *param_1;
  uVar7 = *(ulong *)(param_1 + 8);
  uVar8 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar8 = uVar7;
  }
  if (uVar8 == 1) {
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    if (*pbVar5 != (basic_string)0x2f) goto LAB_009e47e4;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (char *)0x0;
  }
  else {
LAB_009e47e4:
    local_80 = 0;
    uStack_78 = 0;
    local_70 = (char *)0x0;
    if (((byte)bVar2 & 1) == 0) {
      local_70 = *(char **)(param_1 + 0x10);
      uStack_78 = *(ulong *)(param_1 + 8);
      local_80 = *(ulong *)param_1;
    }
    else {
      if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar6 = *(void **)(param_1 + 0x10);
      if (uVar7 < 0x17) {
        pcVar9 = (char *)((ulong)&local_80 | 1);
        local_80 = (ulong)(byte)((int)uVar7 << 1);
        if (uVar7 != 0) goto LAB_009e4850;
      }
      else {
        uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
        pcVar9 = operator_new(uVar8);
        local_80 = uVar8 | 1;
        uStack_78 = uVar7;
        local_70 = pcVar9;
LAB_009e4850:
        memcpy(pcVar9,pvVar6,uVar7);
      }
      pcVar9[uVar7] = '\0';
    }
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pSVar4 + 0x68) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_80) {
                    /* try { // try from 009e4884 to 00ae498b has its CatchHandler @ 009e468c */
    uVar8 = local_80 >> 1 & 0x7f;
    pcVar9 = (char *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar8 = uStack_78;
      pcVar9 = local_70;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pSVar4 + 0x68),pcVar9,uVar8);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pSVar4 + 0x38) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2) {
    uVar8 = *(ulong *)(param_2 + 8);
    pbVar5 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar5 = param_2 + 1;
      uVar8 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pSVar4 + 0x38),(char *)pbVar5,uVar8);
  }
  puVar1 = *(ulong **)(pSVar4 + 0x58);
  if (puVar1 == *(ulong **)(pSVar4 + 0x60)) {
                    /* catch() { ... } // from try @ 009e474c with catch @ 009e4900 */
                    /* catch() { ... } // from try @ 009e46f8 with catch @ 009e4904 */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(pSVar4 + 0x50),param_3);
    goto LAB_009e4974;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (((byte)*param_3 & 1) == 0) {
    uVar7 = *(ulong *)(param_3 + 8);
    uVar8 = *(ulong *)param_3;
    puVar1[2] = *(ulong *)(param_3 + 0x10);
    puVar1[1] = uVar7;
    *puVar1 = uVar8;
  }
  else {
                    /* catch() { ... } // from try @ 009e46f0 with catch @ 009e490c */
    uVar8 = *(ulong *)(param_3 + 8);
                    /* catch() { ... } // from try @ 009e46e4 with catch @ 009e4914 */
    if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar6 = *(void **)(param_3 + 0x10);
                    /* catch() { ... } // from try @ 009e4710 with catch @ 009e491c */
    if (uVar8 < 0x17) {
      __dest = (void *)((long)puVar1 + 1);
      *(char *)puVar1 = (char)((int)uVar8 << 1);
                    /* catch() { ... } // from try @ 009e475c with catch @ 009e492c */
      if (uVar8 != 0) goto LAB_009e4954;
    }
    else {
      uVar7 = uVar8 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      puVar1[1] = uVar8;
      puVar1[2] = (ulong)__dest;
      *puVar1 = uVar7 | 1;
LAB_009e4954:
      memcpy(__dest,pvVar6,uVar8);
    }
    *(undefined1 *)((long)__dest + uVar8) = 0;
  }
  *(long *)(pSVar4 + 0x58) = *(long *)(pSVar4 + 0x58) + 0x18;
LAB_009e4974:
  send(this,pSVar4);
                    /* try { // try from 009e498c to 00ae49df has its CatchHandler @ 009e498c
                       catch() { ... } // from try @ 009e498c with catch @ 009e498c
                       catch() { ... } // from try @ 009e4a98 with catch @ 009e498c */
  (**(code **)(*(long *)pSVar4 + 8))(pSVar4);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

