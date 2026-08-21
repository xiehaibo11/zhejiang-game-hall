
/* lua_register_cocos2dx_ui_ScrollView(lua_State*) */

undefined8 lua_register_cocos2dx_ui_ScrollView(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.ScrollView");
  tolua_cclass(param_1,"ScrollView","ccui.ScrollView","ccui.Layout",0);
  tolua_beginmodule(param_1,"ScrollView");
                    /* try { // try from 0097afe4 to 00a7b06b has its CatchHandler @ 0097afe4
                       catch() { ... } // from try @ 0097afe4 with catch @ 0097afe4
                       catch() { ... } // from try @ 0097b0d8 with catch @ 0097afe4 */
  tolua_function(param_1,"new",lua_cocos2dx_ui_ScrollView_constructor);
  tolua_function(param_1,"scrollToTop",lua_cocos2dx_ui_ScrollView_scrollToTop);
  tolua_function(param_1,&DAT_012da1f9,lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal);
  tolua_function(param_1,"setScrollBarOpacity",lua_cocos2dx_ui_ScrollView_setScrollBarOpacity);
  tolua_function(param_1,&DAT_012da2eb,lua_cocos2dx_ui_ScrollView_setScrollBarEnabled);
  tolua_function(param_1,"isInertiaScrollEnabled",lua_cocos2dx_ui_ScrollView_isInertiaScrollEnabled)
  ;
                    /* try { // try from 0097b06c to 00a7b08b has its CatchHandler @ 0097b124 */
  tolua_function(param_1,&DAT_012da385,lua_cocos2dx_ui_ScrollView_scrollToBottom);
  tolua_function(param_1,"getScrolledPercentBothDirection",
                 lua_cocos2dx_ui_ScrollView_getScrolledPercentBothDirection);
  tolua_function(param_1,"getDirection",lua_cocos2dx_ui_ScrollView_getDirection);
  tolua_function(param_1,"setScrollBarColor",lua_cocos2dx_ui_ScrollView_setScrollBarColor);
                    /* try { // try from 0097b0c4 to 00a7b0d7 has its CatchHandler @ 0097b120 */
  tolua_function(param_1,"scrollToBottomLeft",lua_cocos2dx_ui_ScrollView_scrollToBottomLeft);
                    /* try { // try from 0097b0d8 to 00a7b13f has its CatchHandler @ 0097afe4 */
  tolua_function(param_1,"getInnerContainer",lua_cocos2dx_ui_ScrollView_getInnerContainer);
  tolua_function(param_1,"jumpToBottom",lua_cocos2dx_ui_ScrollView_jumpToBottom);
  tolua_function(param_1,"setInnerContainerPosition",
                 lua_cocos2dx_ui_ScrollView_setInnerContainerPosition);
                    /* catch() { ... } // from try @ 0097b0c4 with catch @ 0097b120 */
                    /* catch() { ... } // from try @ 0097b06c with catch @ 0097b124 */
  tolua_function(param_1,"setDirection",lua_cocos2dx_ui_ScrollView_setDirection);
  tolua_function(param_1,"scrollToTopLeft",lua_cocos2dx_ui_ScrollView_scrollToTopLeft);
  tolua_function(param_1,"jumpToTopRight",lua_cocos2dx_ui_ScrollView_jumpToTopRight);
  tolua_function(param_1,"scrollToPercentBothDirection",
                 lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection);
  tolua_function(param_1,"setInnerContainerSize",lua_cocos2dx_ui_ScrollView_setInnerContainerSize);
  tolua_function(param_1,"getInnerContainerPosition",
                 lua_cocos2dx_ui_ScrollView_getInnerContainerPosition);
  tolua_function(param_1,"jumpToTop",lua_cocos2dx_ui_ScrollView_jumpToTop);
  tolua_function(param_1,"getScrolledPercentVertical",
                 lua_cocos2dx_ui_ScrollView_getScrolledPercentVertical);
  tolua_function(param_1,"isBounceEnabled",lua_cocos2dx_ui_ScrollView_isBounceEnabled);
  tolua_function(param_1,"jumpToPercentVertical",lua_cocos2dx_ui_ScrollView_jumpToPercentVertical);
  tolua_function(param_1,"addEventListener",lua_cocos2dx_ui_ScrollView_addEventListener);
  tolua_function(param_1,"setScrollBarAutoHideTime",
                 lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideTime);
  tolua_function(param_1,"stopScroll",lua_cocos2dx_ui_ScrollView_stopScroll);
  tolua_function(param_1,"setScrollBarPositionFromCornerForHorizontal",
                 lua_cocos2dx_ui_ScrollView_setScrollBarPositionFromCornerForHorizontal);
  tolua_function(param_1,"setInertiaScrollEnabled",
                 lua_cocos2dx_ui_ScrollView_setInertiaScrollEnabled);
  tolua_function(param_1,"setScrollBarAutoHideEnabled",
                 lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideEnabled);
                    /* try { // try from 0097b2a8 to 00a7b2ff has its CatchHandler @ 0097b2a8
                       catch() { ... } // from try @ 0097b2a8 with catch @ 0097b2a8
                       catch() { ... } // from try @ 0097b350 with catch @ 0097b2a8
                       catch() { ... } // from try @ 0097b394 with catch @ 0097b2a8 */
  tolua_function(param_1,"getScrollBarColor",lua_cocos2dx_ui_ScrollView_getScrollBarColor);
  tolua_function(param_1,"jumpToTopLeft",lua_cocos2dx_ui_ScrollView_jumpToTopLeft);
  tolua_function(param_1,"isScrollBarEnabled",lua_cocos2dx_ui_ScrollView_isScrollBarEnabled);
  tolua_function(param_1,"isAutoScrolling",lua_cocos2dx_ui_ScrollView_isAutoScrolling);
                    /* try { // try from 0097b300 to 00a7b34f has its CatchHandler @ 0097b410 */
  tolua_function(param_1,"jumpToBottomRight",lua_cocos2dx_ui_ScrollView_jumpToBottomRight);
  tolua_function(param_1,"setTouchTotalTimeThreshold",
                 lua_cocos2dx_ui_ScrollView_setTouchTotalTimeThreshold);
  tolua_function(param_1,&DAT_012dac4a,lua_cocos2dx_ui_ScrollView_getTouchTotalTimeThreshold);
                    /* try { // try from 0097b350 to 00a7b37f has its CatchHandler @ 0097b2a8 */
  tolua_function(param_1,"getScrollBarPositionFromCornerForHorizontal",
                 lua_cocos2dx_ui_ScrollView_getScrollBarPositionFromCornerForHorizontal);
  tolua_function(param_1,"getScrolledPercentHorizontal",
                 lua_cocos2dx_ui_ScrollView_getScrolledPercentHorizontal);
                    /* try { // try from 0097b380 to 00a7b393 has its CatchHandler @ 0097b410 */
  tolua_function(param_1,0x12dacde,lua_cocos2dx_ui_ScrollView_setBounceEnabled);
                    /* try { // try from 0097b394 to 00a7b467 has its CatchHandler @ 0097b2a8 */
  tolua_function(param_1,"stopAutoScroll",lua_cocos2dx_ui_ScrollView_stopAutoScroll);
  tolua_function(param_1,"scrollToTopRight",lua_cocos2dx_ui_ScrollView_scrollToTopRight);
  tolua_function(param_1,"isScrolling",lua_cocos2dx_ui_ScrollView_isScrolling);
  tolua_function(param_1,"scrollToLeft",lua_cocos2dx_ui_ScrollView_scrollToLeft);
  tolua_function(param_1,"jumpToPercentBothDirection",
                 lua_cocos2dx_ui_ScrollView_jumpToPercentBothDirection);
                    /* catch() { ... } // from try @ 0097b300 with catch @ 0097b410
                       catch() { ... } // from try @ 0097b380 with catch @ 0097b410 */
  tolua_function(param_1,"stopOverallScroll",lua_cocos2dx_ui_ScrollView_stopOverallScroll);
  tolua_function(param_1,"scrollToPercentVertical",
                 lua_cocos2dx_ui_ScrollView_scrollToPercentVertical);
  tolua_function(param_1,"setScrollBarWidth",lua_cocos2dx_ui_ScrollView_setScrollBarWidth);
  tolua_function(param_1,"getScrollBarOpacity",lua_cocos2dx_ui_ScrollView_getScrollBarOpacity);
  tolua_function(param_1,"scrollToBottomRight",lua_cocos2dx_ui_ScrollView_scrollToBottomRight);
  tolua_function(param_1,"setScrollBarPositionFromCorner",
                 lua_cocos2dx_ui_ScrollView_setScrollBarPositionFromCorner);
  tolua_function(param_1,&DAT_012db105,
                 lua_cocos2dx_ui_ScrollView_setScrollBarPositionFromCornerForVertical);
  tolua_function(param_1,"getScrollBarAutoHideTime",
                 lua_cocos2dx_ui_ScrollView_getScrollBarAutoHideTime);
  tolua_function(param_1,0x12db1cd,lua_cocos2dx_ui_ScrollView_jumpToLeft);
  tolua_function(param_1,"scrollToRight",lua_cocos2dx_ui_ScrollView_scrollToRight);
  tolua_function(param_1,&DAT_012db24f,
                 lua_cocos2dx_ui_ScrollView_getScrollBarPositionFromCornerForVertical);
  tolua_function(param_1,"getScrollBarWidth",lua_cocos2dx_ui_ScrollView_getScrollBarWidth);
  tolua_function(param_1,0x12db2ab,lua_cocos2dx_ui_ScrollView_isScrollBarAutoHideEnabled);
                    /* try { // try from 0097b54c to 00a7b5a3 has its CatchHandler @ 0097b54c
                       catch() { ... } // from try @ 0097b54c with catch @ 0097b54c
                       catch() { ... } // from try @ 0097b5f4 with catch @ 0097b54c
                       catch() { ... } // from try @ 0097b688 with catch @ 0097b54c */
  tolua_function(param_1,&DAT_012db2d6,lua_cocos2dx_ui_ScrollView_jumpToBottomLeft);
  tolua_function(param_1,"jumpToRight",lua_cocos2dx_ui_ScrollView_jumpToRight);
  tolua_function(param_1,"getInnerContainerSize",lua_cocos2dx_ui_ScrollView_getInnerContainerSize);
  tolua_function(param_1,"jumpToPercentHorizontal",
                 lua_cocos2dx_ui_ScrollView_jumpToPercentHorizontal);
                    /* try { // try from 0097b5a4 to 00a7b5f3 has its CatchHandler @ 0097b69c */
  tolua_function(param_1,"create",lua_cocos2dx_ui_ScrollView_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_ScrollView_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui10ScrollViewE");
                    /* try { // try from 0097b5f4 to 00a7b673 has its CatchHandler @ 0097b54c */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.ScrollView",0xf);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ScrollView");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.ScrollView",0xf);
                    /* try { // try from 0097b674 to 00a7b687 has its CatchHandler @ 0097b69c */
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 0097b688 to 00a7b6db has its CatchHandler @ 0097b54c */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 0097b5a4 with catch @ 0097b69c
                       catch() { ... } // from try @ 0097b674 with catch @ 0097b69c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

