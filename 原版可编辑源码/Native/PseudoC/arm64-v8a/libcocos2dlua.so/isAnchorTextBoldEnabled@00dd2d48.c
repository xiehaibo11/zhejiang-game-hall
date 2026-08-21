
/* cocos2d::ui::RichText::isAnchorTextBoldEnabled() */

uint __thiscall cocos2d::ui::RichText::isAnchorTextBoldEnabled(RichText *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00dd2d5c to 00ed2d8b has its CatchHandler @ 00dd2d5c
                       catch() { ... } // from try @ 00dd2d5c with catch @ 00dd2d5c
                       catch() { ... } // from try @ 00dd2dc4 with catch @ 00dd2d5c */
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = KEY_ANCHOR_TEXT_BOLD;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_BOLD,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_30);
                    /* try { // try from 00dd2d8c to 00ed2dc3 has its CatchHandler @ 00dd2dd4 */
  uVar2 = cocos2d::Value::asBool((Value *)(lVar3 + 0x28));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

