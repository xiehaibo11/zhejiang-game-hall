
/* lua_register_cocos2dx_GLView(lua_State*) */

undefined8 lua_register_cocos2dx_GLView(lua_State *param_1)

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
  tolua_usertype(param_1,&DAT_0127b187);
  tolua_cclass(param_1,"GLView",&DAT_0127b187,&DAT_012769c7,0);
  tolua_beginmodule(param_1,"GLView");
  tolua_function(param_1,"setFrameSize",lua_cocos2dx_GLView_setFrameSize);
  tolua_function(param_1,"getViewPortRect",lua_cocos2dx_GLView_getViewPortRect);
  tolua_function(param_1,"getScaleY",lua_cocos2dx_GLView_getScaleY);
  tolua_function(param_1,"setContentScaleFactor",lua_cocos2dx_GLView_setContentScaleFactor);
  tolua_function(param_1,"getContentScaleFactor",lua_cocos2dx_GLView_getContentScaleFactor);
  tolua_function(param_1,"setIMEKeyboardState",lua_cocos2dx_GLView_setIMEKeyboardState);
  tolua_function(param_1,"getSafeAreaRect",lua_cocos2dx_GLView_getSafeAreaRect);
  tolua_function(param_1,"getVR",lua_cocos2dx_GLView_getVR);
  tolua_function(param_1,"setScissorInPoints",lua_cocos2dx_GLView_setScissorInPoints);
  tolua_function(param_1,"getViewName",lua_cocos2dx_GLView_getViewName);
  tolua_function(param_1,"isOpenGLReady",lua_cocos2dx_GLView_isOpenGLReady);
  tolua_function(param_1,"setCursorVisible",lua_cocos2dx_GLView_setCursorVisible);
  tolua_function(param_1,"getFrameSize",lua_cocos2dx_GLView_getFrameSize);
  tolua_function(param_1,"setDefaultIcon",lua_cocos2dx_GLView_setDefaultIcon);
  tolua_function(param_1,"getScaleX",lua_cocos2dx_GLView_getScaleX);
  tolua_function(param_1,"getVisibleOrigin",lua_cocos2dx_GLView_getVisibleOrigin);
  tolua_function(param_1,"setFrameZoomFactor",lua_cocos2dx_GLView_setFrameZoomFactor);
  tolua_function(param_1,"getFrameZoomFactor",lua_cocos2dx_GLView_getFrameZoomFactor);
  tolua_function(param_1,"getDesignResolutionSize",lua_cocos2dx_GLView_getDesignResolutionSize);
  tolua_function(param_1,"setIcon",lua_cocos2dx_GLView_setIcon);
  tolua_function(param_1,"setDefaultCursor",lua_cocos2dx_GLView_setDefaultCursor);
  tolua_function(param_1,"windowShouldClose",lua_cocos2dx_GLView_windowShouldClose);
  tolua_function(param_1,"swapBuffers",lua_cocos2dx_GLView_swapBuffers);
  tolua_function(param_1,"setDesignResolutionSize",lua_cocos2dx_GLView_setDesignResolutionSize);
  tolua_function(param_1,"getResolutionPolicy",lua_cocos2dx_GLView_getResolutionPolicy);
  tolua_function(param_1,"endToLua",lua_cocos2dx_GLView_end);
  tolua_function(param_1,"isRetinaDisplay",lua_cocos2dx_GLView_isRetinaDisplay);
  tolua_function(param_1,"renderScene",lua_cocos2dx_GLView_renderScene);
  tolua_function(param_1,"setVR",lua_cocos2dx_GLView_setVR);
  tolua_function(param_1,"setViewPortInPoints",lua_cocos2dx_GLView_setViewPortInPoints);
  tolua_function(param_1,"getScissorRect",lua_cocos2dx_GLView_getScissorRect);
  tolua_function(param_1,"setCursor",lua_cocos2dx_GLView_setCursor);
  tolua_function(param_1,"getRetinaFactor",lua_cocos2dx_GLView_getRetinaFactor);
  tolua_function(param_1,"setViewName",lua_cocos2dx_GLView_setViewName);
  tolua_function(param_1,"getVisibleRect",lua_cocos2dx_GLView_getVisibleRect);
  tolua_function(param_1,"getVisibleSize",lua_cocos2dx_GLView_getVisibleSize);
  tolua_function(param_1,"isScissorEnabled",lua_cocos2dx_GLView_isScissorEnabled);
  tolua_function(param_1,"pollEvents",lua_cocos2dx_GLView_pollEvents);
  tolua_function(param_1,"setGLContextAttrs",lua_cocos2dx_GLView_setGLContextAttrs);
  tolua_function(param_1,"getGLContextAttrs",lua_cocos2dx_GLView_getGLContextAttrs);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d6GLViewE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.GLView",9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GLView");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.GLView",9);
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

