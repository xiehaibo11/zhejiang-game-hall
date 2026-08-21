
/* cocos2d::FontFreeType::~FontFreeType() */

void __thiscall cocos2d::FontFreeType::~FontFreeType(FontFreeType *this)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  void *local_50 [2];
  char local_40;
  long local_38;
  
                    /* try { // try from 00f05250 to 0100525b has its CatchHandler @ 00f05370 */
                    /* try { // try from 00f0525c to 01005277 has its CatchHandler @ 00f05340 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f05278 to 0100528f has its CatchHandler @ 00f051a4 */
  *(undefined ***)this = &PTR__FontFreeType_016fd1c0;
  if (_FTInitialized != '\0') {
                    /* try { // try from 00f05290 to 0100529b has its CatchHandler @ 00f0533c */
    if (*(long *)(this + 0x30) != 0) {
      FT_Stroker_Done();
    }
                    /* try { // try from 00f0529c to 010052b7 has its CatchHandler @ 00f05338 */
    if (*(long *)(this + 0x28) != 0) {
      FT_Done_Face();
    }
  }
  lVar4 = PoolManager::getInstance();
                    /* try { // try from 00f052b8 to 0100538b has its CatchHandler @ 00f051a4 */
  if (((*(char *)(lVar4 + 0x18) != '\0') &&
      (lVar4 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
                           *)&DAT_0178f800,(basic_string *)(this + 0x40)), lVar4 != 0)) &&
     (iVar1 = *(int *)(lVar4 + 0x38) + -1, *(int *)(lVar4 + 0x38) = iVar1, iVar1 == 0)) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::_DataRef>>>
    ::remove(local_50,&DAT_0178f800);
    pvVar3 = local_50[0];
    local_50[0] = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      if ((local_40 != '\0') &&
         (Data::~Data((Data *)((long)pvVar3 + 0x28)), (*(byte *)((long)pvVar3 + 0x10) & 1) != 0)) {
        operator_delete(*(void **)((long)pvVar3 + 0x20));
      }
      operator_delete(pvVar3);
    }
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  if (((byte)this[0x40] & 1) != 0) {
                    /* catch() { ... } // from try @ 00f0529c with catch @ 00f05338 */
    operator_delete(*(void **)(this + 0x50));
  }
                    /* catch() { ... } // from try @ 00f05290 with catch @ 00f0533c */
                    /* catch() { ... } // from try @ 00f0525c with catch @ 00f05340 */
  Ref::~Ref((Ref *)this);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

