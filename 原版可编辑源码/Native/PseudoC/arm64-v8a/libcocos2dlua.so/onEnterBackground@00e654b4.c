
/* cocos2d::experimental::AudioEngineImpl::onEnterBackground(cocos2d::EventCustom*) */

void cocos2d::experimental::AudioEngineImpl::onEnterBackground(EventCustom *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  IAudioPlayer *pIVar4;
  long *plVar5;
  IAudioPlayer *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(AudioPlayerProvider **)(param_1 + 0xb8) != (AudioPlayerProvider *)0x0) {
    AudioPlayerProvider::pause(*(AudioPlayerProvider **)(param_1 + 0xb8));
  }
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    do {
      pIVar4 = (IAudioPlayer *)plVar5[3];
      local_50 = pIVar4;
      if (((pIVar4 != (IAudioPlayer *)0x0) &&
          (lVar3 = __dynamic_cast(pIVar4,&IAudioPlayer::typeinfo,&UrlAudioPlayer::typeinfo,0),
          lVar3 != 0)) && (iVar2 = (**(code **)(*(long *)pIVar4 + 0x28))(pIVar4), iVar2 == 2)) {
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
        ::__emplace_unique_key_args<int,int_const&,cocos2d::experimental::IAudioPlayer*&>
                  ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::experimental::IAudioPlayer*>>>
                    *)(param_1 + 0x90),(int *)(plVar5 + 2),(int *)(plVar5 + 2),&local_50);
        (**(code **)(*(long *)local_50 + 0x38))();
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

