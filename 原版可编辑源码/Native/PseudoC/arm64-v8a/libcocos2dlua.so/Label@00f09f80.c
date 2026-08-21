
/* cocos2d::Label::Label(cocos2d::TextHAlignment, cocos2d::TextVAlignment) */

void __thiscall cocos2d::Label::Label(Label *this,undefined4 param_2,undefined4 param_3)

{
  Label *pLVar1;
  long lVar2;
  bool bVar3;
  void *__src;
  undefined8 uVar4;
  code *pcVar5;
  Label *__dest;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  undefined **local_a0;
  Label *pLStack_98;
  void *local_90;
  undefined ***local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__Label_016fd330;
                    /* try { // try from 00f09fd0 to 01009fd3 has its CatchHandler @ 00f0a024 */
                    /* try { // try from 00f09fd4 to 0100a047 has its CatchHandler @ 00f09f70 */
  *(undefined ***)(this + 0x300) = &PTR__Label_016fd980;
  *(undefined ***)(this + 0x2f8) = &PTR__Label_016fd950;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,"");
  __src = local_90;
  pLVar1 = this + 0x360;
  *(undefined8 *)pLVar1 = 0;
  *(undefined8 *)(this + 0x368) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  if (((ulong)local_a0 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f09fd0 with catch @ 00f0a024 */
    bVar3 = false;
    *(void **)(this + 0x370) = local_90;
    *(Label **)(this + 0x368) = pLStack_98;
    *(undefined ***)pLVar1 = local_a0;
  }
  else {
    if (0xffffffffffffffef < pLStack_98) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (pLStack_98 < 0x17) {
      __dest = this + 0x361;
      *pLVar1 = SUB41((int)pLStack_98 << 1,0);
      if (pLStack_98 != (Label *)0x0) goto LAB_00f0a088;
    }
    else {
                    /* try { // try from 00f0a064 to 0100a067 has its CatchHandler @ 00f0a0f4 */
      uVar6 = (long)pLStack_98 + 0x10U & 0xfffffffffffffff0;
      __dest = operator_new(uVar6);
      *(Label **)(this + 0x370) = __dest;
      *(ulong *)(this + 0x360) = uVar6 | 1;
      *(Label **)(this + 0x368) = pLStack_98;
LAB_00f0a088:
      memcpy(__dest,__src,(size_t)pLStack_98);
    }
    bVar3 = true;
    __dest[(long)pLStack_98] = (Label)0x0;
  }
  *(undefined8 *)(this + 0x380) = 0;
  this[0x388] = (Label)0x0;
  *(undefined8 *)(this + 0x378) = 0x41400000;
  *(undefined8 *)(this + 0x38c) = 0;
  if (bVar3) {
    operator_delete(local_90);
  }
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 0x408) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  Rect::Rect((Rect *)(this + 0x410));
  *(undefined8 *)(this + 0x430) = 0;
  Size::Size((Size *)(this + 0x440));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0a064 with catch @ 00f0a0f4
                        */
  *(undefined8 *)(this + 0x488) = 0;
  *(undefined8 *)(this + 0x480) = 0;
  *(undefined8 *)(this + 0x478) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x468) = 0;
  *(undefined8 *)(this + 0x460) = 0;
  Color4F::Color4F((Color4F *)(this + 0x4a0));
  Color4B::Color4B((Color4B *)(this + 0x4b0));
  Color4F::Color4F((Color4F *)(this + 0x4b4));
  QuadCommand::QuadCommand((QuadCommand *)(this + 0x4c8));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x570));
  Mat4::Mat4((Mat4 *)(this + 0x5c0));
  Size::Size((Size *)(this + 0x610));
  Color4F::Color4F((Color4F *)(this + 0x618));
  Color3B::Color3B((Color3B *)(this + 0x628));
  *(undefined8 *)(this + 0x658) = 0;
  *(undefined8 *)(this + 0x650) = 0;
  *(undefined8 *)(this + 0x648) = 0;
  *(undefined8 *)(this + 0x640) = 0;
  *(undefined4 *)(this + 0x660) = 0x3f800000;
  this[0x68c] = (Label)0x0;
  *(undefined8 *)(this + 0x690) = 0;
  this[0x698] = (Label)0x0;
  (**(code **)(*(long *)this + 0x148))(this,&Vec2::ANCHOR_MIDDLE);
  reset(this);
  *(undefined4 *)(this + 0x450) = param_2;
  *(undefined4 *)(this + 0x454) = param_3;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,FontAtlas::CMD_PURGE_FONTATLAS);
  local_a0 = &PTR_FUN_016fe0d0;
  pLStack_98 = this;
  local_80 = &local_a0;
  uVar4 = EventListenerCustom::create((basic_string *)local_b8,(function *)&local_a0);
  *(undefined8 *)(this + 0x668) = uVar4;
  if (&local_a0 == local_80) {
    pcVar5 = (code *)(*local_80)[4];
LAB_00f0a1f4:
                    /* try { // try from 00f0a1f4 to 0100a203 has its CatchHandler @ 00f0a2a4 */
    (*pcVar5)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_80)[5];
    goto LAB_00f0a1f4;
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x668),1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,FontAtlas::CMD_RESET_FONTATLAS);
  local_a0 = &PTR_FUN_016fe150;
  pLStack_98 = this;
  local_80 = &local_a0;
  uVar4 = EventListenerCustom::create((basic_string *)local_b8,(function *)&local_a0);
  *(undefined8 *)(this + 0x670) = uVar4;
  if (&local_a0 == local_80) {
    pcVar5 = (code *)(*local_80)[4];
  }
  else {
    if (local_80 == (undefined ***)0x0) goto LAB_00f0a278;
    pcVar5 = (code *)(*local_80)[5];
  }
  (*pcVar5)();
LAB_00f0a278:
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x670),2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0a1f4 with catch @ 00f0a2a4
                        */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

