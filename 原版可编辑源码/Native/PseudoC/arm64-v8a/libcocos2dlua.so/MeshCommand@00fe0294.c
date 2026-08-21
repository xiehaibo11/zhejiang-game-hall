
/* cocos2d::MeshCommand::MeshCommand() */

void __thiscall cocos2d::MeshCommand::MeshCommand(MeshCommand *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  MeshCommand *local_68;
  undefined ***local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  RenderCommand::RenderCommand((RenderCommand *)this);
  *(undefined ***)this = &PTR__MeshCommand_01724078;
                    /* catch() { ... } // from try @ 00fe0260 with catch @ 00fe02d8 */
  Vec4::Vec4((Vec4 *)(this + 0x18),1.0,1.0,1.0,1.0);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
                    /* catch() { ... } // from try @ 00fe0330 with catch @ 00fe02f4 */
  *(undefined4 *)(this + 0x38) = 0;
  Mat4::Mat4((Mat4 *)(this + 0x58));
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 8) = 5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"event_renderer_recreated");
                    /* try { // try from 00fe0328 to 010e032f has its CatchHandler @ 00fe03a8 */
                    /* try { // try from 00fe0330 to 010e03c3 has its CatchHandler @ 00fe02f4 */
  local_80 = &PTR_FUN_017240b0;
  uStack_70 = 0;
  local_78 = listenRendererRecreated;
  local_68 = this;
  local_60 = &local_80;
  uVar2 = EventListenerCustom::create((basic_string *)local_98,(function *)&local_80);
  *(undefined8 *)(this + 0xb8) = uVar2;
  if (&local_80 == local_60) {
    pcVar4 = (code *)(*local_60)[4];
  }
  else {
    if (local_60 == (undefined ***)0x0) goto LAB_00fe038c;
    pcVar4 = (code *)(*local_60)[5];
  }
  (*pcVar4)();
LAB_00fe038c:
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  lVar3 = Director::getInstance();
                    /* catch() { ... } // from try @ 00fe0328 with catch @ 00fe03a8 */
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0xb8),-1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

