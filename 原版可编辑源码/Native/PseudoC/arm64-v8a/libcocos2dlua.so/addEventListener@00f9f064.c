
/* cocos2d::EventDispatcher::addEventListener(cocos2d::EventListener*) */

void __thiscall
cocos2d::EventDispatcher::addEventListener(EventDispatcher *this,EventListener *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  EventListener *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 00f9ef38 with catch @ 00f9f070 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = param_1;
  if (*(int *)(this + 0x138) == 0) {
                    /* catch() { ... } // from try @ 00f9ed2c with catch @ 00f9f0a4 */
    forceAddEventListener(this,param_1);
  }
  else {
    puVar1 = *(undefined8 **)(this + 0xf8);
                    /* catch() { ... } // from try @ 00f9ee60 with catch @ 00f9f090 */
                    /* catch() { ... } // from try @ 00f9edd8 with catch @ 00f9f094 */
    if (puVar1 == *(undefined8 **)(this + 0x100)) {
                    /* catch() { ... } // from try @ 00f9edf0 with catch @ 00f9f0b4 */
      std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>::
      __push_back_slow_path<cocos2d::EventListener*const&>
                ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>> *)
                 (this + 0xf0),&local_30);
    }
    else {
      *puVar1 = param_1;
      *(undefined8 **)(this + 0xf8) = puVar1 + 1;
    }
  }
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

