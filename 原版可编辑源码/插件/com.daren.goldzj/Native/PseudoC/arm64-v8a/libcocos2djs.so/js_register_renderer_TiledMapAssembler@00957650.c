
/* js_register_renderer_TiledMapAssembler(se::Object*) */

undefined8 js_register_renderer_TiledMapAssembler(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined2 uStack_37;
  undefined5 uStack_35;
  Class *local_30;
  long local_28;
  
                    /* try { // try from 0095765c to 00a57663 has its CatchHandler @ 009578f0 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00957664 to 00a5769f has its CatchHandler @ 00957620 */
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_35 = 0;
  local_48 = (basic_string)0x22;
  uStack_3f = 0x6c626d65737341;
  uStack_38 = 0x65;
  uStack_47 = 0x614d64656c6954;
  uStack_40 = 0x70;
                    /* try { // try from 009576a0 to 00a576ab has its CatchHandler @ 009578ec */
  uStack_37 = 0x72;
                    /* try { // try from 009576ac to 00a57887 has its CatchHandler @ 00957620 */
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_Assembler_proto,
                                    js_renderer_TiledMapAssembler_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_35,CONCAT21(uStack_37,uStack_38)));
  }
  se::Class::defineFunction(this,"updateNodes",js_renderer_TiledMapAssembler_updateNodesRegistry);
  se::Class::defineFunction(this,"clearNodes",js_renderer_TiledMapAssembler_clearNodesRegistry);
  se::Class::defineFunction(this,"ctor",js_renderer_TiledMapAssembler_ctorRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_TiledMapAssembler_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188c330;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_TiledMapAssembler_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_TiledMapAssembler_class = this;
  jsb_set_extend_property("renderer","TiledMapAssembler");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

