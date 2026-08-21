
/* cocostudio::Bone::getNodeToWorldTransform() const */

void cocostudio::Bone::getNodeToWorldTransform(void)

{
  long lVar1;
  long in_x0;
  Mat4 *in_x2;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(in_x0 + 0x300) + 0x430))(aMStack_78,*(long **)(in_x0 + 0x300));
  cocos2d::TransformConcat((cocos2d *)(in_x0 + 0x344),aMStack_78,in_x2);
  cocos2d::Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

