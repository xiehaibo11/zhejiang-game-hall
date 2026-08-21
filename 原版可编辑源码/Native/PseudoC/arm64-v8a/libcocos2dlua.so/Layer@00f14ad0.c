
/* cocos2d::Layer::Layer() */

void __thiscall cocos2d::Layer::Layer(Layer *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  this[0x2fa] = (Layer)0x0;
                    /* catch() { ... } // from try @ 00f14ac4 with catch @ 00f14b10 */
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  this[0x31c] = (Layer)0x1;
  this[0x1fa] = (Layer)0x1;
  *(undefined ***)this = &PTR__Layer_016ff630;
  local_30 = 0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

