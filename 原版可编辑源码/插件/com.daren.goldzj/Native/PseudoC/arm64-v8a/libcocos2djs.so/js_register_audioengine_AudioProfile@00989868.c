
/* js_register_audioengine_AudioProfile(se::Object*) */

undefined8 js_register_audioengine_AudioProfile(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined4 local_3f;
  undefined1 local_3b;
  undefined2 uStack_3a;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3a = 0;
                    /* try { // try from 00989890 to 00a8989f has its CatchHandler @ 00989954 */
  local_48 = (basic_string)0x18;
  local_38 = (void *)0x0;
  local_3f = 0x656c6966;
  uStack_47 = 0x72506f69647541;
  uStack_40 = 0x6f;
  local_3b = 0;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_audioengine_AudioProfile_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
                    /* try { // try from 009898ec to 00a898f3 has its CatchHandler @ 00989970 */
                    /* try { // try from 009898f4 to 00a8994b has its CatchHandler @ 00989808 */
  se::Class::defineProperty
            (this,"name",js_audioengine_AudioProfile_get_nameRegistry,
             js_audioengine_AudioProfile_set_nameRegistry);
  se::Class::defineProperty
            (this,"maxInstances",js_audioengine_AudioProfile_get_maxInstancesRegistry,
             js_audioengine_AudioProfile_set_maxInstancesRegistry);
  se::Class::defineProperty
            (this,"minDelay",js_audioengine_AudioProfile_get_minDelayRegistry,
             js_audioengine_AudioProfile_set_minDelayRegistry);
                    /* try { // try from 0098994c to 00a89953 has its CatchHandler @ 00989970 */
  se::Class::defineFinalizeFunction(this,js_cocos2d_AudioProfile_finalizeRegistry);
                    /* catch() { ... } // from try @ 00989890 with catch @ 00989954
                       try { // try from 00989954 to 00a89983 has its CatchHandler @ 00989808 */
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
                    /* catch() { ... } // from try @ 00989848 with catch @ 00989970
                       catch() { ... } // from try @ 009898ec with catch @ 00989970
                       catch() { ... } // from try @ 0098994c with catch @ 00989970 */
  local_30 = (Class *)0x1888551;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009899e4 with catch @ 00989984
                       catch(type#1 @ 00000000) { ... } // from try @ 00989bac with catch @ 00989984
                        */
  __jsb_cocos2d_AudioProfile_proto = se::Class::getProto(this);
  __jsb_cocos2d_AudioProfile_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

