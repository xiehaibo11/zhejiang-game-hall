
/* universe::FileInterface::appendSep(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void universe::FileInterface::appendSep(basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  
  bVar2 = *param_1;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    pbVar3 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 009fd7a8 to 00afd7b3 has its CatchHandler @ 009fd838 */
    if (((byte)bVar2 & 1) == 0) {
      pbVar3 = param_1 + 1;
    }
                    /* try { // try from 009fd7b4 to 00afd7bb has its CatchHandler @ 009fd834 */
                    /* try { // try from 009fd7bc to 00afd7fb has its CatchHandler @ 009fd840 */
    if ((pbVar3[uVar1 - 1] != (basic_string)0x2f) && (pbVar3[uVar1 - 1] != (basic_string)0x5c)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1,"/",1);
      return;
    }
  }
  return;
}

