
/* cocos2d::experimental::FrameBuffer::init(unsigned char, unsigned int, unsigned int) */

undefined8 __thiscall
cocos2d::experimental::FrameBuffer::init(FrameBuffer *this,uchar param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  undefined4 local_74;
  undefined **local_70;
  FrameBuffer *pFStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x2d] = (FrameBuffer)param_1;
  *(uint *)(this + 0x48) = param_2;
  *(uint *)(this + 0x4c) = param_3;
  glGetIntegerv(0x8ca6,&local_74);
  glGenFramebuffers(1,this + 0x24);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x24));
  glBindFramebuffer(0x8d40,local_74);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"event_renderer_recreated");
  local_70 = &PTR_FUN_01724ae8;
  pFStack_68 = this;
  local_50 = &local_70;
  uVar2 = EventListenerCustom::create((basic_string *)local_90,(function *)&local_70);
  *(undefined8 *)(this + 0x68) = uVar2;
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00ff7b70;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00ff7b70:
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x68),-1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

