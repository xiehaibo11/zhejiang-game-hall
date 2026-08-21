
/* dragonBones::DisplayData::_onClear() */

void __thiscall dragonBones::DisplayData::_onClear(DisplayData *this)

{
  undefined8 uVar1;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
                    /* try { // try from 00da50d4 to 00ea50db has its CatchHandler @ 00da5250 */
                    /* try { // try from 00da50dc to 00ea5253 has its CatchHandler @ 00da5088 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x30),"",0);
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar1;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

