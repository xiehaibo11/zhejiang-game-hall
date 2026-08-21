
/* js_register_gfx_FrameBuffer(se::Object*) */

undefined8 js_register_gfx_FrameBuffer(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined4 local_3f;
  undefined3 uStack_3b;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3b = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x16;
  uStack_47 = 0x7542656d617246;
  uStack_40 = 0x66;
  local_3f = 0x726566;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_GraphicsHandle_proto,
                                    js_gfx_FrameBuffer_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getHeight",js_gfx_FrameBuffer_getHeightRegistry);
  se::Class::defineFunction(this,"getWidth",js_gfx_FrameBuffer_getWidthRegistry);
  se::Class::defineFunction(this,"destroy",js_gfx_FrameBuffer_destroyRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_FrameBuffer_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188aea1;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_FrameBuffer_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_FrameBuffer_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

