
/* js_register_renderer_EffectBase(se::Object*) */

undefined8 js_register_renderer_EffectBase(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined4 uStack_3c;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3c = 0;
  local_48 = (basic_string)0x14;
  local_38 = (void *)0x0;
  local_3f = 0x6573;
  uStack_47 = 0x42746365666645;
  uStack_40 = 0x61;
  local_3d = 0;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getProperty",js_renderer_EffectBase_getPropertyRegistry);
  se::Class::defineFunction(this,"setStencilTest",js_renderer_EffectBase_setStencilTestRegistry);
  se::Class::defineFunction(this,"getDefine",js_renderer_EffectBase_getDefineRegistry);
  se::Class::defineFunction(this,"setCullMode",js_renderer_EffectBase_setCullModeRegistry);
  se::Class::defineFunction(this,"setBlend",js_renderer_EffectBase_setBlendRegistry);
  se::Class::defineFunction(this,"setStencil",js_renderer_EffectBase_setStencilRegistry);
  se::Class::defineFunction(this,"getPasses",js_renderer_EffectBase_getPassesRegistry);
  se::Class::defineFunction(this,"setDepth",js_renderer_EffectBase_setDepthRegistry);
  se::Class::defineFunction(this,"define",js_renderer_EffectBase_defineRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188c6f3;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_EffectBase_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_EffectBase_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

