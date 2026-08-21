
/* cocos2d::LayerMultiplex::LayerMultiplex() */

void __thiscall cocos2d::LayerMultiplex::LayerMultiplex(LayerMultiplex *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  this[0x2fa] = (LayerMultiplex)0x0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  this[0x31c] = (LayerMultiplex)0x1;
  this[0x1fa] = (LayerMultiplex)0x1;
  *(undefined ***)this = &PTR__Layer_016ff630;
  local_30 = 0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_30);
  *(undefined4 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined ***)this = &PTR__LayerMultiplex_01701720;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

