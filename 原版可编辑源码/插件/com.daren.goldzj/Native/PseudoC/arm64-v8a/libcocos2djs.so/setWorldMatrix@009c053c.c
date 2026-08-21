
/* cocos2d::renderer::Light::setWorldMatrix(cocos2d::Mat4 const&) */

void __thiscall cocos2d::renderer::Light::setWorldMatrix(Light *this,Mat4 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Vec3 aVStack_48 [16];
  Quaternion aQStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0xfc) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0xf4) = uVar8;
  *(undefined8 *)(this + 0xec) = uVar7;
  *(undefined8 *)(this + 0xe4) = uVar6;
                    /* catch() { ... } // from try @ 009c03dc with catch @ 009c0578 */
  *(undefined8 *)(this + 0x11c) = uVar5;
  *(undefined8 *)(this + 0x114) = uVar4;
                    /* catch() { ... } // from try @ 009c03d0 with catch @ 009c057c */
  *(undefined8 *)(this + 0x10c) = uVar3;
  *(undefined8 *)(this + 0x104) = uVar2;
                    /* catch() { ... } // from try @ 009c03b0 with catch @ 009c0580 */
  Quaternion::Quaternion(aQStack_38);
  Vec3::Vec3(aVStack_48);
                    /* catch() { ... } // from try @ 009c03e8 with catch @ 009c0590 */
  Mat4::decompose((Mat4 *)(this + 0xe4),(Vec3 *)0x0,aQStack_38,aVStack_48);
  Mat4::createRotation(aQStack_38,(Mat4 *)(this + 0x124));
  Mat4::translate((Mat4 *)(this + 0x124),aVStack_48);
  Vec3::~Vec3(aVStack_48);
  Quaternion::~Quaternion(aQStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009c05e8 to 00ac0647 has its CatchHandler @ 009c05e8
                       catch() { ... } // from try @ 009c05e8 with catch @ 009c05e8
                       catch() { ... } // from try @ 009c0874 with catch @ 009c05e8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

