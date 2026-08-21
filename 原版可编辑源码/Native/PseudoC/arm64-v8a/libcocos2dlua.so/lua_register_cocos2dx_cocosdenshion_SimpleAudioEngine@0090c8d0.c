
/* lua_register_cocos2dx_cocosdenshion_SimpleAudioEngine(lua_State*) */

undefined8 lua_register_cocos2dx_cocosdenshion_SimpleAudioEngine(lua_State *param_1)

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
                    /* try { // try from 0090c8ec to 00a0c8ff has its CatchHandler @ 0090c944 */
                    /* try { // try from 0090c900 to 00a0c95f has its CatchHandler @ 0090c820 */
  tolua_usertype(param_1,"cc.SimpleAudioEngine");
  tolua_cclass(param_1,"SimpleAudioEngine","cc.SimpleAudioEngine",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"SimpleAudioEngine");
                    /* catch() { ... } // from try @ 0090c8a4 with catch @ 0090c940 */
                    /* catch() { ... } // from try @ 0090c870 with catch @ 0090c944
                       catch() { ... } // from try @ 0090c8ec with catch @ 0090c944 */
  tolua_function(param_1,"preloadMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadBackgroundMusic);
                    /* try { // try from 0090c960 to 00a0c9b3 has its CatchHandler @ 0090c960
                       catch() { ... } // from try @ 0090c960 with catch @ 0090c960
                       catch() { ... } // from try @ 0090ca40 with catch @ 0090c960
                       catch() { ... } // from try @ 0090ca88 with catch @ 0090c960 */
  tolua_function(param_1,"stopMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopBackgroundMusic);
  tolua_function(param_1,"stopAllEffects",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopAllEffects);
  tolua_function(param_1,"getMusicVolume",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getBackgroundMusicVolume);
  tolua_function(param_1,"resumeMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeBackgroundMusic);
                    /* try { // try from 0090c9b4 to 00a0c9cf has its CatchHandler @ 0090cae0 */
  tolua_function(param_1,"setMusicVolume",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume);
  tolua_function(param_1,"preloadEffect",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadEffect)
  ;
                    /* try { // try from 0090c9f0 to 00a0ca07 has its CatchHandler @ 0090caf0 */
  tolua_function(param_1,"isMusicPlaying",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_isBackgroundMusicPlaying);
  tolua_function(param_1,"getEffectsVolume",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getEffectsVolume);
  tolua_function(param_1,"willPlayMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_willPlayBackgroundMusic);
                    /* try { // try from 0090ca28 to 00a0ca3f has its CatchHandler @ 0090cadc */
  tolua_function(param_1,"pauseEffect",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseEffect);
                    /* try { // try from 0090ca40 to 00a0ca73 has its CatchHandler @ 0090c960 */
  tolua_function(param_1,"playEffect",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playEffect);
  tolua_function(param_1,"rewindMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_rewindBackgroundMusic);
                    /* try { // try from 0090ca74 to 00a0ca87 has its CatchHandler @ 0090caf0 */
  tolua_function(param_1,"playMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic);
                    /* try { // try from 0090ca88 to 00a0cb2b has its CatchHandler @ 0090c960 */
  tolua_function(param_1,"resumeAllEffects",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeAllEffects);
  tolua_function(param_1,"setEffectsVolume",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume);
  tolua_function(param_1,"stopEffect",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect);
                    /* catch() { ... } // from try @ 0090ca28 with catch @ 0090cadc */
                    /* catch() { ... } // from try @ 0090c9b4 with catch @ 0090cae0 */
  tolua_function(param_1,"pauseMusic",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic);
                    /* catch() { ... } // from try @ 0090c9f0 with catch @ 0090caf0
                       catch() { ... } // from try @ 0090ca74 with catch @ 0090caf0 */
  tolua_function(param_1,"pauseAllEffects",
                 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseAllEffects);
  tolua_function(param_1,"unloadEffect",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect);
  tolua_function(param_1,"resumeEffect",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_resumeEffect);
  tolua_function(param_1,"destroyInstance",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_end);
  tolua_function(param_1,"getInstance",lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N13CocosDenshion17SimpleAudioEngineE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012b49f1,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.SimpleAudioEngine",0x14);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"SimpleAudioEngine");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012b49f1,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.SimpleAudioEngine",0x14);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 0090cc20 to 00a0cc73 has its CatchHandler @ 0090cc20
                       catch() { ... } // from try @ 0090cc20 with catch @ 0090cc20
                       catch() { ... } // from try @ 0090cd04 with catch @ 0090cc20
                       catch() { ... } // from try @ 0090cd88 with catch @ 0090cc20 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

