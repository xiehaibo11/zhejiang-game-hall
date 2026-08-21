
/* cocos2d::renderer::Light::computeSpotLightViewProjMatrix(cocos2d::Mat4&, cocos2d::Mat4&) const */

void __thiscall
cocos2d::renderer::Light::computeSpotLightViewProjMatrix(Light *this,Mat4 *param_1,Mat4 *param_2)

{
  long lVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
                    /* try { // try from 009c0874 to 00ac0963 has its CatchHandler @ 009c05e8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  NodeProxy::getWorldRT(*(NodeProxy **)(this + 0x168),(Mat4 *)(this + 0x124));
  Mat4::getInversed();
  *(undefined8 *)(param_1 + 0x28) = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = local_68;
  *(undefined8 *)(param_1 + 0x38) = uStack_50;
  *(undefined8 *)(param_1 + 0x30) = local_58;
  *(undefined8 *)(param_1 + 8) = uStack_80;
  *(undefined8 *)param_1 = local_88;
  *(undefined8 *)(param_1 + 0x18) = uStack_70;
  *(undefined8 *)(param_1 + 0x10) = local_78;
  Mat4::~Mat4((Mat4 *)&local_88);
                    /* catch() { ... } // from try @ 009c0674 with catch @ 009c08f4 */
  Mat4::createPerspective
            (*(float *)(this + 0x24) * *(float *)(this + 0xdc),1.0,*(float *)(this + 0x8c),
             *(float *)(this + 0x90),param_2);
                    /* catch() { ... } // from try @ 009c0668 with catch @ 009c08f8 */
                    /* catch() { ... } // from try @ 009c0648 with catch @ 009c08fc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 009c0680 with catch @ 009c090c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

