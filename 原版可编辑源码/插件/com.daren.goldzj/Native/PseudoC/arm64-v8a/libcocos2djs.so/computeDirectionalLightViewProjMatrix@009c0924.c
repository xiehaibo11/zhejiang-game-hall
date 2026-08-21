
/* cocos2d::renderer::Light::computeDirectionalLightViewProjMatrix(cocos2d::Mat4&, cocos2d::Mat4&)
   const */

void __thiscall
cocos2d::renderer::Light::computeDirectionalLightViewProjMatrix
          (Light *this,Mat4 *param_1,Mat4 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  NodeProxy::getWorldRT(*(NodeProxy **)(this + 0x168),(Mat4 *)(this + 0x124));
                    /* try { // try from 009c0964 to 00ac09b7 has its CatchHandler @ 009c0964
                       catch() { ... } // from try @ 009c0964 with catch @ 009c0964
                       catch() { ... } // from try @ 009c0a90 with catch @ 009c0964 */
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
  fVar3 = *(float *)(this + 0xe0) * 0.5;
  fVar2 = *(float *)(this + 0xe0) * -0.5;
  Mat4::createOrthographic
            (fVar2,fVar3,fVar2,fVar3,*(float *)(this + 0x8c),*(float *)(this + 0x90),param_2);
                    /* try { // try from 009c09b8 to 00ac09cf has its CatchHandler @ 009c0b0c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009c09d8 to 00ac09e3 has its CatchHandler @ 009c0b08 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

