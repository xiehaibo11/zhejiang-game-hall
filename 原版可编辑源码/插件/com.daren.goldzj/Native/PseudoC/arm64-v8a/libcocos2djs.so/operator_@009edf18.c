
/* cocos2d::network::Uri::TEMPNAMEPLACEHOLDERVALUE(cocos2d::network::Uri const&) */

Uri * __thiscall cocos2d::network::Uri::operator=(Uri *this,Uri *param_1)

{
  ulong uVar1;
  Uri *pUVar2;
  
  if (this != param_1) {
                    /* try { // try from 009edf34 to 00aee017 has its CatchHandler @ 009eddf8 */
    *this = *param_1;
    this[1] = param_1[1];
    uVar1 = (ulong)((byte)param_1[8] >> 1);
    pUVar2 = param_1 + 9;
    if (((byte)param_1[8] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x10);
      pUVar2 = *(Uri **)(param_1 + 0x18);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 8),(char *)pUVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0x20] >> 1);
    pUVar2 = param_1 + 0x21;
    if (((byte)param_1[0x20] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x28);
      pUVar2 = *(Uri **)(param_1 + 0x30);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),(char *)pUVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0x38] >> 1);
    pUVar2 = param_1 + 0x39;
    if (((byte)param_1[0x38] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      pUVar2 = *(Uri **)(param_1 + 0x48);
    }
                    /* catch() { ... } // from try @ 009ede78 with catch @ 009edfa8 */
                    /* catch() { ... } // from try @ 009ede6c with catch @ 009edfac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pUVar2,uVar1);
                    /* catch() { ... } // from try @ 009ede4c with catch @ 009edfb0 */
                    /* catch() { ... } // from try @ 009ede84 with catch @ 009edfc0 */
    uVar1 = (ulong)((byte)param_1[0x50] >> 1);
    pUVar2 = param_1 + 0x51;
    if (((byte)param_1[0x50] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x58);
      pUVar2 = *(Uri **)(param_1 + 0x60);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x50),(char *)pUVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0x68] >> 1);
    pUVar2 = param_1 + 0x69;
    if (((byte)param_1[0x68] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x70);
      pUVar2 = *(Uri **)(param_1 + 0x78);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x68),(char *)pUVar2,uVar1);
    this[0x80] = param_1[0x80];
    *(undefined2 *)(this + 0x82) = *(undefined2 *)(param_1 + 0x82);
                    /* try { // try from 009ee018 to 00aee06b has its CatchHandler @ 009ee018
                       catch() { ... } // from try @ 009ee018 with catch @ 009ee018
                       catch() { ... } // from try @ 009ee100 with catch @ 009ee018 */
    uVar1 = (ulong)((byte)param_1[0x88] >> 1);
    pUVar2 = param_1 + 0x89;
    if (((byte)param_1[0x88] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x90);
      pUVar2 = *(Uri **)(param_1 + 0x98);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x88),(char *)pUVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0xa0] >> 1);
    pUVar2 = param_1 + 0xa1;
    if (((byte)param_1[0xa0] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xa8);
      pUVar2 = *(Uri **)(param_1 + 0xb0);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xa0),(char *)pUVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0xb8] >> 1);
    pUVar2 = param_1 + 0xb9;
    if (((byte)param_1[0xb8] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xc0);
      pUVar2 = *(Uri **)(param_1 + 200);
    }
                    /* try { // try from 009ee06c to 00aee083 has its CatchHandler @ 009ee17c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xb8),(char *)pUVar2,uVar1);
    uVar1 = (ulong)((byte)param_1[0xd0] >> 1);
    pUVar2 = param_1 + 0xd1;
                    /* try { // try from 009ee08c to 00aee097 has its CatchHandler @ 009ee178 */
    if (((byte)param_1[0xd0] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xd8);
      pUVar2 = *(Uri **)(param_1 + 0xe0);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xd0),(char *)pUVar2,uVar1);
                    /* try { // try from 009ee098 to 00aee0a3 has its CatchHandler @ 009ee174 */
                    /* try { // try from 009ee0ac to 00aee0ff has its CatchHandler @ 009ee18c */
    uVar1 = (ulong)((byte)param_1[0xe8] >> 1);
    pUVar2 = param_1 + 0xe9;
    if (((byte)param_1[0xe8] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xf0);
      pUVar2 = *(Uri **)(param_1 + 0xf8);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xe8),(char *)pUVar2,uVar1);
    std::__ndk1::
    vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    assign<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>*>
              ((vector<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(this + 0x100),*(pair **)(param_1 + 0x100),*(pair **)(param_1 + 0x108));
  }
  return this;
}

