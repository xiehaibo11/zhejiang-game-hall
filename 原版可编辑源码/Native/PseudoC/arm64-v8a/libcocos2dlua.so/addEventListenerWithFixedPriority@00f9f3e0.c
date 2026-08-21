
/* cocos2d::EventDispatcher::addEventListenerWithFixedPriority(cocos2d::EventListener*, int) */

void __thiscall
cocos2d::EventDispatcher::addEventListenerWithFixedPriority
          (EventDispatcher *this,EventListener *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  EventListener *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f9f3fc to 0109f403 has its CatchHandler @ 00f9f4c4 */
                    /* try { // try from 00f9f404 to 0109f47f has its CatchHandler @ 00f9f108 */
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x84) = param_2;
    param_1[0x90] = (EventListener)0x0;
    param_1[0x80] = (EventListener)0x1;
    local_40 = param_1;
    if (*(int *)(this + 0x138) == 0) {
      forceAddEventListener(this,param_1);
    }
    else {
      puVar1 = *(undefined8 **)(this + 0xf8);
      if (puVar1 == *(undefined8 **)(this + 0x100)) {
        std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
        ::__push_back_slow_path<cocos2d::EventListener*const&>
                  ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
                    *)(this + 0xf0),&local_40);
      }
      else {
        *puVar1 = param_1;
        *(undefined8 **)(this + 0xf8) = puVar1 + 1;
      }
    }
    Ref::retain((Ref *)local_40);
  }
                    /* try { // try from 00f9f480 to 0109f487 has its CatchHandler @ 00f9f488 */
                    /* catch() { ... } // from try @ 00f9f308 with catch @ 00f9f488
                       catch() { ... } // from try @ 00f9f480 with catch @ 00f9f488
                       try { // try from 00f9f488 to 0109f5b3 has its CatchHandler @ 00f9f108 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

