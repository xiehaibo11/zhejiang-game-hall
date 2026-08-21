
/* lua_register_cocos2dx_ui_ListView(lua_State*) */

undefined8 lua_register_cocos2dx_ui_ListView(lua_State *param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_78 [2];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_usertype(param_1,&DAT_012d48df);
                    /* try { // try from 0097dbd4 to 00a7dc1f has its CatchHandler @ 0097dbd4
                       catch() { ... } // from try @ 0097dbd4 with catch @ 0097dbd4
                       catch() { ... } // from try @ 0097dc24 with catch @ 0097dbd4 */
  tolua_cclass(param_1,&DAT_012d48e4,&DAT_012d48df,"ccui.ScrollView",0);
  tolua_beginmodule(param_1,&DAT_012d48e4);
  tolua_function(param_1,"new",lua_cocos2dx_ui_ListView_constructor);
                    /* try { // try from 0097dc20 to 00a7dc23 has its CatchHandler @ 0097dc58 */
                    /* try { // try from 0097dc24 to 00a7dc6b has its CatchHandler @ 0097dbd4 */
  tolua_function(param_1,"setGravity",lua_cocos2dx_ui_ListView_setGravity);
  tolua_function(param_1,"removeLastItem",lua_cocos2dx_ui_ListView_removeLastItem);
                    /* catch() { ... } // from try @ 0097dc20 with catch @ 0097dc58 */
  tolua_function(param_1,"getLeftPadding",lua_cocos2dx_ui_ListView_getLeftPadding);
                    /* try { // try from 0097dc6c to 00a7df03 has its CatchHandler @ 0097dc6c
                       catch() { ... } // from try @ 0097dc6c with catch @ 0097dc6c
                       catch() { ... } // from try @ 0097df84 with catch @ 0097dc6c */
  tolua_function(param_1,"getCenterItemInCurrentView",
                 lua_cocos2dx_ui_ListView_getCenterItemInCurrentView);
  tolua_function(param_1,"getCurSelectedIndex",lua_cocos2dx_ui_ListView_getCurSelectedIndex);
  tolua_function(param_1,"getScrollDuration",lua_cocos2dx_ui_ListView_getScrollDuration);
  tolua_function(param_1,"getMagneticAllowedOutOfBoundary",
                 lua_cocos2dx_ui_ListView_getMagneticAllowedOutOfBoundary);
  tolua_function(param_1,"getItemsMargin",lua_cocos2dx_ui_ListView_getItemsMargin);
  tolua_function(param_1,"scrollToItem",lua_cocos2dx_ui_ListView_scrollToItem);
  tolua_function(param_1,"jumpToItem",lua_cocos2dx_ui_ListView_jumpToItem);
  tolua_function(param_1,"setTopPadding",lua_cocos2dx_ui_ListView_setTopPadding);
  tolua_function(param_1,"getIndex",lua_cocos2dx_ui_ListView_getIndex);
  tolua_function(param_1,"pushBackCustomItem",lua_cocos2dx_ui_ListView_pushBackCustomItem);
  tolua_function(param_1,"setCurSelectedIndex",lua_cocos2dx_ui_ListView_setCurSelectedIndex);
  tolua_function(param_1,"insertDefaultItem",lua_cocos2dx_ui_ListView_insertDefaultItem);
  tolua_function(param_1,"setMagneticType",lua_cocos2dx_ui_ListView_setMagneticType);
  tolua_function(param_1,"setMagneticAllowedOutOfBoundary",
                 lua_cocos2dx_ui_ListView_setMagneticAllowedOutOfBoundary);
  tolua_function(param_1,"addEventListener",lua_cocos2dx_ui_ListView_addEventListener);
  tolua_function(param_1,"doLayout",lua_cocos2dx_ui_ListView_doLayout);
  tolua_function(param_1,"getTopmostItemInCurrentView",
                 lua_cocos2dx_ui_ListView_getTopmostItemInCurrentView);
  tolua_function(param_1,"setPadding",lua_cocos2dx_ui_ListView_setPadding);
  tolua_function(param_1,"removeAllItems",lua_cocos2dx_ui_ListView_removeAllItems);
  tolua_function(param_1,"getRightPadding",lua_cocos2dx_ui_ListView_getRightPadding);
  tolua_function(param_1,"getBottommostItemInCurrentView",
                 lua_cocos2dx_ui_ListView_getBottommostItemInCurrentView);
  tolua_function(param_1,"getItems",lua_cocos2dx_ui_ListView_getItems);
  tolua_function(param_1,"getLeftmostItemInCurrentView",
                 lua_cocos2dx_ui_ListView_getLeftmostItemInCurrentView);
  tolua_function(param_1,"setItemsMargin",lua_cocos2dx_ui_ListView_setItemsMargin);
  tolua_function(param_1,"getMagneticType",lua_cocos2dx_ui_ListView_getMagneticType);
  tolua_function(param_1,"getItem",lua_cocos2dx_ui_ListView_getItem);
  tolua_function(param_1,"removeItem",lua_cocos2dx_ui_ListView_removeItem);
  tolua_function(param_1,"getTopPadding",lua_cocos2dx_ui_ListView_getTopPadding);
                    /* try { // try from 0097df04 to 00a7df37 has its CatchHandler @ 0097e004 */
  tolua_function(param_1,"pushBackDefaultItem",lua_cocos2dx_ui_ListView_pushBackDefaultItem);
  tolua_function(param_1,"setLeftPadding",lua_cocos2dx_ui_ListView_setLeftPadding);
                    /* try { // try from 0097df38 to 00a7df4b has its CatchHandler @ 0097dfd0 */
  tolua_function(param_1,"getClosestItemToPosition",
                 lua_cocos2dx_ui_ListView_getClosestItemToPosition);
                    /* try { // try from 0097df50 to 00a7df83 has its CatchHandler @ 0097dfd4 */
  tolua_function(param_1,"setBottomPadding",lua_cocos2dx_ui_ListView_setBottomPadding);
  tolua_function(param_1,"setScrollDuration",lua_cocos2dx_ui_ListView_setScrollDuration);
                    /* try { // try from 0097df84 to 00a7e01f has its CatchHandler @ 0097dc6c */
  tolua_function(param_1,"getClosestItemToPositionInCurrentView",
                 lua_cocos2dx_ui_ListView_getClosestItemToPositionInCurrentView);
  tolua_function(param_1,"getRightmostItemInCurrentView",
                 lua_cocos2dx_ui_ListView_getRightmostItemInCurrentView);
  tolua_function(param_1,"setRightPadding",lua_cocos2dx_ui_ListView_setRightPadding);
                    /* catch() { ... } // from try @ 0097df38 with catch @ 0097dfd0 */
  tolua_function(param_1,"setItemModel",lua_cocos2dx_ui_ListView_setItemModel);
                    /* catch() { ... } // from try @ 0097df50 with catch @ 0097dfd4 */
  tolua_function(param_1,"getBottomPadding",lua_cocos2dx_ui_ListView_getBottomPadding);
  tolua_function(param_1,"insertCustomItem",lua_cocos2dx_ui_ListView_insertCustomItem);
                    /* catch() { ... } // from try @ 0097df04 with catch @ 0097e004 */
  tolua_function(param_1,"create",lua_cocos2dx_ui_ListView_create);
                    /* try { // try from 0097e020 to 00a7e073 has its CatchHandler @ 0097e020
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e020 with catch @ 0097e020
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e10c with catch @ 0097e020
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e160 with catch @ 0097e020
                       catch(type#1 @ 00000000) { ... } // from try @ 0097e1d4 with catch @ 0097e020
                        */
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_ListView_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui8ListViewE");
  local_78[0] = local_60;
                    /* try { // try from 0097e074 to 00a7e08b has its CatchHandler @ 0097e1b4 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.ListView",0xd);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ListView");
                    /* try { // try from 0097e0b4 to 00a7e0b7 has its CatchHandler @ 0097e1bc */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
                    /* try { // try from 0097e0d0 to 00a7e0d7 has its CatchHandler @ 0097e1b4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.ListView",0xd);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 0097e0ec to 00a7e0ef has its CatchHandler @ 0097e1b8 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0097e100 to 00a7e10b has its CatchHandler @ 0097e1b4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0097e10c to 00a7e133 has its CatchHandler @ 0097e020 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

