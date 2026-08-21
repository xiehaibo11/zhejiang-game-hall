
/* cocos2d::Renderer::initGLView() */

void __thiscall cocos2d::Renderer::initGLView(Renderer *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  Configuration *this_00;
  ulong uVar4;
  code *pcVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  undefined **local_70;
  Renderer *pRStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"event_renderer_recreated");
  local_70 = &PTR_FUN_017242e0;
  pRStack_68 = this;
  local_50 = &local_70;
  uVar2 = EventListenerCustom::create((basic_string *)local_88,(function *)&local_70);
  *(undefined8 *)(this + 0x1b00c0) = uVar2;
  if (&local_70 == local_50) {
    pcVar5 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00fe4674;
    pcVar5 = (code *)(*local_50)[5];
  }
  (*pcVar5)();
LAB_00fe4674:
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x1b00c0),-1);
  this_00 = (Configuration *)Configuration::getInstance();
  uVar4 = Configuration::supportsShareableVAO(this_00);
  if ((uVar4 & 1) == 0) {
    glGenBuffers(2,this + 0x1b007c);
  }
  else {
    setupVBOAndVAO(this);
  }
  this[0x1b0098] = (Renderer)0x1;
                    /* try { // try from 00fe46d4 to 010e46df has its CatchHandler @ 00fe475c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00fe46e0 to 010e46eb has its CatchHandler @ 00fe4744 */
                    /* try { // try from 00fe46ec to 010e4777 has its CatchHandler @ 00fe4560 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

