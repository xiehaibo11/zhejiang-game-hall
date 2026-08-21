
/* cocos2d::Node::getBoundingBox() const */

void cocos2d::Node::getBoundingBox(void)

{
  long lVar1;
  long *in_x0;
  AffineTransform *in_x2;
  Rect aRStack_60 [24];
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Rect::Rect(aRStack_48,0.0,0.0,*(float *)(in_x0 + 0x10),*(float *)((long)in_x0 + 0x84));
  (**(code **)(*in_x0 + 0x3f0))(aRStack_60);
  RectApplyAffineTransform((cocos2d *)aRStack_48,aRStack_60,in_x2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

