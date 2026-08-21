
/* lua_register_cocos2dx_studio_ActionObject(lua_State*) */

undefined8 lua_register_cocos2dx_studio_ActionObject(lua_State *param_1)

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
  tolua_usertype(param_1,"ccs.ActionObject");
  tolua_cclass(param_1,"ActionObject","ccs.ActionObject",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"ActionObject");
  tolua_function(param_1,"new",lua_cocos2dx_studio_ActionObject_constructor);
  tolua_function(param_1,"setCurrentTime",lua_cocos2dx_studio_ActionObject_setCurrentTime);
  tolua_function(param_1,"pause",lua_cocos2dx_studio_ActionObject_pause);
  tolua_function(param_1,"setName",lua_cocos2dx_studio_ActionObject_setName);
  tolua_function(param_1,"setUnitTime",lua_cocos2dx_studio_ActionObject_setUnitTime);
  tolua_function(param_1,&LAB_012d293c,lua_cocos2dx_studio_ActionObject_getTotalTime);
  tolua_function(param_1,"getName",lua_cocos2dx_studio_ActionObject_getName);
  tolua_function(param_1,"stop",lua_cocos2dx_studio_ActionObject_stop);
                    /* try { // try from 0092ae70 to 00a2aebb has its CatchHandler @ 0092ae70
                       catch() { ... } // from try @ 0092ae70 with catch @ 0092ae70
                       catch() { ... } // from try @ 0092aee4 with catch @ 0092ae70 */
  tolua_function(param_1,"play",lua_cocos2dx_studio_ActionObject_play);
  tolua_function(param_1,"getCurrentTime",lua_cocos2dx_studio_ActionObject_getCurrentTime);
  tolua_function(param_1,"removeActionNode",lua_cocos2dx_studio_ActionObject_removeActionNode);
  tolua_function(param_1,"getLoop",lua_cocos2dx_studio_ActionObject_getLoop);
                    /* try { // try from 0092aebc to 00a2aebf has its CatchHandler @ 0092af40 */
  tolua_function(param_1,"addActionNode",lua_cocos2dx_studio_ActionObject_addActionNode);
                    /* try { // try from 0092aee0 to 00a2aee3 has its CatchHandler @ 0092af30 */
                    /* try { // try from 0092aee4 to 00a2af53 has its CatchHandler @ 0092ae70 */
  tolua_function(param_1,"getUnitTime",lua_cocos2dx_studio_ActionObject_getUnitTime);
  tolua_function(param_1,"isPlaying",lua_cocos2dx_studio_ActionObject_isPlaying);
  tolua_function(param_1,"updateToFrameByTime",lua_cocos2dx_studio_ActionObject_updateToFrameByTime)
  ;
                    /* catch() { ... } // from try @ 0092aee0 with catch @ 0092af30 */
  tolua_function(param_1,"setLoop",lua_cocos2dx_studio_ActionObject_setLoop);
                    /* catch() { ... } // from try @ 0092aebc with catch @ 0092af40 */
  tolua_function(param_1,"simulationActionUpdate",
                 lua_cocos2dx_studio_ActionObject_simulationActionUpdate);
  tolua_endmodule(param_1);
                    /* try { // try from 0092af54 to 00a2b023 has its CatchHandler @ 0092af54
                       catch() { ... } // from try @ 0092af54 with catch @ 0092af54
                       catch() { ... } // from try @ 0092b0a4 with catch @ 0092af54 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio12ActionObjectE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.ActionObject",0x10);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ActionObject");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.ActionObject",0x10);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0092b024 to 00a2b057 has its CatchHandler @ 0092b124 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

