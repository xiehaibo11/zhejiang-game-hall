
/* cocos2d::__LayerRGBA::__LayerRGBA() */

void __thiscall cocos2d::__LayerRGBA::__LayerRGBA(__LayerRGBA *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  this[0x2fa] = (__LayerRGBA)0x0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  this[0x31c] = (__LayerRGBA)0x1;
  this[0x1fa] = (__LayerRGBA)0x1;
  *(undefined ***)this = &PTR__Layer_016ff630;
  local_30 = 0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_30);
  *(undefined ***)this = &PTR____LayerRGBA_016ffc90;
  *(undefined ***)(this + 800) = &PTR____LayerRGBA_017002f0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

