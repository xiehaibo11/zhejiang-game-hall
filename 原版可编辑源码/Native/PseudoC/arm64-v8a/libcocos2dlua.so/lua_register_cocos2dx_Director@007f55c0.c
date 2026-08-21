
/* lua_register_cocos2dx_Director(lua_State*) */

undefined8 lua_register_cocos2dx_Director(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Director");
  tolua_cclass(param_1,"Director","cc.Director",&DAT_013c996e,0);
  tolua_beginmodule(param_1,"Director");
  tolua_function(param_1,"pause",lua_cocos2dx_Director_pause);
  tolua_function(param_1,"pushProjectionMatrix",lua_cocos2dx_Director_pushProjectionMatrix);
  tolua_function(param_1,"popProjectionMatrix",lua_cocos2dx_Director_popProjectionMatrix);
  tolua_function(param_1,"setEventDispatcher",lua_cocos2dx_Director_setEventDispatcher);
  tolua_function(param_1,"loadProjectionIdentityMatrix",
                 lua_cocos2dx_Director_loadProjectionIdentityMatrix);
  tolua_function(param_1,"setContentScaleFactor",lua_cocos2dx_Director_setContentScaleFactor);
  tolua_function(param_1,"getDeltaTime",lua_cocos2dx_Director_getDeltaTime);
  tolua_function(param_1,"getContentScaleFactor",lua_cocos2dx_Director_getContentScaleFactor);
  tolua_function(param_1,"getWinSizeInPixels",lua_cocos2dx_Director_getWinSizeInPixels);
  tolua_function(param_1,"getSafeAreaRect",lua_cocos2dx_Director_getSafeAreaRect);
  tolua_function(param_1,"setGLDefaultValues",lua_cocos2dx_Director_setGLDefaultValues);
  tolua_function(param_1,"setActionManager",lua_cocos2dx_Director_setActionManager);
  tolua_function(param_1,"setAlphaBlending",lua_cocos2dx_Director_setAlphaBlending);
  tolua_function(param_1,"popToRootScene",lua_cocos2dx_Director_popToRootScene);
  tolua_function(param_1,"loadMatrix",lua_cocos2dx_Director_loadMatrix);
  tolua_function(param_1,"getNotificationNode",lua_cocos2dx_Director_getNotificationNode);
  tolua_function(param_1,"getWinSize",lua_cocos2dx_Director_getWinSize);
  tolua_function(param_1,"getTextureCache",lua_cocos2dx_Director_getTextureCache);
  tolua_function(param_1,"isSendCleanupToScene",lua_cocos2dx_Director_isSendCleanupToScene);
  tolua_function(param_1,"getVisibleOrigin",lua_cocos2dx_Director_getVisibleOrigin);
  tolua_function(param_1,"mainLoop",lua_cocos2dx_Director_mainLoop);
  tolua_function(param_1,"setDepthTest",lua_cocos2dx_Director_setDepthTest);
  tolua_function(param_1,"getFrameRate",lua_cocos2dx_Director_getFrameRate);
  tolua_function(param_1,"getSecondsPerFrame",lua_cocos2dx_Director_getSecondsPerFrame);
  tolua_function(param_1,"resetMatrixStack",lua_cocos2dx_Director_resetMatrixStack);
  tolua_function(param_1,"convertToUI",lua_cocos2dx_Director_convertToUI);
  tolua_function(param_1,"pushMatrix",lua_cocos2dx_Director_pushMatrix);
  tolua_function(param_1,"setDefaultValues",lua_cocos2dx_Director_setDefaultValues);
  tolua_function(param_1,"init",lua_cocos2dx_Director_init);
  tolua_function(param_1,"setScheduler",lua_cocos2dx_Director_setScheduler);
  tolua_function(param_1,"multiplyProjectionMatrix",lua_cocos2dx_Director_multiplyProjectionMatrix);
  tolua_function(param_1,"getMatrix",lua_cocos2dx_Director_getMatrix);
  tolua_function(param_1,"isValid",lua_cocos2dx_Director_isValid);
  tolua_function(param_1,"startAnimation",lua_cocos2dx_Director_startAnimation);
  tolua_function(param_1,"getOpenGLView",lua_cocos2dx_Director_getOpenGLView);
  tolua_function(param_1,"getRunningScene",lua_cocos2dx_Director_getRunningScene);
  tolua_function(param_1,"setViewport",lua_cocos2dx_Director_setViewport);
  tolua_function(param_1,"stopAnimation",lua_cocos2dx_Director_stopAnimation);
  tolua_function(param_1,"popToSceneStackLevel",lua_cocos2dx_Director_popToSceneStackLevel);
  tolua_function(param_1,"resume",lua_cocos2dx_Director_resume);
  tolua_function(param_1,"isNextDeltaTimeZero",lua_cocos2dx_Director_isNextDeltaTimeZero);
  tolua_function(param_1,"setClearColor",lua_cocos2dx_Director_setClearColor);
  tolua_function(param_1,"endToLua",lua_cocos2dx_Director_end);
  tolua_function(param_1,"setOpenGLView",lua_cocos2dx_Director_setOpenGLView);
  tolua_function(param_1,"convertToGL",lua_cocos2dx_Director_convertToGL);
  tolua_function(param_1,"purgeCachedData",lua_cocos2dx_Director_purgeCachedData);
  tolua_function(param_1,"getTotalFrames",lua_cocos2dx_Director_getTotalFrames);
  tolua_function(param_1,"runWithScene",lua_cocos2dx_Director_runWithScene);
  tolua_function(param_1,"setNotificationNode",lua_cocos2dx_Director_setNotificationNode);
  tolua_function(param_1,"drawScene",lua_cocos2dx_Director_drawScene);
  tolua_function(param_1,"restart",lua_cocos2dx_Director_restart);
  tolua_function(param_1,"popScene",lua_cocos2dx_Director_popScene);
  tolua_function(param_1,"loadIdentityMatrix",lua_cocos2dx_Director_loadIdentityMatrix);
  tolua_function(param_1,"isDisplayStats",lua_cocos2dx_Director_isDisplayStats);
  tolua_function(param_1,"setProjection",lua_cocos2dx_Director_setProjection);
  tolua_function(param_1,"getConsole",lua_cocos2dx_Director_getConsole);
  tolua_function(param_1,"multiplyMatrix",lua_cocos2dx_Director_multiplyMatrix);
  tolua_function(param_1,"getZEye",lua_cocos2dx_Director_getZEye);
  tolua_function(param_1,"setNextDeltaTimeZero",lua_cocos2dx_Director_setNextDeltaTimeZero);
  tolua_function(param_1,"popMatrix",lua_cocos2dx_Director_popMatrix);
  tolua_function(param_1,"getVisibleSize",lua_cocos2dx_Director_getVisibleSize);
  tolua_function(param_1,"loadProjectionMatrix",lua_cocos2dx_Director_loadProjectionMatrix);
  tolua_function(param_1,"initProjectionMatrixStack",lua_cocos2dx_Director_initProjectionMatrixStack
                );
  tolua_function(param_1,"getScheduler",lua_cocos2dx_Director_getScheduler);
  tolua_function(param_1,"pushScene",lua_cocos2dx_Director_pushScene);
  tolua_function(param_1,"getAnimationInterval",lua_cocos2dx_Director_getAnimationInterval);
  tolua_function(param_1,"getClearColor",lua_cocos2dx_Director_getClearColor);
  tolua_function(param_1,"isPaused",lua_cocos2dx_Director_isPaused);
  tolua_function(param_1,"setDisplayStats",lua_cocos2dx_Director_setDisplayStats);
  tolua_function(param_1,"getEventDispatcher",lua_cocos2dx_Director_getEventDispatcher);
  tolua_function(param_1,"replaceScene",lua_cocos2dx_Director_replaceScene);
  tolua_function(param_1,"setAnimationInterval",lua_cocos2dx_Director_setAnimationInterval);
  tolua_function(param_1,"getActionManager",lua_cocos2dx_Director_getActionManager);
  tolua_function(param_1,"getInstance",lua_cocos2dx_Director_getInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d8DirectorE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Director",0xb);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Director");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Director",0xb);
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

