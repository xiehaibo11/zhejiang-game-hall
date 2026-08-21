
/* js_register_renderer_NodeMemPool(se::Object*) */

undefined8 js_register_renderer_NodeMemPool(Object *param_1)

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
  
                    /* catch() { ... } // from try @ 009504f4 with catch @ 0095057c */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009504c4 with catch @ 009505a4 */
                    /* catch() { ... } // from try @ 00950480 with catch @ 009505a8 */
  uStack_3b = 0;
                    /* catch() { ... } // from try @ 0095036c with catch @ 009505ac */
  local_38 = (void *)0x0;
                    /* catch() { ... } // from try @ 00950324 with catch @ 009505b0 */
  local_48 = (basic_string)0x16;
                    /* catch() { ... } // from try @ 00950158 with catch @ 009505b4 */
                    /* catch() { ... } // from try @ 00950110 with catch @ 009505b8 */
                    /* catch() { ... } // from try @ 009500c8 with catch @ 009505bc */
                    /* catch() { ... } // from try @ 0094fe54 with catch @ 009505c0 */
  uStack_47 = 0x6d654d65646f4e;
  uStack_40 = 0x50;
                    /* catch() { ... } // from try @ 0094fc38 with catch @ 009505c4 */
                    /* catch() { ... } // from try @ 0094f744 with catch @ 009505c8 */
  local_3f = 0x6c6f6f;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_MemPool_proto,
                                    js_renderer_NodeMemPool_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"removeNodeData",js_renderer_NodeMemPool_removeNodeDataRegistry);
  se::Class::defineFunction(this,"updateNodeData",js_renderer_NodeMemPool_updateNodeDataRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_NodeMemPool_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x1869691;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_NodeMemPool_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_NodeMemPool_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

