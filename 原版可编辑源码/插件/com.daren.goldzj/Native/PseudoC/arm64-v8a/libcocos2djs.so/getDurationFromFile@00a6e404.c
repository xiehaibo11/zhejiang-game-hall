
/* cocos2d::AudioEngine::getDurationFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined1  [16] cocos2d::AudioEngine::getDurationFromFile(basic_string *param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  lazyInit();
  if (_audioEngineImpl != (AudioEngineImpl *)0x0) {
                    /* try { // try from 00a6e430 to 00b6e447 has its CatchHandler @ 00a6e600 */
    AudioEngineImpl::getDurationFromFile(_audioEngineImpl,param_1);
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0xbf800000);
}

