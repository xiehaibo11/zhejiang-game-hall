
/* cocos2d::Physics3DSliderConstraint::setFrames(cocos2d::Mat4 const&, cocos2d::Mat4 const&) */

void __thiscall
cocos2d::Physics3DSliderConstraint::setFrames
          (Physics3DSliderConstraint *this,Mat4 *param_1,Mat4 *param_2)

{
  long lVar1;
  long lVar2;
  btSliderConstraint *this_00;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  convertMat4TobtTransform(param_1);
  convertMat4TobtTransform(param_2);
  this_00 = *(btSliderConstraint **)(this + 0x28);
  *(undefined8 *)(this_00 + 0x54) = uStack_70;
  *(undefined8 *)(this_00 + 0x4c) = local_78;
  *(undefined8 *)(this_00 + 100) = uStack_60;
  *(undefined8 *)(this_00 + 0x5c) = local_68;
  *(undefined8 *)(this_00 + 0x74) = uStack_50;
  *(undefined8 *)(this_00 + 0x6c) = local_58;
  *(undefined8 *)(this_00 + 0x84) = uStack_40;
  *(undefined8 *)(this_00 + 0x7c) = local_48;
  *(undefined8 *)(this_00 + 0x94) = uStack_b0;
  *(undefined8 *)(this_00 + 0x8c) = local_b8;
  *(undefined8 *)(this_00 + 0xa4) = uStack_a0;
  *(undefined8 *)(this_00 + 0x9c) = local_a8;
  *(undefined8 *)(this_00 + 0xb4) = uStack_90;
  *(undefined8 *)(this_00 + 0xac) = local_98;
  *(undefined8 *)(this_00 + 0xc4) = uStack_80;
  *(undefined8 *)(this_00 + 0xbc) = local_88;
  btSliderConstraint::calculateTransforms
            (this_00,(btTransform *)(*(long *)(this_00 + 0x28) + 8),
             (btTransform *)(*(long *)(this_00 + 0x30) + 8));
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

