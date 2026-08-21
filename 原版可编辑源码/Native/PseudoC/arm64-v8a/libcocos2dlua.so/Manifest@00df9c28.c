
/* cocos2d::extension::Manifest::Manifest(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::Manifest(Manifest *this,basic_string *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00df9b10 with catch @ 00df9c28 */
                    /* catch() { ... } // from try @ 00df97a4 with catch @ 00df9c2c */
                    /* catch() { ... } // from try @ 00df978c with catch @ 00df9c30 */
                    /* catch() { ... } // from try @ 00df9760 with catch @ 00df9c34 */
                    /* catch() { ... } // from try @ 00df9748 with catch @ 00df9c3c */
  Ref::Ref((Ref *)this);
                    /* catch() { ... } // from try @ 00df9a8c with catch @ 00df9c58
                       catch() { ... } // from try @ 00df9ab0 with catch @ 00df9c58 */
  *(undefined2 *)(this + 0x21) = 0;
  *(undefined ***)this = &PTR__Manifest_016e7f10;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x30),"");
                    /* catch() { ... } // from try @ 00df9958 with catch @ 00df9c80 */
  *(undefined8 *)(this + 0x48) = 0;
                    /* catch() { ... } // from try @ 00df9908 with catch @ 00df9c84 */
                    /* catch() { ... } // from try @ 00df98b8 with catch @ 00df9c88 */
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x60),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x78),"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x90),"");
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xe0) = 0x3f800000;
                    /* catch() { ... } // from try @ 00df97b8 with catch @ 00df9cec */
                    /* catch() { ... } // from try @ 00df9774 with catch @ 00df9cf0 */
                    /* catch() { ... } // from try @ 00df9730 with catch @ 00df9cf4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0xe8),"");
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0x400;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  puVar2 = operator_new(0x28);
                    /* catch() { ... } // from try @ 00df95c8 with catch @ 00df9d38 */
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[1] = 0x10000;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined8 **)(this + 0x158) = puVar2;
  *(undefined8 **)(this + 0x160) = puVar2;
  uVar3 = FileUtils::getInstance();
  *(undefined8 *)(this + 0x28) = uVar3;
                    /* catch() { ... } // from try @ 00df96d4 with catch @ 00df9d54
                       catch() { ... } // from try @ 00df9858 with catch @ 00df9d54
                       catch() { ... } // from try @ 00df99e0 with catch @ 00df9d54
                       catch() { ... } // from try @ 00df9b94 with catch @ 00df9d54 */
  uVar1 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 00df9e94 with catch @ 00df9d68
                       catch() { ... } // from try @ 00dfa2c8 with catch @ 00df9d68 */
    parse(this,param_1);
  }
  return;
}

