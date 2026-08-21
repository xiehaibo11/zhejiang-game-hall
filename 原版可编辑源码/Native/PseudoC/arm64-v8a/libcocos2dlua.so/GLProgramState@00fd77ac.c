
/* cocos2d::GLProgramState::GLProgramState() */

void __thiscall cocos2d::GLProgramState::GLProgramState(GLProgramState *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined **local_90;
  GLProgramState *pGStack_88;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00fd77cc to 010d77d3 has its CatchHandler @ 00fd7860 */
  local_58 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
                    /* try { // try from 00fd77f4 to 010d77f7 has its CatchHandler @ 00fd7850 */
                    /* try { // try from 00fd77f8 to 010d787b has its CatchHandler @ 00fd77a0 */
  this[0x21] = (GLProgramState)0x1;
  *(undefined ***)this = &PTR__GLProgramState_01723ed8;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x70) = 0x3f800000;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f800000;
  *(undefined4 *)(this + 200) = 4;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0xdc) = 0;
  *(undefined8 *)(this + 0xf4) = 0;
  *(undefined8 *)(this + 0xec) = 0;
                    /* catch() { ... } // from try @ 00fd77f4 with catch @ 00fd7850 */
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0x3f800000;
  *(undefined8 *)(this + 0x108) = 0;
                    /* catch() { ... } // from try @ 00fd77cc with catch @ 00fd7860 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"event_renderer_recreated");
  local_90 = &PTR_FUN_01723f48;
  pGStack_88 = this;
  local_70 = &local_90;
  uVar2 = EventListenerCustom::create((basic_string *)local_a8,(function *)&local_90);
  *(undefined8 *)(this + 0x108) = uVar2;
  if (&local_90 == local_70) {
    pcVar4 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00fd78b4;
    pcVar4 = (code *)(*local_70)[5];
  }
  (*pcVar4)();
LAB_00fd78b4:
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x108),-1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

