
/* js_register_renderer_Assembler(se::Object*) */

undefined8 js_register_renderer_Assembler(Object *param_1)

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
  uStack_47 = 0x6c626d65737341;
  uStack_40 = 0x65;
                    /* try { // try from 00952de0 to 00a52de7 has its CatchHandler @ 00953a18 */
  local_3f = 0x72;
                    /* try { // try from 00952de8 to 00a52e6f has its CatchHandler @ 00952bb4 */
  this = (Class *)se::Class::create(&local_48,param_1,__jsb_cocos2d_renderer_AssemblerBase_proto,
                                    js_renderer_Assembler_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"setVertexFormat",js_renderer_Assembler_setVertexFormatRegistry);
  se::Class::defineFunction
            (this,"isIgnoreOpacityFlag",js_renderer_Assembler_isIgnoreOpacityFlagRegistry);
  se::Class::defineFunction
            (this,"ignoreWorldMatrix",js_renderer_Assembler_ignoreWorldMatrixRegistry);
  se::Class::defineFunction
            (this,"updateVerticesRange",js_renderer_Assembler_updateVerticesRangeRegistry);
                    /* try { // try from 00952e70 to 00a52e77 has its CatchHandler @ 00953a94 */
                    /* try { // try from 00952e78 to 00a52efb has its CatchHandler @ 00952bb4 */
  se::Class::defineFunction
            (this,"setRenderDataList",js_renderer_Assembler_setRenderDataListRegistry);
  se::Class::defineFunction(this,"updateMeshIndex",js_renderer_Assembler_updateMeshIndexRegistry);
  se::Class::defineFunction(this,"updateEffect",js_renderer_Assembler_updateEffectRegistry);
  se::Class::defineFunction
            (this,"updateIndicesRange",js_renderer_Assembler_updateIndicesRangeRegistry);
  se::Class::defineFunction
            (this,"ignoreOpacityFlag",js_renderer_Assembler_ignoreOpacityFlagRegistry);
  se::Class::defineFunction(this,"ctor",js_renderer_Assembler_ctorRegistry);
                    /* try { // try from 00952efc to 00a52f03 has its CatchHandler @ 00953a00 */
                    /* try { // try from 00952f04 to 00a52f8f has its CatchHandler @ 00952bb4 */
  se::Class::defineFinalizeFunction(this,js_cocos2d_renderer_Assembler_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188c220;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_renderer_Assembler_proto = se::Class::getProto(this);
  __jsb_cocos2d_renderer_Assembler_class = this;
  jsb_set_extend_property("renderer","Assembler");
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00952f90 to 00a52f97 has its CatchHandler @ 00953a88 */
                    /* try { // try from 00952f98 to 00a5301b has its CatchHandler @ 00952bb4 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

