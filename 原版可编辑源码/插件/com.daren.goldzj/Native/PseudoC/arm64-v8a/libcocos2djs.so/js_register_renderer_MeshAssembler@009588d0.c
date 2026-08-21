
/* js_register_renderer_MeshAssembler(se::Object*) */

undefined8 js_register_renderer_MeshAssembler(Object *param_1)

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
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x1a;
  uStack_3f = 0x72656c626d;
  uStack_47 = 0x416873654d;
  uStack_42 = 0x7373;
  uStack_40 = 0x65;
  local_3a = 0;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_CustomAssembler_proto,
                                    js_renderer_MeshAssembler_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"setNode",js_renderer_MeshAssembler_setNodeRegistry);
  se::Class::defineFunction(this,"updateIAData",js_renderer_MeshAssembler_updateIADataRegistry);
  se::Class::defineFunction(this,"ctor",js_renderer_MeshAssembler_ctorRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_MeshAssembler_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188c40c;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined5)((ulong)this >> 8);
  uStack_42 = (undefined2)((ulong)this >> 0x30);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_MeshAssembler_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_MeshAssembler_class = this;
  jsb_set_extend_property("renderer","MeshAssembler");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00958a98 with catch @ 00958a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00958ac8 with catch @ 00958a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00958af8 with catch @ 00958a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00958b20 with catch @ 00958a28
                       catch(type#1 @ 00000000) { ... } // from try @ 00958b4c with catch @ 00958a28
                        */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

