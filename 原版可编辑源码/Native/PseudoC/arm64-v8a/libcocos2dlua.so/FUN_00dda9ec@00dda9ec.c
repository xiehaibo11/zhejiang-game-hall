
void FUN_00dda9ec(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  void *pvVar9;
  undefined1 *local_90;
  ulong uStack_88;
  void *local_80;
  long lStack_78;
  undefined4 local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dda920 with catch @ 00ddaa00 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00dda9b8 with catch @ 00ddaa04 */
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_58 = 0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  local_50 = (void *)0x0;
  local_40 = 0x3f800000;
  local_90 = cocos2d::ui::RichText::KEY_FONT_SMALL;
                    /* catch() { ... } // from try @ 00ddaa68 with catch @ 00ddaa30 */
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&local_60,
                     (piecewise_construct_t *)cocos2d::ui::RichText::KEY_FONT_SMALL,
                     (tuple *)&DAT_0141ecaa,(tuple *)&local_90);
  cocos2d::Value::operator=((Value *)(lVar6 + 0x28),true);
  std::__ndk1::
  unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
  ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                   *)&local_90,(unordered_map *)&local_60);
                    /* try { // try from 00ddaa60 to 00edaa67 has its CatchHandler @ 00ddaa7c */
  local_68 = 0;
  pvVar8 = local_60;
  puVar3 = local_50;
  while (puVar3 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00ddaa60 with catch @ 00ddaa7c */
    pvVar9 = (void *)*puVar3;
    local_60 = pvVar8;
    cocos2d::Value::~Value((Value *)(puVar3 + 5));
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
                    /* catch() { ... } // from try @ 00ddaad0 with catch @ 00ddaa98 */
    }
    operator_delete(puVar3);
    pvVar8 = local_60;
    puVar3 = pvVar9;
  }
  local_60 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  uVar5 = uStack_88;
  puVar4 = local_90;
  *param_1 = local_90;
  param_1[1] = uStack_88;
  param_1[2] = local_80;
  local_90 = (void *)0x0;
  uStack_88 = 0;
                    /* try { // try from 00ddaac8 to 00edaacf has its CatchHandler @ 00ddaae4 */
  param_1[3] = lStack_78;
  *(undefined4 *)(param_1 + 4) = local_70;
                    /* try { // try from 00ddaad0 to 00edaaff has its CatchHandler @ 00ddaa98 */
  if (lStack_78 == 0) {
                    /* try { // try from 00ddab00 to 00edab73 has its CatchHandler @ 00ddab00
                       catch() { ... } // from try @ 00ddab00 with catch @ 00ddab00
                       catch() { ... } // from try @ 00ddab78 with catch @ 00ddab00 */
    param_1[5] = 0;
    lStack_78 = 0;
    puVar3 = local_80;
    while (puVar3 != (void *)0x0) {
      pvVar8 = (void *)*puVar3;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      puVar3 = pvVar8;
    }
  }
  else {
    uVar7 = *(ulong *)((long)local_80 + 8);
                    /* catch() { ... } // from try @ 00ddaac8 with catch @ 00ddaae4 */
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar7 = uVar7 & uVar5 - 1;
    }
    else if (uVar5 <= uVar7) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar7 / uVar5;
      }
      uVar7 = uVar7 - uVar1 * uVar5;
    }
    *(undefined8 **)(puVar4 + uVar7 * 8) = param_1 + 2;
    local_80 = (void *)0x0;
    lStack_78 = 0;
    param_1[5] = 0;
  }
  puVar4 = local_90;
  local_90 = (undefined1 *)0x0;
  if (puVar4 != (void *)0x0) {
    operator_delete(puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00ddab74 to 00edab77 has its CatchHandler @ 00ddac90 */
                    /* try { // try from 00ddab78 to 00edad1f has its CatchHandler @ 00ddab00 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

