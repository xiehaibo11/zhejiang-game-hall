
/* js_register_gfx_DeviceGraphics(se::Object*) */

undefined8 js_register_gfx_DeviceGraphics(Object *param_1)

{
  long lVar1;
  Class *this;
  Class *local_48;
  undefined8 local_40;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_38 = (void *)0x0;
  local_48 = (Class *)0x6563697665440c;
  this = (Class *)se::Class::create((basic_string *)&local_48,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction
            (this,"setBlendFuncSep",js_gfx_DeviceGraphics_setBlendFuncSeparateRegistry);
  se::Class::defineFunction(this,"enableBlend",js_gfx_DeviceGraphics_enableBlendRegistry);
  se::Class::defineFunction(this,"setPrimitiveType",js_gfx_DeviceGraphics_setPrimitiveTypeRegistry);
  se::Class::defineFunction
            (this,"setBlendEqSep",js_gfx_DeviceGraphics_setBlendEquationSeparateRegistry);
  se::Class::defineFunction(this,"setIndexBuffer",js_gfx_DeviceGraphics_setIndexBufferRegistry);
  se::Class::defineFunction(this,"setProgram",js_gfx_DeviceGraphics_setProgramRegistry);
  se::Class::defineFunction(this,"setFrameBuffer",js_gfx_DeviceGraphics_setFrameBufferRegistry);
  se::Class::defineFunction(this,"setStencilFunc",js_gfx_DeviceGraphics_setStencilFuncRegistry);
  se::Class::defineFunction(this,"setBlendColor",js_gfx_DeviceGraphics_setBlendColorRegistry);
  se::Class::defineFunction(this,"setScissor",js_gfx_DeviceGraphics_setScissorRegistry);
  se::Class::defineFunction(this,"setVertexBuffer",js_gfx_DeviceGraphics_setVertexBufferRegistry);
  se::Class::defineFunction(this,"enableDepthWrite",js_gfx_DeviceGraphics_enableDepthWriteRegistry);
  se::Class::defineFunction(this,"getCapacity",js_gfx_DeviceGraphics_getCapacityRegistry);
  se::Class::defineFunction(this,"setStencilOpBack",js_gfx_DeviceGraphics_setStencilOpBackRegistry);
  se::Class::defineFunction(this,"setViewport",js_gfx_DeviceGraphics_setViewportRegistry);
  se::Class::defineFunction(this,"draw",js_gfx_DeviceGraphics_drawRegistry);
  se::Class::defineFunction(this,"setDepthFunc",js_gfx_DeviceGraphics_setDepthFuncRegistry);
  se::Class::defineFunction(this,"enableDepthTest",js_gfx_DeviceGraphics_enableDepthTestRegistry);
  se::Class::defineFunction(this,"resetDrawCalls",js_gfx_DeviceGraphics_resetDrawCallsRegistry);
  se::Class::defineFunction(this,"getDrawCalls",js_gfx_DeviceGraphics_getDrawCallsRegistry);
  se::Class::defineFunction(this,"setBlendEquation",js_gfx_DeviceGraphics_setBlendEquationRegistry);
  se::Class::defineFunction
            (this,"setStencilFuncFront",js_gfx_DeviceGraphics_setStencilFuncFrontRegistry);
  se::Class::defineFunction
            (this,"setStencilOpFront",js_gfx_DeviceGraphics_setStencilOpFrontRegistry);
  se::Class::defineFunction
            (this,"setStencilFuncBack",js_gfx_DeviceGraphics_setStencilFuncBackRegistry);
  se::Class::defineFunction(this,"setBlendFunc",js_gfx_DeviceGraphics_setBlendFuncRegistry);
  se::Class::defineFunction(this,"setCullMode",js_gfx_DeviceGraphics_setCullModeRegistry);
  se::Class::defineFunction(this,"setStencilOp",js_gfx_DeviceGraphics_setStencilOpRegistry);
  se::Class::defineFunction
            (this,"enableStencilTest",js_gfx_DeviceGraphics_enableStencilTestRegistry);
  se::Class::defineStaticFunction(this,"getInstance",js_gfx_DeviceGraphics_getInstanceRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188ae7c;
  local_48 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_DeviceGraphics_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_DeviceGraphics_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

