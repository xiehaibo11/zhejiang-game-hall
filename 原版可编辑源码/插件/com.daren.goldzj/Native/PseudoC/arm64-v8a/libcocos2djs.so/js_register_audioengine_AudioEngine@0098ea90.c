
/* js_register_audioengine_AudioEngine(se::Object*) */

undefined8 js_register_audioengine_AudioEngine(Object *param_1)

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
  local_3f = 0x656e69;
  uStack_47 = 0x6e456f69647541;
  uStack_40 = 0x67;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineStaticFunction(this,"lazyInit",js_audioengine_AudioEngine_lazyInitRegistry);
  se::Class::defineStaticFunction
            (this,"setCurrentTime",js_audioengine_AudioEngine_setCurrentTimeRegistry);
  se::Class::defineStaticFunction(this,"getVolume",js_audioengine_AudioEngine_getVolumeRegistry);
  se::Class::defineStaticFunction(this,"uncache",js_audioengine_AudioEngine_uncacheRegistry);
  se::Class::defineStaticFunction(this,"resumeAll",js_audioengine_AudioEngine_resumeAllRegistry);
  se::Class::defineStaticFunction(this,"stopAll",js_audioengine_AudioEngine_stopAllRegistry);
  se::Class::defineStaticFunction(this,"pause",js_audioengine_AudioEngine_pauseRegistry);
  se::Class::defineStaticFunction(this,"end",js_audioengine_AudioEngine_endRegistry);
  se::Class::defineStaticFunction
            (this,"getMaxAudioInstance",js_audioengine_AudioEngine_getMaxAudioInstanceRegistry);
  se::Class::defineStaticFunction(this,"isEnabled",js_audioengine_AudioEngine_isEnabledRegistry);
  se::Class::defineStaticFunction
            (this,"getDurationFromFile",js_audioengine_AudioEngine_getDurationFromFileRegistry);
  se::Class::defineStaticFunction
            (this,"getCurrentTime",js_audioengine_AudioEngine_getCurrentTimeRegistry);
  se::Class::defineStaticFunction
            (this,"setMaxAudioInstance",js_audioengine_AudioEngine_setMaxAudioInstanceRegistry);
  se::Class::defineStaticFunction(this,"isLoop",js_audioengine_AudioEngine_isLoopRegistry);
  se::Class::defineStaticFunction(this,"pauseAll",js_audioengine_AudioEngine_pauseAllRegistry);
  se::Class::defineStaticFunction(this,"uncacheAll",js_audioengine_AudioEngine_uncacheAllRegistry);
  se::Class::defineStaticFunction(this,"setVolume",js_audioengine_AudioEngine_setVolumeRegistry);
  se::Class::defineStaticFunction(this,"preload",js_audioengine_AudioEngine_preloadRegistry);
  se::Class::defineStaticFunction(this,"setEnabled",js_audioengine_AudioEngine_setEnabledRegistry);
  se::Class::defineStaticFunction(this,"play2d",js_audioengine_AudioEngine_play2dRegistry);
  se::Class::defineStaticFunction(this,"getState",js_audioengine_AudioEngine_getStateRegistry);
  se::Class::defineStaticFunction(this,"resume",js_audioengine_AudioEngine_resumeRegistry);
  se::Class::defineStaticFunction(this,"stop",js_audioengine_AudioEngine_stopRegistry);
  se::Class::defineStaticFunction(this,"getDuration",js_audioengine_AudioEngine_getDurationRegistry)
  ;
  se::Class::defineStaticFunction(this,"setLoop",js_audioengine_AudioEngine_setLoopRegistry);
  se::Class::defineStaticFunction
            (this,"getDefaultProfile",js_audioengine_AudioEngine_getDefaultProfileRegistry);
  se::Class::defineStaticFunction
            (this,"setFinishCallback",js_audioengine_AudioEngine_setFinishCallbackRegistry);
  se::Class::defineStaticFunction(this,"getProfile",js_audioengine_AudioEngine_getProfileRegistry);
  se::Class::defineStaticFunction
            (this,"getPlayingAudioCount",js_audioengine_AudioEngine_getPlayingAudioCountRegistry);
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  local_30 = (Class *)0x1888658;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_AudioEngine_proto = se::Class::getProto(this);
  __jsb_cocos2d_AudioEngine_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

