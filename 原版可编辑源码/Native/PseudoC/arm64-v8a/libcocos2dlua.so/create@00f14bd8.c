
/* cocos2d::Layer::create() */

Node * cocos2d::Layer::create(void)

{
  long lVar1;
  Node *this;
  ulong uVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = operator_new(800,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    this[0x2fa] = (Node)0x0;
    *(undefined8 *)(this + 0x300) = 0;
    *(undefined8 *)(this + 0x310) = 0;
    *(undefined8 *)(this + 0x308) = 0;
    *(undefined4 *)(this + 0x318) = 0;
    this[0x31c] = (Node)0x1;
    this[0x1fa] = (Node)0x1;
    *(undefined ***)this = &PTR__Layer_016ff630;
    local_30 = 0x3f0000003f000000;
    Node::setAnchorPoint(this,(Vec2 *)&local_30);
    uVar2 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Node *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

