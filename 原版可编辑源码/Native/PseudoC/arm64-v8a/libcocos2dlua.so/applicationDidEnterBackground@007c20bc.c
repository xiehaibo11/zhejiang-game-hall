
/* AppDelegate::applicationDidEnterBackground() */

void AppDelegate::applicationDidEnterBackground(void)

{
  long lVar1;
  Director *this;
  long lVar2;
  EventDispatcher *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (Director *)cocos2d::Director::getInstance();
  cocos2d::Director::stopAnimation(this);
  lVar2 = cocos2d::Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,"APP_ENTER_BACKGROUND_EVENT");
  cocos2d::EventDispatcher::dispatchCustomEvent(this_00,(basic_string *)local_40,(void *)0x0);
  if (((byte)local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  cocos2d::experimental::AudioEngine::pauseAll();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

