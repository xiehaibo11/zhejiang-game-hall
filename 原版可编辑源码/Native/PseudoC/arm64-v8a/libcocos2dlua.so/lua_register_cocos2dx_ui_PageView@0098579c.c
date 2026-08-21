
/* lua_register_cocos2dx_ui_PageView(lua_State*) */

undefined8 lua_register_cocos2dx_ui_PageView(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.PageView");
  tolua_cclass(param_1,"PageView","ccui.PageView",&DAT_012d48df,0);
  tolua_beginmodule(param_1,"PageView");
  tolua_function(param_1,"new",lua_cocos2dx_ui_PageView_constructor);
  tolua_function(param_1,"setIndicatorSpaceBetweenIndexNodes",
                 lua_cocos2dx_ui_PageView_setIndicatorSpaceBetweenIndexNodes);
  tolua_function(param_1,"insertPage",lua_cocos2dx_ui_PageView_insertPage);
  tolua_function(param_1,&DAT_012dd641,lua_cocos2dx_ui_PageView_setIndicatorIndexNodesOpacity);
  tolua_function(param_1,"setIndicatorSelectedIndexOpacity",
                 lua_cocos2dx_ui_PageView_setIndicatorSelectedIndexOpacity);
  tolua_function(param_1,"removeAllPages",lua_cocos2dx_ui_PageView_removeAllPages);
  tolua_function(param_1,"setAutoScrollStopEpsilon",
                 lua_cocos2dx_ui_PageView_setAutoScrollStopEpsilon);
  tolua_function(param_1,"setIndicatorIndexNodesScale",
                 lua_cocos2dx_ui_PageView_setIndicatorIndexNodesScale);
  tolua_function(param_1,"setIndicatorEnabled",lua_cocos2dx_ui_PageView_setIndicatorEnabled);
  tolua_function(param_1,"setIndicatorSelectedIndexColor",
                 lua_cocos2dx_ui_PageView_setIndicatorSelectedIndexColor);
  tolua_function(param_1,"addEventListener",lua_cocos2dx_ui_PageView_addEventListener);
  tolua_function(param_1,"getIndicatorPosition",lua_cocos2dx_ui_PageView_getIndicatorPosition);
  tolua_function(param_1,"setCurrentPageIndex",lua_cocos2dx_ui_PageView_setCurrentPageIndex);
  tolua_function(param_1,"getIndicatorIndexNodesColor",
                 lua_cocos2dx_ui_PageView_getIndicatorIndexNodesColor);
  tolua_function(param_1,"getIndicatorSelectedIndexColor",
                 lua_cocos2dx_ui_PageView_getIndicatorSelectedIndexColor);
  tolua_function(param_1,"getIndicatorIndexNodesScale",
                 lua_cocos2dx_ui_PageView_getIndicatorIndexNodesScale);
  tolua_function(param_1,"setIndicatorPosition",lua_cocos2dx_ui_PageView_setIndicatorPosition);
  tolua_function(param_1,"getIndicatorSelectedIndexOpacity",
                 lua_cocos2dx_ui_PageView_getIndicatorSelectedIndexOpacity);
  tolua_function(param_1,"scrollToPage",lua_cocos2dx_ui_PageView_scrollToPage);
                    /* try { // try from 009859d4 to 00a85a0b has its CatchHandler @ 009859d4
                       catch() { ... } // from try @ 009859d4 with catch @ 009859d4
                       catch() { ... } // from try @ 00985a1c with catch @ 009859d4 */
  tolua_function(param_1,"setIndicatorPositionAsAnchorPoint",
                 lua_cocos2dx_ui_PageView_setIndicatorPositionAsAnchorPoint);
  tolua_function(param_1,"scrollToItem",lua_cocos2dx_ui_PageView_scrollToItem);
                    /* try { // try from 00985a0c to 00a85a1b has its CatchHandler @ 00985a80 */
  tolua_function(param_1,"setIndicatorIndexNodesColor",
                 lua_cocos2dx_ui_PageView_setIndicatorIndexNodesColor);
                    /* try { // try from 00985a1c to 00a85a9b has its CatchHandler @ 009859d4 */
  tolua_function(param_1,"getIndicatorIndexNodesOpacity",
                 lua_cocos2dx_ui_PageView_getIndicatorIndexNodesOpacity);
  tolua_function(param_1,"getIndicatorPositionAsAnchorPoint",
                 lua_cocos2dx_ui_PageView_getIndicatorPositionAsAnchorPoint);
  tolua_function(param_1,"getCurrentPageIndex",lua_cocos2dx_ui_PageView_getCurrentPageIndex);
  tolua_function(param_1,"removePage",lua_cocos2dx_ui_PageView_removePage);
                    /* catch() { ... } // from try @ 00985a0c with catch @ 00985a80 */
  tolua_function(param_1,"setIndicatorIndexNodesTexture",
                 lua_cocos2dx_ui_PageView_setIndicatorIndexNodesTexture);
  tolua_function(param_1,"getIndicatorEnabled",lua_cocos2dx_ui_PageView_getIndicatorEnabled);
  tolua_function(param_1,&DAT_012ddde8,lua_cocos2dx_ui_PageView_removePageAtIndex);
  tolua_function(param_1,"getIndicatorSpaceBetweenIndexNodes",
                 lua_cocos2dx_ui_PageView_getIndicatorSpaceBetweenIndexNodes);
  tolua_function(param_1,"addPage",lua_cocos2dx_ui_PageView_addPage);
  tolua_function(param_1,"create",lua_cocos2dx_ui_PageView_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_PageView_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui8PageViewE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.PageView",0xd);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"PageView");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.PageView",0xd);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

