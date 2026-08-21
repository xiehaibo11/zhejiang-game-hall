
/* lua_register_cocos2dx_studio_ActionTimeline(lua_State*) */

undefined8 lua_register_cocos2dx_studio_ActionTimeline(lua_State *param_1)

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
  tolua_usertype(param_1,"ccs.ActionTimeline");
  tolua_cclass(param_1,"ActionTimeline","ccs.ActionTimeline","cc.Action",0);
  tolua_beginmodule(param_1,"ActionTimeline");
  tolua_function(param_1,"new",lua_cocos2dx_studio_ActionTimeline_constructor);
  tolua_function(param_1,"clearFrameEndCallFuncs",
                 lua_cocos2dx_studio_ActionTimeline_clearFrameEndCallFuncs);
  tolua_function(param_1,"setAnimationEndCallFunc",
                 lua_cocos2dx_studio_ActionTimeline_setAnimationEndCallFunc);
  tolua_function(param_1,"addTimeline",lua_cocos2dx_studio_ActionTimeline_addTimeline);
  tolua_function(param_1,"getCurrentFrame",lua_cocos2dx_studio_ActionTimeline_getCurrentFrame);
  tolua_function(param_1,"getStartFrame",lua_cocos2dx_studio_ActionTimeline_getStartFrame);
  tolua_function(param_1,"pause",lua_cocos2dx_studio_ActionTimeline_pause);
  tolua_function(param_1,"start",lua_cocos2dx_studio_ActionTimeline_start);
  tolua_function(param_1,"init",lua_cocos2dx_studio_ActionTimeline_init);
  tolua_function(param_1,&DAT_012cfb55,lua_cocos2dx_studio_ActionTimeline_removeTimeline);
  tolua_function(param_1,"clearFrameEventCallFunc",
                 lua_cocos2dx_studio_ActionTimeline_clearFrameEventCallFunc);
  tolua_function(param_1,"setLastFrameCallFunc",
                 lua_cocos2dx_studio_ActionTimeline_setLastFrameCallFunc);
  tolua_function(param_1,"getTimelines",lua_cocos2dx_studio_ActionTimeline_getTimelines);
  tolua_function(param_1,"play",lua_cocos2dx_studio_ActionTimeline_play);
  tolua_function(param_1,"getAnimationInfo",lua_cocos2dx_studio_ActionTimeline_getAnimationInfo);
  tolua_function(param_1,"resume",lua_cocos2dx_studio_ActionTimeline_resume);
  tolua_function(param_1,"addFrameEndCallFunc",
                 lua_cocos2dx_studio_ActionTimeline_addFrameEndCallFunc);
  tolua_function(param_1,"removeAnimationInfo",
                 lua_cocos2dx_studio_ActionTimeline_removeAnimationInfo);
  tolua_function(param_1,"getTimeSpeed",lua_cocos2dx_studio_ActionTimeline_getTimeSpeed);
  tolua_function(param_1,"addAnimationInfo",lua_cocos2dx_studio_ActionTimeline_addAnimationInfo);
  tolua_function(param_1,"getDuration",lua_cocos2dx_studio_ActionTimeline_getDuration);
  tolua_function(param_1,"gotoFrameAndPause",lua_cocos2dx_studio_ActionTimeline_gotoFrameAndPause);
  tolua_function(param_1,"isPlaying",lua_cocos2dx_studio_ActionTimeline_isPlaying);
  tolua_function(param_1,"removeFrameEndCallFuncs",
                 lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFuncs);
  tolua_function(param_1,"gotoFrameAndPlay",lua_cocos2dx_studio_ActionTimeline_gotoFrameAndPlay);
  tolua_function(param_1,"IsAnimationInfoExists",
                 lua_cocos2dx_studio_ActionTimeline_IsAnimationInfoExists);
  tolua_function(param_1,"getEndFrame",lua_cocos2dx_studio_ActionTimeline_getEndFrame);
  tolua_function(param_1,"setTimeSpeed",lua_cocos2dx_studio_ActionTimeline_setTimeSpeed);
  tolua_function(param_1,"clearLastFrameCallFunc",
                 lua_cocos2dx_studio_ActionTimeline_clearLastFrameCallFunc);
  tolua_function(param_1,"setDuration",lua_cocos2dx_studio_ActionTimeline_setDuration);
  tolua_function(param_1,"setCurrentFrame",lua_cocos2dx_studio_ActionTimeline_setCurrentFrame);
  tolua_function(param_1,"removeFrameEndCallFunc",
                 lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFunc);
  tolua_function(param_1,"create",lua_cocos2dx_studio_ActionTimeline_create);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio8timeline14ActionTimelineE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.ActionTimeline",0x12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ActionTimeline");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.ActionTimeline",0x12);
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

