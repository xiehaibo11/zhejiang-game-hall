
/* cocos2d::renderer::ForwardRenderer::opaqueStage(cocos2d::renderer::View const&,
   std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,
   std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem> >&) */

void __thiscall
cocos2d::renderer::ForwardRenderer::opaqueStage(ForwardRenderer *this,View *param_1,vector *param_2)

{
  int iVar1;
  
                    /* try { // try from 009ca0b8 to 00aca10b has its CatchHandler @ 009ca0b8
                       catch() { ... } // from try @ 009ca0b8 with catch @ 009ca0b8
                       catch() { ... } // from try @ 009ca28c with catch @ 009ca0b8 */
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matView);
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matViewInv);
                    /* try { // try from 009ca10c to 00aca123 has its CatchHandler @ 009ca308 */
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matProj);
                    /* try { // try from 009ca12c to 00aca137 has its CatchHandler @ 009ca304 */
  DeviceGraphics::setUniformMat4(*(ulong *)(this + 0x10),BaseRenderer::cc_matViewProj);
                    /* try { // try from 009ca138 to 00aca143 has its CatchHandler @ 009ca300 */
                    /* try { // try from 009ca144 to 00aca28b has its CatchHandler @ 009ca318 */
  if (((DAT_01d38218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d38218), iVar1 != 0)) {
    Vec3::Vec3((Vec3 *)&DAT_01d38208);
    __cxa_atexit(Vec3::~Vec3,&DAT_01d38208,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d38218);
  }
  if (((DAT_01d38230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d38230), iVar1 != 0)) {
    Vec4::Vec4((Vec4 *)&DAT_01d38220);
    __cxa_atexit(Vec4::~Vec4,&DAT_01d38220,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d38230);
  }
  View::getPosition(param_1,(Vec3 *)&DAT_01d38208);
  Vec4::set((Vec4 *)&DAT_01d38220,DAT_01d38208,DAT_01d3820c,DAT_01d38210,0.0);
  DeviceGraphics::setUniformVec4(*(ulong *)(this + 0x10),BaseRenderer::cc_cameraPos);
  submitLightsUniforms(this);
  submitOtherStagesUniforms(this);
  drawItems(this,param_2);
  return;
}

