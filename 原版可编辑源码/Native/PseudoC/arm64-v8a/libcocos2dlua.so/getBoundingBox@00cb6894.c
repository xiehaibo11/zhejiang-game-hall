
/* cocostudio::timeline::BoneNode::getBoundingBox() const */

void cocostudio::timeline::BoneNode::getBoundingBox(void)

{
  long lVar1;
  long *in_x0;
  AffineTransform *in_x2;
  Rect aRStack_60 [24];
  cocos2d acStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*in_x0 + 0x5d0))(acStack_48);
  (**(code **)(*in_x0 + 0x3f0))(aRStack_60);
  cocos2d::RectApplyAffineTransform(acStack_48,aRStack_60,in_x2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

