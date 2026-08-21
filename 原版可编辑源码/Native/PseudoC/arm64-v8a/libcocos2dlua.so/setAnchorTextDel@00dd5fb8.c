
/* cocos2d::ui::RichText::setAnchorTextDel(bool) */

void __thiscall cocos2d::ui::RichText::setAnchorTextDel(RichText *this,bool param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  char *__s2;
  ulong uVar7;
  char *pcVar8;
  undefined1 *local_70;
  size_t local_68;
  char *local_60;
  undefined1 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1) {
    local_70 = KEY_ANCHOR_TEXT_LINE;
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_LINE,
                       (tuple *)&DAT_0141ecaa,(tuple *)&local_70);
    puVar6 = &VALUE_TEXT_LINE_DEL;
  }
  else {
    local_50 = KEY_ANCHOR_TEXT_LINE;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
              ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_LINE,
               (tuple *)&DAT_0141ecaa,(tuple *)&local_50);
    cocos2d::Value::asString();
    uVar7 = (ulong)local_70 >> 1 & 0x7f;
    __n = uVar7;
    if (((ulong)local_70 & 1) != 0) {
      __n = local_68;
    }
    sVar1 = (ulong)(VALUE_TEXT_LINE_DEL >> 1);
                    /* try { // try from 00dd6078 to 00ed607f has its CatchHandler @ 00dd64ec */
    if ((VALUE_TEXT_LINE_DEL & 1) != 0) {
      sVar1 = DAT_01788698;
    }
    if (__n == sVar1) {
      pcVar8 = (char *)((ulong)&local_70 | 1);
      __s1 = pcVar8;
      if (((ulong)local_70 & 1) != 0) {
        __s1 = local_60;
      }
      __s2 = DAT_017886a0;
      if ((VALUE_TEXT_LINE_DEL & 1) == 0) {
        __s2 = &DAT_01788691;
      }
      if (((ulong)local_70 & 1) == 0) {
        if (__n != 0) {
          do {
            if (*pcVar8 != *__s2) goto LAB_00dd60e0;
            uVar7 = uVar7 - 1;
            pcVar8 = pcVar8 + 1;
            __s2 = __s2 + 1;
          } while (uVar7 != 0);
          bVar3 = true;
          goto joined_r0x00dd60e4;
        }
      }
      else if (__n == 0) {
                    /* try { // try from 00dd6110 to 00ed6187 has its CatchHandler @ 00dd6500 */
        operator_delete(local_60);
      }
      else {
        iVar4 = memcmp(__s1,__s2,__n);
        operator_delete(local_60);
        if (iVar4 != 0) goto LAB_00dd6144;
      }
    }
    else {
LAB_00dd60e0:
      bVar3 = false;
joined_r0x00dd60e4:
      if (((ulong)local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      if (!bVar3) goto LAB_00dd6144;
    }
    local_70 = KEY_ANCHOR_TEXT_LINE;
    lVar5 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_LINE,
                       (tuple *)&DAT_0141ecaa,(tuple *)&local_70);
    puVar6 = VALUE_TEXT_LINE_NONE;
  }
  cocos2d::Value::operator=((Value *)(lVar5 + 0x28),(basic_string *)puVar6);
LAB_00dd6144:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

