
/* dragonBones::ConstraintData::_onClear() */

void __thiscall dragonBones::ConstraintData::_onClear(ConstraintData *this)

{
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 00da3e38 to 00ea3e3f has its CatchHandler @ 00da3f9c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
                    /* try { // try from 00da3e40 to 00ea3e8f has its CatchHandler @ 00da3d5c */
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

