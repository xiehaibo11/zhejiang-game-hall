
/* cocos2d::Node::getNodeToParentTransform(cocos2d::Node*) const */

void cocos2d::Node::getNodeToParentTransform(Node *param_1)

{
  long lVar1;
  Mat4 *pMVar2;
  long *in_x1;
  Mat4 *in_x8;
  long *plVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pMVar2 = (Mat4 *)(**(code **)(*(long *)param_1 + 1000))();
  Mat4::Mat4(in_x8,pMVar2);
  for (plVar3 = *(long **)(param_1 + 400); (plVar3 != (long *)0x0 && (plVar3 != in_x1));
      plVar3 = (long *)(**(code **)(*plVar3 + 0x260))(plVar3)) {
    pMVar2 = (Mat4 *)(**(code **)(*plVar3 + 1000))(plVar3);
    Mat4::Mat4((Mat4 *)&local_78,pMVar2);
    Mat4::multiply((Mat4 *)&local_78,in_x8);
    *(undefined8 *)(in_x8 + 0x28) = uStack_50;
    *(undefined8 *)(in_x8 + 0x20) = local_58;
    *(undefined8 *)(in_x8 + 0x38) = uStack_40;
    *(undefined8 *)(in_x8 + 0x30) = local_48;
    *(undefined8 *)(in_x8 + 8) = uStack_70;
    *(undefined8 *)in_x8 = local_78;
    *(undefined8 *)(in_x8 + 0x18) = uStack_60;
    *(undefined8 *)(in_x8 + 0x10) = local_68;
    Mat4::~Mat4((Mat4 *)&local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

