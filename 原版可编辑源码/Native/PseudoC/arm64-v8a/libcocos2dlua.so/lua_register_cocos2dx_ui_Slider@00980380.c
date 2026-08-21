
/* lua_register_cocos2dx_ui_Slider(lua_State*) */

undefined8 lua_register_cocos2dx_ui_Slider(lua_State *param_1)

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
  tolua_usertype(param_1,"ccui.Slider");
  tolua_cclass(param_1,"Slider","ccui.Slider","ccui.Widget",0);
  tolua_beginmodule(param_1,"Slider");
  tolua_function(param_1,"new",lua_cocos2dx_ui_Slider_constructor);
  tolua_function(param_1,&DAT_012d9ea7,lua_cocos2dx_ui_Slider_setPercent);
  tolua_function(param_1,"getMaxPercent",lua_cocos2dx_ui_Slider_getMaxPercent);
  tolua_function(param_1,"loadSlidBallTextureNormal",
                 lua_cocos2dx_ui_Slider_loadSlidBallTextureNormal);
  tolua_function(param_1,"loadProgressBarTexture",lua_cocos2dx_ui_Slider_loadProgressBarTexture);
  tolua_function(param_1,"getBallNormalFile",lua_cocos2dx_ui_Slider_getBallNormalFile);
  tolua_function(param_1,"getSlidBallDisabledRenderer",
                 lua_cocos2dx_ui_Slider_getSlidBallDisabledRenderer);
  tolua_function(param_1,"setScale9Enabled",lua_cocos2dx_ui_Slider_setScale9Enabled);
  tolua_function(param_1,"getBallPressedFile",lua_cocos2dx_ui_Slider_getBallPressedFile);
  tolua_function(param_1,"getZoomScale",lua_cocos2dx_ui_Slider_getZoomScale);
  tolua_function(param_1,"setCapInsetProgressBarRenderer",
                 lua_cocos2dx_ui_Slider_setCapInsetProgressBarRenderer);
  tolua_function(param_1,"loadSlidBallTextures",lua_cocos2dx_ui_Slider_loadSlidBallTextures);
  tolua_function(param_1,"getSlidBallRenderer",lua_cocos2dx_ui_Slider_getSlidBallRenderer);
  tolua_function(param_1,"addEventListener",lua_cocos2dx_ui_Slider_addEventListener);
  tolua_function(param_1,"setMaxPercent",lua_cocos2dx_ui_Slider_setMaxPercent);
  tolua_function(param_1,"loadBarTexture",lua_cocos2dx_ui_Slider_loadBarTexture);
  tolua_function(param_1,&DAT_012dc3c6,lua_cocos2dx_ui_Slider_getProgressBarFile);
  tolua_function(param_1,"getCapInsetsBarRenderer",lua_cocos2dx_ui_Slider_getCapInsetsBarRenderer);
  tolua_function(param_1,"updateVisualSlider",lua_cocos2dx_ui_Slider_updateVisualSlider);
  tolua_function(param_1,"getCapInsetsProgressBarRenderer",
                 lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRenderer);
  tolua_function(param_1,&DAT_012dc454,lua_cocos2dx_ui_Slider_getSlidBallPressedRenderer);
  tolua_function(param_1,"loadSlidBallTexturePressed",
                 lua_cocos2dx_ui_Slider_loadSlidBallTexturePressed);
  tolua_function(param_1,"getBackFile",lua_cocos2dx_ui_Slider_getBackFile);
  tolua_function(param_1,"isScale9Enabled",lua_cocos2dx_ui_Slider_isScale9Enabled);
  tolua_function(param_1,"getBallDisabledFile",lua_cocos2dx_ui_Slider_getBallDisabledFile);
  tolua_function(param_1,"setCapInsetsBarRenderer",lua_cocos2dx_ui_Slider_setCapInsetsBarRenderer);
  tolua_function(param_1,"getPercent",lua_cocos2dx_ui_Slider_getPercent);
  tolua_function(param_1,"setCapInsets",lua_cocos2dx_ui_Slider_setCapInsets);
  tolua_function(param_1,"loadSlidBallTextureDisabled",
                 lua_cocos2dx_ui_Slider_loadSlidBallTextureDisabled);
  tolua_function(param_1,"getSlidBallNormalRenderer",
                 lua_cocos2dx_ui_Slider_getSlidBallNormalRenderer);
  tolua_function(param_1,&DAT_012d8671,lua_cocos2dx_ui_Slider_setZoomScale);
                    /* try { // try from 009806dc to 00a808b3 has its CatchHandler @ 009806dc
                       catch() { ... } // from try @ 009806dc with catch @ 009806dc
                       catch() { ... } // from try @ 00980900 with catch @ 009806dc */
  tolua_function(param_1,"create",lua_cocos2dx_ui_Slider_create);
  tolua_function(param_1,"createInstance",lua_cocos2dx_ui_Slider_createInstance);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d2ui6SliderE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_012e2787,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Slider",0xb);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Slider");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_012e2787,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"ccui.Slider",0xb);
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

