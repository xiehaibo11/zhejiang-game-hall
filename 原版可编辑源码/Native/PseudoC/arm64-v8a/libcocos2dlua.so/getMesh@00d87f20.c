
/* dragonBones::ArmatureData::getMesh(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

undefined8 __thiscall
dragonBones::ArmatureData::getMesh
          (ArmatureData *this,basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  ArmatureData *pAVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00d87d1c with catch @ 00d87f20 */
                    /* catch() { ... } // from try @ 00d87d08 with catch @ 00d87f24 */
                    /* catch() { ... } // from try @ 00d87d00 with catch @ 00d87f28 */
                    /* catch() { ... } // from try @ 00d87cf8 with catch @ 00d87f2c */
                    /* catch() { ... } // from try @ 00d87cf0 with catch @ 00d87f30 */
                    /* catch() { ... } // from try @ 00d87ce0 with catch @ 00d87f34 */
                    /* catch() { ... } // from try @ 00d87cd8 with catch @ 00d87f38 */
                    /* catch() { ... } // from try @ 00d87cc8 with catch @ 00d87f3c */
                    /* catch() { ... } // from try @ 00d87d2c with catch @ 00d87f40
                       catch() { ... } // from try @ 00d87d98 with catch @ 00d87f40
                       catch() { ... } // from try @ 00d87e60 with catch @ 00d87f40 */
  pAVar1 = (ArmatureData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
                       *)(this + 0x108),param_1);
                    /* catch() { ... } // from try @ 00d87cc0 with catch @ 00d87f44 */
                    /* catch() { ... } // from try @ 00d87cd0 with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87ce8 with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87d10 with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87d30 with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87d44 with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87d7c with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87da4 with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87e1c with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87e3c with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87e6c with catch @ 00d87f48
                       catch() { ... } // from try @ 00d87e94 with catch @ 00d87f48 */
                    /* catch() { ... } // from try @ 00d87b84 with catch @ 00d87f4c */
                    /* catch() { ... } // from try @ 00d87b60 with catch @ 00d87f50 */
                    /* catch() { ... } // from try @ 00d87b6c with catch @ 00d87f54 */
  if ((this + 0x110 != pAVar1) && (*(SkinData **)(pAVar1 + 0x38) != (SkinData *)0x0)) {
                    /* catch() { ... } // from try @ 00d87b3c with catch @ 00d87f58 */
                    /* catch() { ... } // from try @ 00d87b2c with catch @ 00d87f5c */
                    /* catch() { ... } // from try @ 00d87324 with catch @ 00d87f60 */
                    /* catch() { ... } // from try @ 00d8731c with catch @ 00d87f64 */
                    /* catch() { ... } // from try @ 00d87314 with catch @ 00d87f68 */
                    /* catch() { ... } // from try @ 00d87304 with catch @ 00d87f6c */
    uVar2 = SkinData::getDisplay(*(SkinData **)(pAVar1 + 0x38),param_2,param_3);
    return uVar2;
  }
                    /* catch() { ... } // from try @ 00d87810 with catch @ 00d87f70
                       catch() { ... } // from try @ 00d87898 with catch @ 00d87f70 */
                    /* catch() { ... } // from try @ 00d87174 with catch @ 00d87f74
                       catch() { ... } // from try @ 00d87218 with catch @ 00d87f74 */
                    /* catch() { ... } // from try @ 00d8724c with catch @ 00d87f78 */
  return 0;
}

