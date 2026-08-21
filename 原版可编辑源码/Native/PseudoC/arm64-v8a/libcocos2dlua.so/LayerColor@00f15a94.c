
/* cocos2d::LayerColor::LayerColor() */

void __thiscall cocos2d::LayerColor::LayerColor(LayerColor *this)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Node::Node((Node *)this);
  *(undefined2 *)(this + 0x2f8) = 0;
  this[0x2fa] = (LayerColor)0x0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  this[0x31c] = (LayerColor)0x1;
  this[0x1fa] = (LayerColor)0x1;
  *(undefined ***)this = &PTR__Layer_016ff630;
  local_40 = 0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_40);
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x348) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined ***)this = &PTR__LayerGradient_01700380;
  *(undefined ***)(this + 800) = &PTR__LayerColor_017009f0;
  Color4F::Color4F((Color4F *)(this + 0x350));
  Color4F::Color4F((Color4F *)(this + 0x360));
  Color4F::Color4F((Color4F *)(this + 0x370));
  Color4F::Color4F((Color4F *)(this + 0x380));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x390));
  Vec3::Vec3((Vec3 *)(this + 0x3e0));
  Vec3::Vec3((Vec3 *)(this + 0x3ec));
  Vec3::Vec3((Vec3 *)(this + 0x3f8));
  Vec3::Vec3((Vec3 *)(this + 0x404));
  *(undefined8 *)(this + 0x328) = 0x30300000001;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

