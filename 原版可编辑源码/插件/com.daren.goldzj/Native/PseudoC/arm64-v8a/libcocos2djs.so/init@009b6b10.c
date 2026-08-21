
/* cocos2d::renderer::Program::init(cocos2d::renderer::DeviceGraphics*, char const*, char const*) */

undefined8 __thiscall
cocos2d::renderer::Program::init(Program *this,DeviceGraphics *param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  
  *(DeviceGraphics **)(this + 0x10) = param_1;
                    /* catch() { ... } // from try @ 009b68d8 with catch @ 009b6b2c */
                    /* catch() { ... } // from try @ 009b68cc with catch @ 009b6b30 */
                    /* catch() { ... } // from try @ 009b68ac with catch @ 009b6b34 */
  sVar2 = strlen(param_2);
                    /* catch() { ... } // from try @ 009b68e4 with catch @ 009b6b44 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x48),param_2,sVar2);
  sVar2 = strlen(param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x60),param_3,sVar2);
  iVar1 = DAT_01d380d0 + 1;
  *(int *)(this + 0x78) = DAT_01d380d0;
  DAT_01d380d0 = iVar1;
  this[0x7c] = (Program)0x0;
  return 1;
}

