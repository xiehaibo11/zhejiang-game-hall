
/* lua_register_cocos2dx_cocosbuilder_CCBAnimationManager(lua_State*) */

undefined8 lua_register_cocos2dx_cocosbuilder_CCBAnimationManager(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.CCBAnimationManager");
  tolua_cclass(param_1,"CCBAnimationManager","cc.CCBAnimationManager",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"CCBAnimationManager");
  tolua_function(param_1,"new",lua_cocos2dx_cocosbuilder_CCBAnimationManager_constructor);
  tolua_function(param_1,"moveAnimationsFromNode",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_moveAnimationsFromNode);
  tolua_function(param_1,"setAutoPlaySequenceId",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_setAutoPlaySequenceId);
  tolua_function(param_1,"getDocumentCallbackNames",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackNames);
                    /* try { // try from 0091eb04 to 00a1eb4f has its CatchHandler @ 0091eb04
                       catch() { ... } // from try @ 0091eb04 with catch @ 0091eb04
                       catch() { ... } // from try @ 0091eb54 with catch @ 0091eb04 */
  tolua_function(param_1,"actionForSoundChannel",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForSoundChannel);
  tolua_function(param_1,"setBaseValue",lua_cocos2dx_cocosbuilder_CCBAnimationManager_setBaseValue);
  tolua_function(param_1,"getDocumentOutletNodes",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentOutletNodes);
                    /* try { // try from 0091eb50 to 00a1eb53 has its CatchHandler @ 0091eba8 */
                    /* try { // try from 0091eb54 to 00a1ebbb has its CatchHandler @ 0091eb04 */
  tolua_function(param_1,"getLastCompletedSequenceName",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getLastCompletedSequenceName);
  tolua_function(param_1,"setRootNode",lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootNode);
  tolua_function(param_1,"runAnimationsForSequenceNamedTweenDuration",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration
                );
  tolua_function(param_1,"addDocumentOutletName",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletName);
                    /* catch() { ... } // from try @ 0091eb50 with catch @ 0091eba8 */
  tolua_function(param_1,"getSequences",lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequences);
                    /* try { // try from 0091ebbc to 00a1ec73 has its CatchHandler @ 0091ebbc
                       catch() { ... } // from try @ 0091ebbc with catch @ 0091ebbc
                       catch() { ... } // from try @ 0091ecf4 with catch @ 0091ebbc */
  tolua_function(param_1,"getRootContainerSize",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRootContainerSize);
  tolua_function(param_1,"setDocumentControllerName",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_setDocumentControllerName);
  tolua_function(param_1,"setObject",lua_cocos2dx_cocosbuilder_CCBAnimationManager_setObject);
  tolua_function(param_1,"getContainerSize",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getContainerSize);
  tolua_function(param_1,"actionForCallbackChannel",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForCallbackChannel);
  tolua_function(param_1,"getDocumentOutletNames",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentOutletNames);
  tolua_function(param_1,"addDocumentCallbackControlEvents",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentCallbackControlEvents);
                    /* try { // try from 0091ec74 to 00a1eca7 has its CatchHandler @ 0091ed74 */
  tolua_function(param_1,"init",lua_cocos2dx_cocosbuilder_CCBAnimationManager_init);
  tolua_function(param_1,"getKeyframeCallbacks",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getKeyframeCallbacks);
  tolua_function(param_1,"getDocumentCallbackControlEvents",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackControlEvents);
                    /* try { // try from 0091eca8 to 00a1ecbb has its CatchHandler @ 0091ed40 */
  tolua_function(param_1,"setRootContainerSize",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootContainerSize);
                    /* try { // try from 0091ecc0 to 00a1ecf3 has its CatchHandler @ 0091ed44 */
  tolua_function(param_1,"runAnimationsForSequenceIdTweenDuration",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration
                );
  tolua_function(param_1,&DAT_012c6cdb,
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRunningSequenceName);
                    /* try { // try from 0091ecf4 to 00a1ed8f has its CatchHandler @ 0091ebbc */
  tolua_function(param_1,&DAT_012c6d09,
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getAutoPlaySequenceId);
  tolua_function(param_1,"addDocumentCallbackName",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentCallbackName);
  tolua_function(param_1,"getRootNode",lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRootNode);
                    /* catch() { ... } // from try @ 0091eca8 with catch @ 0091ed40 */
                    /* catch() { ... } // from try @ 0091ecc0 with catch @ 0091ed44 */
  tolua_function(param_1,"addDocumentOutletNode",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletNode);
  tolua_function(param_1,"getSequenceDuration",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceDuration);
                    /* catch() { ... } // from try @ 0091ec74 with catch @ 0091ed74 */
  tolua_function(param_1,"addDocumentCallbackNode",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentCallbackNode);
  tolua_function(param_1,"runAnimationsForSequenceNamed",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceNamed);
  tolua_function(param_1,"getSequenceId",lua_cocos2dx_cocosbuilder_CCBAnimationManager_getSequenceId
                );
  tolua_function(param_1,"getDocumentCallbackNodes",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackNodes);
  tolua_function(param_1,"setSequences",lua_cocos2dx_cocosbuilder_CCBAnimationManager_setSequences);
  tolua_function(param_1,"debug",lua_cocos2dx_cocosbuilder_CCBAnimationManager_debug);
  tolua_function(param_1,"getDocumentControllerName",
                 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentControllerName);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N12cocosbuilder19CCBAnimationManagerE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012c782d,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.CCBAnimationManager",0x16);
                    /* try { // try from 0091ee70 to 00a1eebb has its CatchHandler @ 0091ee70
                       catch() { ... } // from try @ 0091ee70 with catch @ 0091ee70
                       catch() { ... } // from try @ 0091eec0 with catch @ 0091ee70 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"CCBAnimationManager");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012c782d,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.CCBAnimationManager",0x16);
  if (((ulong)local_78[0] & 1) != 0) {
                    /* try { // try from 0091eebc to 00a1eebf has its CatchHandler @ 0091ef14 */
                    /* try { // try from 0091eec0 to 00a1ef27 has its CatchHandler @ 0091ee70 */
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

