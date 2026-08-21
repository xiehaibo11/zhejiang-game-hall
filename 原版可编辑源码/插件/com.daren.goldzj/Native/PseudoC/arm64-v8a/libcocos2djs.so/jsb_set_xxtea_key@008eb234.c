
/* jsb_set_xxtea_key(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void jsb_set_xxtea_key(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  if (param_1 != (basic_string *)&DAT_01d36fd8) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &DAT_01d36fd8,(char *)pbVar2,uVar1);
  }
  return;
}

