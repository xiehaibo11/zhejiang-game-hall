
/* cocos2d::ui::Layout::scissorClippingVisit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int)
    */

void __thiscall
cocos2d::ui::Layout::scissorClippingVisit(Layout *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  Layout *local_78;
  long *local_70;
  long local_58;
  
                    /* try { // try from 00daf0f0 to 00eaf113 has its CatchHandler @ 00daf08c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00daf114 to 00eaf11f has its CatchHandler @ 00daf214 */
  if ((param_3 & 3) != 0) {
    this[0x5e8] = (Layout)0x1;
  }
                    /* try { // try from 00daf130 to 00eaf133 has its CatchHandler @ 00daf218 */
                    /* try { // try from 00daf134 to 00eaf203 has its CatchHandler @ 00daf08c */
  CustomCommand::init((CustomCommand *)(this + 0x710),*(float *)(this + 0x170));
  local_90 = &PTR_FUN_016d98a8;
  uStack_80 = 0;
  local_88 = onBeforeVisitScissor;
  local_78 = this;
  local_70 = (long *)&local_90;
  FUN_008820fc(&local_90,this + 0x730);
  if (&local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
LAB_00daf19c:
    (*pcVar2)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar2 = *(code **)(*local_70 + 0x28);
    goto LAB_00daf19c;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x710));
  ProtectedNode::visit((ProtectedNode *)this,param_1,param_2,param_3);
  CustomCommand::init((CustomCommand *)(this + 0x760),*(float *)(this + 0x170));
  local_90 = &PTR_FUN_016d98a8;
  uStack_80 = 0;
  local_88 = onAfterVisitScissor;
  local_78 = this;
  local_70 = (long *)&local_90;
  FUN_008820fc(&local_90,this + 0x780);
                    /* try { // try from 00daf204 to 00eaf20b has its CatchHandler @ 00daf218 */
  if (&local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
  }
  else {
                    /* try { // try from 00daf20c to 00eaf233 has its CatchHandler @ 00daf08c */
    if (local_70 == (long *)0x0) goto LAB_00daf228;
                    /* catch() { ... } // from try @ 00daf114 with catch @ 00daf214 */
    pcVar2 = *(code **)(*local_70 + 0x28);
                    /* catch() { ... } // from try @ 00daf0dc with catch @ 00daf218
                       catch() { ... } // from try @ 00daf130 with catch @ 00daf218
                       catch() { ... } // from try @ 00daf204 with catch @ 00daf218 */
  }
  (*pcVar2)();
LAB_00daf228:
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x760));
                    /* try { // try from 00daf234 to 00eaf29b has its CatchHandler @ 00daf234
                       catch() { ... } // from try @ 00daf234 with catch @ 00daf234
                       catch() { ... } // from try @ 00daf2a4 with catch @ 00daf234 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

