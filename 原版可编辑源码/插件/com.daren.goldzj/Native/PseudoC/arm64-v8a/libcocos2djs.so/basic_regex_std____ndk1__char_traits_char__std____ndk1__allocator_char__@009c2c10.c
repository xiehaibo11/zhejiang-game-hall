
/* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::basic_regex<std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::regex_constants::syntax_option_type) */

void __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_1,undefined4 param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 009c29cc with catch @ 009c2c18 */
                    /* catch() { ... } // from try @ 009c29c0 with catch @ 009c2c1c */
                    /* catch() { ... } // from try @ 009c29a0 with catch @ 009c2c20 */
  locale::locale((locale *)this);
                    /* catch() { ... } // from try @ 009c29d8 with catch @ 009c2c30 */
  uVar3 = locale::use_facet((locale *)this,(id *)&ctype<char>::id);
  *(undefined8 *)(this + 8) = uVar3;
  uVar3 = locale::use_facet((locale *)this,(id *)&collate<char>::id);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined4 *)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)(*param_1 >> 1);
  }
                    /* try { // try from 009c2c88 to 00ac2cdf has its CatchHandler @ 009c2c88
                       catch() { ... } // from try @ 009c2c88 with catch @ 009c2c88
                       catch() { ... } // from try @ 009c2ee0 with catch @ 009c2c88 */
  __parse<std::__ndk1::__wrap_iter<char_const*>>(this,pbVar2,pbVar2 + uVar1);
  return;
}

