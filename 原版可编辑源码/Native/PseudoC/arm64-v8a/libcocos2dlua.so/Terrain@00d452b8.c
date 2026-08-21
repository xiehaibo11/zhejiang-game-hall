
/* cocos2d::Terrain::Terrain() */

void __thiscall cocos2d::Terrain::Terrain(Terrain *this)

{
  long lVar1;
  Ref *this_00;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  undefined **local_a0;
  Terrain *pTStack_98;
  undefined ***local_80;
  long local_68;
  
                    /* try { // try from 00d452c0 to 00e452c7 has its CatchHandler @ 00d452d8 */
                    /* try { // try from 00d452c8 to 00e452ff has its CatchHandler @ 00d45280 */
                    /* catch() { ... } // from try @ 00d452c0 with catch @ 00d452d8 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__Terrain_016d4530;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  Mat4::Mat4((Mat4 *)(this + 0x328));
  Size::Size((Size *)(this + 0x370));
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x398) = 0;
                    /* try { // try from 00d45340 to 00e45343 has its CatchHandler @ 00d45364 */
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x380) = 0;
  *(undefined8 *)(this + 0x378) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined2 *)(this + 0x3a8) = 0;
  *(undefined4 *)(this + 0x3c0) = 0x420c0000;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d45340 with catch @ 00d45364
                        */
  *(undefined4 *)(this + 0x3e0) = 0x420c0000;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined4 *)(this + 0x400) = 0x420c0000;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined4 *)(this + 0x420) = 0x420c0000;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  Vec3::Vec3((Vec3 *)(this + 0x488),-1.0,-1.0,0.0);
                    /* catch() { ... } // from try @ 00d453d0 with catch @ 00d453a4 */
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x4a0));
                    /* try { // try from 00d453c8 to 00e453cf has its CatchHandler @ 00d45428 */
  *(undefined8 *)(this + 0x80510) = 0;
  *(undefined8 *)(this + 0x80508) = 0;
  *(undefined8 *)(this + 0x80520) = 0;
  *(undefined8 *)(this + 0x80518) = 0;
  *(undefined8 *)(this + 0x80500) = 0;
  *(undefined8 *)(this + 0x804f8) = 0;
                    /* try { // try from 00d453d0 to 00e45443 has its CatchHandler @ 00d453a4 */
  Size::Size((Size *)(this + 0x80530));
  Mat4::Mat4((Mat4 *)(this + 0x80548));
  Mat4::Mat4((Mat4 *)(this + 0x80588));
  *(undefined8 *)(this + 0x80628) = 0;
  *(undefined8 *)(this + 0x80630) = 0;
  this_00 = (Ref *)RenderState::StateBlock::create();
  *(Ref **)(this + 0x80628) = this_00;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  this[0x4b0] = (Terrain)0x0;
  this[0x4b2] = (Terrain)0x1;
                    /* catch() { ... } // from try @ 00d453c8 with catch @ 00d45428 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"event_renderer_recreated");
  local_a0 = &PTR_FUN_016d4b20;
                    /* catch() { ... } // from try @ 00d45474 with catch @ 00d45444 */
  pTStack_98 = this;
  local_80 = &local_a0;
  uVar2 = EventListenerCustom::create((basic_string *)local_b8,(function *)&local_a0);
  *(undefined8 *)(this + 0x80630) = uVar2;
  if (&local_a0 == local_80) {
                    /* try { // try from 00d45474 to 00e454eb has its CatchHandler @ 00d45444 */
    pcVar4 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00d4547c;
    pcVar4 = (code *)(*local_80)[5];
                    /* try { // try from 00d4546c to 00e45473 has its CatchHandler @ 00d454d0 */
  }
  (*pcVar4)();
LAB_00d4547c:
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  lVar3 = Director::getInstance();
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x80630),1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d4546c with catch @ 00d454d0 */
  __stack_chk_fail();
}

