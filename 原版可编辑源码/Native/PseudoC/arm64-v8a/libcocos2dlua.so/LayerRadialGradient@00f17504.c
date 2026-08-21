
/* cocos2d::LayerRadialGradient::LayerRadialGradient() */

void __thiscall cocos2d::LayerRadialGradient::LayerRadialGradient(LayerRadialGradient *this)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  this[0x2fa] = (LayerRadialGradient)0x0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  this[0x31c] = (LayerRadialGradient)0x1;
  this[0x1fa] = (LayerRadialGradient)0x1;
  *(undefined ***)this = &PTR__Layer_016ff630;
  local_40 = 0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_40);
  *(undefined ***)this = &PTR__LayerRadialGradient_017010c0;
  uVar2 = Color4B::BLACK;
  *(undefined4 *)(this + 0x31d) = Color4B::BLACK;
  uVar3 = Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 0x32c) = Color4F::BLACK._8_8_;
  *(undefined8 *)(this + 0x324) = uVar3;
  *(undefined4 *)(this + 0x334) = uVar2;
  uVar3 = Color4F::BLACK._0_8_;
  *(undefined8 *)(this + 0x340) = Color4F::BLACK._8_8_;
  *(undefined8 *)(this + 0x338) = uVar3;
  *(undefined8 *)(this + 0x350) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x360) = 0;
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x370) = 0;
  *(undefined8 *)(this + 0x368) = 0;
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x380));
  *(undefined4 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3e4) = 0x30300000302;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

