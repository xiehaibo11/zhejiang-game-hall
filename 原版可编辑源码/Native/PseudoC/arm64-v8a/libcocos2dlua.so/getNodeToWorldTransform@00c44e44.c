
/* cocostudio::Skin::getNodeToWorldTransform() const */

void cocostudio::Skin::getNodeToWorldTransform(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  Mat4 *in_x2;
  cocos2d acStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(**(long **)(in_x0 + 0x588) + 0x570))();
  (**(code **)(*plVar2 + 0x430))(acStack_78);
  cocos2d::TransformConcat(acStack_78,(Mat4 *)(in_x0 + 0xcc),in_x2);
  cocos2d::Mat4::~Mat4((Mat4 *)acStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

