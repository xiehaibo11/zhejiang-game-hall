
/* lua_register_cocos2dx_Camera(lua_State*) */

undefined8 lua_register_cocos2dx_Camera(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Camera");
  tolua_cclass(param_1,"Camera","cc.Camera","cc.Node",0);
  tolua_beginmodule(param_1,"Camera");
  tolua_function(param_1,"new",lua_cocos2dx_Camera_constructor);
  tolua_function(param_1,"restore",lua_cocos2dx_Camera_restore);
  tolua_function(param_1,"getDepth",lua_cocos2dx_Camera_getDepth);
  tolua_function(param_1,"getViewProjectionMatrix",lua_cocos2dx_Camera_getViewProjectionMatrix);
  tolua_function(param_1,"applyViewport",lua_cocos2dx_Camera_applyViewport);
  tolua_function(param_1,"setBackgroundBrush",lua_cocos2dx_Camera_setBackgroundBrush);
  tolua_function(param_1,"lookAt",lua_cocos2dx_Camera_lookAt);
  tolua_function(param_1,"apply",lua_cocos2dx_Camera_apply);
  tolua_function(param_1,"getBackgroundBrush",lua_cocos2dx_Camera_getBackgroundBrush);
  tolua_function(param_1,"getProjectionMatrix",lua_cocos2dx_Camera_getProjectionMatrix);
  tolua_function(param_1,"isBrushValid",lua_cocos2dx_Camera_isBrushValid);
  tolua_function(param_1,"getDepthInView",lua_cocos2dx_Camera_getDepthInView);
  tolua_function(param_1,"restoreViewport",lua_cocos2dx_Camera_restoreViewport);
  tolua_function(param_1,"clearBackground",lua_cocos2dx_Camera_clearBackground);
  tolua_function(param_1,"setAdditionalProjection",lua_cocos2dx_Camera_setAdditionalProjection);
  tolua_function(param_1,"setViewport",lua_cocos2dx_Camera_setViewport);
  tolua_function(param_1,"initDefault",lua_cocos2dx_Camera_initDefault);
  tolua_function(param_1,"getCameraFlag",lua_cocos2dx_Camera_getCameraFlag);
  tolua_function(param_1,"getType",lua_cocos2dx_Camera_getType);
  tolua_function(param_1,"initOrthographic",lua_cocos2dx_Camera_initOrthographic);
  tolua_function(param_1,"getRenderOrder",lua_cocos2dx_Camera_getRenderOrder);
  tolua_function(param_1,"isVisibleInFrustum",lua_cocos2dx_Camera_isVisibleInFrustum);
  tolua_function(param_1,"setDepth",lua_cocos2dx_Camera_setDepth);
  tolua_function(param_1,"setScene",lua_cocos2dx_Camera_setScene);
  tolua_function(param_1,"projectGL",lua_cocos2dx_Camera_projectGL);
  tolua_function(param_1,"restoreFrameBufferObject",lua_cocos2dx_Camera_restoreFrameBufferObject);
  tolua_function(param_1,"getViewMatrix",lua_cocos2dx_Camera_getViewMatrix);
  tolua_function(param_1,"getNearPlane",lua_cocos2dx_Camera_getNearPlane);
  tolua_function(param_1,"project",lua_cocos2dx_Camera_project);
  tolua_function(param_1,"setCameraFlag",lua_cocos2dx_Camera_setCameraFlag);
  tolua_function(param_1,"getFarPlane",lua_cocos2dx_Camera_getFarPlane);
  tolua_function(param_1,"applyFrameBufferObject",lua_cocos2dx_Camera_applyFrameBufferObject);
  tolua_function(param_1,"setFrameBufferObject",lua_cocos2dx_Camera_setFrameBufferObject);
  tolua_function(param_1,"isViewProjectionUpdated",lua_cocos2dx_Camera_isViewProjectionUpdated);
  tolua_function(param_1,"initPerspective",lua_cocos2dx_Camera_initPerspective);
  tolua_function(param_1,"createOrthographic",lua_cocos2dx_Camera_createOrthographic);
  tolua_function(param_1,"getVisitingCamera",lua_cocos2dx_Camera_getVisitingCamera);
  tolua_function(param_1,"create",lua_cocos2dx_Camera_create);
  tolua_function(param_1,"createPerspective",lua_cocos2dx_Camera_createPerspective);
  tolua_function(param_1,"getDefaultViewport",lua_cocos2dx_Camera_getDefaultViewport);
  tolua_function(param_1,"setDefaultViewport",lua_cocos2dx_Camera_setDefaultViewport);
  tolua_function(param_1,"getDefaultCamera",lua_cocos2dx_Camera_getDefaultCamera);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d6CameraE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Camera",9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Camera");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Camera",9);
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

