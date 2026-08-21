
/* js_register_renderer_CustomAssembler(se::Object*) */

undefined8 js_register_renderer_CustomAssembler(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 local_40;
  undefined7 uStack_3f;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00953060 with catch @ 00953d40 */
  local_48 = (basic_string)0x1e;
  uStack_3f = 0x72656c626d6573;
  uStack_47 = 0x416d6f74737543;
  local_40 = 0x73;
  local_38 = (void *)0x0;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_AssemblerBase_proto,
                                    js_renderer_CustomAssembler_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"clearEffect",js_renderer_CustomAssembler_clearEffectRegistry);
  se::Class::defineFunction(this,"updateEffect",js_renderer_CustomAssembler_updateEffectRegistry);
  se::Class::defineFunction
            (this,"updateIABuffer",js_renderer_CustomAssembler_updateIABufferRegistry);
  se::Class::defineFunction(this,"ctor",js_renderer_CustomAssembler_ctorRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_CustomAssembler_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188c2c8;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_CustomAssembler_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_CustomAssembler_class = this;
  jsb_set_extend_property("renderer","CustomAssembler");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

