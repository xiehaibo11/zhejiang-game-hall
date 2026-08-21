
/* fairygui::GGraph::setColor(cocos2d::Color3B const&) */

void __thiscall fairygui::GGraph::setColor(GGraph *this,Color3B *param_1)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* try { // try from 00a74ad0 to 00b74ae3 has its CatchHandler @ 00a74b24 */
                    /* try { // try from 00a74ae4 to 00b74b3f has its CatchHandler @ 00a74a18 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F((Color4F *)&local_48,param_1,*(float *)(this + 0x1f8));
  *(undefined8 *)(this + 500) = uStack_40;
  *(undefined8 *)(this + 0x1ec) = local_48;
  updateShape(this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a74a68 with catch @ 00a74b24
                       catch() { ... } // from try @ 00a74ad0 with catch @ 00a74b24 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

