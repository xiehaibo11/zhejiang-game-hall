
/* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::basic_regex<std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::regex_constants::syntax_option_type) */

void __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
basic_regex<std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_1,uint param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  locale::locale((locale *)this);
  uVar3 = locale::use_facet((locale *)this,(id *)&ctype<char>::id);
  *(undefined8 *)(this + 8) = uVar3;
  uVar3 = locale::use_facet((locale *)this,(id *)&collate<char>::id);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(uint *)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  if ((param_3 & 0x1f0) == 0) {
    *(uint *)(this + 0x18) = param_3;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)(*param_1 >> 1);
  }
  __parse<std::__ndk1::__wrap_iter<char_const*>>(this,pbVar2,pbVar2 + uVar1);
  return;
}

