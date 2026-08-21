
/* lua_register_cocos2dx_Sprite(lua_State*) */

undefined8 lua_register_cocos2dx_Sprite(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Sprite");
  tolua_cclass(param_1,"Sprite","cc.Sprite","cc.Node",0);
  tolua_beginmodule(param_1,"Sprite");
  tolua_function(param_1,"new",lua_cocos2dx_Sprite_constructor);
  tolua_function(param_1,"setSpriteFrame",lua_cocos2dx_Sprite_setSpriteFrame);
  tolua_function(param_1,"setTexture",lua_cocos2dx_Sprite_setTexture);
  tolua_function(param_1,"getTexture",lua_cocos2dx_Sprite_getTexture);
  tolua_function(param_1,"setFlippedY",lua_cocos2dx_Sprite_setFlippedY);
  tolua_function(param_1,"setFlippedX",lua_cocos2dx_Sprite_setFlippedX);
  tolua_function(param_1,"getResourceType",lua_cocos2dx_Sprite_getResourceType);
  tolua_function(param_1,"setDisplayFrameWithAnimationName",
                 lua_cocos2dx_Sprite_setDisplayFrameWithAnimationName);
  tolua_function(param_1,0x12cc76e,lua_cocos2dx_Sprite_getBatchNode);
  tolua_function(param_1,"getOffsetPosition",lua_cocos2dx_Sprite_getOffsetPosition);
  tolua_function(param_1,"getCenterRect",lua_cocos2dx_Sprite_getCenterRect);
  tolua_function(param_1,"removeAllChildrenWithCleanup",
                 lua_cocos2dx_Sprite_removeAllChildrenWithCleanup);
  tolua_function(param_1,"setCenterRectNormalized",lua_cocos2dx_Sprite_setCenterRectNormalized);
  tolua_function(param_1,"isStretchEnabled",lua_cocos2dx_Sprite_isStretchEnabled);
  tolua_function(param_1,"setTextureRect",lua_cocos2dx_Sprite_setTextureRect);
  tolua_function(param_1,"initWithSpriteFrameName",lua_cocos2dx_Sprite_initWithSpriteFrameName);
  tolua_function(param_1,"setStretchEnabled",lua_cocos2dx_Sprite_setStretchEnabled);
  tolua_function(param_1,"isFrameDisplayed",lua_cocos2dx_Sprite_isFrameDisplayed);
  tolua_function(param_1,"getAtlasIndex",lua_cocos2dx_Sprite_getAtlasIndex);
  tolua_function(param_1,"setBatchNode",lua_cocos2dx_Sprite_setBatchNode);
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_Sprite_getBlendFunc);
  tolua_function(param_1,"setCenterRect",lua_cocos2dx_Sprite_setCenterRect);
  tolua_function(param_1,"setTextureAtlas",lua_cocos2dx_Sprite_setTextureAtlas);
  tolua_function(param_1,"getSpriteFrame",lua_cocos2dx_Sprite_getSpriteFrame);
  tolua_function(param_1,"getResourceName",lua_cocos2dx_Sprite_getResourceName);
  tolua_function(param_1,"isDirty",lua_cocos2dx_Sprite_isDirty);
  tolua_function(param_1,"getCenterRectNormalized",lua_cocos2dx_Sprite_getCenterRectNormalized);
  tolua_function(param_1,"setAtlasIndex",lua_cocos2dx_Sprite_setAtlasIndex);
  tolua_function(param_1,"initWithTexture",lua_cocos2dx_Sprite_initWithTexture);
  tolua_function(param_1,"setDirty",lua_cocos2dx_Sprite_setDirty);
  tolua_function(param_1,"isTextureRectRotated",lua_cocos2dx_Sprite_isTextureRectRotated);
  tolua_function(param_1,"getTextureRect",lua_cocos2dx_Sprite_getTextureRect);
  tolua_function(param_1,"initWithFile",lua_cocos2dx_Sprite_initWithFile);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_Sprite_setBlendFunc);
  tolua_function(param_1,"getTextureAtlas",lua_cocos2dx_Sprite_getTextureAtlas);
  tolua_function(param_1,"initWithSpriteFrame",lua_cocos2dx_Sprite_initWithSpriteFrame);
  tolua_function(param_1,"isFlippedX",lua_cocos2dx_Sprite_isFlippedX);
  tolua_function(param_1,"isFlippedY",lua_cocos2dx_Sprite_isFlippedY);
  tolua_function(param_1,"setVertexRect",lua_cocos2dx_Sprite_setVertexRect);
  tolua_function(param_1,"createWithTexture",lua_cocos2dx_Sprite_createWithTexture);
  tolua_function(param_1,"createWithSpriteFrameName",lua_cocos2dx_Sprite_createWithSpriteFrameName);
  tolua_function(param_1,"createWithSpriteFrame",lua_cocos2dx_Sprite_createWithSpriteFrame);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d6SpriteE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Sprite",9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Sprite");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Sprite",9);
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

