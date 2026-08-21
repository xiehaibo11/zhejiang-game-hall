
/* lua_register_cocos2dx_Texture2D(lua_State*) */

undefined8 lua_register_cocos2dx_Texture2D(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Texture2D");
  tolua_cclass(param_1,"Texture2D","cc.Texture2D",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"Texture2D");
  tolua_function(param_1,"new",lua_cocos2dx_Texture2D_constructor);
  tolua_function(param_1,"getMaxT",lua_cocos2dx_Texture2D_getMaxT);
  tolua_function(param_1,"setAlphaTexture",lua_cocos2dx_Texture2D_setAlphaTexture);
  tolua_function(param_1,"getStringForFormat",lua_cocos2dx_Texture2D_getStringForFormat);
  tolua_function(param_1,"initWithImage",lua_cocos2dx_Texture2D_initWithImage);
  tolua_function(param_1,"getMaxS",lua_cocos2dx_Texture2D_getMaxS);
  tolua_function(param_1,"releaseGLTexture",lua_cocos2dx_Texture2D_releaseGLTexture);
  tolua_function(param_1,"hasPremultipliedAlpha",lua_cocos2dx_Texture2D_hasPremultipliedAlpha);
  tolua_function(param_1,"getPixelsHigh",lua_cocos2dx_Texture2D_getPixelsHigh);
  tolua_function(param_1,"getAlphaTextureName",lua_cocos2dx_Texture2D_getAlphaTextureName);
  tolua_function(param_1,"getBitsPerPixelForFormat",lua_cocos2dx_Texture2D_getBitsPerPixelForFormat)
  ;
  tolua_function(param_1,"getName",lua_cocos2dx_Texture2D_getName);
  tolua_function(param_1,"initWithString",lua_cocos2dx_Texture2D_initWithString);
  tolua_function(param_1,"setMaxT",lua_cocos2dx_Texture2D_setMaxT);
  tolua_function(param_1,"getPath",lua_cocos2dx_Texture2D_getPath);
  tolua_function(param_1,"drawInRect",lua_cocos2dx_Texture2D_drawInRect);
  tolua_function(param_1,"getContentSize",lua_cocos2dx_Texture2D_getContentSize);
  tolua_function(param_1,"setAliasTexParameters",lua_cocos2dx_Texture2D_setAliasTexParameters);
  tolua_function(param_1,"setAntiAliasTexParameters",
                 lua_cocos2dx_Texture2D_setAntiAliasTexParameters);
  tolua_function(param_1,"generateMipmap",lua_cocos2dx_Texture2D_generateMipmap);
  tolua_function(param_1,"getAlphaTexture",lua_cocos2dx_Texture2D_getAlphaTexture);
  tolua_function(param_1,"getDescription",lua_cocos2dx_Texture2D_getDescription);
  tolua_function(param_1,"getPixelFormat",lua_cocos2dx_Texture2D_getPixelFormat);
  tolua_function(param_1,"setGLProgram",lua_cocos2dx_Texture2D_setGLProgram);
  tolua_function(param_1,"getContentSizeInPixels",lua_cocos2dx_Texture2D_getContentSizeInPixels);
  tolua_function(param_1,"getPixelsWide",lua_cocos2dx_Texture2D_getPixelsWide);
  tolua_function(param_1,"drawAtPoint",lua_cocos2dx_Texture2D_drawAtPoint);
  tolua_function(param_1,"getGLProgram",lua_cocos2dx_Texture2D_getGLProgram);
  tolua_function(param_1,"hasMipmaps",lua_cocos2dx_Texture2D_hasMipmaps);
  tolua_function(param_1,"setMaxS",lua_cocos2dx_Texture2D_setMaxS);
  tolua_function(param_1,"setDefaultAlphaPixelFormat",
                 lua_cocos2dx_Texture2D_setDefaultAlphaPixelFormat);
  tolua_function(param_1,"getDefaultAlphaPixelFormat",
                 lua_cocos2dx_Texture2D_getDefaultAlphaPixelFormat);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d9Texture2DE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Texture2D",0xc);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Texture2D");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Texture2D",0xc);
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

