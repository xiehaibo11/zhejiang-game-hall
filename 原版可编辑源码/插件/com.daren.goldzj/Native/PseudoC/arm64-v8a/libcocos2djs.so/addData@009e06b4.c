
/* cocos2d::network::SocketIOPacket::addData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::SocketIOPacket::addData(SocketIOPacket *this,basic_string *param_1)

{
  ulong *puVar1;
  void *__dest;
  ulong uVar2;
  void *__src;
  ulong uVar3;
  
  puVar1 = *(ulong **)(this + 0x58);
  if (puVar1 == *(ulong **)(this + 0x60)) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(this + 0x50),param_1);
    return;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar2 = *(ulong *)param_1;
    puVar1[2] = *(ulong *)(param_1 + 0x10);
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    goto LAB_009e0770;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar2) {
                    /* catch() { ... } // from try @ 009e0698 with catch @ 009e0790
                       catch() { ... } // from try @ 009e076c with catch @ 009e0790 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009e0720 to 00ae0727 has its CatchHandler @ 009e0778 */
  __src = *(void **)(param_1 + 0x10);
                    /* try { // try from 009e0728 to 00ae076b has its CatchHandler @ 009e0600 */
  if (uVar2 < 0x17) {
    __dest = (void *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_009e075c;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    puVar1[1] = uVar2;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar3 | 1;
LAB_009e075c:
    memcpy(__dest,__src,uVar2);
  }
                    /* try { // try from 009e076c to 00ae0773 has its CatchHandler @ 009e0790 */
  *(undefined1 *)((long)__dest + uVar2) = 0;
LAB_009e0770:
                    /* try { // try from 009e0774 to 00ae0777 has its CatchHandler @ 009e0778 */
                    /* catch() { ... } // from try @ 009e0720 with catch @ 009e0778
                       catch() { ... } // from try @ 009e0774 with catch @ 009e0778
                       try { // try from 009e0778 to 00ae07d7 has its CatchHandler @ 009e0600 */
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 0x18;
  return;
}

