
/* lua_register_cocos2dx_ui_LayoutComponent(lua_State*) */

undefined8 lua_register_cocos2dx_ui_LayoutComponent(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.LayoutComponent");
  tolua_cclass(param_1,"LayoutComponent","ccui.LayoutComponent","cc.Component",0);
  tolua_beginmodule(param_1,"LayoutComponent");
  tolua_function(param_1,"new",lua_cocos2dx_ui_LayoutComponent_constructor);
  tolua_function(param_1,"setStretchWidthEnabled",
                 lua_cocos2dx_ui_LayoutComponent_setStretchWidthEnabled);
  tolua_function(param_1,"setPercentWidth",lua_cocos2dx_ui_LayoutComponent_setPercentWidth);
  tolua_function(param_1,"getAnchorPosition",lua_cocos2dx_ui_LayoutComponent_getAnchorPosition);
  tolua_function(param_1,"setPositionPercentXEnabled",
                 lua_cocos2dx_ui_LayoutComponent_setPositionPercentXEnabled);
  tolua_function(param_1,&DAT_012e1006,lua_cocos2dx_ui_LayoutComponent_setStretchHeightEnabled);
  tolua_function(param_1,"setActiveEnabled",lua_cocos2dx_ui_LayoutComponent_setActiveEnabled);
  tolua_function(param_1,"getRightMargin",lua_cocos2dx_ui_LayoutComponent_getRightMargin);
  tolua_function(param_1,"getSize",lua_cocos2dx_ui_LayoutComponent_getSize);
  tolua_function(param_1,"setAnchorPosition",lua_cocos2dx_ui_LayoutComponent_setAnchorPosition);
  tolua_function(param_1,"refreshLayout",lua_cocos2dx_ui_LayoutComponent_refreshLayout);
  tolua_function(param_1,"isPercentWidthEnabled",
                 lua_cocos2dx_ui_LayoutComponent_isPercentWidthEnabled);
  tolua_function(param_1,"setVerticalEdge",lua_cocos2dx_ui_LayoutComponent_setVerticalEdge);
  tolua_function(param_1,"getTopMargin",lua_cocos2dx_ui_LayoutComponent_getTopMargin);
  tolua_function(param_1,"setSizeWidth",lua_cocos2dx_ui_LayoutComponent_setSizeWidth);
  tolua_function(param_1,"getPercentContentSize",
                 lua_cocos2dx_ui_LayoutComponent_getPercentContentSize);
  tolua_function(param_1,"getVerticalEdge",lua_cocos2dx_ui_LayoutComponent_getVerticalEdge);
  tolua_function(param_1,"setPercentWidthEnabled",
                 lua_cocos2dx_ui_LayoutComponent_setPercentWidthEnabled);
  tolua_function(param_1,"isStretchWidthEnabled",
                 lua_cocos2dx_ui_LayoutComponent_isStretchWidthEnabled);
  tolua_function(param_1,0x12e140e,lua_cocos2dx_ui_LayoutComponent_setLeftMargin);
  tolua_function(param_1,"getSizeWidth",lua_cocos2dx_ui_LayoutComponent_getSizeWidth);
  tolua_function(param_1,"setPositionPercentYEnabled",
                 lua_cocos2dx_ui_LayoutComponent_setPositionPercentYEnabled);
  tolua_function(param_1,"getSizeHeight",lua_cocos2dx_ui_LayoutComponent_getSizeHeight);
  tolua_function(param_1,&DAT_012e154f,lua_cocos2dx_ui_LayoutComponent_getPositionPercentY);
  tolua_function(param_1,"getPositionPercentX",lua_cocos2dx_ui_LayoutComponent_getPositionPercentX);
  tolua_function(param_1,"setTopMargin",lua_cocos2dx_ui_LayoutComponent_setTopMargin);
  tolua_function(param_1,"getPercentHeight",lua_cocos2dx_ui_LayoutComponent_getPercentHeight);
  tolua_function(param_1,&DAT_012e1636,lua_cocos2dx_ui_LayoutComponent_getUsingPercentContentSize);
  tolua_function(param_1,"setPositionPercentY",lua_cocos2dx_ui_LayoutComponent_setPositionPercentY);
  tolua_function(param_1,"setPositionPercentX",lua_cocos2dx_ui_LayoutComponent_setPositionPercentX);
  tolua_function(param_1,&DAT_012e1760,lua_cocos2dx_ui_LayoutComponent_setRightMargin);
  tolua_function(param_1,"isPositionPercentYEnabled",
                 lua_cocos2dx_ui_LayoutComponent_isPositionPercentYEnabled);
  tolua_function(param_1,"setPercentHeight",lua_cocos2dx_ui_LayoutComponent_setPercentHeight);
  tolua_function(param_1,&DAT_012e1879,lua_cocos2dx_ui_LayoutComponent_setPercentOnlyEnabled);
  tolua_function(param_1,"setHorizontalEdge",lua_cocos2dx_ui_LayoutComponent_setHorizontalEdge);
  tolua_function(param_1,"setPosition",lua_cocos2dx_ui_LayoutComponent_setPosition);
  tolua_function(param_1,"setUsingPercentContentSize",
                 lua_cocos2dx_ui_LayoutComponent_setUsingPercentContentSize);
  tolua_function(param_1,"getLeftMargin",lua_cocos2dx_ui_LayoutComponent_getLeftMargin);
  tolua_function(param_1,"getPosition",lua_cocos2dx_ui_LayoutComponent_getPosition);
  tolua_function(param_1,"setSizeHeight",lua_cocos2dx_ui_LayoutComponent_setSizeHeight);
  tolua_function(param_1,"isPositionPercentXEnabled",
                 lua_cocos2dx_ui_LayoutComponent_isPositionPercentXEnabled);
  tolua_function(param_1,"getBottomMargin",lua_cocos2dx_ui_LayoutComponent_getBottomMargin);
  tolua_function(param_1,"setPercentHeightEnabled",
                 lua_cocos2dx_ui_LayoutComponent_setPercentHeightEnabled);
  tolua_function(param_1,"setPercentContentSize",
                 lua_cocos2dx_ui_LayoutComponent_setPercentContentSize);
  tolua_function(param_1,"isPercentHeightEnabled",
                 lua_cocos2dx_ui_LayoutComponent_isPercentHeightEnabled);
  tolua_function(param_1,"getPercentWidth",lua_cocos2dx_ui_LayoutComponent_getPercentWidth);
  tolua_function(param_1,"getHorizontalEdge",lua_cocos2dx_ui_LayoutComponent_getHorizontalEdge);
  tolua_function(param_1,"isStretchHeightEnabled",
                 lua_cocos2dx_ui_LayoutComponent_isStretchHeightEnabled);
  tolua_function(param_1,"setBottomMargin",lua_cocos2dx_ui_LayoutComponent_setBottomMargin);
  tolua_function(param_1,"setSize",lua_cocos2dx_ui_LayoutComponent_setSize);
  tolua_function(param_1,"create",lua_cocos2dx_ui_LayoutComponent_create);
  tolua_function(param_1,"bindLayoutComponent",lua_cocos2dx_ui_LayoutComponent_bindLayoutComponent);
  tolua_endmodule(param_1);
                    /* try { // try from 00998f78 to 00a98fc3 has its CatchHandler @ 00998f78
                       catch() { ... } // from try @ 00998f78 with catch @ 00998f78
                       catch() { ... } // from try @ 00998fc8 with catch @ 00998f78 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui15LayoutComponentE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.LayoutComponent",0x14);
                    /* try { // try from 00998fc4 to 00a98fc7 has its CatchHandler @ 00998ffc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"LayoutComponent");
                    /* try { // try from 00998fc8 to 00a9900f has its CatchHandler @ 00998f78 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
                    /* catch() { ... } // from try @ 00998fc4 with catch @ 00998ffc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.LayoutComponent",0x14);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 00999010 to 00a9928f has its CatchHandler @ 00999010
                       catch() { ... } // from try @ 00999010 with catch @ 00999010
                       catch() { ... } // from try @ 00999310 with catch @ 00999010 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

