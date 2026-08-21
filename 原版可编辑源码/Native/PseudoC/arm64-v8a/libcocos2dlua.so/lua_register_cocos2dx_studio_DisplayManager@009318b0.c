
/* lua_register_cocos2dx_studio_DisplayManager(lua_State*) */

undefined8 lua_register_cocos2dx_studio_DisplayManager(lua_State *param_1)

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
  tolua_usertype(param_1,"ccs.DisplayManager");
  tolua_cclass(param_1,"DisplayManager","ccs.DisplayManager",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"DisplayManager");
  tolua_function(param_1,"new",lua_cocos2dx_studio_DisplayManager_constructor);
  tolua_function(param_1,"getDisplayRenderNode",
                 lua_cocos2dx_studio_DisplayManager_getDisplayRenderNode);
  tolua_function(param_1,"getAnchorPointInPoints",
                 lua_cocos2dx_studio_DisplayManager_getAnchorPointInPoints);
  tolua_function(param_1,"getDisplayRenderNodeType",
                 lua_cocos2dx_studio_DisplayManager_getDisplayRenderNodeType);
  tolua_function(param_1,"removeDisplay",lua_cocos2dx_studio_DisplayManager_removeDisplay);
  tolua_function(param_1,"setForceChangeDisplay",
                 lua_cocos2dx_studio_DisplayManager_setForceChangeDisplay);
  tolua_function(param_1,"init",lua_cocos2dx_studio_DisplayManager_init);
  tolua_function(param_1,"getContentSize",lua_cocos2dx_studio_DisplayManager_getContentSize);
  tolua_function(param_1,"getBoundingBox",lua_cocos2dx_studio_DisplayManager_getBoundingBox);
  tolua_function(param_1,"addDisplay",lua_cocos2dx_studio_DisplayManager_addDisplay);
  tolua_function(param_1,"containPoint",lua_cocos2dx_studio_DisplayManager_containPoint);
  tolua_function(param_1,&DAT_012cb57f,lua_cocos2dx_studio_DisplayManager_changeDisplayWithIndex);
  tolua_function(param_1,"changeDisplayWithName",
                 lua_cocos2dx_studio_DisplayManager_changeDisplayWithName);
  tolua_function(param_1,"isForceChangeDisplay",
                 lua_cocos2dx_studio_DisplayManager_isForceChangeDisplay);
  tolua_function(param_1,"getCurrentDisplayIndex",
                 lua_cocos2dx_studio_DisplayManager_getCurrentDisplayIndex);
  tolua_function(param_1,"getAnchorPoint",lua_cocos2dx_studio_DisplayManager_getAnchorPoint);
  tolua_function(param_1,"getDecorativeDisplayList",
                 lua_cocos2dx_studio_DisplayManager_getDecorativeDisplayList);
  tolua_function(param_1,"isVisible",lua_cocos2dx_studio_DisplayManager_isVisible);
  tolua_function(param_1,"setVisible",lua_cocos2dx_studio_DisplayManager_setVisible);
  tolua_function(param_1,"create",lua_cocos2dx_studio_DisplayManager_create);
  tolua_endmodule(param_1);
                    /* try { // try from 00931afc to 00a31b47 has its CatchHandler @ 00931afc
                       catch() { ... } // from try @ 00931afc with catch @ 00931afc
                       catch() { ... } // from try @ 00931b70 with catch @ 00931afc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio14DisplayManagerE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
                    /* try { // try from 00931b48 to 00a31b4b has its CatchHandler @ 00931bcc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.DisplayManager",0x12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"DisplayManager");
                    /* try { // try from 00931b6c to 00a31b6f has its CatchHandler @ 00931bbc */
                    /* try { // try from 00931b70 to 00a31bdf has its CatchHandler @ 00931afc */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.DisplayManager",0x12);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 00931b6c with catch @ 00931bbc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00931b48 with catch @ 00931bcc */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00931be0 to 00a31cdf has its CatchHandler @ 00931be0
                       catch() { ... } // from try @ 00931be0 with catch @ 00931be0
                       catch() { ... } // from try @ 00931d60 with catch @ 00931be0 */
  __stack_chk_fail();
}

