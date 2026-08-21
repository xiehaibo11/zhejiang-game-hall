
/* js_register_gfx_GraphicsHandle(se::Object*) */

undefined8 js_register_gfx_GraphicsHandle(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined6 uStack_47;
  undefined1 uStack_41;
  undefined1 uStack_40;
  undefined6 uStack_3f;
  undefined1 local_39;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x1c;
  uStack_3f = 0x656c646e6148;
  uStack_47 = 0x696870617247;
  uStack_41 = 99;
  uStack_40 = 0x73;
  local_39 = 0;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_gfx_GraphicsHandle_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getHandle",js_gfx_GraphicsHandle_getHandleRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_GraphicsHandle_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188aec2;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined6)((ulong)this >> 8);
  uStack_41 = (undefined1)((ulong)this >> 0x38);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_GraphicsHandle_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_GraphicsHandle_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

