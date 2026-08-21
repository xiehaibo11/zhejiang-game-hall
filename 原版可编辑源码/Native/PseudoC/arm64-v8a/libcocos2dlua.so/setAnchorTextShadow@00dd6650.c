
/* cocos2d::ui::RichText::setAnchorTextShadow(bool, cocos2d::Color3B const&, cocos2d::Size const&,
   int) */

void __thiscall
cocos2d::ui::RichText::setAnchorTextShadow
          (RichText *this,bool param_1,Color3B *param_2,Size *param_3,int param_4)

{
  basic_string *pbVar1;
  size_t __n;
  size_t sVar2;
  char *__s1;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined1 *puVar8;
  char *__s2;
  ulong uVar9;
  char *pcVar10;
  float fVar11;
  undefined8 local_90;
  size_t local_88;
  char *local_80;
  undefined8 local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00dd6694 with catch @ 00dd665c */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00dd668c to 00ed6693 has its CatchHandler @ 00dd66c0 */
  if (param_1) {
                    /* try { // try from 00dd6694 to 00ed66db has its CatchHandler @ 00dd665c */
    local_90 = KEY_ANCHOR_TEXT_STYLE;
    lVar7 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE
                       ,(tuple *)&DAT_0141ecaa,(tuple *)&local_90);
    puVar8 = &VALUE_TEXT_STYLE_SHADOW;
                    /* catch() { ... } // from try @ 00dd668c with catch @ 00dd66c0 */
  }
  else {
    local_70 = KEY_ANCHOR_TEXT_STYLE;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
              ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE,
               (tuple *)&DAT_0141ecaa,(tuple *)&local_70);
    cocos2d::Value::asString();
    uVar9 = (ulong)local_90 >> 1 & 0x7f;
    __n = uVar9;
    if (((ulong)local_90 & 1) != 0) {
      __n = local_88;
    }
    sVar2 = (ulong)(VALUE_TEXT_STYLE_SHADOW >> 1);
    if ((VALUE_TEXT_STYLE_SHADOW & 1) != 0) {
      sVar2 = DAT_01788740;
    }
    if (__n == sVar2) {
      pcVar10 = (char *)((ulong)&local_90 | 1);
      __s1 = pcVar10;
      if (((ulong)local_90 & 1) != 0) {
        __s1 = local_80;
      }
      __s2 = DAT_01788748;
      if ((VALUE_TEXT_STYLE_SHADOW & 1) == 0) {
        __s2 = &DAT_01788739;
      }
      if (((ulong)local_90 & 1) == 0) {
        if (__n != 0) {
          do {
            if (*pcVar10 != *__s2) goto LAB_00dd6794;
            uVar9 = uVar9 - 1;
            pcVar10 = pcVar10 + 1;
            __s2 = __s2 + 1;
          } while (uVar9 != 0);
          bVar4 = true;
          goto joined_r0x00dd6798;
        }
      }
      else if (__n == 0) {
        operator_delete(local_80);
      }
      else {
        iVar6 = memcmp(__s1,__s2,__n);
        operator_delete(local_80);
        if (iVar6 != 0) goto LAB_00dd67f8;
      }
    }
    else {
LAB_00dd6794:
      bVar4 = false;
joined_r0x00dd6798:
      if (((ulong)local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if (!bVar4) goto LAB_00dd67f8;
    }
    local_90 = KEY_ANCHOR_TEXT_STYLE;
    lVar7 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)(this + 0x548),(piecewise_construct_t *)KEY_ANCHOR_TEXT_STYLE
                       ,(tuple *)&DAT_0141ecaa,(tuple *)&local_90);
    puVar8 = VALUE_TEXT_STYLE_NONE;
  }
  cocos2d::Value::operator=((Value *)(lVar7 + 0x28),(basic_string *)puVar8);
LAB_00dd67f8:
  FUN_00dd6be4(&local_70,8,8,"#%02x%02x%02x",*param_2,param_2[1],param_2[2]);
  local_88 = 0;
  local_80 = (void *)0x0;
  uVar5 = (undefined4)local_70;
  pbVar1 = (basic_string *)(this + 0x548);
  local_90._0_5_ = CONCAT41(uVar5,0xe);
  local_90 = (undefined1 *)CONCAT44(local_70._3_4_,(undefined4)local_90);
  local_70 = KEY_ANCHOR_TEXT_SHADOW_COLOR;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)KEY_ANCHOR_TEXT_SHADOW_COLOR,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_70);
  cocos2d::Value::operator=((Value *)(lVar7 + 0x28),(basic_string *)&local_90);
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  fVar11 = *(float *)param_3;
  local_90 = KEY_ANCHOR_TEXT_SHADOW_OFFSET_WIDTH;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)KEY_ANCHOR_TEXT_SHADOW_OFFSET_WIDTH,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_90);
  cocos2d::Value::operator=((Value *)(lVar7 + 0x28),fVar11);
  fVar11 = *(float *)(param_3 + 4);
  local_90 = KEY_ANCHOR_TEXT_SHADOW_OFFSET_HEIGHT;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)KEY_ANCHOR_TEXT_SHADOW_OFFSET_HEIGHT,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_90);
  cocos2d::Value::operator=((Value *)(lVar7 + 0x28),fVar11);
  local_90 = KEY_ANCHOR_TEXT_SHADOW_BLUR_RADIUS;
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    (pbVar1,(piecewise_construct_t *)KEY_ANCHOR_TEXT_SHADOW_BLUR_RADIUS,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_90);
  cocos2d::Value::operator=((Value *)(lVar7 + 0x28),param_4);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

