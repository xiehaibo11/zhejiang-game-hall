
/* lua_register_cocos2dx_SpriteFrame(lua_State*) */

undefined8 lua_register_cocos2dx_SpriteFrame(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.SpriteFrame");
  tolua_cclass(param_1,"SpriteFrame","cc.SpriteFrame",&DAT_012769c7,0);
  tolua_beginmodule(param_1,"SpriteFrame");
  tolua_function(param_1,"new",lua_cocos2dx_SpriteFrame_constructor);
  tolua_function(param_1,"setAnchorPoint",lua_cocos2dx_SpriteFrame_setAnchorPoint);
  tolua_function(param_1,"setTexture",lua_cocos2dx_SpriteFrame_setTexture);
  tolua_function(param_1,"getTexture",lua_cocos2dx_SpriteFrame_getTexture);
  tolua_function(param_1,"setOffsetInPixels",lua_cocos2dx_SpriteFrame_setOffsetInPixels);
  tolua_function(param_1,"getOriginalSizeInPixels",lua_cocos2dx_SpriteFrame_getOriginalSizeInPixels)
  ;
  tolua_function(param_1,"setOriginalSize",lua_cocos2dx_SpriteFrame_setOriginalSize);
  tolua_function(param_1,"getCenterRect",lua_cocos2dx_SpriteFrame_getCenterRect);
  tolua_function(param_1,"setRectInPixels",lua_cocos2dx_SpriteFrame_setRectInPixels);
  tolua_function(param_1,"getRect",lua_cocos2dx_SpriteFrame_getRect);
  tolua_function(param_1,"setCenterRectInPixels",lua_cocos2dx_SpriteFrame_setCenterRectInPixels);
  tolua_function(param_1,"setOffset",lua_cocos2dx_SpriteFrame_setOffset);
  tolua_function(param_1,"initWithTextureFilename",lua_cocos2dx_SpriteFrame_initWithTextureFilename)
  ;
  tolua_function(param_1,"setRect",lua_cocos2dx_SpriteFrame_setRect);
  tolua_function(param_1,"initWithTexture",lua_cocos2dx_SpriteFrame_initWithTexture);
  tolua_function(param_1,"getOriginalSize",lua_cocos2dx_SpriteFrame_getOriginalSize);
  tolua_function(param_1,"clone",lua_cocos2dx_SpriteFrame_clone);
  tolua_function(param_1,"getRectInPixels",lua_cocos2dx_SpriteFrame_getRectInPixels);
  tolua_function(param_1,"isRotated",lua_cocos2dx_SpriteFrame_isRotated);
  tolua_function(param_1,"hasCenterRect",lua_cocos2dx_SpriteFrame_hasCenterRect);
  tolua_function(param_1,"setRotated",lua_cocos2dx_SpriteFrame_setRotated);
  tolua_function(param_1,"getOffset",lua_cocos2dx_SpriteFrame_getOffset);
  tolua_function(param_1,"setOriginalSizeInPixels",lua_cocos2dx_SpriteFrame_setOriginalSizeInPixels)
  ;
  tolua_function(param_1,"getAnchorPoint",lua_cocos2dx_SpriteFrame_getAnchorPoint);
  tolua_function(param_1,"hasAnchorPoint",lua_cocos2dx_SpriteFrame_hasAnchorPoint);
  tolua_function(param_1,"getOffsetInPixels",lua_cocos2dx_SpriteFrame_getOffsetInPixels);
  tolua_function(param_1,"create",lua_cocos2dx_SpriteFrame_create);
  tolua_function(param_1,"createWithTexture",lua_cocos2dx_SpriteFrame_createWithTexture);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d11SpriteFrameE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.SpriteFrame",0xe);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"SpriteFrame");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.SpriteFrame",0xe);
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

