
/* cocos2d::EventDispatcher::addCustomEventListener(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (cocos2d::EventCustom*)> const&) */

EventListener * __thiscall
cocos2d::EventDispatcher::addCustomEventListener
          (EventDispatcher *this,basic_string *param_1,function *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  EventListener *pEVar3;
  ulong uVar4;
  EventListener *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00f9f168 with catch @ 00f9f4ac */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00f9f3fc with catch @ 00f9f4c4 */
                    /* catch() { ... } // from try @ 00f9f380 with catch @ 00f9f4d0 */
  pEVar3 = (EventListener *)EventListenerCustom::create(param_1,param_2);
  uVar4 = (**(code **)(*(long *)pEVar3 + 0x10))();
  if ((uVar4 & 1) != 0) {
    *(undefined8 *)(pEVar3 + 0x88) = 0;
    pEVar3[0x90] = (EventListener)0x0;
    *(undefined4 *)(pEVar3 + 0x84) = 1;
    pEVar3[0x80] = (EventListener)0x1;
    local_40 = pEVar3;
    if (*(int *)(this + 0x138) == 0) {
      forceAddEventListener(this,pEVar3);
    }
    else {
      puVar1 = *(undefined8 **)(this + 0xf8);
                    /* catch() { ... } // from try @ 00f9f338 with catch @ 00f9f50c */
      if (puVar1 == *(undefined8 **)(this + 0x100)) {
        std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
        ::__push_back_slow_path<cocos2d::EventListener*const&>
                  ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
                    *)(this + 0xf0),&local_40);
      }
      else {
        *puVar1 = pEVar3;
        *(undefined8 **)(this + 0xf8) = puVar1 + 1;
      }
    }
    Ref::retain((Ref *)local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return pEVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

