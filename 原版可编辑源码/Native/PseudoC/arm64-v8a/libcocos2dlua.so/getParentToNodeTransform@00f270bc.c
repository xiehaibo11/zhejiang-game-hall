
/* cocos2d::Node::getParentToNodeTransform() const */

Node * __thiscall cocos2d::Node::getParentToNodeTransform(Node *this)

{
  long lVar1;
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
  if (this[0x150] != (Node)0x0) {
    (**(code **)(*(long *)this + 1000))(this);
    Mat4::getInversed();
    *(undefined8 *)(this + 0x138) = uStack_40;
    *(undefined8 *)(this + 0x130) = local_48;
    *(undefined8 *)(this + 0x148) = uStack_30;
    *(undefined8 *)(this + 0x140) = local_38;
    *(undefined8 *)(this + 0x118) = uStack_60;
    *(undefined8 *)(this + 0x110) = local_68;
    *(undefined8 *)(this + 0x128) = uStack_50;
    *(undefined8 *)(this + 0x120) = local_58;
    Mat4::~Mat4((Mat4 *)&local_68);
    this[0x150] = (Node)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this + 0x110;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

