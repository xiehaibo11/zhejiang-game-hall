
/* dragonBones::TextureData::_onClear() */

void __thiscall dragonBones::TextureData::_onClear(TextureData *this)

{
  if (*(void **)(this + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x38));
  }
                    /* try { // try from 00da68e8 to 00ea68ef has its CatchHandler @ 00da6938 */
                    /* try { // try from 00da68f0 to 00ea6953 has its CatchHandler @ 00da68c4 */
  this[0xd] = (TextureData)0x0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x10),"",0);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

