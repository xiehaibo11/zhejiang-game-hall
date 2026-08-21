
/* lua_register_cocos2dx_GLProgramState(lua_State*) */

undefined8 lua_register_cocos2dx_GLProgramState(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.GLProgramState");
  tolua_cclass(param_1,"GLProgramState","cc.GLProgramState",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"GLProgramState");
  tolua_function(param_1,"getVertexAttribsFlags",lua_cocos2dx_GLProgramState_getVertexAttribsFlags);
  tolua_function(param_1,"setUniformVec4",lua_cocos2dx_GLProgramState_setUniformVec4);
  tolua_function(param_1,"applyAutoBinding",lua_cocos2dx_GLProgramState_applyAutoBinding);
  tolua_function(param_1,"setUniformVec2",lua_cocos2dx_GLProgramState_setUniformVec2);
  tolua_function(param_1,"setUniformVec3",lua_cocos2dx_GLProgramState_setUniformVec3);
  tolua_function(param_1,"apply",lua_cocos2dx_GLProgramState_apply);
  tolua_function(param_1,"getNodeBinding",lua_cocos2dx_GLProgramState_getNodeBinding);
  tolua_function(param_1,"setUniformVec4v",lua_cocos2dx_GLProgramState_setUniformVec4v);
  tolua_function(param_1,"applyGLProgram",lua_cocos2dx_GLProgramState_applyGLProgram);
  tolua_function(param_1,"setNodeBinding",lua_cocos2dx_GLProgramState_setNodeBinding);
  tolua_function(param_1,"setUniformInt",lua_cocos2dx_GLProgramState_setUniformInt);
  tolua_function(param_1,"setParameterAutoBinding",
                 lua_cocos2dx_GLProgramState_setParameterAutoBinding);
  tolua_function(param_1,"setUniformVec2v",lua_cocos2dx_GLProgramState_setUniformVec2v);
  tolua_function(param_1,"getUniformCount",lua_cocos2dx_GLProgramState_getUniformCount);
  tolua_function(param_1,"applyAttributes",lua_cocos2dx_GLProgramState_applyAttributes);
  tolua_function(param_1,"clone",lua_cocos2dx_GLProgramState_clone);
  tolua_function(param_1,"setGLProgram",lua_cocos2dx_GLProgramState_setGLProgram);
  tolua_function(param_1,"setUniformFloatv",lua_cocos2dx_GLProgramState_setUniformFloatv);
  tolua_function(param_1,"getGLProgram",lua_cocos2dx_GLProgramState_getGLProgram);
  tolua_function(param_1,"setUniformTexture",lua_cocos2dx_GLProgramState_setUniformTexture);
  tolua_function(param_1,"applyUniforms",lua_cocos2dx_GLProgramState_applyUniforms);
  tolua_function(param_1,"setUniformFloat",lua_cocos2dx_GLProgramState_setUniformFloat);
  tolua_function(param_1,"setUniformMat4",lua_cocos2dx_GLProgramState_setUniformMat4);
  tolua_function(param_1,"setUniformVec3v",lua_cocos2dx_GLProgramState_setUniformVec3v);
  tolua_function(param_1,"getVertexAttribCount",lua_cocos2dx_GLProgramState_getVertexAttribCount);
  tolua_function(param_1,"create",lua_cocos2dx_GLProgramState_create);
  tolua_function(param_1,"getOrCreateWithGLProgramName",
                 lua_cocos2dx_GLProgramState_getOrCreateWithGLProgramName);
  tolua_function(param_1,"getOrCreateWithGLProgram",
                 lua_cocos2dx_GLProgramState_getOrCreateWithGLProgram);
  tolua_function(param_1,"getOrCreateWithShaders",lua_cocos2dx_GLProgramState_getOrCreateWithShaders
                );
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d14GLProgramStateE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.GLProgramState",0x11);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"GLProgramState");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.GLProgramState",0x11);
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

