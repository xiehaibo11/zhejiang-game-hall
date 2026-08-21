
/* cocostudio::Skin::getNodeToWorldTransformAR() const */

void cocostudio::Skin::getNodeToWorldTransformAR(void)

{
  long lVar1;
  long in_x0;
  long *plVar2;
  Mat4 *in_x2;
  undefined4 in_s1;
  undefined8 local_c0;
  cocos2d acStack_b8 [64];
  Mat4 aMStack_78 [48];
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Mat4::Mat4(aMStack_78,(Mat4 *)(in_x0 + 0xcc));
  local_c0 = *(undefined8 *)(in_x0 + 0x70);
  local_48 = cocos2d::PointApplyTransform((Vec2 *)&local_c0,aMStack_78);
  local_c0 = CONCAT44(in_s1,local_48);
  plVar2 = (long *)(**(code **)(**(long **)(in_x0 + 0x588) + 0x570))();
  (**(code **)(*plVar2 + 0x430))(acStack_b8);
  cocos2d::TransformConcat(acStack_b8,aMStack_78,in_x2);
  cocos2d::Mat4::~Mat4((Mat4 *)acStack_b8);
  cocos2d::Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

