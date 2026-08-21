
/* cocos2d::ui::RichText::setAnchorTextGlow(bool, cocos2d::Color3B const&) */

void __thiscall
cocos2d::ui::RichText::setAnchorTextGlow(RichText *this,bool param_1,Color3B *param_2)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  char *__s2;
  ulong uVar8;
  char *pcVar9;
  undefined8 local_80;
  size_t local_78;
  char *local_70;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1) {
    local_80 = KEY_ANCHOR_TEXT_STYLE;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE
                       ,(tuple *)&DAT_0141ecaa,(tuple *)&local_80);
    puVar7 = &VALUE_TEXT_STYLE_GLOW;
  }
  else {
    local_60 = KEY_ANCHOR_TEXT_STYLE;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
              ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE,
               (tuple *)&DAT_0141ecaa,(tuple *)&local_60);
    cocos2d::Value::asString();
    uVar8 = (ulong)local_80 >> 1 & 0x7f;
    __n = uVar8;
    if (((ulong)local_80 & 1) != 0) {
      __n = local_78;
    }
    sVar1 = (ulong)(VALUE_TEXT_STYLE_GLOW >> 1);
    if ((VALUE_TEXT_STYLE_GLOW & 1) != 0) {
      sVar1 = DAT_017887b8;
    }
    if (__n == sVar1) {
      pcVar9 = (char *)((ulong)&local_80 | 1);
      __s1 = pcVar9;
      if (((ulong)local_80 & 1) != 0) {
        __s1 = local_70;
      }
                    /* catch() { ... } // from try @ 00dd6a8c with catch @ 00dd6a54 */
      __s2 = DAT_017887c0;
      if ((VALUE_TEXT_STYLE_GLOW & 1) == 0) {
        __s2 = &DAT_017887b1;
      }
      if (((ulong)local_80 & 1) == 0) {
        if (__n != 0) {
          do {
            if (*pcVar9 != *__s2) goto LAB_00dd6a9c;
            uVar8 = uVar8 - 1;
            pcVar9 = pcVar9 + 1;
            __s2 = __s2 + 1;
          } while (uVar8 != 0);
                    /* try { // try from 00dd6a84 to 00ed6a8b has its CatchHandler @ 00dd6ab8 */
          bVar3 = true;
          goto joined_r0x00dd6aa0;
        }
      }
      else if (__n == 0) {
        operator_delete(local_70);
      }
      else {
        iVar5 = memcmp(__s1,__s2,__n);
                    /* catch() { ... } // from try @ 00dd6a84 with catch @ 00dd6ab8 */
        operator_delete(local_70);
        if (iVar5 != 0) goto LAB_00dd6b00;
      }
    }
    else {
LAB_00dd6a9c:
      bVar3 = false;
joined_r0x00dd6aa0:
      if (((ulong)local_80 & 1) != 0) {
                    /* try { // try from 00dd6a8c to 00ed6ad3 has its CatchHandler @ 00dd6a54 */
        operator_delete(local_70);
      }
      if (!bVar3) goto LAB_00dd6b00;
    }
                    /* catch() { ... } // from try @ 00dd6b0c with catch @ 00dd6ad4 */
    local_80 = KEY_ANCHOR_TEXT_STYLE;
    lVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE
                       ,(tuple *)&DAT_0141ecaa,(tuple *)&local_80);
    puVar7 = VALUE_TEXT_STYLE_NONE;
  }
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),(basic_string *)puVar7);
LAB_00dd6b00:
                    /* try { // try from 00dd6b04 to 00ed6b0b has its CatchHandler @ 00dd6b38 */
                    /* try { // try from 00dd6b0c to 00ed6b53 has its CatchHandler @ 00dd6ad4 */
  FUN_00dd6be4(&local_60,8,8,"#%02x%02x%02x",*param_2,param_2[1],param_2[2]);
  local_78 = 0;
  local_70 = (void *)0x0;
  uVar4 = (undefined4)local_60;
                    /* catch() { ... } // from try @ 00dd6b04 with catch @ 00dd6b38 */
  local_80._0_5_ = CONCAT41(uVar4,0xe);
  local_80 = (undefined1 *)CONCAT44(local_60._3_4_,(undefined4)local_80);
  local_60 = KEY_ANCHOR_TEXT_GLOW_COLOR;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x548),
                     (piecewise_construct_t *)KEY_ANCHOR_TEXT_GLOW_COLOR,(tuple *)&DAT_0141ecaa,
                     (tuple *)&local_60);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),(basic_string *)&local_80);
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

