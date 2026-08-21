
/* dragonBones::Slot::_getDefaultRawDisplayData(unsigned int) const */

undefined8 __thiscall dragonBones::Slot::_getDefaultRawDisplayData(Slot *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00d7f150 with catch @ 00d7f118 */
  lVar2 = *(long *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x138);
  if (lVar2 != 0) {
    lVar1 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                        *)(lVar2 + 0x28),(basic_string *)(*(long *)(this + 200) + 0x20));
                    /* try { // try from 00d7f148 to 00e7f14f has its CatchHandler @ 00d7f188 */
                    /* try { // try from 00d7f150 to 00e7f1a3 has its CatchHandler @ 00d7f118 */
    if ((lVar2 + 0x30 != lVar1) &&
       ((ulong)param_1 < (ulong)(*(long *)(lVar1 + 0x40) - *(long *)(lVar1 + 0x38) >> 3))) {
      return *(undefined8 *)(*(long *)(lVar1 + 0x38) + (ulong)param_1 * 8);
    }
  }
  return 0;
}

