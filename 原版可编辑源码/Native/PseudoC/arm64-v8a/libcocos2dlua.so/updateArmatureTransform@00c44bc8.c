
/* cocostudio::Skin::updateArmatureTransform() */

void cocostudio::Skin::updateArmatureTransform(void)

{
  long lVar1;
  long in_x0;
  Mat4 *in_x2;
  cocos2d acStack_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(in_x0 + 0x588) + 0x548))(acStack_a8);
  cocos2d::TransformConcat(acStack_a8,(Mat4 *)(in_x0 + 0x598),in_x2);
  *(undefined8 *)(in_x0 + 0x104) = uStack_30;
  *(undefined8 *)(in_x0 + 0xfc) = local_38;
  *(undefined8 *)(in_x0 + 0xf4) = uStack_40;
  *(undefined8 *)(in_x0 + 0xec) = local_48;
  *(undefined8 *)(in_x0 + 0xe4) = uStack_50;
  *(undefined8 *)(in_x0 + 0xdc) = local_58;
  *(undefined8 *)(in_x0 + 0xd4) = uStack_60;
  *(undefined8 *)(in_x0 + 0xcc) = local_68;
  cocos2d::Mat4::~Mat4((Mat4 *)&local_68);
  cocos2d::Mat4::~Mat4((Mat4 *)acStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

