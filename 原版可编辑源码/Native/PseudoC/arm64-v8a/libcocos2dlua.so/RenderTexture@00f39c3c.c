
/* cocos2d::RenderTexture::RenderTexture() */

void __thiscall cocos2d::RenderTexture::RenderTexture(RenderTexture *this)

{
  long lVar1;
  EventListener *pEVar2;
  code *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  RenderTexture *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  this[0x2f8] = (RenderTexture)0x0;
  *(undefined ***)this = &PTR__RenderTexture_0170f680;
  Rect::Rect((Rect *)(this + 0x2fc),(Rect *)Rect::ZERO);
  Rect::Rect((Rect *)(this + 0x30c),(Rect *)Rect::ZERO);
  Rect::Rect((Rect *)(this + 0x31c),(Rect *)Rect::ZERO);
  *(undefined8 *)(this + 0x334) = 0;
  *(undefined8 *)(this + 0x32c) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 2;
  Color4F::Color4F((Color4F *)(this + 0x364),0.0,0.0,0.0,0.0);
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x374) = 0;
  this[0x37c] = (RenderTexture)0x0;
  GroupCommand::GroupCommand((GroupCommand *)(this + 0x388));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x3b0));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x400));
                    /* try { // try from 00f39d34 to 01039d5f has its CatchHandler @ 00f39d34
                       catch() { ... } // from try @ 00f39d34 with catch @ 00f39d34
                       catch() { ... } // from try @ 00f39dd0 with catch @ 00f39d34 */
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x450));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x4a0));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x4f0));
                    /* try { // try from 00f39d60 to 01039d67 has its CatchHandler @ 00f39e8c */
                    /* try { // try from 00f39d6c to 01039d73 has its CatchHandler @ 00f39e84 */
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x540));
  *(undefined8 *)(this + 0x5b0) = 0;
                    /* try { // try from 00f39d78 to 01039d7f has its CatchHandler @ 00f39e7c */
  Mat4::Mat4((Mat4 *)(this + 0x5c0));
                    /* try { // try from 00f39d84 to 01039d8b has its CatchHandler @ 00f39e74 */
  Mat4::Mat4((Mat4 *)(this + 0x600));
                    /* try { // try from 00f39d90 to 01039d97 has its CatchHandler @ 00f39e6c */
  Mat4::Mat4((Mat4 *)(this + 0x640));
                    /* try { // try from 00f39d9c to 01039da3 has its CatchHandler @ 00f39e30 */
  Mat4::Mat4((Mat4 *)(this + 0x680));
                    /* try { // try from 00f39da8 to 01039daf has its CatchHandler @ 00f39e20 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"event_come_to_background");
                    /* try { // try from 00f39db4 to 01039dbb has its CatchHandler @ 00f39e10 */
                    /* try { // try from 00f39dc0 to 01039dc7 has its CatchHandler @ 00f39e00 */
                    /* try { // try from 00f39dcc to 01039dcf has its CatchHandler @ 00f39df0 */
  local_a0 = &PTR_FUN_0170fc18;
                    /* try { // try from 00f39dd0 to 01039e93 has its CatchHandler @ 00f39d34 */
  uStack_90 = 0;
  local_98 = listenToBackground;
  local_88 = this;
  local_80 = &local_a0;
  pEVar2 = (EventListener *)
           EventListenerCustom::create((basic_string *)local_b8,(function *)&local_a0);
                    /* catch() { ... } // from try @ 00f39dcc with catch @ 00f39df0 */
  if (&local_a0 == local_80) {
                    /* catch() { ... } // from try @ 00f39db4 with catch @ 00f39e10 */
    pcVar3 = (code *)(*local_80)[4];
LAB_00f39e14:
    (*pcVar3)();
  }
  else if (local_80 != (undefined ***)0x0) {
                    /* catch() { ... } // from try @ 00f39dc0 with catch @ 00f39e00 */
    pcVar3 = (code *)(*local_80)[5];
    goto LAB_00f39e14;
  }
  if (((byte)local_b8[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00f39da8 with catch @ 00f39e20 */
    operator_delete(local_a8);
  }
                    /* catch() { ... } // from try @ 00f39d9c with catch @ 00f39e30 */
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),pEVar2,(Node *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"event_come_to_foreground");
  local_a0 = &PTR_FUN_0170fc18;
  uStack_90 = 0;
  local_98 = listenToForeground;
                    /* catch() { ... } // from try @ 00f39d90 with catch @ 00f39e6c */
  local_88 = this;
  local_80 = &local_a0;
                    /* catch() { ... } // from try @ 00f39d84 with catch @ 00f39e74 */
  pEVar2 = (EventListener *)
           EventListenerCustom::create((basic_string *)local_b8,(function *)&local_a0);
                    /* catch() { ... } // from try @ 00f39d78 with catch @ 00f39e7c */
                    /* catch() { ... } // from try @ 00f39d6c with catch @ 00f39e84 */
  if (&local_a0 == local_80) {
    pcVar3 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00f39ea4;
                    /* catch() { ... } // from try @ 00f39d60 with catch @ 00f39e8c */
    pcVar3 = (code *)(*local_80)[5];
  }
  (*pcVar3)();
LAB_00f39ea4:
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),pEVar2,(Node *)this);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

