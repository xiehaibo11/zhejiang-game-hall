
/* cocos2d::EventDispatcher::dispatchCustomEvent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, void*) */

void __thiscall
cocos2d::EventDispatcher::dispatchCustomEvent
          (EventDispatcher *this,basic_string *param_1,void *param_2)

{
  long lVar1;
  undefined **local_90 [7];
  void *local_58;
  byte local_50;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EventCustom::EventCustom((EventCustom *)local_90,param_1);
  local_58 = param_2;
  dispatchEvent(this,(Event *)local_90);
  local_90[0] = &PTR__EventCustom_01698250;
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  Event::~Event((Event *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

