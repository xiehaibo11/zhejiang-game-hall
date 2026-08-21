
/* fairygui::TweenManager::init() */

void fairygui::TweenManager::init(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  EventDispatcher *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  code *pcStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  _inited = 1;
  if (_activeTweens == (void *)0x0) {
    _arrayLength = 0x1e;
    _activeTweens = operator_new__(0xf0);
  }
  lVar2 = cocos2d::Director::getInstance();
  local_70 = &PTR_FUN_016aab78;
  pcStack_68 = (code *)&DAT_01782c19;
  local_50 = &local_70;
  cocos2d::Scheduler::schedulePerFrame
            (*(Scheduler **)(lVar2 + 0xa0),(function *)&local_70,&DAT_01782c19,-0x7ffffff6,false);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
LAB_00ac2504:
    (*pcVar3)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar3 = (code *)(*local_50)[5];
    goto LAB_00ac2504;
  }
  lVar2 = cocos2d::Director::getInstance();
  this = *(EventDispatcher **)(lVar2 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,cocos2d::Director::EVENT_RESET);
  local_70 = &PTR_FUN_016aabf8;
  pcStack_68 = reset;
  local_50 = &local_70;
  cocos2d::EventDispatcher::addCustomEventListener
            (this,(basic_string *)local_88,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar3 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00ac257c;
    pcVar3 = (code *)(*local_50)[5];
  }
  (*pcVar3)();
LAB_00ac257c:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

