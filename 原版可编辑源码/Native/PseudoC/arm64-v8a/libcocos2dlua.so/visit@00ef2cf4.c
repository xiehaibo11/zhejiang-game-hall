
/* cocos2d::ClippingRectangleNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ClippingRectangleNode::visit
          (ClippingRectangleNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  ClippingRectangleNode *local_78;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  CustomCommand::init((CustomCommand *)(this + 0x310),*(float *)(this + 0x170));
  local_90 = &PTR_FUN_016fbd90;
  uStack_80 = 0;
  local_88 = onBeforeVisitScissor;
  local_78 = this;
  local_70 = (long *)&local_90;
  FUN_008820fc(&local_90,this + 0x330);
  if (&local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
LAB_00ef2d98:
    (*pcVar2)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar2 = *(code **)(*local_70 + 0x28);
    goto LAB_00ef2d98;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x310));
                    /* catch() { ... } // from try @ 00ef2dd8 with catch @ 00ef2dac */
  Node::visit((Node *)this,param_1,param_2,param_3);
  CustomCommand::init((CustomCommand *)(this + 0x360),*(float *)(this + 0x170));
                    /* try { // try from 00ef2dd0 to 00ff2dd7 has its CatchHandler @ 00ef2e68 */
                    /* try { // try from 00ef2dd8 to 00ff2e83 has its CatchHandler @ 00ef2dac */
  local_90 = &PTR_FUN_016fbd90;
  uStack_80 = 0;
  local_88 = onAfterVisitScissor;
  local_78 = this;
  local_70 = (long *)&local_90;
  FUN_008820fc(&local_90,this + 0x380);
  if (&local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00ef2e24;
    pcVar2 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar2)();
LAB_00ef2e24:
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x360));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

