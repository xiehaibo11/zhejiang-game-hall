
/* cocos2d::LayerMultiplex::createWithArray(cocos2d::Vector<cocos2d::Layer*> const&) */

Node * cocos2d::LayerMultiplex::createWithArray(Vector *param_1)

{
  long lVar1;
  Node *this;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x340,(nothrow_t *)&std::nothrow);
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
    local_40 = 0x3f0000003f000000;
    Node::setAnchorPoint(this,(Vec2 *)&local_40);
    *(undefined4 *)(this + 800) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined ***)this = &PTR__LayerMultiplex_01701720;
    *(undefined8 *)(this + 0x330) = 0;
    initWithArray((LayerMultiplex *)this,param_1);
    Ref::autorelease((Ref *)this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

