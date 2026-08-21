
/* cocos2d::renderer::ForwardRenderer::transparentStage(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> > const&) */

void __thiscall
cocos2d::renderer::ForwardRenderer::transparentStage
          (ForwardRenderer *this,View *param_1,vector *param_2)

{
  StageItem *pSVar1;
  long lVar2;
  int iVar3;
  StageItem *pSVar4;
  StageItem *pSVar5;
  float fVar6;
  code *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009ca3c8 to 00aca3df has its CatchHandler @ 009ca5d0 */
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matView);
                    /* try { // try from 009ca3e8 to 00aca3f3 has its CatchHandler @ 009ca5cc */
                    /* try { // try from 009ca3f4 to 00aca3ff has its CatchHandler @ 009ca5c8 */
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matViewInv);
                    /* try { // try from 009ca400 to 00aca54f has its CatchHandler @ 009ca5e0 */
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matProj);
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matViewProj);
  if (((DAT_01d38248 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d38248), iVar3 != 0)) {
    Vec3::Vec3((Vec3 *)&DAT_01d38238);
                    /* catch() { ... } // from try @ 009ca3f4 with catch @ 009ca5c8 */
                    /* catch() { ... } // from try @ 009ca3e8 with catch @ 009ca5cc */
                    /* catch() { ... } // from try @ 009ca3c8 with catch @ 009ca5d0 */
    __cxa_atexit(Vec3::~Vec3,&DAT_01d38238,&PTR_LOOP_01d1b000);
                    /* catch() { ... } // from try @ 009ca400 with catch @ 009ca5e0 */
    __cxa_guard_release(&DAT_01d38248);
  }
  if (((DAT_01d38260 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d38260), iVar3 != 0)) {
    Vec4::Vec4((Vec4 *)&DAT_01d38250);
    __cxa_atexit(Vec4::~Vec4,&DAT_01d38250,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d38260);
  }
  View::getPosition(param_1,(Vec3 *)&DAT_01d38238);
  Vec4::set((Vec4 *)&DAT_01d38250,DAT_01d38238,DAT_01d3823c,DAT_01d38240,0.0);
  DeviceGraphics::setUniformVec4(*(ulong *)(this + 0x10),BaseRenderer::cc_cameraPos);
                    /* try { // try from 009ca638 to 00aca697 has its CatchHandler @ 009ca638
                       catch() { ... } // from try @ 009ca638 with catch @ 009ca638
                       catch() { ... } // from try @ 009ca9d0 with catch @ 009ca638 */
  if (((DAT_01d38278 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d38278), iVar3 != 0)) {
    Vec3::Vec3((Vec3 *)&DAT_01d38268);
    __cxa_atexit(Vec3::~Vec3,&DAT_01d38268,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d38278);
  }
  if (((DAT_01d38290 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d38290), iVar3 != 0)) {
                    /* try { // try from 009ca698 to 00aca6af has its CatchHandler @ 009caaa0 */
    Vec3::Vec3((Vec3 *)&DAT_01d38280);
    __cxa_atexit(Vec3::~Vec3,&DAT_01d38280,&PTR_LOOP_01d1b000);
                    /* try { // try from 009ca6b8 to 00aca6c3 has its CatchHandler @ 009caa9c */
    __cxa_guard_release(&DAT_01d38290);
                    /* try { // try from 009ca6c4 to 00aca6cf has its CatchHandler @ 009caa98 */
  }
  View::getForward(param_1,(Vec3 *)&DAT_01d38268);
  submitLightsUniforms(this);
  submitOtherStagesUniforms(this);
  pSVar4 = *(StageItem **)param_2;
  pSVar1 = *(StageItem **)(param_2 + 8);
  pSVar5 = pSVar4;
  if (pSVar4 != pSVar1) {
    do {
      if ((NodeProxy *)**(undefined8 **)pSVar4 == (NodeProxy *)0x0) {
        DAT_01d38280 = 0;
        DAT_01d38288 = 0;
      }
      else {
        NodeProxy::getWorldPosition((NodeProxy *)**(undefined8 **)pSVar4,(Vec3 *)&DAT_01d38280);
      }
      Vec3::subtract((Vec3 *)&DAT_01d38280,(Vec3 *)&DAT_01d38280,(Vec3 *)&DAT_01d38238);
      fVar6 = (float)Vec3::dot((Vec3 *)&DAT_01d38280,(Vec3 *)&DAT_01d38268);
      *(int *)(pSVar4 + 0x30) = (int)-fVar6;
      pSVar4 = pSVar4 + 0x38;
    } while (pSVar4 != pSVar1);
    pSVar4 = *(StageItem **)param_2;
    pSVar5 = *(StageItem **)(param_2 + 8);
                    /* try { // try from 009ca550 to 00aca637 has its CatchHandler @ 009ca370 */
  }
  local_60 = compareItems;
  std::__ndk1::
  __sort<bool(*&)(cocos2d::renderer::BaseRenderer::StageItem_const&,cocos2d::renderer::BaseRenderer::StageItem_const&),cocos2d::renderer::BaseRenderer::StageItem*>
            (pSVar4,pSVar5,(_func_bool_StageItem_ptr_StageItem_ptr *)&local_60);
  drawItems(this,param_2);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

