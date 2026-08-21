
/* cocos2d::DrawNode::DrawNode(float) */

void __thiscall cocos2d::DrawNode::DrawNode(DrawNode *this,float param_1)

{
  long lVar1;
  EventListener *pEVar2;
  code *pcVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [16];
  void *local_98;
  undefined **local_90;
  DrawNode *pDStack_88;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__DrawNode_016fbec8;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
                    /* try { // try from 00ef35cc to 00ff35d3 has its CatchHandler @ 00ef3634 */
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x328) = 0;
                    /* try { // try from 00ef35d4 to 00ff364f has its CatchHandler @ 00ef353c */
  Color4F::Color4F((Color4F *)(this + 0x330));
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x360));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x3b0));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x400));
  *(undefined4 *)(this + 0x450) = 0;
  *(float *)(this + 0x454) = param_1;
  *(float *)(this + 0x458) = param_1;
  *(undefined8 *)(this + 0x358) = 0x30300000001;
                    /* catch() { ... } // from try @ 00ef35cc with catch @ 00ef3634 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a8,"event_renderer_recreated");
  local_90 = &PTR_FUN_016fc438;
  pDStack_88 = this;
  local_70 = &local_90;
  pEVar2 = (EventListener *)
           EventListenerCustom::create((basic_string *)local_a8,(function *)&local_90);
                    /* try { // try from 00ef3658 to 00ff37c7 has its CatchHandler @ 00ef3658
                       catch() { ... } // from try @ 00ef3658 with catch @ 00ef3658
                       catch() { ... } // from try @ 00ef3868 with catch @ 00ef3658 */
  if (&local_90 == local_70) {
    pcVar3 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00ef3684;
    pcVar3 = (code *)(*local_70)[5];
  }
  (*pcVar3)();
LAB_00ef3684:
  if (((byte)local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),pEVar2,(Node *)this);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

