
/* cocos2d::experimental::AudioEngineImpl::uncache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::experimental::AudioEngineImpl::uncache(AudioEngineImpl *this,basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  basic_string local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0xb8) != 0) {
    plVar2 = (long *)FileUtils::getInstance();
    (**(code **)(*plVar2 + 0x50))(local_50,plVar2,param_1);
    AudioPlayerProvider::clearPcmCache(*(AudioPlayerProvider **)(this + 0xb8),local_50);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

