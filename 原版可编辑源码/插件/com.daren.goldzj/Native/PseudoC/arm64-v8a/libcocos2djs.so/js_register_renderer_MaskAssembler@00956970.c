
/* js_register_renderer_MaskAssembler(se::Object*) */

undefined8 js_register_renderer_MaskAssembler(Object *param_1)

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
                    /* catch() { ... } // from try @ 009568cc with catch @ 00956990 */
                    /* catch() { ... } // from try @ 009568f8 with catch @ 00956994 */
                    /* catch() { ... } // from try @ 00956938 with catch @ 00956998 */
  uStack_39 = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x1a;
                    /* try { // try from 009569b4 to 00a56a67 has its CatchHandler @ 009569b4
                       catch(type#1 @ 00000000) { ... } // from try @ 009569b4 with catch @ 009569b4
                       catch(type#1 @ 00000000) { ... } // from try @ 00956a6c with catch @ 009569b4
                        */
  uStack_3f = 0x72656c626d;
  uStack_47 = 0x416b73614d;
  uStack_42 = 0x7373;
  uStack_40 = 0x65;
  local_3a = 0;
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_SimpleSprite2D_proto,
                                    js_renderer_MaskAssembler_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction
            (this,"setMaskInverted",js_renderer_MaskAssembler_setMaskInvertedRegistry);
  se::Class::defineFunction
            (this,"setImageStencil",js_renderer_MaskAssembler_setImageStencilRegistry);
  se::Class::defineFunction
            (this,"setClearSubHandle",js_renderer_MaskAssembler_setClearSubHandleRegistry);
  se::Class::defineFunction
            (this,"getMaskInverted",js_renderer_MaskAssembler_getMaskInvertedRegistry);
  se::Class::defineFunction
            (this,"setRenderSubHandle",js_renderer_MaskAssembler_setRenderSubHandleRegistry);
                    /* try { // try from 00956a68 to 00a56a6b has its CatchHandler @ 00956b00 */
                    /* try { // try from 00956a6c to 00a56b1b has its CatchHandler @ 009569b4 */
  se::Class::defineFunction(this,"ctor",js_renderer_MaskAssembler_ctorRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_MaskAssembler_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188c2ed;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined5)((ulong)this >> 8);
  uStack_42 = (undefined2)((ulong)this >> 0x30);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_MaskAssembler_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_MaskAssembler_class = this;
  jsb_set_extend_property("renderer","MaskAssembler");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00956a68 with catch @ 00956b00
                        */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00956b78 with catch @ 00956b1c */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

