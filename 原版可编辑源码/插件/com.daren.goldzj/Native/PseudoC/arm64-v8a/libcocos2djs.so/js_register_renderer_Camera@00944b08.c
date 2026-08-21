
/* js_register_renderer_Camera(se::Object*) */

undefined8 js_register_renderer_Camera(Object *param_1)

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
  local_48 = (Class *)0x6172656d61430c;
  this = (Class *)se::Class::create((basic_string *)&local_48,param_1,(Object *)0x0,
                                    js_renderer_Camera_constructorRegistry);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getDepth",js_renderer_Camera_getDepthRegistry);
  se::Class::defineFunction(this,"setFov",js_renderer_Camera_setFovRegistry);
  se::Class::defineFunction(this,"getFrameBuffer",js_renderer_Camera_getFrameBufferRegistry);
  se::Class::defineFunction(this,"setStencil",js_renderer_Camera_setStencilRegistry);
  se::Class::defineFunction(this,"setPriority",js_renderer_Camera_setPriorityRegistry);
  se::Class::defineFunction(this,"getOrthoHeight",js_renderer_Camera_getOrthoHeightRegistry);
  se::Class::defineFunction(this,"setCullingMask",js_renderer_Camera_setCullingMaskRegistry);
  se::Class::defineFunction(this,"getStencil",js_renderer_Camera_getStencilRegistry);
  se::Class::defineFunction(this,"setType",js_renderer_Camera_setTypeRegistry);
  se::Class::defineFunction(this,"getPriority",js_renderer_Camera_getPriorityRegistry);
  se::Class::defineFunction(this,"setFar",js_renderer_Camera_setFarRegistry);
  se::Class::defineFunction(this,"setFrameBuffer",js_renderer_Camera_setFrameBufferRegistry);
  se::Class::defineFunction(this,"setRect",js_renderer_Camera_setRectRegistry);
  se::Class::defineFunction(this,"setClearFlags",js_renderer_Camera_setClearFlagsRegistry);
  se::Class::defineFunction(this,"getFar",js_renderer_Camera_getFarRegistry);
  se::Class::defineFunction(this,"getType",js_renderer_Camera_getTypeRegistry);
  se::Class::defineFunction(this,"getCullingMask",js_renderer_Camera_getCullingMaskRegistry);
  se::Class::defineFunction(this,"setNear",js_renderer_Camera_setNearRegistry);
  se::Class::defineFunction(this,"setStages",js_renderer_Camera_setStagesRegistry);
  se::Class::defineFunction(this,"setOrthoHeight",js_renderer_Camera_setOrthoHeightRegistry);
  se::Class::defineFunction(this,"setDepth",js_renderer_Camera_setDepthRegistry);
  se::Class::defineFunction(this,"getStages",js_renderer_Camera_getStagesRegistry);
  se::Class::defineFunction(this,"getFov",js_renderer_Camera_getFovRegistry);
  se::Class::defineFunction(this,"setColor",js_renderer_Camera_setColorRegistry);
  se::Class::defineFunction(this,"setWorldMatrix",js_renderer_Camera_setWorldMatrixRegistry);
  se::Class::defineFunction(this,"getNear",js_renderer_Camera_getNearRegistry);
  se::Class::defineFunction(this,"getClearFlags",js_renderer_Camera_getClearFlagsRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_Camera_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188b5f0;
  local_48 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_Camera_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_Camera_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

