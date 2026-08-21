
/* lua_register_cocos2dx_Label(lua_State*) */

undefined8 lua_register_cocos2dx_Label(lua_State *param_1)

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
  tolua_usertype(param_1,"cc.Label");
  tolua_cclass(param_1,"Label","cc.Label","cc.Node",0);
  tolua_beginmodule(param_1,"Label");
  tolua_function(param_1,"isClipMarginEnabled",lua_cocos2dx_Label_isClipMarginEnabled);
  tolua_function(param_1,"enableShadow",lua_cocos2dx_Label_enableShadow);
  tolua_function(param_1,"setDimensions",lua_cocos2dx_Label_setDimensions);
  tolua_function(param_1,"getWidth",lua_cocos2dx_Label_getWidth);
  tolua_function(param_1,"getString",lua_cocos2dx_Label_getString);
  tolua_function(param_1,"getHeight",lua_cocos2dx_Label_getHeight);
  tolua_function(param_1,"disableEffect",lua_cocos2dx_Label_disableEffect);
  tolua_function(param_1,"setTTFConfig",lua_cocos2dx_Label_setTTFConfig);
  tolua_function(param_1,"getLabelType",lua_cocos2dx_Label_getLabelType);
  tolua_function(param_1,"getTextColor",lua_cocos2dx_Label_getTextColor);
  tolua_function(param_1,"getBlendFunc",lua_cocos2dx_Label_getBlendFunc);
  tolua_function(param_1,"enableWrap",lua_cocos2dx_Label_enableWrap);
  tolua_function(param_1,"setWidth",lua_cocos2dx_Label_setWidth);
  tolua_function(param_1,"getAdditionalKerning",lua_cocos2dx_Label_getAdditionalKerning);
  tolua_function(param_1,"getBMFontSize",lua_cocos2dx_Label_getBMFontSize);
  tolua_function(param_1,"getMaxLineWidth",lua_cocos2dx_Label_getMaxLineWidth);
  tolua_function(param_1,"getHorizontalAlignment",lua_cocos2dx_Label_getHorizontalAlignment);
  tolua_function(param_1,"getShadowOffset",lua_cocos2dx_Label_getShadowOffset);
  tolua_function(param_1,"getLineSpacing",lua_cocos2dx_Label_getLineSpacing);
  tolua_function(param_1,"setClipMarginEnabled",lua_cocos2dx_Label_setClipMarginEnabled);
  tolua_function(param_1,"setString",lua_cocos2dx_Label_setString);
  tolua_function(param_1,"setSystemFontName",lua_cocos2dx_Label_setSystemFontName);
  tolua_function(param_1,"isWrapEnabled",lua_cocos2dx_Label_isWrapEnabled);
  tolua_function(param_1,"getOutlineSize",lua_cocos2dx_Label_getOutlineSize);
  tolua_function(param_1,"setBMFontFilePath",lua_cocos2dx_Label_setBMFontFilePath);
  tolua_function(param_1,"initWithTTF",lua_cocos2dx_Label_initWithTTF);
  tolua_function(param_1,"getFontAtlas",lua_cocos2dx_Label_getFontAtlas);
  tolua_function(param_1,"setLineHeight",lua_cocos2dx_Label_setLineHeight);
  tolua_function(param_1,"setSystemFontSize",lua_cocos2dx_Label_setSystemFontSize);
  tolua_function(param_1,"setOverflow",lua_cocos2dx_Label_setOverflow);
  tolua_function(param_1,"enableStrikethrough",lua_cocos2dx_Label_enableStrikethrough);
  tolua_function(param_1,"updateContent",lua_cocos2dx_Label_updateContent);
  tolua_function(param_1,"getStringLength",lua_cocos2dx_Label_getStringLength);
  tolua_function(param_1,"setLineBreakWithoutSpace",lua_cocos2dx_Label_setLineBreakWithoutSpace);
  tolua_function(param_1,"getStringNumLines",lua_cocos2dx_Label_getStringNumLines);
  tolua_function(param_1,"enableOutline",lua_cocos2dx_Label_enableOutline);
  tolua_function(param_1,"getShadowBlurRadius",lua_cocos2dx_Label_getShadowBlurRadius);
  tolua_function(param_1,"getEffectColor",lua_cocos2dx_Label_getEffectColor);
  tolua_function(param_1,"removeAllChildrenWithCleanup",
                 lua_cocos2dx_Label_removeAllChildrenWithCleanup);
  tolua_function(param_1,"setCharMap",lua_cocos2dx_Label_setCharMap);
  tolua_function(param_1,"getDimensions",lua_cocos2dx_Label_getDimensions);
  tolua_function(param_1,"setMaxLineWidth",lua_cocos2dx_Label_setMaxLineWidth);
  tolua_function(param_1,"getSystemFontName",lua_cocos2dx_Label_getSystemFontName);
  tolua_function(param_1,"setVerticalAlignment",lua_cocos2dx_Label_setVerticalAlignment);
  tolua_function(param_1,"setLineSpacing",lua_cocos2dx_Label_setLineSpacing);
  tolua_function(param_1,"getRenderingFontSize",lua_cocos2dx_Label_getRenderingFontSize);
  tolua_function(param_1,"getLineHeight",lua_cocos2dx_Label_getLineHeight);
  tolua_function(param_1,"getShadowColor",lua_cocos2dx_Label_getShadowColor);
  tolua_function(param_1,"getTTFConfig",lua_cocos2dx_Label_getTTFConfig);
  tolua_function(param_1,"enableItalics",lua_cocos2dx_Label_enableItalics);
  tolua_function(param_1,"setTextColor",lua_cocos2dx_Label_setTextColor);
  tolua_function(param_1,"getLetter",lua_cocos2dx_Label_getLetter);
  tolua_function(param_1,"setHeight",lua_cocos2dx_Label_setHeight);
  tolua_function(param_1,"isShadowEnabled",lua_cocos2dx_Label_isShadowEnabled);
  tolua_function(param_1,"enableGlow",lua_cocos2dx_Label_enableGlow);
  tolua_function(param_1,"getOverflow",lua_cocos2dx_Label_getOverflow);
  tolua_function(param_1,"getVerticalAlignment",lua_cocos2dx_Label_getVerticalAlignment);
  tolua_function(param_1,"setAdditionalKerning",lua_cocos2dx_Label_setAdditionalKerning);
  tolua_function(param_1,"getSystemFontSize",lua_cocos2dx_Label_getSystemFontSize);
  tolua_function(param_1,"setBlendFunc",lua_cocos2dx_Label_setBlendFunc);
  tolua_function(param_1,"getTextAlignment",lua_cocos2dx_Label_getTextAlignment);
  tolua_function(param_1,"getBMFontFilePath",lua_cocos2dx_Label_getBMFontFilePath);
  tolua_function(param_1,"setHorizontalAlignment",lua_cocos2dx_Label_setHorizontalAlignment);
  tolua_function(param_1,"enableBold",lua_cocos2dx_Label_enableBold);
  tolua_function(param_1,"enableUnderline",lua_cocos2dx_Label_enableUnderline);
  tolua_function(param_1,"getLabelEffectType",lua_cocos2dx_Label_getLabelEffectType);
  tolua_function(param_1,"setAlignment",lua_cocos2dx_Label_setAlignment);
  tolua_function(param_1,"requestSystemFontRefresh",lua_cocos2dx_Label_requestSystemFontRefresh);
  tolua_function(param_1,"setBMFontSize",lua_cocos2dx_Label_setBMFontSize);
  tolua_function(param_1,"createWithBMFont",lua_cocos2dx_Label_createWithBMFont);
  tolua_function(param_1,"create",lua_cocos2dx_Label_create);
  tolua_function(param_1,"createWithCharMap",lua_cocos2dx_Label_createWithCharMap);
  tolua_function(param_1,"createWithSystemFont",lua_cocos2dx_Label_createWithSystemFont);
  tolua_endmodule(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"N7cocos2d5LabelE");
  local_78[0] = local_60;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)&g_luaType,(piecewise_construct_t *)local_60,
                     (tuple *)&DAT_01297afe,(tuple *)local_78);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Label",8);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_78,"Label");
  local_40 = local_78;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)g_typeCast,(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_01297afe,(tuple *)&local_40);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (lVar2 + 0x28),"cc.Label",8);
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

