
/* lua_register_cocos2dx_extension_ScrollView(lua_State*) */

undefined8 lua_register_cocos2dx_extension_ScrollView(lua_State *param_1)

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
                    /* try { // try from 009ac3d0 to 00aac4e7 has its CatchHandler @ 009ac3d0
                       catch() { ... } // from try @ 009ac3d0 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac4f4 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac524 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac5b0 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac5ec with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac618 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac690 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac6cc with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac6f8 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac76c with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac7a8 with catch @ 009ac3d0
                       catch() { ... } // from try @ 009ac7d4 with catch @ 009ac3d0 */
  tolua_usertype(param_1,"cc.ScrollView");
  tolua_cclass(param_1,"ScrollView","cc.ScrollView","cc.Layer",0);
  tolua_beginmodule(param_1,"ScrollView");
  tolua_function(param_1,"new",lua_cocos2dx_extension_ScrollView_constructor);
  tolua_function(param_1,"isClippingToBounds",lua_cocos2dx_extension_ScrollView_isClippingToBounds);
  tolua_function(param_1,"setContainer",lua_cocos2dx_extension_ScrollView_setContainer);
  tolua_function(param_1,"setContentOffsetInDuration",
                 lua_cocos2dx_extension_ScrollView_setContentOffsetInDuration);
  tolua_function(param_1,"setZoomScaleInDuration",
                 lua_cocos2dx_extension_ScrollView_setZoomScaleInDuration);
  tolua_function(param_1,"updateTweenAction",lua_cocos2dx_extension_ScrollView_updateTweenAction);
  tolua_function(param_1,"setMaxScale",lua_cocos2dx_extension_ScrollView_setMaxScale);
  tolua_function(param_1,"hasVisibleParents",lua_cocos2dx_extension_ScrollView_hasVisibleParents);
                    /* try { // try from 009ac4e8 to 00aac4f3 has its CatchHandler @ 009ac8f4 */
  tolua_function(param_1,"setSwallowTouches",lua_cocos2dx_extension_ScrollView_setSwallowTouches);
                    /* try { // try from 009ac4f4 to 00aac517 has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"getContainer",lua_cocos2dx_extension_ScrollView_getContainer);
                    /* try { // try from 009ac518 to 00aac523 has its CatchHandler @ 009ac8f0 */
  tolua_function(param_1,"setMinScale",lua_cocos2dx_extension_ScrollView_setMinScale);
                    /* try { // try from 009ac524 to 00aac54b has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"getZoomScale",lua_cocos2dx_extension_ScrollView_getZoomScale);
                    /* try { // try from 009ac54c to 00aac557 has its CatchHandler @ 009ac8ec */
  tolua_function(param_1,"updateInset",lua_cocos2dx_extension_ScrollView_updateInset);
  tolua_function(param_1,&DAT_012e7614,lua_cocos2dx_extension_ScrollView_initWithViewSize);
  tolua_function(param_1,"pause",lua_cocos2dx_extension_ScrollView_pause);
  tolua_function(param_1,"setDirection",lua_cocos2dx_extension_ScrollView_setDirection);
                    /* try { // try from 009ac5a8 to 00aac5af has its CatchHandler @ 009ac8b8 */
  tolua_function(param_1,"stopAnimatedContentOffset",
                 lua_cocos2dx_extension_ScrollView_stopAnimatedContentOffset);
                    /* try { // try from 009ac5b0 to 00aac5db has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"setContentOffset",lua_cocos2dx_extension_ScrollView_setContentOffset);
                    /* try { // try from 009ac5dc to 00aac5eb has its CatchHandler @ 009ac8e8 */
  tolua_function(param_1,"isDragging",lua_cocos2dx_extension_ScrollView_isDragging);
                    /* try { // try from 009ac5ec to 00aac60b has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"isTouchEnabled",lua_cocos2dx_extension_ScrollView_isTouchEnabled);
                    /* try { // try from 009ac60c to 00aac617 has its CatchHandler @ 009ac8e4 */
  tolua_function(param_1,"isBounceable",lua_cocos2dx_extension_ScrollView_isBounceable);
                    /* try { // try from 009ac618 to 00aac687 has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"setTouchEnabled",lua_cocos2dx_extension_ScrollView_setTouchEnabled);
  tolua_function(param_1,"getContentOffset",lua_cocos2dx_extension_ScrollView_getContentOffset);
  tolua_function(param_1,"resume",lua_cocos2dx_extension_ScrollView_resume);
  tolua_function(param_1,"setClippingToBounds",lua_cocos2dx_extension_ScrollView_setClippingToBounds
                );
  tolua_function(param_1,"setViewSize",lua_cocos2dx_extension_ScrollView_setViewSize);
                    /* try { // try from 009ac688 to 00aac68f has its CatchHandler @ 009ac8a4 */
                    /* try { // try from 009ac690 to 00aac6bb has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"getViewSize",lua_cocos2dx_extension_ScrollView_getViewSize);
  tolua_function(param_1,&DAT_012e71a2,lua_cocos2dx_extension_ScrollView_maxContainerOffset);
                    /* try { // try from 009ac6bc to 00aac6cb has its CatchHandler @ 009ac8e0 */
                    /* try { // try from 009ac6cc to 00aac6eb has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"setBounceable",lua_cocos2dx_extension_ScrollView_setBounceable);
  tolua_function(param_1,"isTouchMoved",lua_cocos2dx_extension_ScrollView_isTouchMoved);
                    /* try { // try from 009ac6ec to 00aac6f7 has its CatchHandler @ 009ac8dc */
                    /* try { // try from 009ac6f8 to 00aac763 has its CatchHandler @ 009ac3d0 */
  tolua_function(param_1,"isNodeVisible",lua_cocos2dx_extension_ScrollView_isNodeVisible);
  tolua_function(param_1,"minContainerOffset",lua_cocos2dx_extension_ScrollView_minContainerOffset);
  tolua_function(param_1,"getDirection",lua_cocos2dx_extension_ScrollView_getDirection);
  tolua_function(param_1,&DAT_012d8671,lua_cocos2dx_extension_ScrollView_setZoomScale);
  tolua_function(param_1,"create",lua_cocos2dx_extension_ScrollView_create);
                    /* try { // try from 009ac764 to 00aac76b has its CatchHandler @ 009ac890 */
  tolua_endmodule(param_1);
                    /* try { // try from 009ac76c to 00aac797 has its CatchHandler @ 009ac3d0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9extension10ScrollViewE");
                    /* try { // try from 009ac798 to 00aac7a7 has its CatchHandler @ 009ac8d8 */
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e96f0,(tuple *)local_78);
                    /* try { // try from 009ac7a8 to 00aac7c7 has its CatchHandler @ 009ac3d0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ScrollView",0xd);
                    /* try { // try from 009ac7c8 to 00aac7d3 has its CatchHandler @ 009ac8d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ScrollView");
                    /* try { // try from 009ac7d4 to 00aac917 has its CatchHandler @ 009ac3d0 */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e96f0,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.ScrollView",0xd);
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

