
/* cocos2d::CameraBackgroundSkyBoxBrush::CameraBackgroundSkyBoxBrush() */

void __thiscall
cocos2d::CameraBackgroundSkyBoxBrush::CameraBackgroundSkyBoxBrush(CameraBackgroundSkyBoxBrush *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  CameraBackgroundSkyBoxBrush *pCStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__CameraBackgroundSkyBoxBrush_016fb128;
  *(undefined2 *)(this + 0x50) = 0x101;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"event_renderer_recreated");
  local_70 = &PTR_FUN_016fb250;
  pCStack_68 = this;
  local_50 = &local_70;
  uVar2 = EventListenerCustom::create((basic_string *)local_88,(function *)&local_70);
  *(undefined8 *)(this + 0x48) = uVar2;
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00ef14a0;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00ef14a0:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x48),-1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

