
/* js_register_renderer_Light(se::Object*) */

undefined8 js_register_renderer_Light(Object *param_1)

{
  long lVar1;
  Class *this;
  Class *local_48;
  undefined8 uStack_40;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_40 = 0;
  local_38 = (void *)0x0;
  local_48 = (Class *)0x746867694c0a;
  this = (Class *)se::Class::create((basic_string *)&local_48,param_1,(Object *)0x0,
                                    js_renderer_Light_constructorRegistry);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getRange",js_renderer_Light_getRangeRegistry);
  se::Class::defineFunction
            (this,"setShadowFrustumSize",js_renderer_Light_setShadowFrustumSizeRegistry);
  se::Class::defineFunction
            (this,"setShadowResolution",js_renderer_Light_setShadowResolutionRegistry);
  se::Class::defineFunction
            (this,"getFrustumEdgeFalloff",js_renderer_Light_getFrustumEdgeFalloffRegistry);
  se::Class::defineFunction(this,"setSpotExp",js_renderer_Light_setSpotExpRegistry);
  se::Class::defineFunction(this,"setShadowType",js_renderer_Light_setShadowTypeRegistry);
  se::Class::defineFunction(this,"setType",js_renderer_Light_setTypeRegistry);
  se::Class::defineFunction(this,"getViewProjMatrix",js_renderer_Light_getViewProjMatrixRegistry);
  se::Class::defineFunction(this,"getPositionUniform",js_renderer_Light_getPositionUniformRegistry);
  se::Class::defineFunction(this,"getShadowBias",js_renderer_Light_getShadowBiasRegistry);
  se::Class::defineFunction(this,"getShadowDarkness",js_renderer_Light_getShadowDarknessRegistry);
  se::Class::defineFunction(this,"getSpotAngle",js_renderer_Light_getSpotAngleRegistry);
  se::Class::defineFunction
            (this,"getDirectionUniform",js_renderer_Light_getDirectionUniformRegistry);
  se::Class::defineFunction(this,"getSpotExp",js_renderer_Light_getSpotExpRegistry);
  se::Class::defineFunction
            (this,"setShadowDepthScale",js_renderer_Light_setShadowDepthScaleRegistry);
  se::Class::defineFunction(this,"getViewPorjMatrix",js_renderer_Light_getViewPorjMatrixRegistry);
  se::Class::defineFunction
            (this,"getSpotAngleUniform",js_renderer_Light_getSpotAngleUniformRegistry);
  se::Class::defineFunction(this,"getType",js_renderer_Light_getTypeRegistry);
  se::Class::defineFunction(this,"getColorUniform",js_renderer_Light_getColorUniformRegistry);
  se::Class::defineFunction(this,"getIntensity",js_renderer_Light_getIntensityRegistry);
  se::Class::defineFunction(this,"getShadowMaxDepth",js_renderer_Light_getShadowMaxDepthRegistry);
  se::Class::defineFunction(this,"getWorldMatrix",js_renderer_Light_getWorldMatrixRegistry);
  se::Class::defineFunction(this,"getShadowMap",js_renderer_Light_getShadowMapRegistry);
  se::Class::defineFunction(this,"getColor",js_renderer_Light_getColorRegistry);
  se::Class::defineFunction(this,"setIntensity",js_renderer_Light_setIntensityRegistry);
  se::Class::defineFunction(this,"getShadowMinDepth",js_renderer_Light_getShadowMinDepthRegistry);
  se::Class::defineFunction(this,"setShadowMinDepth",js_renderer_Light_setShadowMinDepthRegistry);
  se::Class::defineFunction(this,"update",js_renderer_Light_updateRegistry);
  se::Class::defineFunction(this,"setShadowDarkness",js_renderer_Light_setShadowDarknessRegistry);
  se::Class::defineFunction(this,"setWorldMatrix",js_renderer_Light_setWorldMatrixRegistry);
  se::Class::defineFunction(this,"setSpotAngle",js_renderer_Light_setSpotAngleRegistry);
  se::Class::defineFunction(this,"setRange",js_renderer_Light_setRangeRegistry);
  se::Class::defineFunction(this,"setColor",js_renderer_Light_setColorRegistry);
  se::Class::defineFunction(this,"setShadowMaxDepth",js_renderer_Light_setShadowMaxDepthRegistry);
  se::Class::defineFunction
            (this,"setFrustumEdgeFalloff",js_renderer_Light_setFrustumEdgeFalloffRegistry);
  se::Class::defineFunction
            (this,"getShadowResolution",js_renderer_Light_getShadowResolutionRegistry);
  se::Class::defineFunction
            (this,"getShadowDepthScale",js_renderer_Light_getShadowDepthScaleRegistry);
  se::Class::defineFunction(this,"getShadowType",js_renderer_Light_getShadowTypeRegistry);
  se::Class::defineFunction(this,"setShadowBias",js_renderer_Light_setShadowBiasRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_Light_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188b6a0;
  local_48 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_Light_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_Light_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

