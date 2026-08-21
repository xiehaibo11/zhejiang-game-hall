
/* cocos2d::ui::RichText::isAnchorTextOutlineEnabled() */

bool __thiscall cocos2d::ui::RichText::isAnchorTextOutlineEnabled(RichText *this)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  bool bVar3;
  int iVar4;
  char *__s2;
  ulong uVar5;
  char *pcVar6;
  undefined1 *local_58;
  size_t local_50;
  char *local_48;
  long local_38;
  
                    /* try { // try from 00dd30a8 to 00ed30bf has its CatchHandler @ 00dd4768 */
  lVar2 = tpidr_el0;
                    /* try { // try from 00dd30c0 to 00ed30cf has its CatchHandler @ 00dd4764 */
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00dd30d0 to 00ed30df has its CatchHandler @ 00dd4754 */
  local_58 = KEY_ANCHOR_TEXT_STYLE;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
  ::
  __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
            ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE,
             (tuple *)&DAT_0141ecaa,(tuple *)&local_58);
  cocos2d::Value::asString();
  uVar5 = (ulong)local_58 >> 1 & 0x7f;
  __n = uVar5;
  if (((ulong)local_58 & 1) != 0) {
    __n = local_50;
  }
  sVar1 = (ulong)(VALUE_TEXT_STYLE_OUTLINE >> 1);
  if ((VALUE_TEXT_STYLE_OUTLINE & 1) != 0) {
    sVar1 = DAT_017886f8;
  }
  if (__n == sVar1) {
    pcVar6 = (char *)((ulong)&local_58 | 1);
    __s1 = pcVar6;
    if (((ulong)local_58 & 1) != 0) {
      __s1 = local_48;
    }
    __s2 = DAT_01788700;
    if ((VALUE_TEXT_STYLE_OUTLINE & 1) == 0) {
      __s2 = &DAT_017886f1;
    }
    if (((ulong)local_58 & 1) == 0) {
      if (__n == 0) {
        bVar3 = true;
        goto LAB_00dd31bc;
      }
      do {
        if (*pcVar6 != *__s2) goto LAB_00dd3184;
        uVar5 = uVar5 - 1;
        pcVar6 = pcVar6 + 1;
                    /* try { // try from 00dd3170 to 00ed317f has its CatchHandler @ 00dd47e8 */
        __s2 = __s2 + 1;
      } while (uVar5 != 0);
      bVar3 = true;
      goto joined_r0x00dd3188;
    }
    if (__n == 0) {
      bVar3 = true;
    }
    else {
      iVar4 = memcmp(__s1,__s2,__n);
      bVar3 = iVar4 == 0;
    }
  }
  else {
LAB_00dd3184:
                    /* try { // try from 00dd3184 to 00ed3193 has its CatchHandler @ 00dd47f8 */
    bVar3 = false;
joined_r0x00dd3188:
    if (((ulong)local_58 & 1) == 0) goto LAB_00dd31bc;
  }
  operator_delete(local_48);
LAB_00dd31bc:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

