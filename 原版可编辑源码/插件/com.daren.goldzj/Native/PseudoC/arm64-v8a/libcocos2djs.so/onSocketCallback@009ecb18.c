
/* WebSocketImpl::onSocketCallback(lws*, lws_callback_reasons, void*, long) */

undefined8 __thiscall
WebSocketImpl::onSocketCallback
          (WebSocketImpl *this,undefined8 param_2,undefined4 param_3,char *param_4,ulong param_5)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __n;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  void *__src;
  ulong local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 009ec8c8 with catch @ 009ecb18
                       catch() { ... } // from try @ 009eca4c with catch @ 009ecb18 */
                    /* catch() { ... } // from try @ 009eca08 with catch @ 009ecb20 */
                    /* catch() { ... } // from try @ 009ec910 with catch @ 009ecb24 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  switch(param_3) {
  case 1:
    onConnectionError(this);
    break;
  case 3:
    onConnectionOpened(this);
    break;
  case 8:
    onClientReceivedData(this,param_4,param_5);
                    /* try { // try from 009ecb8c to 00aecbdf has its CatchHandler @ 009ecb8c
                       catch() { ... } // from try @ 009ecb8c with catch @ 009ecb8c
                       catch() { ... } // from try @ 009ecc28 with catch @ 009ecb8c */
    break;
  case 10:
    uVar3 = onClientWritable(this);
                    /* try { // try from 009ecbe0 to 00aecbf7 has its CatchHandler @ 009eccbc */
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return uVar3;
    }
    goto LAB_009ecbec;
  case 0x19:
    if ((param_4 != (char *)0x0) && (0 < (long)param_5)) {
                    /* try { // try from 009ecc00 to 00aecc0b has its CatchHandler @ 009ecca0 */
      local_88 = 0;
      local_80 = 0;
      local_78 = (void *)0x0;
      __n = strlen(param_4);
                    /* try { // try from 009ecc0c to 00aecc17 has its CatchHandler @ 009ecc9c */
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
                    /* try { // try from 009ecc18 to 00aecc27 has its CatchHandler @ 009ecca4 */
      if (__n < 0x17) {
        pvVar5 = (void *)((ulong)&local_88 | 1);
                    /* try { // try from 009ecc28 to 00aecd0b has its CatchHandler @ 009ecb8c */
        local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
        __src = pvVar5;
        if (__n != 0) goto LAB_009ecc64;
      }
      else {
        uVar6 = __n + 0x10 & 0xfffffffffffffff0;
        pvVar5 = operator_new(uVar6);
        local_88 = uVar6 | 1;
        __src = (void *)((ulong)&local_88 | 1);
        local_80 = __n;
        local_78 = pvVar5;
LAB_009ecc64:
        memcpy(pvVar5,param_4,__n);
      }
      *(undefined1 *)((long)pvVar5 + __n) = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = (void *)0x0;
      uVar6 = local_88 >> 1 & 0x7f;
      if ((local_88 & 1) != 0) {
        __src = local_78;
        uVar6 = local_80;
      }
                    /* catch() { ... } // from try @ 009ecc0c with catch @ 009ecc9c */
      if (param_5 <= uVar6) {
        uVar6 = param_5;
      }
                    /* catch() { ... } // from try @ 009ecc00 with catch @ 009ecca0 */
                    /* catch() { ... } // from try @ 009ecc18 with catch @ 009ecca4 */
      if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar6 < 0x17) {
        pvVar5 = (void *)((ulong)&local_70 | 1);
                    /* catch() { ... } // from try @ 009ecbe0 with catch @ 009eccbc */
        local_70 = (ulong)(byte)((int)uVar6 << 1);
        if (uVar6 != 0) goto LAB_009ecce8;
      }
      else {
        uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
        pvVar5 = operator_new(uVar4);
        local_70 = uVar4 | 1;
        uStack_68 = uVar6;
        local_60 = pvVar5;
LAB_009ecce8:
        memcpy(pvVar5,__src,uVar6);
      }
      *(undefined1 *)((long)pvVar5 + uVar6) = 0;
      puVar1 = *(ulong **)(this + 0x120);
      if (puVar1 < *(ulong **)(this + 0x128)) {
                    /* try { // try from 009ecd0c to 00aecd5f has its CatchHandler @ 009ecd0c
                       catch() { ... } // from try @ 009ecd0c with catch @ 009ecd0c
                       catch() { ... } // from try @ 009ecdcc with catch @ 009ecd0c */
        puVar1[2] = (ulong)local_60;
        puVar1[1] = uStack_68;
        *puVar1 = local_70;
        uStack_68 = 0;
        local_60 = (void *)0x0;
        local_70 = 0;
        *(long *)(this + 0x120) = *(long *)(this + 0x120) + 0x18;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x118),(basic_string *)&local_70);
        if ((local_70 & 1) != 0) {
          operator_delete(local_60);
        }
      }
      if ((local_88 & 1) != 0) {
                    /* try { // try from 009ecd60 to 00aecd77 has its CatchHandler @ 009ece48 */
        operator_delete(local_78);
      }
    }
    break;
  case 0x1e:
    onConnectionClosed(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return 0;
  }
LAB_009ecbec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

