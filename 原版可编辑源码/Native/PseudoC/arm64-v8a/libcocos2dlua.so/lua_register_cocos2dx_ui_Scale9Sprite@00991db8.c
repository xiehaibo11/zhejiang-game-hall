
/* lua_register_cocos2dx_ui_Scale9Sprite(lua_State*) */

undefined8 lua_register_cocos2dx_ui_Scale9Sprite(lua_State *param_1)

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
  tolua_usertype(param_1,&DAT_012c62d9);
  tolua_cclass(param_1,&DAT_012c62de,&DAT_012c62d9,"cc.Sprite",0);
  tolua_beginmodule(param_1,&DAT_012c62de);
  tolua_function(param_1,"new",lua_cocos2dx_ui_Scale9Sprite_constructor);
  tolua_function(param_1,"updateWithSprite",lua_cocos2dx_ui_Scale9Sprite_updateWithSprite);
  tolua_function(param_1,"resizableSpriteWithCapInsets",
                 lua_cocos2dx_ui_Scale9Sprite_resizableSpriteWithCapInsets);
  tolua_function(param_1,"getCapInsets",lua_cocos2dx_ui_Scale9Sprite_getCapInsets);
  tolua_function(param_1,"setState",lua_cocos2dx_ui_Scale9Sprite_setState);
  tolua_function(param_1,"setInsetBottom",lua_cocos2dx_ui_Scale9Sprite_setInsetBottom);
  tolua_function(param_1,"initWithSpriteFrameName",
                 lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrameName);
  tolua_function(param_1,"getSprite",lua_cocos2dx_ui_Scale9Sprite_getSprite);
  tolua_function(param_1,"setInsetTop",lua_cocos2dx_ui_Scale9Sprite_setInsetTop);
  tolua_function(param_1,&DAT_012dfad4,lua_cocos2dx_ui_Scale9Sprite_setRenderingType);
  tolua_function(param_1,"init",lua_cocos2dx_ui_Scale9Sprite_init);
  tolua_function(param_1,"setPreferredSize",lua_cocos2dx_ui_Scale9Sprite_setPreferredSize);
  tolua_function(param_1,"copyTo",lua_cocos2dx_ui_Scale9Sprite_copyTo);
  tolua_function(param_1,"setSpriteFrame",lua_cocos2dx_ui_Scale9Sprite_setSpriteFrame);
  tolua_function(param_1,"getState",lua_cocos2dx_ui_Scale9Sprite_getState);
  tolua_function(param_1,"getInsetBottom",lua_cocos2dx_ui_Scale9Sprite_getInsetBottom);
  tolua_function(param_1,"setScale9Enabled",lua_cocos2dx_ui_Scale9Sprite_setScale9Enabled);
  tolua_function(param_1,"isScale9Enabled",lua_cocos2dx_ui_Scale9Sprite_isScale9Enabled);
  tolua_function(param_1,"resetRender",lua_cocos2dx_ui_Scale9Sprite_resetRender);
  tolua_function(param_1,&DAT_012dfd84,lua_cocos2dx_ui_Scale9Sprite_getRenderingType);
  tolua_function(param_1,"getInsetRight",lua_cocos2dx_ui_Scale9Sprite_getInsetRight);
  tolua_function(param_1,"getOriginalSize",lua_cocos2dx_ui_Scale9Sprite_getOriginalSize);
  tolua_function(param_1,"initWithFile",lua_cocos2dx_ui_Scale9Sprite_initWithFile);
  tolua_function(param_1,"getInsetTop",lua_cocos2dx_ui_Scale9Sprite_getInsetTop);
  tolua_function(param_1,"setInsetLeft",lua_cocos2dx_ui_Scale9Sprite_setInsetLeft);
  tolua_function(param_1,"initWithSpriteFrame",lua_cocos2dx_ui_Scale9Sprite_initWithSpriteFrame);
  tolua_function(param_1,"getPreferredSize",lua_cocos2dx_ui_Scale9Sprite_getPreferredSize);
  tolua_function(param_1,"setCapInsets",lua_cocos2dx_ui_Scale9Sprite_setCapInsets);
  tolua_function(param_1,"getInsetLeft",lua_cocos2dx_ui_Scale9Sprite_getInsetLeft);
  tolua_function(param_1,"setInsetRight",lua_cocos2dx_ui_Scale9Sprite_setInsetRight);
  tolua_function(param_1,"create",lua_cocos2dx_ui_Scale9Sprite_create);
  tolua_function(param_1,"createWithSpriteFrameName",
                 lua_cocos2dx_ui_Scale9Sprite_createWithSpriteFrameName);
  tolua_function(param_1,"createWithSpriteFrame",lua_cocos2dx_ui_Scale9Sprite_createWithSpriteFrame)
  ;
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui12Scale9SpriteE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Scale9Sprite",0x11);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Scale9Sprite");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Scale9Sprite",0x11);
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

