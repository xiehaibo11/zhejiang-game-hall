
/* js_register_engine_LabelRenderer(se::Object*) */

undefined8 js_register_engine_LabelRenderer(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined5 uStack_47;
  undefined2 uStack_42;
  undefined1 uStack_40;
  undefined5 uStack_3f;
  undefined1 local_3a;
  undefined1 uStack_39;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_39 = 0;
  local_48 = (basic_string)0x1a;
  local_38 = (void *)0x0;
  local_3a = 0;
  uStack_3f = 0x7265726564;
  uStack_47 = 0x6c6562614c;
  uStack_42 = 0x6552;
  uStack_40 = 0x6e;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_engine_LabelRenderer_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"setEffect",js_engine_LabelRenderer_setEffectRegistry);
  se::Class::defineFunction(this,"render",js_engine_LabelRenderer_renderRegistry);
  se::Class::defineFunction(this,"bindNodeProxy",js_engine_LabelRenderer_bindNodeProxyRegistry);
  se::Class::defineFunction(this,"ctor",js_engine_LabelRenderer_ctorRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_LabelRenderer_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x1868f7f;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined5)((ulong)this >> 8);
  uStack_42 = (undefined2)((ulong)this >> 0x30);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_LabelRenderer_proto = se::Class::getProto(this);
  __jsb_cocos2d_LabelRenderer_class = this;
  jsb_set_extend_property("jsb","LabelRenderer");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

