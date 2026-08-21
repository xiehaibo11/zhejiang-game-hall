
/* lua_register_cocos2dx_audioengine_AudioEngine(lua_State*) */

undefined8 lua_register_cocos2dx_audioengine_AudioEngine(lua_State *param_1)

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
  tolua_usertype(param_1,"ccexp.AudioEngine");
  tolua_cclass(param_1,"AudioEngine","ccexp.AudioEngine",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"AudioEngine");
                    /* try { // try from 009cdd00 to 00acdd73 has its CatchHandler @ 009cdd00
                       catch() { ... } // from try @ 009cdd00 with catch @ 009cdd00
                       catch() { ... } // from try @ 009cdd80 with catch @ 009cdd00 */
  tolua_function(param_1,"lazyInit",lua_cocos2dx_audioengine_AudioEngine_lazyInit);
  tolua_function(param_1,"setCurrentTime",lua_cocos2dx_audioengine_AudioEngine_setCurrentTime);
  tolua_function(param_1,"getVolume",lua_cocos2dx_audioengine_AudioEngine_getVolume);
  tolua_function(param_1,"uncache",lua_cocos2dx_audioengine_AudioEngine_uncache);
  tolua_function(param_1,"resumeAll",lua_cocos2dx_audioengine_AudioEngine_resumeAll);
                    /* try { // try from 009cdd74 to 00acdd7f has its CatchHandler @ 009cddf0 */
  tolua_function(param_1,"stopAll",lua_cocos2dx_audioengine_AudioEngine_stopAll);
                    /* try { // try from 009cdd80 to 00acde27 has its CatchHandler @ 009cdd00 */
  tolua_function(param_1,"pause",lua_cocos2dx_audioengine_AudioEngine_pause);
  tolua_function(param_1,&DAT_012efe81,lua_cocos2dx_audioengine_AudioEngine_getMaxAudioInstance);
  tolua_function(param_1,&DAT_012e8343,lua_cocos2dx_audioengine_AudioEngine_isEnabled);
  tolua_function(param_1,"getCurrentTime",lua_cocos2dx_audioengine_AudioEngine_getCurrentTime);
                    /* catch() { ... } // from try @ 009cdd74 with catch @ 009cddf0 */
  tolua_function(param_1,&DAT_012eff38,lua_cocos2dx_audioengine_AudioEngine_setMaxAudioInstance);
  tolua_function(param_1,"isLoop",lua_cocos2dx_audioengine_AudioEngine_isLoop);
  tolua_function(param_1,&DAT_012f001c,lua_cocos2dx_audioengine_AudioEngine_pauseAll);
  tolua_function(param_1,"uncacheAll",lua_cocos2dx_audioengine_AudioEngine_uncacheAll);
  tolua_function(param_1,"setVolume",lua_cocos2dx_audioengine_AudioEngine_setVolume);
  tolua_function(param_1,"preload",lua_cocos2dx_audioengine_AudioEngine_preload);
  tolua_function(param_1,"setEnabled",lua_cocos2dx_audioengine_AudioEngine_setEnabled);
  tolua_function(param_1,"play2d",lua_cocos2dx_audioengine_AudioEngine_play2d);
  tolua_function(param_1,"getState",lua_cocos2dx_audioengine_AudioEngine_getState);
  tolua_function(param_1,"resume",lua_cocos2dx_audioengine_AudioEngine_resume);
  tolua_function(param_1,"stop",lua_cocos2dx_audioengine_AudioEngine_stop);
  tolua_function(param_1,"endToLua",lua_cocos2dx_audioengine_AudioEngine_end);
  tolua_function(param_1,"getDuration",lua_cocos2dx_audioengine_AudioEngine_getDuration);
  tolua_function(param_1,"setLoop",lua_cocos2dx_audioengine_AudioEngine_setLoop);
  tolua_function(param_1,"getDefaultProfile",lua_cocos2dx_audioengine_AudioEngine_getDefaultProfile)
  ;
  tolua_function(param_1,"getProfile",lua_cocos2dx_audioengine_AudioEngine_getProfile);
  tolua_function(param_1,"getPlayingAudioCount",
                 lua_cocos2dx_audioengine_AudioEngine_getPlayingAudioCount);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d12experimental11AudioEngineE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012f0469,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccexp.AudioEngine",0x11);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"AudioEngine");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012f0469,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccexp.AudioEngine",0x11);
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

