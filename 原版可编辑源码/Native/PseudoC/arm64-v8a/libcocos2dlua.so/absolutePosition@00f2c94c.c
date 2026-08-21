
/* cocos2d::ParallaxNode::absolutePosition() */

void __thiscall cocos2d::ParallaxNode::absolutePosition(ParallaxNode *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0x260))();
  while (lVar1 != 0) {
    this = (ParallaxNode *)(**(code **)(*(long *)this + 0x260))(this);
    (**(code **)(*(long *)this + 0xb0))();
    lVar1 = (**(code **)(*(long *)this + 0x260))(this);
  }
  return;
}

