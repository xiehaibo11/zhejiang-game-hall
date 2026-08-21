
/* cocos2d::IndexBuffer::IndexBuffer() */

void __thiscall cocos2d::IndexBuffer::IndexBuffer(IndexBuffer *this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  EventDispatcher *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  IndexBuffer *pIStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined ***)this = &PTR__IndexBuffer_01724688;
  *(undefined4 *)(this + 0x44) = 0;
  lVar2 = Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"event_renderer_recreated");
  local_70 = &PTR_FUN_01724758;
  pIStack_68 = this;
  local_50 = &local_70;
  uVar3 = EventDispatcher::addCustomEventListener
                    (this_00,(basic_string *)local_88,(function *)&local_70);
  *(undefined8 *)(this + 0x40) = uVar3;
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00ff5660;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00ff5660:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

