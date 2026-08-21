
/* cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority(cocos2d::EventListener*,
   cocos2d::Node*) */

void __thiscall
cocos2d::EventDispatcher::addEventListenerWithSceneGraphPriority
          (EventDispatcher *this,EventListener *param_1,Node *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  EventListener *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00f9f338 to 0109f33f has its CatchHandler @ 00f9f50c */
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar3 & 1) != 0) {
    *(Node **)(param_1 + 0x88) = param_2;
    *(undefined4 *)(param_1 + 0x84) = 0;
    param_1[0x80] = (EventListener)0x1;
    local_40 = param_1;
    if (*(int *)(this + 0x138) == 0) {
      forceAddEventListener(this,param_1);
    }
    else {
      puVar1 = *(undefined8 **)(this + 0xf8);
                    /* try { // try from 00f9f380 to 0109f38b has its CatchHandler @ 00f9f4d0 */
      if (puVar1 == *(undefined8 **)(this + 0x100)) {
        std::__ndk1::vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
        ::__push_back_slow_path<cocos2d::EventListener*const&>
                  ((vector<cocos2d::EventListener*,std::__ndk1::allocator<cocos2d::EventListener*>>
                    *)(this + 0xf0),&local_40);
      }
      else {
        *puVar1 = param_1;
                    /* try { // try from 00f9f38c to 0109f3fb has its CatchHandler @ 00f9f108 */
        *(undefined8 **)(this + 0xf8) = puVar1 + 1;
      }
    }
    Ref::retain((Ref *)local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

