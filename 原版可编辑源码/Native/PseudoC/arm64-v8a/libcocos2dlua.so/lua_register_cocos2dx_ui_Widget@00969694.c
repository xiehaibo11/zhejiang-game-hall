
/* lua_register_cocos2dx_ui_Widget(lua_State*) */

undefined8 lua_register_cocos2dx_ui_Widget(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.Widget");
  tolua_cclass(param_1,"Widget","ccui.Widget","cc.ProtectedNode",0);
  tolua_beginmodule(param_1,"Widget");
  tolua_function(param_1,"new",lua_cocos2dx_ui_Widget_constructor);
  tolua_function(param_1,"setLayoutComponentEnabled",
                 lua_cocos2dx_ui_Widget_setLayoutComponentEnabled);
  tolua_function(param_1,&DAT_012d6514,lua_cocos2dx_ui_Widget_setSizePercent);
  tolua_function(param_1,"getCustomSize",lua_cocos2dx_ui_Widget_getCustomSize);
  tolua_function(param_1,"getLeftBoundary",lua_cocos2dx_ui_Widget_getLeftBoundary);
  tolua_function(param_1,"setFlippedX",lua_cocos2dx_ui_Widget_setFlippedX);
  tolua_function(param_1,"setCallbackName",lua_cocos2dx_ui_Widget_setCallbackName);
  tolua_function(param_1,"getVirtualRenderer",lua_cocos2dx_ui_Widget_getVirtualRenderer);
  tolua_function(param_1,"setPropagateTouchEvents",lua_cocos2dx_ui_Widget_setPropagateTouchEvents);
  tolua_function(param_1,"isUnifySizeEnabled",lua_cocos2dx_ui_Widget_isUnifySizeEnabled);
  tolua_function(param_1,0x12d671a,lua_cocos2dx_ui_Widget_getSizePercent);
  tolua_function(param_1,"setPositionPercent",lua_cocos2dx_ui_Widget_setPositionPercent);
                    /* try { // try from 00969820 to 00a6986b has its CatchHandler @ 00969820
                       catch() { ... } // from try @ 00969820 with catch @ 00969820
                       catch() { ... } // from try @ 00969870 with catch @ 00969820 */
  tolua_function(param_1,"setSwallowTouches",lua_cocos2dx_ui_Widget_setSwallowTouches);
  tolua_function(param_1,"getLayoutSize",lua_cocos2dx_ui_Widget_getLayoutSize);
  tolua_function(param_1,"setHighlighted",lua_cocos2dx_ui_Widget_setHighlighted);
                    /* try { // try from 0096986c to 00a6986f has its CatchHandler @ 009698a4 */
                    /* try { // try from 00969870 to 00a698b7 has its CatchHandler @ 00969820 */
  tolua_function(param_1,"setPositionType",lua_cocos2dx_ui_Widget_setPositionType);
  tolua_function(param_1,"isIgnoreContentAdaptWithSize",
                 lua_cocos2dx_ui_Widget_isIgnoreContentAdaptWithSize);
                    /* catch() { ... } // from try @ 0096986c with catch @ 009698a4 */
  tolua_function(param_1,"getVirtualRendererSize",lua_cocos2dx_ui_Widget_getVirtualRendererSize);
                    /* try { // try from 009698b8 to 00a6999f has its CatchHandler @ 009698b8
                       catch() { ... } // from try @ 009698b8 with catch @ 009698b8
                       catch() { ... } // from try @ 00969a20 with catch @ 009698b8 */
  tolua_function(param_1,"isHighlighted",lua_cocos2dx_ui_Widget_isHighlighted);
  tolua_function(param_1,"getLayoutParameter",lua_cocos2dx_ui_Widget_getLayoutParameter);
  tolua_function(param_1,"getPositionType",lua_cocos2dx_ui_Widget_getPositionType);
  tolua_function(param_1,"getTopBoundary",lua_cocos2dx_ui_Widget_getTopBoundary);
  tolua_function(param_1,&DAT_012d699f,lua_cocos2dx_ui_Widget_ignoreContentAdaptWithSize);
  tolua_function(param_1,"findNextFocusedWidget",lua_cocos2dx_ui_Widget_findNextFocusedWidget);
  tolua_function(param_1,&DAT_012e8343,lua_cocos2dx_ui_Widget_isEnabled);
  tolua_function(param_1,"isFocused",lua_cocos2dx_ui_Widget_isFocused);
  tolua_function(param_1,&DAT_012d6ab3,lua_cocos2dx_ui_Widget_getTouchBeganPosition);
  tolua_function(param_1,"isTouchEnabled",lua_cocos2dx_ui_Widget_isTouchEnabled);
                    /* try { // try from 009699a0 to 00a699d3 has its CatchHandler @ 00969aa0 */
  tolua_function(param_1,"getCallbackName",lua_cocos2dx_ui_Widget_getCallbackName);
  tolua_function(param_1,&DAT_012cf8dc,lua_cocos2dx_ui_Widget_getActionTag);
                    /* try { // try from 009699d4 to 00a699e7 has its CatchHandler @ 00969a6c */
  tolua_function(param_1,"getWorldPosition",lua_cocos2dx_ui_Widget_getWorldPosition);
                    /* try { // try from 009699ec to 00a69a1f has its CatchHandler @ 00969a70 */
  tolua_function(param_1,"isFocusEnabled",lua_cocos2dx_ui_Widget_isFocusEnabled);
  tolua_function(param_1,&DAT_012d6b5d,lua_cocos2dx_ui_Widget_setFocused);
                    /* try { // try from 00969a20 to 00a69abb has its CatchHandler @ 009698b8 */
  tolua_function(param_1,"setActionTag",lua_cocos2dx_ui_Widget_setActionTag);
  tolua_function(param_1,"setTouchEnabled",lua_cocos2dx_ui_Widget_setTouchEnabled);
  tolua_function(param_1,"setFlippedY",lua_cocos2dx_ui_Widget_setFlippedY);
                    /* catch() { ... } // from try @ 009699d4 with catch @ 00969a6c */
  tolua_function(param_1,"setEnabled",lua_cocos2dx_ui_Widget_setEnabled);
                    /* catch() { ... } // from try @ 009699ec with catch @ 00969a70 */
  tolua_function(param_1,"getRightBoundary",lua_cocos2dx_ui_Widget_getRightBoundary);
  tolua_function(param_1,"setBrightStyle",lua_cocos2dx_ui_Widget_setBrightStyle);
                    /* catch() { ... } // from try @ 009699a0 with catch @ 00969aa0 */
  tolua_function(param_1,"setLayoutParameter",lua_cocos2dx_ui_Widget_setLayoutParameter);
  tolua_function(param_1,"clone",lua_cocos2dx_ui_Widget_clone);
  tolua_function(param_1,"setFocusEnabled",lua_cocos2dx_ui_Widget_setFocusEnabled);
  tolua_function(param_1,"getBottomBoundary",lua_cocos2dx_ui_Widget_getBottomBoundary);
  tolua_function(param_1,&DAT_012d6ea4,lua_cocos2dx_ui_Widget_isBright);
  tolua_function(param_1,"dispatchFocusEvent",lua_cocos2dx_ui_Widget_dispatchFocusEvent);
  tolua_function(param_1,"setUnifySizeEnabled",lua_cocos2dx_ui_Widget_setUnifySizeEnabled);
  tolua_function(param_1,&DAT_012d6f8d,lua_cocos2dx_ui_Widget_isPropagateTouchEvents);
  tolua_function(param_1,"hitTest",lua_cocos2dx_ui_Widget_hitTest);
  tolua_function(param_1,"isLayoutComponentEnabled",lua_cocos2dx_ui_Widget_isLayoutComponentEnabled)
  ;
  tolua_function(param_1,"requestFocus",lua_cocos2dx_ui_Widget_requestFocus);
  tolua_function(param_1,"updateSizeAndPosition",lua_cocos2dx_ui_Widget_updateSizeAndPosition);
  tolua_function(param_1,"onFocusChange",lua_cocos2dx_ui_Widget_onFocusChange);
  tolua_function(param_1,"getTouchMovePosition",lua_cocos2dx_ui_Widget_getTouchMovePosition);
  tolua_function(param_1,"getSizeType",lua_cocos2dx_ui_Widget_getSizeType);
  tolua_function(param_1,&DAT_012d70fb,lua_cocos2dx_ui_Widget_getCallbackType);
  tolua_function(param_1,&DAT_012d7117,lua_cocos2dx_ui_Widget_getTouchEndPosition);
  tolua_function(param_1,"getPositionPercent",lua_cocos2dx_ui_Widget_getPositionPercent);
  tolua_function(param_1,"propagateTouchEvent",lua_cocos2dx_ui_Widget_propagateTouchEvent);
  tolua_function(param_1,"isFlippedX",lua_cocos2dx_ui_Widget_isFlippedX);
  tolua_function(param_1,"isFlippedY",lua_cocos2dx_ui_Widget_isFlippedY);
  tolua_function(param_1,"isClippingParentContainsPoint",
                 lua_cocos2dx_ui_Widget_isClippingParentContainsPoint);
  tolua_function(param_1,&DAT_012d726e,lua_cocos2dx_ui_Widget_setSizeType);
  tolua_function(param_1,"interceptTouchEvent",lua_cocos2dx_ui_Widget_interceptTouchEvent);
  tolua_function(param_1,"setBright",lua_cocos2dx_ui_Widget_setBright);
  tolua_function(param_1,"setCallbackType",lua_cocos2dx_ui_Widget_setCallbackType);
  tolua_function(param_1,"isSwallowTouches",lua_cocos2dx_ui_Widget_isSwallowTouches);
  tolua_function(param_1,"enableDpadNavigation",lua_cocos2dx_ui_Widget_enableDpadNavigation);
  tolua_function(param_1,"getCurrentFocusedWidget",lua_cocos2dx_ui_Widget_getCurrentFocusedWidget);
  tolua_function(param_1,"create",lua_cocos2dx_ui_Widget_create);
  tolua_endmodule(param_1);
                    /* try { // try from 00969d8c to 00a69dd7 has its CatchHandler @ 00969d8c
                       catch() { ... } // from try @ 00969d8c with catch @ 00969d8c
                       catch() { ... } // from try @ 00969ddc with catch @ 00969d8c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui6WidgetE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Widget",0xb);
                    /* try { // try from 00969dd8 to 00a69ddb has its CatchHandler @ 00969e10 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Widget");
                    /* try { // try from 00969ddc to 00a69e23 has its CatchHandler @ 00969d8c */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
                    /* catch() { ... } // from try @ 00969dd8 with catch @ 00969e10 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Widget",0xb);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
                    /* try { // try from 00969e24 to 00a69edb has its CatchHandler @ 00969e24
                       catch() { ... } // from try @ 00969e24 with catch @ 00969e24
                       catch() { ... } // from try @ 00969f5c with catch @ 00969e24 */
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

