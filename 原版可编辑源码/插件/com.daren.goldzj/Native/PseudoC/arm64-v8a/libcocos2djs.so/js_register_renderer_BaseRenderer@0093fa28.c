
/* js_register_renderer_BaseRenderer(se::Object*) */

undefined8 js_register_renderer_BaseRenderer(Object *param_1)

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
  local_48 = (Class *)0x6573614208;
  this = (Class *)se::Class::create((basic_string *)&local_48,param_1,(Object *)0x0,
                                    js_renderer_BaseRenderer_constructorRegistry);
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getProgramLib",js_renderer_BaseRenderer_getProgramLibRegistry);
  se::Class::defineFunction(this,"init",js_renderer_BaseRenderer_initRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_BaseRenderer_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188b30f;
  local_48 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_BaseRenderer_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_BaseRenderer_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

