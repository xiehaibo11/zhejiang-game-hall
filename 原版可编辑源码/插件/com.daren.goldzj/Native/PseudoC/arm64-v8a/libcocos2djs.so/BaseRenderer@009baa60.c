
/* cocos2d::renderer::BaseRenderer::BaseRenderer() */

void __thiscall cocos2d::renderer::BaseRenderer::BaseRenderer(BaseRenderer *this)

{
  long lVar1;
  RecyclePool<cocos2d::renderer::DrawItem> *pRVar2;
  RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *pRVar3;
  RecyclePool<cocos2d::renderer::View> *pRVar4;
  Mat4 *this_00;
  code *pcVar5;
  undefined **local_e0 [4];
  long *local_c0;
  undefined **local_b0 [4];
  undefined ***local_90;
  undefined **local_80 [4];
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 009baa60 to 00abaa6b has its CatchHandler @ 009bad04 */
                    /* try { // try from 009baa6c to 00abaa77 has its CatchHandler @ 009bad00 */
                    /* try { // try from 009baa78 to 00abac8b has its CatchHandler @ 009bad18 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__BaseRenderer_01c6af80;
  *(undefined8 *)(this + 0x4c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x44) = 0;
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(BaseRenderer **)(this + 0x78) = this + 0x80;
  this[0x99] = (BaseRenderer)0x0;
  pRVar2 = operator_new(0x60);
  local_80[0] = &PTR_FUN_01c6afb8;
  local_60 = local_80;
  RecyclePool<cocos2d::renderer::DrawItem>::RecyclePool(pRVar2,local_80,100);
  *(RecyclePool<cocos2d::renderer::DrawItem> **)(this + 0x58) = pRVar2;
  if (local_80 == local_60) {
    pcVar5 = (code *)(*local_60)[4];
LAB_009bab30:
    (*pcVar5)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_60)[5];
    goto LAB_009bab30;
  }
  pRVar3 = operator_new(0x60);
  local_b0[0] = &PTR_FUN_01c6b048;
  local_90 = local_b0;
  RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo>::RecyclePool(pRVar3,local_b0,10);
  *(RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> **)(this + 0x60) = pRVar3;
  if (local_b0 == local_90) {
    pcVar5 = (code *)(*local_90)[4];
LAB_009bab88:
    (*pcVar5)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar5 = (code *)(*local_90)[5];
    goto LAB_009bab88;
  }
  pRVar4 = operator_new(0x60);
  local_e0[0] = &PTR_FUN_01c6b0d8;
  local_c0 = (long *)local_e0;
  RecyclePool<cocos2d::renderer::View>::RecyclePool(pRVar4,local_e0,8);
  *(RecyclePool<cocos2d::renderer::View> **)(this + 0x68) = pRVar4;
  if (local_e0 == (undefined ***)local_c0) {
    pcVar5 = *(code **)(*local_c0 + 0x20);
  }
  else {
    if (local_c0 == (long *)0x0) goto LAB_009babe4;
    pcVar5 = *(code **)(*local_c0 + 0x28);
  }
  (*pcVar5)();
LAB_009babe4:
  this_00 = operator_new(0x40);
  Mat4::Mat4(this_00);
  *(Mat4 **)(this + 0x70) = this_00;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

