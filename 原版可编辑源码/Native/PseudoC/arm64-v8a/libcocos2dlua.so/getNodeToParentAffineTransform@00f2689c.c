
/* cocos2d::Node::getNodeToParentAffineTransform(cocos2d::Node*) const */

void cocos2d::Node::getNodeToParentAffineTransform(Node *param_1)

{
  long lVar1;
  long *in_x1;
  AffineTransform *in_x2;
  cocos2d *in_x8;
  long *plVar2;
  AffineTransform aAStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)param_1 + 0x3f0))();
  for (plVar2 = *(long **)(param_1 + 400); (plVar2 != (long *)0x0 && (plVar2 != in_x1));
      plVar2 = (long *)(**(code **)(*plVar2 + 0x260))(plVar2)) {
    (**(code **)(*plVar2 + 0x3f0))(aAStack_68,plVar2);
    AffineTransformConcat(in_x8,aAStack_68,in_x2);
    *(undefined8 *)(in_x8 + 0x10) = local_40;
    *(undefined8 *)(in_x8 + 8) = uStack_48;
    *(undefined8 *)in_x8 = local_50;
  }
                    /* try { // try from 00f26938 to 01026a2b has its CatchHandler @ 00f2610c */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

