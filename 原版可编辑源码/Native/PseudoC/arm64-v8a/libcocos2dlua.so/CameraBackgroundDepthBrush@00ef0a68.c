
/* cocos2d::CameraBackgroundDepthBrush::CameraBackgroundDepthBrush() */

void __thiscall
cocos2d::CameraBackgroundDepthBrush::CameraBackgroundDepthBrush(CameraBackgroundDepthBrush *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  CameraBackgroundDepthBrush *pCStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (CameraBackgroundDepthBrush)0x0;
  *(undefined ***)this = &PTR__CameraBackgroundDepthBrush_016fb0a8;
  Vec3::Vec3((Vec3 *)(this + 0x40));
  Color4B::Color4B((Color4B *)(this + 0x4c));
                    /* try { // try from 00ef0ac0 to 00ff0ecb has its CatchHandler @ 00ef0ac0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef0ac0 with catch @ 00ef0ac0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef0f34 with catch @ 00ef0ac0
                       catch(type#1 @ 00000000) { ... } // from try @ 00ef0fc0 with catch @ 00ef0ac0
                        */
  *(undefined8 *)(this + 0x50) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x58));
  Color4B::Color4B((Color4B *)(this + 100));
  *(undefined8 *)(this + 0x68) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x70));
  Color4B::Color4B((Color4B *)(this + 0x7c));
  *(undefined8 *)(this + 0x80) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x88));
  Color4B::Color4B((Color4B *)(this + 0x94));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"event_renderer_recreated");
  local_70 = &PTR_FUN_016fb1d0;
  pCStack_68 = this;
  local_50 = &local_70;
  uVar2 = EventListenerCustom::create((basic_string *)local_88,(function *)&local_70);
  *(undefined8 *)(this + 0x30) = uVar2;
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00ef0b5c;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00ef0b5c:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x30),-1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

