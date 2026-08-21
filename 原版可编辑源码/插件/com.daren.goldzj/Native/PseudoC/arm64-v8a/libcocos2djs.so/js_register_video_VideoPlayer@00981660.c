
/* js_register_video_VideoPlayer(se::Object*) */

undefined8 js_register_video_VideoPlayer(Object *param_1)

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
  local_3f = 0x726579;
  uStack_47 = 0x6c506f65646956;
  uStack_40 = 0x61;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_video_VideoPlayer_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"setFrame",js_video_VideoPlayer_setFrameRegistry);
                    /* try { // try from 009816fc to 00a81723 has its CatchHandler @ 009821d0 */
  se::Class::defineFunction(this,"play",js_video_VideoPlayer_playRegistry);
  se::Class::defineFunction(this,"pause",js_video_VideoPlayer_pauseRegistry);
                    /* try { // try from 00981724 to 00a817cb has its CatchHandler @ 009811b0 */
  se::Class::defineFunction
            (this,"setKeepAspectRatioEnabled",js_video_VideoPlayer_setKeepAspectRatioEnabledRegistry
            );
  se::Class::defineFunction(this,"currentTime",js_video_VideoPlayer_currentTimeRegistry);
  se::Class::defineFunction
            (this,"setFullScreenEnabled",js_video_VideoPlayer_setFullScreenEnabledRegistry);
  se::Class::defineFunction(this,"addEventListener",js_video_VideoPlayer_addEventListenerRegistry);
  se::Class::defineFunction(this,"stop",js_video_VideoPlayer_stopRegistry);
  se::Class::defineFunction(this,"setURL",js_video_VideoPlayer_setURLRegistry);
  se::Class::defineFunction
            (this,"isKeepAspectRatioEnabled",js_video_VideoPlayer_isKeepAspectRatioEnabledRegistry);
                    /* try { // try from 009817cc to 00a817f3 has its CatchHandler @ 009821cc */
  se::Class::defineFunction(this,"onPlayEvent",js_video_VideoPlayer_onPlayEventRegistry);
  se::Class::defineFunction(this,"duration",js_video_VideoPlayer_durationRegistry);
                    /* try { // try from 009817f4 to 00a81893 has its CatchHandler @ 009811b0 */
  se::Class::defineFunction(this,"setVisible",js_video_VideoPlayer_setVisibleRegistry);
  se::Class::defineFunction(this,"seekTo",js_video_VideoPlayer_seekToRegistry);
  se::Class::defineFunction(this,"destroy",js_cocos2d_VideoPlayer_destroyRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_VideoPlayer_finalizeRegistry);
  se::Class::install(this);
  local_30 = (Class *)0x188cd5e;
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_VideoPlayer_proto = se::Class::getProto(this);
  __jsb_cocos2d_VideoPlayer_class = this;
                    /* try { // try from 00981894 to 00a818bb has its CatchHandler @ 009821c8 */
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009818bc to 00a8195f has its CatchHandler @ 009811b0 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

