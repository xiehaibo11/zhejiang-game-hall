
/* js_register_renderer_NodeProxy(se::Object*) */

undefined8 js_register_renderer_NodeProxy(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined2 local_3f;
  undefined5 uStack_3d;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3d = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x12;
  local_3f = 0x79;
  uStack_47 = 0x6f725065646f4e;
  uStack_40 = 0x78;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_renderer_NodeProxy_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"disableVisit",js_renderer_NodeProxy_disableVisitRegistry);
  se::Class::defineFunction
            (this,"switchTraverseToRender",js_renderer_NodeProxy_switchTraverseToRenderRegistry);
  se::Class::defineFunction
            (this,"notifyUpdateParent",js_renderer_NodeProxy_notifyUpdateParentRegistry);
  se::Class::defineFunction
            (this,"destroyImmediately",js_renderer_NodeProxy_destroyImmediatelyRegistry);
  se::Class::defineFunction(this,"isValid",js_renderer_NodeProxy_isValidRegistry);
  se::Class::defineFunction(this,"enableVisit",js_renderer_NodeProxy_enableVisitRegistry);
  se::Class::defineFunction(this,"getLocalMatrix",js_renderer_NodeProxy_getLocalMatrixRegistry);
  se::Class::defineFunction(this,"setName",js_renderer_NodeProxy_setNameRegistry);
  se::Class::defineFunction(this,"clearAssembler",js_renderer_NodeProxy_clearAssemblerRegistry);
  se::Class::defineFunction
            (this,"switchTraverseToVisit",js_renderer_NodeProxy_switchTraverseToVisitRegistry);
  se::Class::defineFunction(this,"setAssembler",js_renderer_NodeProxy_setAssemblerRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_NodeProxy_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x18693a4;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_NodeProxy_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_NodeProxy_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

