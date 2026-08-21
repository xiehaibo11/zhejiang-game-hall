
/* lua_register_cocos2dx_studio_ComAudio(lua_State*) */

undefined8 lua_register_cocos2dx_studio_ComAudio(lua_State *param_1)

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
  tolua_usertype(param_1,"ccs.ComAudio");
                    /* try { // try from 0093c768 to 00a3c79b has its CatchHandler @ 0093caa0 */
  tolua_cclass(param_1,"ComAudio","ccs.ComAudio","cc.Component",0);
  tolua_beginmodule(param_1,"ComAudio");
  tolua_function(param_1,"stopAllEffects",lua_cocos2dx_studio_ComAudio_stopAllEffects);
  tolua_function(param_1,"getEffectsVolume",lua_cocos2dx_studio_ComAudio_getEffectsVolume);
                    /* try { // try from 0093c7ac to 00a3c7b3 has its CatchHandler @ 0093caac */
                    /* try { // try from 0093c7b4 to 00a3c857 has its CatchHandler @ 0093cacc */
  tolua_function(param_1,"stopEffect",lua_cocos2dx_studio_ComAudio_stopEffect);
  tolua_function(param_1,"getBackgroundMusicVolume",
                 lua_cocos2dx_studio_ComAudio_getBackgroundMusicVolume);
  tolua_function(param_1,"willPlayBackgroundMusic",
                 lua_cocos2dx_studio_ComAudio_willPlayBackgroundMusic);
  tolua_function(param_1,"setBackgroundMusicVolume",
                 lua_cocos2dx_studio_ComAudio_setBackgroundMusicVolume);
  tolua_function(param_1,"start",lua_cocos2dx_studio_ComAudio_start);
  tolua_function(param_1,"stopBackgroundMusic",lua_cocos2dx_studio_ComAudio_stopBackgroundMusic);
  tolua_function(param_1,"pauseBackgroundMusic",lua_cocos2dx_studio_ComAudio_pauseBackgroundMusic);
  tolua_function(param_1,"isBackgroundMusicPlaying",
                 lua_cocos2dx_studio_ComAudio_isBackgroundMusicPlaying);
                    /* try { // try from 0093c87c to 00a3c8ab has its CatchHandler @ 0093ca9c */
  tolua_function(param_1,"isLoop",lua_cocos2dx_studio_ComAudio_isLoop);
  tolua_function(param_1,"resumeAllEffects",lua_cocos2dx_studio_ComAudio_resumeAllEffects);
  tolua_function(param_1,"pauseAllEffects",lua_cocos2dx_studio_ComAudio_pauseAllEffects);
                    /* try { // try from 0093c8bc to 00a3c92f has its CatchHandler @ 0093cac8 */
  tolua_function(param_1,"preloadBackgroundMusic",
                 lua_cocos2dx_studio_ComAudio_preloadBackgroundMusic);
  tolua_function(param_1,"playBackgroundMusic",lua_cocos2dx_studio_ComAudio_playBackgroundMusic);
  tolua_function(param_1,"stop",lua_cocos2dx_studio_ComAudio_stop);
  tolua_function(param_1,"endToLua",lua_cocos2dx_studio_ComAudio_end);
  tolua_function(param_1,"playEffect",lua_cocos2dx_studio_ComAudio_playEffect);
  tolua_function(param_1,"preloadEffect",lua_cocos2dx_studio_ComAudio_preloadEffect);
                    /* try { // try from 0093c948 to 00a3c97f has its CatchHandler @ 0093caa4 */
  tolua_function(param_1,"setLoop",lua_cocos2dx_studio_ComAudio_setLoop);
  tolua_function(param_1,"unloadEffect",lua_cocos2dx_studio_ComAudio_unloadEffect);
                    /* try { // try from 0093c980 to 00a3c9ab has its CatchHandler @ 0093c5a8 */
  tolua_function(param_1,"rewindBackgroundMusic",lua_cocos2dx_studio_ComAudio_rewindBackgroundMusic)
  ;
  tolua_function(param_1,"pauseEffect",lua_cocos2dx_studio_ComAudio_pauseEffect);
                    /* try { // try from 0093c9ac to 00a3c9bf has its CatchHandler @ 0093cac0 */
  tolua_function(param_1,"resumeBackgroundMusic",lua_cocos2dx_studio_ComAudio_resumeBackgroundMusic)
  ;
                    /* try { // try from 0093c9c4 to 00a3c9d7 has its CatchHandler @ 0093cac8 */
  tolua_function(param_1,"setFile",lua_cocos2dx_studio_ComAudio_setFile);
                    /* try { // try from 0093c9dc to 00a3c9ef has its CatchHandler @ 0093cac4 */
  tolua_function(param_1,"setEffectsVolume",lua_cocos2dx_studio_ComAudio_setEffectsVolume);
                    /* try { // try from 0093c9f4 to 00a3ca07 has its CatchHandler @ 0093cacc */
  tolua_function(param_1,"getFile",lua_cocos2dx_studio_ComAudio_getFile);
  tolua_function(param_1,"resumeEffect",lua_cocos2dx_studio_ComAudio_resumeEffect);
  tolua_function(param_1,"create",lua_cocos2dx_studio_ComAudio_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_studio_ComAudio_createInstance);
  tolua_endmodule(param_1);
                    /* try { // try from 0093ca5c to 00a3ca63 has its CatchHandler @ 0093caa8 */
                    /* try { // try from 0093ca68 to 00a3ca6f has its CatchHandler @ 0093caa4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N10cocostudio8ComAudioE");
                    /* try { // try from 0093ca74 to 00a3ca7b has its CatchHandler @ 0093caa0 */
                    /* try { // try from 0093ca80 to 00a3ca87 has its CatchHandler @ 0093ca9c */
  local_78[0] = local_60;
                    /* try { // try from 0093ca88 to 00a3cb07 has its CatchHandler @ 0093c5a8 */
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012d0caa,(tuple *)local_78);
                    /* catch() { ... } // from try @ 0093c87c with catch @ 0093ca9c
                       catch() { ... } // from try @ 0093ca80 with catch @ 0093ca9c */
                    /* catch() { ... } // from try @ 0093c768 with catch @ 0093caa0
                       catch() { ... } // from try @ 0093ca74 with catch @ 0093caa0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.ComAudio",0xc);
                    /* catch() { ... } // from try @ 0093c948 with catch @ 0093caa4
                       catch() { ... } // from try @ 0093ca68 with catch @ 0093caa4 */
                    /* catch() { ... } // from try @ 0093c66c with catch @ 0093caa8
                       catch() { ... } // from try @ 0093ca5c with catch @ 0093caa8 */
                    /* catch() { ... } // from try @ 0093c7ac with catch @ 0093caac */
                    /* catch() { ... } // from try @ 0093c6b8 with catch @ 0093cab0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"ComAudio");
                    /* catch() { ... } // from try @ 0093c608 with catch @ 0093cac0
                       catch() { ... } // from try @ 0093c9ac with catch @ 0093cac0 */
                    /* catch() { ... } // from try @ 0093c6c0 with catch @ 0093cac4
                       catch() { ... } // from try @ 0093c9dc with catch @ 0093cac4 */
                    /* catch() { ... } // from try @ 0093c8bc with catch @ 0093cac8
                       catch() { ... } // from try @ 0093c9c4 with catch @ 0093cac8 */
                    /* catch() { ... } // from try @ 0093c7b4 with catch @ 0093cacc
                       catch() { ... } // from try @ 0093c9f4 with catch @ 0093cacc */
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012d0caa,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccs.ComAudio",0xc);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 0093cb08 to 00a3d267 has its CatchHandler @ 0093cb08
                       catch() { ... } // from try @ 0093cb08 with catch @ 0093cb08
                       catch() { ... } // from try @ 0093d2e8 with catch @ 0093cb08 */
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

