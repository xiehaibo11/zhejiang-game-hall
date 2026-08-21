
/* cocos2d::ClippingRectangleNode::onBeforeVisitScissor() */

void cocos2d::ClippingRectangleNode::onBeforeVisitScissor(void)

{
  long lVar1;
  Node *in_x0;
  long *plVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  float fVar6;
  float fVar7;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (in_x0[0x308] != (Node)0x0) {
    glEnable(0xc11);
    fVar7 = *(float *)(in_x0 + 0x44);
    fVar6 = *(float *)(in_x0 + 0x48);
    for (plVar2 = (long *)(**(code **)(*(long *)in_x0 + 0x260))(); plVar2 != (long *)0x0;
        plVar2 = (long *)(**(code **)(*plVar2 + 0x260))(plVar2)) {
      fVar4 = (float)(**(code **)(*plVar2 + 0x58))(plVar2);
      fVar7 = fVar7 * fVar4;
      fVar4 = (float)(**(code **)(*plVar2 + 0x68))(plVar2);
      fVar6 = fVar6 * fVar4;
    }
    local_60 = *(undefined8 *)(in_x0 + 0x2f8);
    uVar5 = Node::convertToWorldSpace(in_x0,(Vec2 *)&local_60);
    lVar3 = Director::getInstance();
    (**(code **)(**(long **)(lVar3 + 0x108) + 0xd8))
              (uVar5,in_d1,fVar7 * *(float *)(in_x0 + 0x300),fVar6 * *(float *)(in_x0 + 0x304));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

