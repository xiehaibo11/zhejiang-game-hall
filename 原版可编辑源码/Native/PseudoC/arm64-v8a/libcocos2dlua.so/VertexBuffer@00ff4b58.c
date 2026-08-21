
/* cocos2d::VertexBuffer::VertexBuffer() */

void __thiscall cocos2d::VertexBuffer::VertexBuffer(VertexBuffer *this)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  EventDispatcher *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined **local_80;
  VertexBuffer *pVStack_78;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__VertexBuffer_01724668;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  lVar2 = Director::getInstance();
  this_00 = *(EventDispatcher **)(lVar2 + 0xb0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"event_renderer_recreated");
  local_80 = &PTR_FUN_017246d8;
  pVStack_78 = this;
  local_60 = &local_80;
  uVar3 = EventDispatcher::addCustomEventListener
                    (this_00,(basic_string *)local_98,(function *)&local_80);
  *(undefined8 *)(this + 0x28) = uVar3;
  if (&local_80 == local_60) {
    pcVar4 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00ff4c10;
    pcVar4 = (code *)(*local_60)[5];
  }
  (*pcVar4)();
LAB_00ff4c10:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

