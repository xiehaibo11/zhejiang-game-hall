
/* cocos2d::Scene::Scene() */

void __thiscall cocos2d::Scene::Scene(Scene *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  EventCustom *this_00;
  code *pcVar4;
  EventDispatcher *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  code *local_68;
  void *pvStack_60;
  Scene *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined ***)this = &PTR__Scene_0170fe10;
  this[0x1fa] = (Scene)0x1;
  local_70 = (undefined **)0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_70);
  this[0x318] = (Scene)0x1;
  uVar2 = Camera::create();
  *(undefined8 *)(this + 0x310) = uVar2;
  (**(code **)(*(long *)this + 0x208))(this);
  lVar3 = Director::getInstance();
  this_01 = *(EventDispatcher **)(lVar3 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,Director::EVENT_PROJECTION_CHANGED);
  local_70 = &PTR_FUN_01710378;
  pvStack_60 = (void *)0x0;
  local_68 = onProjectionChanged;
  local_58 = this;
  local_50 = &local_70;
  uVar2 = EventDispatcher::addCustomEventListener
                    (this_01,(basic_string *)local_88,(function *)&local_70);
  *(undefined8 *)(this + 800) = uVar2;
                    /* try { // try from 00f3c7d8 to 0103c7df has its CatchHandler @ 00f3c84c */
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00f3c7f8;
                    /* try { // try from 00f3c7e0 to 0103c867 has its CatchHandler @ 00f3c44c */
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00f3c7f8:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  Ref::retain(*(Ref **)(this + 800));
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventCustom *)0x0) {
    *(undefined8 *)(this + 0x328) = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,"event_scene_after_render_visit");
    EventCustom::EventCustom(this_00,(basic_string *)&local_70);
    *(EventCustom **)(this + 0x328) = this_00;
                    /* catch() { ... } // from try @ 00f3c5d0 with catch @ 00f3c84c
                       catch() { ... } // from try @ 00f3c7d8 with catch @ 00f3c84c */
    if (((ulong)local_70 & 1) != 0) {
      operator_delete(pvStack_60);
    }
  }
  Ref::retain(*(Ref **)(this + 0x328));
  Camera::_visitingCamera = 0;
  DataManager::onSceneLoaderBegin();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

